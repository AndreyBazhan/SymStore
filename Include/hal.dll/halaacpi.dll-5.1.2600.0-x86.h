struct HalpMpInfo;
struct LIST_ENTRY32;
struct LIST_ENTRY64;
struct MPS_EXTENTRY;
struct _ADAPTER_OBJECT;
struct _CM_FULL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_LIST;
struct _CM_RESOURCE_LIST;
struct _CONTROLLER_OBJECT;
struct _CPUIDENTIFIER;
struct _DESCRIPTION_HEADER;
struct _DEVICE_CAPABILITIES;
struct _DEVICE_OBJECT;
struct _DEVOBJ_EXTENSION;
struct _DISPATCHER_HEADER;
struct _DMA_ADAPTER;
struct _DMA_OPERATIONS;
struct _DRIVER_EXTENSION;
struct _DRIVER_OBJECT;
struct _EPROCESS;
struct _ETHREAD;
struct _FACS;
struct _FADT;
struct _FAST_IO_DISPATCH;
struct _FAST_MUTEX;
struct _FILE_OBJECT;
struct _GENERAL_LOOKASIDE;
struct _GEN_ADDR;
struct _GUID;
struct _HARDWARE_PTE_X86;
struct _HARDWARE_PTE_X86PAE;
struct _INTERFACE;
struct _IOAPIC;
struct _IOSAPIC;
struct _IO_COMPLETION_CONTEXT;
struct _IO_NMISOURCE;
struct _IO_RESOURCE_DESCRIPTOR;
struct _IO_RESOURCE_LIST;
struct _IO_RESOURCE_REQUIREMENTS_LIST;
struct _IO_SECURITY_CONTEXT;
struct _IO_STACK_LOCATION;
struct _IO_STATUS_BLOCK;
struct _IO_TIMER;
struct _IRP;
struct _ISA_VECTOR;
struct _KAPC;
struct _KDEVICE_QUEUE;
struct _KDEVICE_QUEUE_ENTRY;
struct _KDPC;
struct _KEVENT;
struct _KTHREAD;
struct _LIST_ENTRY;
struct _LOCAL_NMISOURCE;
struct _MAPIC;
struct _MDL;
struct _NPAGED_LOOKASIDE_LIST;
struct _OBJECT_ATTRIBUTES;
struct _OBJECT_TYPE;
struct _PAGED_LOOKASIDE_LIST;
struct _PLATFORM_INTERRUPT;
struct _POWER_SEQUENCE;
struct _PROCLOCALAPIC;
struct _PROCLOCALSAPIC;
struct _PcMpApicIntiEntry;
struct _PcMpBusEntry;
struct _PcMpIoApicEntry;
struct _PcMpLintiEntry;
struct _PcMpProcessorEntry;
struct _PolarityAndLevel;
struct _RSDP;
struct _RSDT_32;
struct _RTL_BITMAP;
struct _SCATTER_GATHER_ELEMENT;
struct _SCATTER_GATHER_LIST;
struct _SCSI_REQUEST_BLOCK;
struct _SECTION_OBJECT_POINTERS;
struct _SINGLE_LIST_ENTRY;
struct _UNICODE_STRING;
struct _VPB;
struct _WAIT_CONTEXT_BLOCK;

union _LARGE_INTEGER;
union _POWER_STATE;
union _SLIST_HEADER;
union _ULARGE_INTEGER;

enum BUS_QUERY_ID_TYPE;
enum DEVICE_TEXT_TYPE;
enum POWER_ACTION;
enum _DEVICE_POWER_STATE;
enum _DEVICE_RELATION_TYPE;
enum _DEVICE_USAGE_NOTIFICATION_TYPE;
enum _FILE_INFORMATION_CLASS;
enum _FSINFOCLASS;
enum _INTERFACE_TYPE;
enum _IO_ALLOCATION_ACTION;
enum _MEMORY_CACHING_TYPE_ORIG;
enum _MEMORY_TYPE;
enum _POOL_TYPE;
enum _POWER_STATE_TYPE;
enum _SYSTEM_POWER_STATE;

typedef struct HalpMpInfo {
    ULONG ApicVersion;
    ULONG ProcessorCount;
    ULONG NtProcessors;
    ULONG BusCount;
    ULONG IOApicCount;
    ULONG IntiCount;
    ULONG LintiCount;
    ULONG IMCRPresent;
    ULONG LocalApicBase;
    PULONG IoApicBase[64];
    ULONG IoApicPhys[64];
    struct _PcMpProcessorEntry *ProcessorEntryPtr;
    struct _PcMpBusEntry *BusEntryPtr;
    struct _PcMpIoApicEntry *IoApicEntryPtr;
    struct _PcMpApicIntiEntry *IntiEntryPtr;
    struct _PcMpLintiEntry *LintiEntryPtr;
    struct MPS_EXTENTRY *ExtensionTable;
    struct MPS_EXTENTRY *EndOfExtensionTable;
};

typedef struct LIST_ENTRY32 {
    ULONG Flink;
    ULONG Blink;
};

typedef struct LIST_ENTRY64 {
    ULONG64 Flink;
    ULONG64 Blink;
};

typedef struct MPS_EXTENTRY {
    UCHAR Type;
    UCHAR Length;
    union {
        struct {
            UCHAR BusId;
            UCHAR Type;
            LONG64 Base;
            LONG64 Length;
        } AddressMap;
        struct {
            UCHAR BusId;
            UCHAR SubtractiveDecode : 1;
            UCHAR ParentBusId;
        } BusHierarchy;
        struct {
            LONG64 Address;
            LONG64 Length;
        } PersistentStore;
        struct {
            UCHAR BusId;
            UCHAR Modifier : 1;
            UCHAR Reserved : 7;
            ULONG List;
        } CompatibleMap;
    } u;
};

typedef struct _ADAPTER_OBJECT {
    struct _DMA_ADAPTER DmaHeader;
    struct _ADAPTER_OBJECT *MasterAdapter;
    ULONG MapRegistersPerChannel;
    PVOID AdapterBaseVa;
    PVOID MapRegisterBase;
    ULONG NumberOfMapRegisters;
    ULONG CommittedMapRegisters;
    struct _WAIT_CONTEXT_BLOCK *CurrentWcb;
    struct _KDEVICE_QUEUE ChannelWaitQueue;
    struct _KDEVICE_QUEUE *RegisterWaitQueue;
    struct _LIST_ENTRY AdapterQueue;
    ULONG SpinLock;
    struct _RTL_BITMAP *MapRegisters;
    PUCHAR PagePort;
    UCHAR ChannelNumber;
    UCHAR AdapterNumber;
    USHORT DmaPortAddress;
    UCHAR AdapterMode;
    UCHAR NeedsMapRegisters;
    UCHAR MasterDevice;
    UCHAR Width16Bits;
    UCHAR ScatterGather;
    UCHAR IgnoreCount;
    UCHAR Dma32BitAddresses;
    UCHAR Dma64BitAddresses;
    struct _LIST_ENTRY AdapterList;
};

typedef struct _CM_FULL_RESOURCE_DESCRIPTOR {
    enum _INTERFACE_TYPE InterfaceType;
    ULONG BusNumber;
    struct _CM_PARTIAL_RESOURCE_LIST PartialResourceList;
};

typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR {
    UCHAR Type;
    UCHAR ShareDisposition;
    USHORT Flags;
    union {
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length;
        } Generic;
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length;
        } Port;
        struct {
            ULONG Level;
            ULONG Vector;
            ULONG Affinity;
        } Interrupt;
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length;
        } Memory;
        struct {
            ULONG Channel;
            ULONG Port;
            ULONG Reserved1;
        } Dma;
        struct {
            ULONG Data[3];
        } DevicePrivate;
        struct {
            ULONG Start;
            ULONG Length;
            ULONG Reserved;
        } BusNumber;
        struct {
            ULONG DataSize;
            ULONG Reserved1;
            ULONG Reserved2;
        } DeviceSpecificData;
    } u;
};

typedef struct _CM_PARTIAL_RESOURCE_LIST {
    USHORT Version;
    USHORT Revision;
    ULONG Count;
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];
};

typedef struct _CM_RESOURCE_LIST {
    ULONG Count;
    struct _CM_FULL_RESOURCE_DESCRIPTOR List[1];
};

typedef struct _CONTROLLER_OBJECT {
    SHORT Type;
    SHORT Size;
    PVOID ControllerExtension;
    struct _KDEVICE_QUEUE DeviceWaitQueue;
    ULONG Spare1;
    union _LARGE_INTEGER Spare2;
};

typedef struct _CPUIDENTIFIER {
    ULONG Stepping : 4;
    ULONG Model : 4;
    ULONG Family : 4;
    ULONG Reserved : 20;
};

typedef struct _DESCRIPTION_HEADER {
    ULONG Signature;
    ULONG Length;
    UCHAR Revision;
    UCHAR Checksum;
    UCHAR OEMID[6];
    UCHAR OEMTableID[8];
    ULONG OEMRevision;
    UCHAR CreatorID[4];
    ULONG CreatorRev;
};

typedef struct _DEVICE_CAPABILITIES {
    USHORT Size;
    USHORT Version;
    ULONG DeviceD1 : 1;
    ULONG DeviceD2 : 1;
    ULONG LockSupported : 1;
    ULONG EjectSupported : 1;
    ULONG Removable : 1;
    ULONG DockDevice : 1;
    ULONG UniqueID : 1;
    ULONG SilentInstall : 1;
    ULONG RawDeviceOK : 1;
    ULONG SurpriseRemovalOK : 1;
    ULONG WakeFromD0 : 1;
    ULONG WakeFromD1 : 1;
    ULONG WakeFromD2 : 1;
    ULONG WakeFromD3 : 1;
    ULONG HardwareDisabled : 1;
    ULONG NonDynamic : 1;
    ULONG WarmEjectSupported : 1;
    ULONG NoDisplayInUI : 1;
    ULONG Reserved : 14;
    ULONG Address;
    ULONG UINumber;
    enum _DEVICE_POWER_STATE DeviceState[7];
    enum _SYSTEM_POWER_STATE SystemWake;
    enum _DEVICE_POWER_STATE DeviceWake;
    ULONG D1Latency;
    ULONG D2Latency;
    ULONG D3Latency;
};

typedef struct _DEVICE_OBJECT {
    SHORT Type;
    USHORT Size;
    LONG ReferenceCount;
    struct _DRIVER_OBJECT *DriverObject;
    struct _DEVICE_OBJECT *NextDevice;
    struct _DEVICE_OBJECT *AttachedDevice;
    struct _IRP *CurrentIrp;
    struct _IO_TIMER *Timer;
    ULONG Flags;
    ULONG Characteristics;
    struct _VPB *Vpb;
    PVOID DeviceExtension;
    ULONG DeviceType;
    CHAR StackSize;
    union {
        struct _LIST_ENTRY ListEntry;
        struct _WAIT_CONTEXT_BLOCK Wcb;
    } Queue;
    ULONG AlignmentRequirement;
    struct _KDEVICE_QUEUE DeviceQueue;
    struct _KDPC Dpc;
    ULONG ActiveThreadCount;
    PVOID SecurityDescriptor;
    struct _KEVENT DeviceLock;
    USHORT SectorSize;
    USHORT Spare1;
    struct _DEVOBJ_EXTENSION *DeviceObjectExtension;
    PVOID Reserved;
};

typedef struct _DEVOBJ_EXTENSION {
    SHORT Type;
    USHORT Size;
    struct _DEVICE_OBJECT *DeviceObject;
};

typedef struct _DISPATCHER_HEADER {
    UCHAR Type;
    UCHAR Absolute;
    UCHAR Size;
    UCHAR Inserted;
    LONG SignalState;
    struct _LIST_ENTRY WaitListHead;
};

typedef struct _DMA_ADAPTER {
    USHORT Version;
    USHORT Size;
    struct _DMA_OPERATIONS *DmaOperations;
};

typedef struct _DMA_OPERATIONS {
    ULONG Size;
    PVOID PutDmaAdapter;
    PVOID *AllocateCommonBuffer;
    PVOID FreeCommonBuffer;
    PLONG AllocateAdapterChannel;
    PUCHAR FlushAdapterBuffers;
    PVOID FreeAdapterChannel;
    PVOID FreeMapRegisters;
    union _LARGE_INTEGER *MapTransfer;
    PULONG GetDmaAlignment;
    PULONG ReadDmaCounter;
    PLONG GetScatterGatherList;
    PVOID PutScatterGatherList;
    PLONG CalculateScatterGatherList;
    PLONG BuildScatterGatherList;
    PLONG BuildMdlFromScatterGatherList;
};

typedef struct _DRIVER_EXTENSION {
    struct _DRIVER_OBJECT *DriverObject;
    PLONG AddDevice;
    ULONG Count;
    struct _UNICODE_STRING ServiceKeyName;
};

typedef struct _DRIVER_OBJECT {
    SHORT Type;
    SHORT Size;
    struct _DEVICE_OBJECT *DeviceObject;
    ULONG Flags;
    PVOID DriverStart;
    ULONG DriverSize;
    PVOID DriverSection;
    struct _DRIVER_EXTENSION *DriverExtension;
    struct _UNICODE_STRING DriverName;
    struct _UNICODE_STRING *HardwareDatabase;
    struct _FAST_IO_DISPATCH *FastIoDispatch;
    PLONG DriverInit;
    PVOID DriverStartIo;
    PVOID DriverUnload;
    PLONG MajorFunction[28];
};

typedef struct _EPROCESS {
};

typedef struct _ETHREAD {
};

typedef struct _FACS {
    ULONG Signature;
    ULONG Length;
    ULONG HardwareSignature;
    ULONG pFirmwareWakingVector;
    ULONG GlobalLock;
    ULONG Flags;
    union _LARGE_INTEGER x_FirmwareWakingVector;
    UCHAR version;
    UCHAR Reserved[31];
};

typedef struct _FADT {
    struct _DESCRIPTION_HEADER Header;
    ULONG facs;
    ULONG dsdt;
    UCHAR int_model;
    UCHAR pm_profile;
    USHORT sci_int_vector;
    ULONG smi_cmd_io_port;
    UCHAR acpi_on_value;
    UCHAR acpi_off_value;
    UCHAR s4bios_req;
    UCHAR pstate_control;
    ULONG pm1a_evt_blk_io_port;
    ULONG pm1b_evt_blk_io_port;
    ULONG pm1a_ctrl_blk_io_port;
    ULONG pm1b_ctrl_blk_io_port;
    ULONG pm2_ctrl_blk_io_port;
    ULONG pm_tmr_blk_io_port;
    ULONG gp0_blk_io_port;
    ULONG gp1_blk_io_port;
    UCHAR pm1_evt_len;
    UCHAR pm1_ctrl_len;
    UCHAR pm2_ctrl_len;
    UCHAR pm_tmr_len;
    UCHAR gp0_blk_len;
    UCHAR gp1_blk_len;
    UCHAR gp1_base;
    UCHAR cstate_control;
    USHORT lvl2_latency;
    USHORT lvl3_latency;
    USHORT flush_size;
    USHORT flush_stride;
    UCHAR duty_offset;
    UCHAR duty_width;
    UCHAR day_alarm_index;
    UCHAR month_alarm_index;
    UCHAR century_alarm_index;
    USHORT boot_arch;
    UCHAR reserved3[1];
    ULONG flags;
    struct _GEN_ADDR reset_reg;
    UCHAR reset_val;
    UCHAR reserved4[3];
    union _LARGE_INTEGER x_firmware_ctrl;
    union _LARGE_INTEGER x_dsdt;
    struct _GEN_ADDR x_pm1a_evt_blk;
    struct _GEN_ADDR x_pm1b_evt_blk;
    struct _GEN_ADDR x_pm1a_ctrl_blk;
    struct _GEN_ADDR x_pm1b_ctrl_blk;
    struct _GEN_ADDR x_pm2_ctrl_blk;
    struct _GEN_ADDR x_pm_tmr_blk;
    struct _GEN_ADDR x_gp0_blk;
    struct _GEN_ADDR x_gp1_blk;
};

typedef struct _FAST_IO_DISPATCH {
};

typedef struct _FAST_MUTEX {
    LONG Count;
    struct _KTHREAD *Owner;
    ULONG Contention;
    struct _KEVENT Event;
    ULONG OldIrql;
};

typedef struct _FILE_OBJECT {
    SHORT Type;
    SHORT Size;
    struct _DEVICE_OBJECT *DeviceObject;
    struct _VPB *Vpb;
    PVOID FsContext;
    PVOID FsContext2;
    struct _SECTION_OBJECT_POINTERS *SectionObjectPointer;
    PVOID PrivateCacheMap;
    LONG FinalStatus;
    struct _FILE_OBJECT *RelatedFileObject;
    UCHAR LockOperation;
    UCHAR DeletePending;
    UCHAR ReadAccess;
    UCHAR WriteAccess;
    UCHAR DeleteAccess;
    UCHAR SharedRead;
    UCHAR SharedWrite;
    UCHAR SharedDelete;
    ULONG Flags;
    struct _UNICODE_STRING FileName;
    union _LARGE_INTEGER CurrentByteOffset;
    ULONG Waiters;
    ULONG Busy;
    PVOID LastLock;
    struct _KEVENT Lock;
    struct _KEVENT Event;
    struct _IO_COMPLETION_CONTEXT *CompletionContext;
};

typedef struct _GENERAL_LOOKASIDE {
    union _SLIST_HEADER ListHead;
    USHORT Depth;
    USHORT MaximumDepth;
    ULONG TotalAllocates;
    ULONG AllocateMisses;
    ULONG AllocateHits;
    ULONG TotalFrees;
    ULONG FreeMisses;
    ULONG FreeHits;
    enum _POOL_TYPE Type;
    ULONG Tag;
    ULONG Size;
    PVOID *Allocate;
    PVOID Free;
    struct _LIST_ENTRY ListEntry;
    ULONG LastTotalAllocates;
    ULONG LastAllocateMisses;
    ULONG LastAllocateHits;
    ULONG Future[2];
};

typedef struct _GEN_ADDR {
    UCHAR AddressSpaceID;
    UCHAR BitWidth;
    UCHAR BitOffset;
    UCHAR Reserved;
    union _LARGE_INTEGER Address;
};

typedef struct _GUID {
    ULONG Data1;
    USHORT Data2;
    USHORT Data3;
    UCHAR Data4[8];
};

typedef struct _HARDWARE_PTE_X86 {
    ULONG Valid : 1;
    ULONG Write : 1;
    ULONG Owner : 1;
    ULONG WriteThrough : 1;
    ULONG CacheDisable : 1;
    ULONG Accessed : 1;
    ULONG Dirty : 1;
    ULONG LargePage : 1;
    ULONG Global : 1;
    ULONG CopyOnWrite : 1;
    ULONG Prototype : 1;
    ULONG reserved : 1;
    ULONG PageFrameNumber : 20;
};

typedef struct _HARDWARE_PTE_X86PAE {
    ULONG64 Valid : 1;
    ULONG64 Write : 1;
    ULONG64 Owner : 1;
    ULONG64 WriteThrough : 1;
    ULONG64 CacheDisable : 1;
    ULONG64 Accessed : 1;
    ULONG64 Dirty : 1;
    ULONG64 LargePage : 1;
    ULONG64 Global : 1;
    ULONG64 CopyOnWrite : 1;
    ULONG64 Prototype : 1;
    ULONG64 reserved0 : 1;
    ULONG64 PageFrameNumber : 26;
    ULONG64 reserved1 : 26;
    ULONG LowPart;
    ULONG HighPart;
};

typedef struct _INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PVOID InterfaceReference;
    PVOID InterfaceDereference;
};

typedef struct _IOAPIC {
    UCHAR Type;
    UCHAR Length;
    UCHAR IOAPICID;
    UCHAR Reserved;
    ULONG IOAPICAddress;
    ULONG SystemVectorBase;
};

typedef struct _IOSAPIC {
    UCHAR Type;
    UCHAR Length;
    USHORT Reserved;
    ULONG SystemVectorBase;
    ULONG IOSAPICAddress;
};

typedef struct _IO_COMPLETION_CONTEXT {
    PVOID Port;
    PVOID Key;
};

typedef struct _IO_NMISOURCE {
    UCHAR Type;
    UCHAR Length;
    USHORT Flags;
    ULONG GlobalSystemInterruptVector;
};

typedef struct _IO_RESOURCE_DESCRIPTOR {
    UCHAR Option;
    UCHAR Type;
    UCHAR ShareDisposition;
    UCHAR Spare1;
    USHORT Flags;
    USHORT Spare2;
    union {
        struct {
            ULONG Length;
            ULONG Alignment;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Port;
        struct {
            ULONG Length;
            ULONG Alignment;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Memory;
        struct {
            ULONG MinimumVector;
            ULONG MaximumVector;
        } Interrupt;
        struct {
            ULONG MinimumChannel;
            ULONG MaximumChannel;
        } Dma;
        struct {
            ULONG Length;
            ULONG Alignment;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Generic;
        struct {
            ULONG Data[3];
        } DevicePrivate;
        struct {
            ULONG Length;
            ULONG MinBusNumber;
            ULONG MaxBusNumber;
            ULONG Reserved;
        } BusNumber;
        struct {
            ULONG Priority;
            ULONG Reserved1;
            ULONG Reserved2;
        } ConfigData;
    } u;
};

typedef struct _IO_RESOURCE_LIST {
    USHORT Version;
    USHORT Revision;
    ULONG Count;
    struct _IO_RESOURCE_DESCRIPTOR Descriptors[1];
};

typedef struct _IO_RESOURCE_REQUIREMENTS_LIST {
    ULONG ListSize;
    enum _INTERFACE_TYPE InterfaceType;
    ULONG BusNumber;
    ULONG SlotNumber;
    ULONG Reserved[3];
    ULONG AlternativeLists;
    struct _IO_RESOURCE_LIST List[1];
};

typedef struct _IO_SECURITY_CONTEXT {
};

typedef struct _IO_STACK_LOCATION {
    UCHAR MajorFunction;
    UCHAR MinorFunction;
    UCHAR Flags;
    UCHAR Control;
    union {
        struct {
            struct _IO_SECURITY_CONTEXT *SecurityContext;
            ULONG Options;
            USHORT FileAttributes;
            USHORT ShareAccess;
            ULONG EaLength;
        } Create;
        struct {
            ULONG Length;
            ULONG Key;
            union _LARGE_INTEGER ByteOffset;
        } Read;
        struct {
            ULONG Length;
            ULONG Key;
            union _LARGE_INTEGER ByteOffset;
        } Write;
        struct {
            ULONG Length;
            enum _FILE_INFORMATION_CLASS FileInformationClass;
        } QueryFile;
        struct {
            ULONG Length;
            enum _FILE_INFORMATION_CLASS FileInformationClass;
            struct _FILE_OBJECT *FileObject;
            UCHAR ReplaceIfExists;
            UCHAR AdvanceOnly;
            ULONG ClusterCount;
            PVOID DeleteHandle;
        } SetFile;
        struct {
            ULONG Length;
            enum _FSINFOCLASS FsInformationClass;
        } QueryVolume;
        struct {
            ULONG OutputBufferLength;
            ULONG InputBufferLength;
            ULONG IoControlCode;
            PVOID Type3InputBuffer;
        } DeviceIoControl;
        struct {
            ULONG SecurityInformation;
            ULONG Length;
        } QuerySecurity;
        struct {
            ULONG SecurityInformation;
            PVOID SecurityDescriptor;
        } SetSecurity;
        struct {
            struct _VPB *Vpb;
            struct _DEVICE_OBJECT *DeviceObject;
        } MountVolume;
        struct {
            struct _VPB *Vpb;
            struct _DEVICE_OBJECT *DeviceObject;
        } VerifyVolume;
        struct {
            struct _SCSI_REQUEST_BLOCK *Srb;
        } Scsi;
        struct {
            enum _DEVICE_RELATION_TYPE Type;
        } QueryDeviceRelations;
        struct {
            struct _GUID *InterfaceType;
            USHORT Size;
            USHORT Version;
            struct _INTERFACE *Interface;
            PVOID InterfaceSpecificData;
        } QueryInterface;
        struct {
            struct _DEVICE_CAPABILITIES *Capabilities;
        } DeviceCapabilities;
        struct {
            struct _IO_RESOURCE_REQUIREMENTS_LIST *IoResourceRequirementList;
        } FilterResourceRequirements;
        struct {
            ULONG WhichSpace;
            PVOID Buffer;
            ULONG Offset;
            ULONG Length;
        } ReadWriteConfig;
        struct {
            UCHAR Lock;
        } SetLock;
        struct {
            enum BUS_QUERY_ID_TYPE IdType;
        } QueryId;
        struct {
            enum DEVICE_TEXT_TYPE DeviceTextType;
            ULONG LocaleId;
        } QueryDeviceText;
        struct {
            UCHAR InPath;
            UCHAR Reserved[3];
            enum _DEVICE_USAGE_NOTIFICATION_TYPE Type;
        } UsageNotification;
        struct {
            enum _SYSTEM_POWER_STATE PowerState;
        } WaitWake;
        struct {
            struct _POWER_SEQUENCE *PowerSequence;
        } PowerSequence;
        struct {
            ULONG SystemContext;
            enum _POWER_STATE_TYPE Type;
            union _POWER_STATE State;
            enum POWER_ACTION ShutdownType;
        } Power;
        struct {
            struct _CM_RESOURCE_LIST *AllocatedResources;
            struct _CM_RESOURCE_LIST *AllocatedResourcesTranslated;
        } StartDevice;
        struct {
            ULONG ProviderId;
            PVOID DataPath;
            ULONG BufferSize;
            PVOID Buffer;
        } WMI;
        struct {
            PVOID Argument1;
            PVOID Argument2;
            PVOID Argument3;
            PVOID Argument4;
        } Others;
    } Parameters;
    struct _DEVICE_OBJECT *DeviceObject;
    struct _FILE_OBJECT *FileObject;
    PLONG CompletionRoutine;
    PVOID Context;
};

typedef struct _IO_STATUS_BLOCK {
    LONG Status;
    PVOID Pointer;
    ULONG Information;
};

typedef struct _IO_TIMER {
};

typedef struct _IRP {
    SHORT Type;
    USHORT Size;
    struct _MDL *MdlAddress;
    ULONG Flags;
    union {
        struct _IRP *MasterIrp;
        LONG IrpCount;
        PVOID SystemBuffer;
    } AssociatedIrp;
    struct _LIST_ENTRY ThreadListEntry;
    struct _IO_STATUS_BLOCK IoStatus;
    CHAR RequestorMode;
    UCHAR PendingReturned;
    CHAR StackCount;
    CHAR CurrentLocation;
    UCHAR Cancel;
    UCHAR CancelIrql;
    CHAR ApcEnvironment;
    UCHAR AllocationFlags;
    struct _IO_STATUS_BLOCK *UserIosb;
    struct _KEVENT *UserEvent;
    union {
        struct {
            PVOID UserApcRoutine;
            PVOID UserApcContext;
        } AsynchronousParameters;
        union _LARGE_INTEGER AllocationSize;
    } Overlay;
    PVOID CancelRoutine;
    PVOID UserBuffer;
    union {
        struct {
            struct _KDEVICE_QUEUE_ENTRY DeviceQueueEntry;
            PVOID DriverContext[4];
            struct _ETHREAD *Thread;
            PCHAR AuxiliaryBuffer;
            struct _LIST_ENTRY ListEntry;
            struct _IO_STACK_LOCATION *CurrentStackLocation;
            ULONG PacketType;
            struct _FILE_OBJECT *OriginalFileObject;
        } Overlay;
        struct _KAPC Apc;
        PVOID CompletionKey;
    } Tail;
};

typedef struct _ISA_VECTOR {
    UCHAR Type;
    UCHAR Length;
    UCHAR Bus;
    UCHAR Source;
    ULONG GlobalSystemInterruptVector;
    USHORT Flags;
};

typedef struct _KAPC {
    SHORT Type;
    SHORT Size;
    ULONG Spare0;
    struct _KTHREAD *Thread;
    struct _LIST_ENTRY ApcListEntry;
    PVOID KernelRoutine;
    PVOID RundownRoutine;
    PVOID NormalRoutine;
    PVOID NormalContext;
    PVOID SystemArgument1;
    PVOID SystemArgument2;
    CHAR ApcStateIndex;
    CHAR ApcMode;
    UCHAR Inserted;
};

typedef struct _KDEVICE_QUEUE {
    SHORT Type;
    SHORT Size;
    struct _LIST_ENTRY DeviceListHead;
    ULONG Lock;
    UCHAR Busy;
};

typedef struct _KDEVICE_QUEUE_ENTRY {
    struct _LIST_ENTRY DeviceListEntry;
    ULONG SortKey;
    UCHAR Inserted;
};

typedef struct _KDPC {
    SHORT Type;
    UCHAR Number;
    UCHAR Importance;
    struct _LIST_ENTRY DpcListEntry;
    PVOID DeferredRoutine;
    PVOID DeferredContext;
    PVOID SystemArgument1;
    PVOID SystemArgument2;
    PULONG Lock;
};

typedef struct _KEVENT {
    struct _DISPATCHER_HEADER Header;
};

typedef struct _KTHREAD {
};

typedef struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

typedef struct _LOCAL_NMISOURCE {
    UCHAR Type;
    UCHAR Length;
    UCHAR ProcessorID;
    USHORT Flags;
    UCHAR LINTIN;
};

typedef struct _MAPIC {
    struct _DESCRIPTION_HEADER Header;
    ULONG LocalAPICAddress;
    ULONG Flags;
    ULONG APICTables[1];
};

typedef struct _MDL {
    struct _MDL *Next;
    SHORT Size;
    SHORT MdlFlags;
    struct _EPROCESS *Process;
    PVOID MappedSystemVa;
    PVOID StartVa;
    ULONG ByteCount;
    ULONG ByteOffset;
};

typedef struct _NPAGED_LOOKASIDE_LIST {
    struct _GENERAL_LOOKASIDE L;
    ULONG Lock__ObsoleteButDoNotDelete;
};

typedef struct _OBJECT_ATTRIBUTES {
    ULONG Length;
    PVOID RootDirectory;
    struct _UNICODE_STRING *ObjectName;
    ULONG Attributes;
    PVOID SecurityDescriptor;
    PVOID SecurityQualityOfService;
};

typedef struct _OBJECT_TYPE {
};

typedef struct _PAGED_LOOKASIDE_LIST {
    struct _GENERAL_LOOKASIDE L;
    struct _FAST_MUTEX Lock__ObsoleteButDoNotDelete;
};

typedef struct _PLATFORM_INTERRUPT {
    UCHAR Type;
    UCHAR Length;
    USHORT Flags;
    UCHAR InterruptType;
    UCHAR APICID;
    UCHAR ACPIEID;
    UCHAR IOSAPICVector;
    ULONG GlobalVector;
    ULONG Reserved;
};

typedef struct _POWER_SEQUENCE {
    ULONG SequenceD1;
    ULONG SequenceD2;
    ULONG SequenceD3;
};

typedef struct _PROCLOCALAPIC {
    UCHAR Type;
    UCHAR Length;
    UCHAR ACPIProcessorID;
    UCHAR APICID;
    ULONG Flags;
};

typedef struct _PROCLOCALSAPIC {
    UCHAR Type;
    UCHAR Length;
    UCHAR ACPIProcessorID;
    UCHAR APICID;
    UCHAR APICEID;
    UCHAR Reserved[3];
    ULONG Flags;
};

typedef struct _PcMpApicIntiEntry {
    UCHAR EntryType;
    UCHAR IntType;
    struct _PolarityAndLevel Signal;
    UCHAR SourceBusId;
    UCHAR SourceBusIrq;
    UCHAR IoApicId;
    UCHAR IoApicInti;
};

typedef struct _PcMpBusEntry {
    UCHAR EntryType;
    UCHAR BusId;
    CHAR BusType[6];
};

typedef struct _PcMpIoApicEntry {
    UCHAR EntryType;
    UCHAR IoApicId;
    UCHAR IoApicVersion;
    UCHAR IoApicFlag;
    PVOID IoApicAddress;
};

typedef struct _PcMpLintiEntry {
    UCHAR EntryType;
    UCHAR IntType;
    struct _PolarityAndLevel Signal;
    UCHAR SourceBusId;
    UCHAR SourceBusIrq;
    UCHAR DestLocalApicId;
    UCHAR DestLocalApicInti;
};

typedef struct _PcMpProcessorEntry {
    UCHAR EntryType;
    UCHAR LocalApicId;
    UCHAR LocalApicVersion;
    UCHAR CpuFlags;
    struct _CPUIDENTIFIER CpuIdentification;
    ULONG FeatureFlags;
    UCHAR Reserved[8];
};

typedef struct _PolarityAndLevel {
    USHORT Polarity : 2;
    USHORT Level : 2;
    USHORT Reserved : 12;
};

typedef struct _RSDP {
    ULONG64 Signature;
    UCHAR Checksum;
    UCHAR OEMID[6];
    UCHAR Revision;
    ULONG RsdtAddress;
    ULONG Length;
    union _LARGE_INTEGER XsdtAddress;
    UCHAR XChecksum;
    UCHAR Reserved[3];
};

typedef struct _RSDT_32 {
    struct _DESCRIPTION_HEADER Header;
    ULONG Tables[1];
};

typedef struct _RTL_BITMAP {
    ULONG SizeOfBitMap;
    PULONG Buffer;
};

typedef struct _SCATTER_GATHER_ELEMENT {
    union _LARGE_INTEGER Address;
    ULONG Length;
    ULONG Reserved;
};

typedef struct _SCATTER_GATHER_LIST {
    ULONG NumberOfElements;
    ULONG Reserved;
    struct _SCATTER_GATHER_ELEMENT Elements[0];
};

typedef struct _SCSI_REQUEST_BLOCK {
};

typedef struct _SECTION_OBJECT_POINTERS {
    PVOID DataSectionObject;
    PVOID SharedCacheMap;
    PVOID ImageSectionObject;
};

typedef struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY *Next;
};

typedef struct _UNICODE_STRING {
    USHORT Length;
    USHORT MaximumLength;
    PUSHORT Buffer;
};

typedef struct _VPB {
    SHORT Type;
    SHORT Size;
    USHORT Flags;
    USHORT VolumeLabelLength;
    struct _DEVICE_OBJECT *DeviceObject;
    struct _DEVICE_OBJECT *RealDevice;
    ULONG SerialNumber;
    ULONG ReferenceCount;
    USHORT VolumeLabel[32];
};

typedef struct _WAIT_CONTEXT_BLOCK {
    struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry;
    enum _IO_ALLOCATION_ACTION *DeviceRoutine;
    PVOID DeviceContext;
    ULONG NumberOfMapRegisters;
    PVOID DeviceObject;
    PVOID CurrentIrp;
    struct _KDPC *BufferChainingDpc;
};

typedef union _LARGE_INTEGER {
    ULONG LowPart;
    LONG HighPart;
    struct {
        ULONG LowPart;
        LONG HighPart;
    } u;
    LONG64 QuadPart;
};

typedef union _POWER_STATE {
    enum _SYSTEM_POWER_STATE SystemState;
    enum _DEVICE_POWER_STATE DeviceState;
};

typedef union _SLIST_HEADER {
    ULONG64 Alignment;
    struct _SINGLE_LIST_ENTRY Next;
    USHORT Depth;
    USHORT Sequence;
};

typedef union _ULARGE_INTEGER {
    ULONG LowPart;
    ULONG HighPart;
    struct {
        ULONG LowPart;
        ULONG HighPart;
    } u;
    ULONG64 QuadPart;
};

typedef enum BUS_QUERY_ID_TYPE {
    BusQueryDeviceID = 0,
    BusQueryHardwareIDs = 1,
    BusQueryCompatibleIDs = 2,
    BusQueryInstanceID = 3,
    BusQueryDeviceSerialNumber = 4
};

typedef enum DEVICE_TEXT_TYPE {
    DeviceTextDescription = 0,
    DeviceTextLocationInformation = 1
};

typedef enum POWER_ACTION {
    PowerActionNone = 0,
    PowerActionReserved = 1,
    PowerActionSleep = 2,
    PowerActionHibernate = 3,
    PowerActionShutdown = 4,
    PowerActionShutdownReset = 5,
    PowerActionShutdownOff = 6,
    PowerActionWarmEject = 7
};

typedef enum _DEVICE_POWER_STATE {
    PowerDeviceUnspecified = 0,
    PowerDeviceD0 = 1,
    PowerDeviceD1 = 2,
    PowerDeviceD2 = 3,
    PowerDeviceD3 = 4,
    PowerDeviceMaximum = 5
};

typedef enum _DEVICE_RELATION_TYPE {
    BusRelations = 0,
    EjectionRelations = 1,
    PowerRelations = 2,
    RemovalRelations = 3,
    TargetDeviceRelation = 4,
    SingleBusRelations = 5
};

typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE {
    DeviceUsageTypeUndefined = 0,
    DeviceUsageTypePaging = 1,
    DeviceUsageTypeHibernation = 2,
    DeviceUsageTypeDumpFile = 3
};

typedef enum _FILE_INFORMATION_CLASS {
    FileDirectoryInformation = 1,
    FileFullDirectoryInformation = 2,
    FileBothDirectoryInformation = 3,
    FileBasicInformation = 4,
    FileStandardInformation = 5,
    FileInternalInformation = 6,
    FileEaInformation = 7,
    FileAccessInformation = 8,
    FileNameInformation = 9,
    FileRenameInformation = 10,
    FileLinkInformation = 11,
    FileNamesInformation = 12,
    FileDispositionInformation = 13,
    FilePositionInformation = 14,
    FileFullEaInformation = 15,
    FileModeInformation = 16,
    FileAlignmentInformation = 17,
    FileAllInformation = 18,
    FileAllocationInformation = 19,
    FileEndOfFileInformation = 20,
    FileAlternateNameInformation = 21,
    FileStreamInformation = 22,
    FilePipeInformation = 23,
    FilePipeLocalInformation = 24,
    FilePipeRemoteInformation = 25,
    FileMailslotQueryInformation = 26,
    FileMailslotSetInformation = 27,
    FileCompressionInformation = 28,
    FileObjectIdInformation = 29,
    FileCompletionInformation = 30,
    FileMoveClusterInformation = 31,
    FileQuotaInformation = 32,
    FileReparsePointInformation = 33,
    FileNetworkOpenInformation = 34,
    FileAttributeTagInformation = 35,
    FileTrackingInformation = 36,
    FileIdBothDirectoryInformation = 37,
    FileIdFullDirectoryInformation = 38,
    FileValidDataLengthInformation = 39,
    FileShortNameInformation = 40,
    FileMaximumInformation = 41
};

typedef enum _FSINFOCLASS {
    FileFsVolumeInformation = 1,
    FileFsLabelInformation = 2,
    FileFsSizeInformation = 3,
    FileFsDeviceInformation = 4,
    FileFsAttributeInformation = 5,
    FileFsControlInformation = 6,
    FileFsFullSizeInformation = 7,
    FileFsObjectIdInformation = 8,
    FileFsDriverPathInformation = 9,
    FileFsMaximumInformation = 10
};

typedef enum _INTERFACE_TYPE {
    InterfaceTypeUndefined = -1,
    Internal = 0,
    Isa = 1,
    Eisa = 2,
    MicroChannel = 3,
    TurboChannel = 4,
    PCIBus = 5,
    VMEBus = 6,
    NuBus = 7,
    PCMCIABus = 8,
    CBus = 9,
    MPIBus = 10,
    MPSABus = 11,
    ProcessorInternal = 12,
    InternalPowerBus = 13,
    PNPISABus = 14,
    PNPBus = 15,
    MaximumInterfaceType = 16
};

typedef enum _IO_ALLOCATION_ACTION {
    KeepObject = 1,
    DeallocateObject = 2,
    DeallocateObjectKeepRegisters = 3
};

typedef enum _MEMORY_CACHING_TYPE_ORIG {
    MmFrameBufferCached = 2
};

typedef enum _MEMORY_TYPE {
    MemoryExceptionBlock = 0,
    MemorySystemBlock = 1,
    MemoryFree = 2,
    MemoryBad = 3,
    MemoryLoadedProgram = 4,
    MemoryFirmwareTemporary = 5,
    MemoryFirmwarePermanent = 6,
    MemoryFreeContiguous = 7,
    MemorySpecialMemory = 8,
    MemoryMaximum = 9
};

typedef enum _POOL_TYPE {
    NonPagedPool = 0,
    PagedPool = 1,
    NonPagedPoolMustSucceed = 2,
    DontUseThisType = 3,
    NonPagedPoolCacheAligned = 4,
    PagedPoolCacheAligned = 5,
    NonPagedPoolCacheAlignedMustS = 6,
    MaxPoolType = 7,
    NonPagedPoolSession = 32,
    PagedPoolSession = 33,
    NonPagedPoolMustSucceedSession = 34,
    DontUseThisTypeSession = 35,
    NonPagedPoolCacheAlignedSession = 36,
    PagedPoolCacheAlignedSession = 37,
    NonPagedPoolCacheAlignedMustSSession = 38
};

typedef enum _POWER_STATE_TYPE {
    SystemPowerState = 0,
    DevicePowerState = 1
};

typedef enum _SYSTEM_POWER_STATE {
    PowerSystemUnspecified = 0,
    PowerSystemWorking = 1,
    PowerSystemSleeping1 = 2,
    PowerSystemSleeping2 = 3,
    PowerSystemSleeping3 = 4,
    PowerSystemHibernate = 5,
    PowerSystemShutdown = 6,
    PowerSystemMaximum = 7
};

CurTiledCr3LowPart;
EisaNMIMsg;
False;
GUID_FDMA_INTERFACE_PRIVATE;
GUID_ISA_FDMA_INTERFACE;
GUID_TARGET_DEVICE_QUERY_REMOVE;
GUID_TRANSLATOR_INTERFACE_STANDARD;
HalAcpiDispatchTable;
HalDispatchTable;
HalHardwareIdString;
HalName;
HalPrivateDispatchTable;
Halp8259Counts;
HalpAccountingLock;
HalpAcpiFlags;
HalpAcpiMultiNode;
HalpAcpiNvsData;
HalpAcpiRsdt;
HalpAcpiRsdtVA;
HalpAcpiXsdtVA;
HalpActiveProcessors;
HalpAddressUsageList;
HalpAllocationDescriptorArray;
HalpApicErrorLog;
HalpApicTable;
HalpApicUsage;
HalpBarrier;
HalpBroadcastContext;
HalpBroadcastFunction;
HalpBroadcastLock;
HalpBroadcastTargets;
HalpBroken440BX;
HalpBrokenAcpiTimer;
HalpBusType;
HalpCallbackRecord;
HalpClockMcaQueueDpc;
HalpClockMode;
HalpClockSetMSRate;
HalpClockWork;
HalpCmosCenturyOffset;
HalpComIoSpace;
HalpComPortIrqMapping;
HalpCr4Exists;
HalpCurrentClockRateAdjustment;
HalpCurrentClockRateIn100ns;
HalpCurrentIpiRate;
HalpCurrentMSRateTableIndex;
HalpCurrentRTCRegisterA;
HalpDebugPortTable;
HalpDefaultInterruptAffinity;
HalpDefaultPcIoSpace;
HalpDevLevel;
HalpDevPolarity;
HalpDisableHibernate;
HalpDmaAdapterList;
HalpDmaAdapterListLock;
HalpDmaChannelState;
HalpDmaOperations;
HalpDoingCrashDump;
HalpDontStartProcessors;
HalpDriverObject;
HalpEisaAdapter;
HalpEisaControlBase;
HalpEisaDma;
HalpEisaELCR;
HalpEisaIoSpace;
HalpEisaIrqIgnore;
HalpEisaIrqMask;
HalpFDMAAvail;
HalpFDMAChecked;
HalpFDMAInterface;
HalpFakePciBusData;
HalpFakePciBusHandler;
HalpFeatureBits;
HalpFixedAcpiDescTable;
HalpGenuineIntel;
HalpGetInfoFromACPI;
HalpGlobal8259Mask;
HalpHeapStart;
HalpHiberInProgress;
HalpHiberProcState;
HalpIDTUsage;
HalpIDTUsageFlags;
HalpINTItoVector;
HalpIOApicVersion;
HalpImcrIoSpace;
HalpInitLevel;
HalpInitStallComputedCount;
HalpInitStallLoopCount;
HalpInitialClockRateIndex;
HalpIntDestMap;
HalpIntiInfo;
HalpInvalidAcpiTable;
HalpIoApicId;
HalpIoCompatibleRangeList0;
HalpIoCompatibleRangeList1;
HalpIpiClock;
HalpIpiRateCounter;
HalpLocalApicErrorCount;
HalpLocalApicErrorLock;
HalpLocalNmiSources;
HalpLowStub;
HalpLowStubPhysicalAddress;
HalpMaxApicInti;
HalpMaxHotPlugMemoryAddress;
HalpMaxNode;
HalpMaxPciBus;
HalpMaxProcs;
HalpMaxProcsPerCluster;
HalpMcaInfo;
HalpMinPciBus;
HalpMotherboardState;
HalpMoveMemory;
HalpMpInfoTable;
HalpNMIDumpFlag;
HalpNMIInProgress;
HalpNewAdapter;
HalpNextMSRate;
HalpNodeAffinity;
HalpNodeBucket;
HalpNvsVirtualAddress;
HalpOutstandingScatterGatherCount;
HalpOwnedDisplayBeforeSleep;
HalpP0StallFactor;
HalpPCIConfigLock;
HalpPICINTToVector;
HalpPciDebuggingDevice;
HalpPciIrqMask;
HalpPciLockSettings;
HalpPendingRate;
HalpPerfInterruptHandler;
HalpPicStateIntact;
HalpPicVectorFlags;
HalpPicVectorRedirect;
HalpPiix4;
HalpPiix4BusNumber;
HalpPiix4DevActB;
HalpPiix4SlotNumber;
HalpProc0TSCHz;
HalpProcLocalApicTable;
HalpProcessedACPIPhase0;
HalpProcessorPCR;
HalpProcessorsNotHalted;
HalpProfileRunning;
HalpPteForFlush;
HalpRateAdjustment;
HalpRebootNow;
HalpRtcRegA;
HalpRtcRegB;
HalpRtcTimeIncrements;
HalpSerialLen;
HalpSerialNumber;
HalpShutdownContext;
HalpSimpleBootFlagTable;
HalpSleepContext;
HalpSleepPage16Lock;
HalpSleepPageLock;
HalpSleepSync;
HalpStaticIntAffinity;
HalpSystemHardwareLock;
HalpSzBreak;
HalpSzClockLevel;
HalpSzForceClusterMode;
HalpSzInterruptAffinity;
HalpSzOneCpu;
HalpSzPciLock;
HalpSzSerialNumber;
HalpSzSystem;
HalpSzTimerRes;
HalpSzUse8254;
HalpTiledCr3Addresses;
HalpTimerWatchdogCurFrame;
HalpTimerWatchdogEnabled;
HalpTimerWatchdogLastFrame;
HalpTimerWatchdogStorage;
HalpTimerWatchdogStorageOverflow;
HalpUse8254;
HalpUsedAllocDescriptors;
HalpVectorToINTI;
HalpVectorToIRQL;
HalpVirtAddrForFlush;
HalpWakeVector;
HalpWakeupState;
HalpWatchdogAvgCounter;
HalpWatchdogCountHigh;
HalpWatchdogCountLow;
HalpWatchdogTscHigh;
HalpWatchdogTscLow;
HiberFreeCR3;
IoAdapterObjectType;
KdComPortInUse;
KdDebuggerEnabled;
KdDebuggerNotPresent;
KdEnteredDebugger;
KiBugCheckData;
KiEnableTimerWatchdog;
LastKnownGood;
LessThan16Mb;
MasterAdapter24;
MasterAdapter32;
MpHalHardwareIdString;
MsgMCEPending;
NoMCABugCheck;
PCIConfigHandler;
PCIConfigHandlerType1;
PCIConfigHandlerType2;
PCIDeref;
PMTimerFreq;
PciIrqRoutingInterface;
PciIsaIrq;
PmAcpiDispatchTable;
QueryTimer;
RTCClockFreq;
RegNames;
RegisterAClockValue;
TimerInfo;
True;
UserSpecifiedCpuCount;
_IMPORT_DESCRIPTOR_KDCOM;
_IMPORT_DESCRIPTOR_ntoskrnl;
_NULL_IMPORT_DESCRIPTOR;
_imp_IoAssignDriveLetters;
_imp_IoReadPartitionTable;
_imp_IoSetPartitionInformation;
_imp_IoWritePartitionTable;
_imp_IofCallDriver;
_imp_IofCompleteRequest;
_imp_Kei386EoiHelper;
_imp_KiAcquireSpinLock;
_imp_KiReleaseSpinLock;
_imp_ObfDereferenceObject;
_imp_ObfReferenceObject;
_imp__DbgBreakPoint;
_imp__DbgPrint;
_imp__ExAllocatePoolWithTag;
_imp__ExCreateCallback;
_imp__ExFreePoolWithTag;
_imp__ExQueueWorkItem;
_imp__ExRegisterCallback;
_imp__HalDispatchTable;
_imp__HalPrivateDispatchTable;
_imp__InbvAcquireDisplayOwnership;
_imp__InbvCheckDisplayOwnership;
_imp__InbvDisplayString;
_imp__InbvEnableDisplayString;
_imp__InbvInstallDisplayStringFilter;
_imp__InbvIsBootDriverInstalled;
_imp__InbvResetDisplay;
_imp__InbvSetScrollRegion;
_imp__InbvSetTextColor;
_imp__InbvSolidColorFill;
_imp__IoAdapterObjectType;
_imp__IoAllocateAdapterChannel;
_imp__IoAllocateMdl;
_imp__IoAssignResources;
_imp__IoAttachDeviceToDeviceStack;
_imp__IoBuildSynchronousFsdRequest;
_imp__IoCreateDevice;
_imp__IoCreateDriver;
_imp__IoDeleteDevice;
_imp__IoFreeMdl;
_imp__IoGetDeviceInterfaces;
_imp__IoGetDeviceObjectPointer;
_imp__IoRegisterPlugPlayNotification;
_imp__IoReportDetectedDevice;
_imp__IoReportHalResourceUsage;
_imp__KdDebuggerEnabled;
_imp__KdDebuggerNotPresent;
_imp__KdEnteredDebugger;
_imp__KdRestore;
_imp__KeBugCheckEx;
_imp__KeEnterKernelDebugger;
_imp__KeFindConfigurationNextEntry;
_imp__KeInitializeDeviceQueue;
_imp__KeInitializeDpc;
_imp__KeInitializeEvent;
_imp__KeInitializeSpinLock;
_imp__KeInsertDeviceQueue;
_imp__KeInsertQueueDpc;
_imp__KeProfileInterrupt;
_imp__KeQuerySystemTime;
_imp__KeRegisterBugCheckCallback;
_imp__KeRemoveDeviceQueue;
_imp__KeRevertToUserAffinityThread;
_imp__KeSaveStateForHibernate;
_imp__KeSetEvent;
_imp__KeSetEventBoostPriority;
_imp__KeSetImportanceDpc;
_imp__KeSetProfileIrql;
_imp__KeSetSystemAffinityThread;
_imp__KeSetTargetProcessorDpc;
_imp__KeSetTimeIncrement;
_imp__KeUpdateRunTime;
_imp__KeUpdateSystemTime;
_imp__KeWaitForSingleObject;
_imp__KiBugCheckData;
_imp__KiDeliverApc;
_imp__KiDispatchInterrupt;
_imp__KiEnableTimerWatchdog;
_imp__KiIpiServiceRoutine;
_imp__MmAllocateContiguousMemory;
_imp__MmAllocateContiguousMemorySpecifyCache;
_imp__MmAllocateMappingAddress;
_imp__MmFreeContiguousMemory;
_imp__MmGetPhysicalAddress;
_imp__MmLockPagableDataSection;
_imp__MmMapIoSpace;
_imp__MmMapLockedPagesSpecifyCache;
_imp__MmMapLockedPagesWithReservedMapping;
_imp__MmUnlockPagableImageSection;
_imp__MmUnmapIoSpace;
_imp__MmUnmapLockedPages;
_imp__MmUnmapReservedMapping;
_imp__ObCreateObject;
_imp__ObInsertObject;
_imp__ObReferenceObjectByPointer;
_imp__PoSetHiberRange;
_imp__PoStartNextPowerIrp;
_imp__PsGetCurrentProcessId;
_imp__RtlAnsiStringToUnicodeString;
_imp__RtlClearBits;
_imp__RtlEqualUnicodeString;
_imp__RtlFindClearBitsAndSet;
_imp__RtlFreeUnicodeString;
_imp__RtlInitAnsiString;
_imp__RtlInitUnicodeString;
_imp__RtlInitializeBitMap;
_imp__RtlIntegerToUnicodeString;
_imp__RtlMoveMemory;
_imp__RtlQueryRegistryValues;
_imp__RtlSetAllBits;
_imp__RtlSetBits;
_imp__RtlTimeFieldsToTime;
_imp__RtlUpperString;
_imp__WRITE_REGISTER_UCHAR;
_imp__ZwClose;
_imp__ZwCreateKey;
_imp__ZwEnumerateValueKey;
_imp__ZwOpenKey;
_imp__ZwPowerInformation;
_imp__ZwQueryKey;
_imp__ZwQueryValueKey;
_imp__ZwSetValueKey;
_imp___allmul;
_imp___allshr;
_imp___aulldiv;
_imp___stricmp;
_imp__atoi;
_imp__sprintf;
_imp__strncpy;
_imp__strstr;
nPriority;
rgzApicNotVerified;
rgzBadApicVersion;
rgzBadDefault;
rgzBadHal;
rgzConfigurationData;
rgzEnableMCA;
rgzEnableMCE;
rgzIdentifier;
rgzMPPTRCheck;
rgzMPSBadCheck;
rgzMPSBadSig;
rgzMultiFunctionAdapter;
rgzNoApic;
rgzNoApicTable;
rgzNoMPTable;
rgzNoMem;
rgzNoMpsTable;
rgzPCICardList;
rgzPCIIdentifier;
rgzRTCNotFound;
rgzReservedResources;
rgzSessionManager;
rgzSuspendCallbackName;
KDCOM_NULL_THUNK_DATA;
ntoskrnl_NULL_THUNK_DATA;

Abios_HApicErr_a();
Abios_HGeneric_a();
Abios_HPn_a();
Abios_HReboot_a();
Abios_HStub_a();
Abios_Hci_a();
Abios_Hcpic_a();
Abios_Hipi_a();
Abios_Hmmt_a();
Abios_Hpf_a();
Abios_Hpi_a();
Abios_hapc_a();
Abios_hdpi_a();
DbgBreakPoint();
DbgPrint();
DetectAcpiMP();
Dr_HApicErr_a();
Dr_HGeneric_a();
Dr_HPn_a();
Dr_HReboot_a();
Dr_HStub_a();
Dr_Hci_a();
Dr_Hcpic_a();
Dr_Hipi_a();
Dr_Hmmt_a();
Dr_Hpf_a();
Dr_Hpi_a();
Dr_Htd_a();
Dr_hapc_a();
Dr_hdpi_a();
ExAcquireFastMutex();
ExReleaseFastMutex();
ExTryToAcquireFastMutex();
GetPdeAddressEx();
GetPteAddress();
HalAcpiBrokenPiix4TimerCarry();
HalAcpiTimerCarry();
HalAcquireDisplayOwnership();
HalAdjustResourceList();
HalAllProcessorsStarted();
HalAllocateAdapterChannel();
HalAllocateCommonBuffer();
HalAllocateCrashDumpRegisters();
HalAssignSlotResources();
HalBeginSystemInterrupt();
HalBuildMdlFromScatterGatherList();
HalBuildScatterGatherList();
HalCalculateScatterGatherListSize();
HalCalibratePerformanceCounter();
HalClearSoftwareInterrupt();
HalDisableSystemInterrupt();
HalDisplayString();
HalEnableSystemInterrupt();
HalEndSystemInterrupt();
HalFlushCommonBuffer();
HalFreeCommonBuffer();
HalGetAdapter();
HalGetBusData();
HalGetBusDataByOffset();
HalGetDmaAlignment();
HalGetEnvironmentVariable();
HalGetInterruptVector();
HalGetScatterGatherList();
HalHandleNMI();
HalInitApicInterruptHandlers();
HalInitSystem();
HalInitSystemPhase2();
HalInitializeProcessor();
HalIrqTranslateResourceRequirementsRoot();
HalIrqTranslateResourcesRoot();
HalMakeBeep();
HalProcessorIdle();
HalPutDmaAdapter();
HalPutScatterGatherList();
HalQueryDisplayParameters();
HalQueryRealTimeClock();
HalReadBootRegister();
HalReadDmaCounter();
HalReportResourceUsage();
HalRequestIpi();
HalRequestSoftwareInterrupt();
HalReturnToFirmware();
HalSetBusData();
HalSetBusDataByOffset();
HalSetDisplayParameters();
HalSetEnvironmentVariable();
HalSetProfileInterval();
HalSetRealTimeClock();
HalSetTimeIncrement();
HalStartNextProcessor();
HalStartProfileInterrupt();
HalStopProfileInterrupt();
HalSystemVectorDispatchEntry();
HalTranslateBusAddress();
HalTranslatorDereference();
HalTranslatorReference();
HalWriteBootRegister();
HalaAcpiTimerInit();
HalacpiGetInterruptTranslator();
HalacpiIrqTranslateResourceRequirementsIsa();
HalacpiIrqTranslateResourcesIsa();
HaliAcpiMachineStateInit();
HaliAcpiQueryFlags();
HaliAcpiSleep();
HaliAcpiTimerInit();
HaliGetDmaAdapter();
HaliHaltSystem();
HaliHandlePCIConfigSpaceAccess();
HaliInitPnpDriver();
HaliInitPowerManagement();
HaliIsVectorValid();
HaliLocateHiberRanges();
HaliPciInterfaceReadConfig();
HaliPciInterfaceWriteConfig();
HaliQuerySystemInformation();
HaliSetMaxLegacyPciBusNumber();
HaliSetSystemInformation();
HaliSetVectorState();
HaliSetWakeAlarm();
HaliSetWakeEnable();
HalpAcpiDetectResourceListSize();
HalpAcpiFindRsdt();
HalpAcpiFindRsdtPhase0();
HalpAcpiFlushCache();
HalpAcpiGetRegistryValue();
HalpAcpiPicStateIntact();
HalpAcpiPostSleep();
HalpAcpiPreSleep();
HalpAcpiTimerCalibratePerfCount();
HalpAcpiTimerPerfCountHack();
HalpAcpiTimerSetTimeIncrement();
HalpAcpiTimerStallExecProc();
HalpAcquireCmosSpinLock();
HalpAcquireHighLevelLock();
HalpAcquireSystemHardwareSpinLock();
HalpAddAdapterToList();
HalpAddDevice();
HalpAddInterruptDest();
HalpAdjustUpperBoundTable2X();
HalpAllocPhysicalMemory();
HalpAllocateAdapterCallback();
HalpAllocateAdapterEx();
HalpApcInterrupt();
HalpApicRebootService();
HalpApicSpuriousService();
HalpAssignDriveLetters();
HalpAssignPCISlotResources();
HalpAssignSlotResources();
HalpBiosCall();
HalpBiosCallEnd();
HalpBiosDisplayReset();
HalpBorrowTss();
HalpBroadcastCallService();
HalpBrokenPiix4TimerTick();
HalpBugCheckCallback();
HalpBuildAcpiResourceList();
HalpBuildResumeStructures();
HalpBuildTiledCR3Ex();
HalpCheckPowerButton();
HalpClearSlpSmiStsInICH();
HalpClockInterrupt();
HalpClockInterruptPn();
HalpClockInterruptStub();
HalpComplete440BXWorkaround();
HalpConfigureCardBusBridge();
HalpConfigurePciBridge();
HalpCopyBufferMap();
HalpCopyBufferMapSafe();
HalpCopyPageFrameNumber();
HalpCpuID();
HalpDisableAllInterrupts();
HalpDisablePicInti();
HalpDisableRedirEntry();
HalpDispatchInterrupt();
HalpDispatchPnp();
HalpDispatchPower();
HalpDispatchV86Opcode();
HalpDispatchWmi();
HalpDriverEntry();
HalpDynamicSystemResourceConfiguration();
HalpEnableLocalNmiSources();
HalpEnableNMI();
HalpEnablePerfInterupt();
HalpEnablePicInti();
HalpEnableRedirEntry();
HalpEndOfBoot();
HalpFDMANotificationCallback();
HalpFindBusAddressTranslation();
HalpFindFreeResourceLimits();
HalpFlushTLB();
HalpFreeNvsBuffers();
HalpFreePte();
HalpFreeResumeStructures();
HalpFreeTiledCR3Ex();
HalpGenericCall();
HalpGetAcpiTablePhase0();
HalpGetAdapterMaximumPhysicalAddress();
HalpGetApicInterruptDesc();
HalpGetApicVersion();
HalpGetChipHacks();
HalpGetCmosCenturyByte();
HalpGetCmosData();
HalpGetDisplayBiosInformation();
HalpGetEisaData();
HalpGetFeatureBits();
HalpGetHotPlugMemoryInfo();
HalpGetIoApicId();
HalpGetMcaLog();
HalpGetNMICrashFlag();
HalpGetPCIData();
HalpGetPageFrameNumber();
HalpGetParameters();
HalpGetRedirEntry();
HalpGetResourceSortValue();
HalpGetSystemInterruptVector();
HalpGrowMapBufferWorker();
HalpGrowMapBuffers();
HalpIRQLtoTPR();
HalpInitBootTable();
HalpInitIntiInfo();
HalpInitMP();
HalpInitMpInfo();
HalpInitNonBusHandler();
HalpInitReservedPages();
HalpInitTimerWatchdog();
HalpInitializeApicAddressing();
HalpInitializeClock();
HalpInitializeCmos();
HalpInitializeIOUnits();
HalpInitializeLocalUnit();
HalpInitializePICs();
HalpInitializePciBus();
HalpInitializePciStubs();
HalpInitializeStallExecution();
HalpInti2BusInterruptLevel();
HalpIoDelay();
HalpIpiHandler();
HalpIsPteFree();
HalpKdStallExecution();
HalpLocalApicErrorService();
HalpMapCR3Ex();
HalpMapNtToHwProcessorId();
HalpMapNvsArea();
HalpMapPhysicalMemory64();
HalpMapPhysicalMemoryWriteThrough64();
HalpMapTransfer();
HalpMapTransferHelper();
HalpMarkAcpiHal();
HalpMaskAcpiInterrupt();
HalpMcaCurrentProcessorSetConfig();
HalpMcaCurrentProcessorSetTSS();
HalpMcaExceptionHandler();
HalpMcaExceptionHandlerWrapper();
HalpMcaGetConfiguration();
HalpMcaInit();
HalpMcaLockInterface();
HalpMcaQueueDpc();
HalpMcaReadProcessorException();
HalpMcaReadRegisterInterface();
HalpMcaRegisterDriver();
HalpMcaUnlockInterface();
HalpMovntiCopyBuffer();
HalpNodeNumber();
HalpOpcodeINTnn();
HalpOpcodeInvalid();
HalpOpenRegistryKey();
HalpPCIAcquireType2Lock();
HalpPCIConfig();
HalpPCIISALine2Pin();
HalpPCIPin2ISALine();
HalpPCIReadUcharType1();
HalpPCIReadUcharType2();
HalpPCIReadUlongType1();
HalpPCIReadUlongType2();
HalpPCIReadUshortType1();
HalpPCIReadUshortType2();
HalpPCIReleaseSynchronzationType1();
HalpPCIReleaseSynchronzationType2();
HalpPCIReleaseType2Lock();
HalpPCISynchronizeType1();
HalpPCISynchronizeType2();
HalpPCIWriteUcharType1();
HalpPCIWriteUcharType2();
HalpPCIWriteUlongType1();
HalpPCIWriteUlongType2();
HalpPCIWriteUshortType1();
HalpPCIWriteUshortType2();
HalpPassIrpFromFdoToPdo();
HalpPerfInterrupt();
HalpPhase0GetPciDataByOffset();
HalpPhase0SetPciDataByOffset();
HalpPiix4Detect();
HalpPmTimerCalibratePerfCount();
HalpPmTimerQueryPerfCount();
HalpPmTimerScaleTimers();
HalpPmTimerSpecialStall();
HalpPollForBroadcast();
HalpPostSleepMP();
HalpPowerStateCallback();
HalpPreserveNvsArea();
HalpProfileInterrupt();
HalpPushInt();
HalpPutAcpiHacksInRegistry();
HalpQuery8254Counter();
HalpQueryAcpiResourceRequirements();
HalpQueryBrokenPiix4();
HalpQueryCapabilities();
HalpQueryDeviceRelations();
HalpQueryIdFdo();
HalpQueryIdPdo();
HalpQueryInterface();
HalpQueryPciRegistryInfo();
HalpQueryPerformanceCounter();
HalpQueryResourceRequirements();
HalpQueryResources();
HalpRangePages();
HalpReadCmosTime();
HalpReadPCIConfig();
HalpReadPartitionTable();
HalpRealModeEnd();
HalpRealModeStart();
HalpReboot();
HalpReenableAcpi();
HalpReenableInterrupts();
HalpRegisterKdSupportFunctions();
HalpRegisterPciDebuggingDeviceInfo();
HalpRegisterVector();
HalpReleaseCmosSpinLock();
HalpReleaseHighLevelLock();
HalpReleasePciDeviceForDebugging();
HalpReleaseSystemHardwareSpinLock();
HalpRemapVirtualAddress64();
HalpRemoveFences();
HalpRemoveInterruptDest();
HalpReportResourceUsage();
HalpReportSerialNumber();
HalpResetAllProcessors();
HalpResetSBF();
HalpResetThisProcessor();
HalpRestoreDmaControllerState();
HalpRestoreInterruptControllerState();
HalpRestoreIoApicRedirTable();
HalpRestoreIopm();
HalpRestoreNvsArea();
HalpRestoreTimerState();
HalpReturnTss();
HalpSaveContextTargetProcessor();
HalpSaveDmaControllerState();
HalpSaveInterruptControllerState();
HalpSaveProcessorStateAndWait();
HalpSaveTimerState();
HalpScaleTimers();
HalpSearchForPciDebuggingDevice();
HalpSerialize();
HalpSet8259Mask();
HalpSetClockAfterSleep();
HalpSetClockBeforeSleep();
HalpSetCmosCenturyByte();
HalpSetCmosData();
HalpSetCr4MCEBit();
HalpSetInitialClockRate();
HalpSetInternalVector();
HalpSetInterruptControllerWakeupState();
HalpSetPCIData();
HalpSetPageFrameNumber();
HalpSetPartitionInformation();
HalpSetRedirEntry();
HalpSetSystemInformation();
HalpSetTimerFunctions();
HalpSetWakeAlarm();
HalpSetup440BXWorkaround();
HalpSetupAcpiPhase0();
HalpSetupPciDeviceForDebugging();
HalpSetupRealModeResume();
HalpSetupUnconfiguredDebuggingDevice();
HalpStopOhciInterrupt();
HalpStopUhciInterrupt();
HalpStoreAndClearIopm();
HalpTranslateBusAddress();
HalpTrap06();
HalpTrap0D();
HalpUnMapIOApics();
HalpUnconfigureCardBusBridge();
HalpUnconfigurePciBridge();
HalpUnmapVirtualAddress();
HalpUnmaskAcpiInterrupt();
HalpValidPCISlot();
HalpVerifyIOUnit();
HalpWaitForPending();
HalpWakeupTimeElapsed();
HalpWhackICHUsbSmi();
HalpWriteCmosTime();
HalpWritePCIConfig();
HalpWritePartitionTable();
HalpYieldProcessor();
HalpmmTimerCalibratePerfCount();
HalpmmTimerClockInterrupt();
HalpmmTimerClockInterruptStub();
HalpmmTimerInit();
HalpmmTimerQueryPerfCount();
HalpmmTimerSetTimeIncrement();
HalpmmTimerStallExecProc();
InbvAcquireDisplayOwnership();
InbvCheckDisplayOwnership();
InbvDisplayString();
InbvEnableDisplayString();
InbvInstallDisplayStringFilter();
InbvIsBootDriverInstalled();
InbvResetDisplay();
InbvSetScrollRegion();
InbvSetTextColor();
InbvSolidColorFill();
IoAllocateAdapterChannel();
IoFlushAdapterBuffers();
IoFreeAdapterChannel();
IoFreeMapRegisters();
IoMapTransfer();
KdRestore();
KeAcquireInStackQueuedSpinLock();
KeAcquireInStackQueuedSpinLockRaiseToSynch();
KeAcquireQueuedSpinLock();
KeAcquireQueuedSpinLockRaiseToSynch();
KeAcquireSpinLock();
KeAcquireSpinLockRaiseToSynch();
KeFlushWriteBuffer();
KeGetCurrentIrql();
KeLowerIrql();
KeQueryPerformanceCounter();
KeRaiseIrql();
KeRaiseIrqlToDpcLevel();
KeRaiseIrqlToSynchLevel();
KeReleaseInStackQueuedSpinLock();
KeReleaseQueuedSpinLock();
KeReleaseSpinLock();
KeRevertToUserAffinityThread();
KeSaveStateForHibernate();
KeSetSystemAffinityThread();
KeStallExecutionProcessor();
KeTryToAcquireQueuedSpinLock();
KeTryToAcquireQueuedSpinLockRaiseToSynch();
KeUpdateSystemTime();
KfAcquireSpinLock();
KfLowerIrql();
KfRaiseIrql();
KfReleaseSpinLock();
KiAcquireSpinLock();
KiReleaseSpinLock();
MiGetPdeAddress();
MiGetPteAddress();
MiGetPteIndex();
MmAllocateMappingAddress();
MmMapLockedPagesWithReservedMapping();
MmUnmapReservedMapping();
PcMpDefaultConfig1();
PcMpDefaultConfig2();
PcMpDefaultConfig3();
PcMpDefaultConfig4();
PcMpDefaultConfig5();
PcMpDefaultConfig6();
PcMpDefaultConfig7();
PcMpDefaultTablePtrs();
PicExtintIntiHandlers();
PicHandler();
PicNopHandler();
PicNopIntiHandlers();
PicSpuriousService37();
PsGetCurrentProcessId();
RDMSR();
READ_PORT_BUFFER_UCHAR();
READ_PORT_BUFFER_ULONG();
READ_PORT_BUFFER_USHORT();
READ_PORT_UCHAR();
READ_PORT_ULONG();
READ_PORT_USHORT();
ResetPicInterruptHandler();
RtlMoveMemory();
SetPicInterruptHandler();
StartPx_BuildRealModeStart();
StartPx_PMStub();
StartPx_RMStub();
TranslateGlobalVectorToIsaVector();
V86_HApicErr_a();
V86_HGeneric_a();
V86_HPn_a();
V86_HReboot_a();
V86_HStub_a();
V86_Hci_a();
V86_Hcpic_a();
V86_Hipi_a();
V86_Hmmt_a();
V86_Hpf_a();
V86_Hpi_a();
V86_Htd_a();
V86_hapc_a();
V86_hdpi_a();
WRITE_PORT_BUFFER_UCHAR();
WRITE_PORT_BUFFER_ULONG();
WRITE_PORT_BUFFER_USHORT();
WRITE_PORT_UCHAR();
WRITE_PORT_ULONG();
WRITE_PORT_USHORT();
WRMSR();
_allmul();
_allshr();
_aulldiv();
_stricmp();
atoi();
sprintf();
strncpy();
strstr();
