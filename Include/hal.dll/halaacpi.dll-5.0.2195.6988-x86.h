struct HalpMpInfo;
struct IO_NMISOURCE;
struct ISA_VECTOR;
struct LIST_ENTRY32;
struct LIST_ENTRY64;
struct LOCAL_NMISOURCE;
struct MPS_EXTENTRY;
struct PROCESSOR_IDLE_TIMES;
struct ROUTING_TOKEN;
struct _ADAPTER_OBJECT;
struct _ALPHA_LOADER_BLOCK;
struct _ARBITER_CONFLICT_INFO;
struct _ARBITER_PARAMETERS;
struct _ARC_DISK_INFORMATION;
struct _BUS_HANDLER;
struct _CM_FULL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_LIST;
struct _CM_RESOURCE_LIST;
struct _CONFIGURATION_COMPONENT;
struct _CONFIGURATION_COMPONENT_DATA;
struct _CONTEXT;
struct _CONTROLLER_OBJECT;
struct _CPUIDENTIFIER;
struct _DESCRIPTION_HEADER;
struct _DEVICE_CAPABILITIES;
struct _DEVICE_CONTROL_CONTEXT;
struct _DEVICE_FLAGS;
struct _DEVICE_HANDLER_OBJECT;
struct _DEVICE_OBJECT;
struct _DEVOBJ_EXTENSION;
struct _DISPATCHER_HEADER;
struct _DMA_ADAPTER;
struct _DMA_OPERATIONS;
struct _DRIVER_EXTENSION;
struct _DRIVER_OBJECT;
struct _DRIVE_LAYOUT_INFORMATION;
struct _EPROCESS;
struct _ETHREAD;
struct _EXCEPTION_RECORD;
struct _FACS;
struct _FADT;
struct _FAST_IO_DISPATCH;
struct _FILE_OBJECT;
struct _FLOATING_SAVE_AREA;
struct _GENERAL_LOOKASIDE;
struct _GEN_ADDR;
struct _GUID;
struct _HARDWARE_PTE_X86;
struct _HARDWARE_PTE_X86PAE;
struct _I386_LOADER_BLOCK;
struct _IA64_LOADER_BLOCK;
struct _INTERFACE;
struct _IOAPIC;
struct _IO_COMPLETION_CONTEXT;
struct _IO_RESOURCE_DESCRIPTOR;
struct _IO_RESOURCE_LIST;
struct _IO_RESOURCE_REQUIREMENTS_LIST;
struct _IO_SECURITY_CONTEXT;
struct _IO_STACK_LOCATION;
struct _IO_STATUS_BLOCK;
struct _IO_TIMER;
struct _IRP;
struct _KAPC;
struct _KDEVICE_QUEUE;
struct _KDEVICE_QUEUE_ENTRY;
struct _KDPC;
struct _KEVENT;
struct _KINTERRUPT;
struct _KTHREAD;
struct _LIST_ENTRY;
struct _LOADER_PARAMETER_BLOCK;
struct _LOADER_PARAMETER_EXTENSION;
struct _MAPIC;
struct _MCA_EXCEPTION;
struct _MDL;
struct _NLS_DATA_BLOCK;
struct _NPAGED_LOOKASIDE_LIST;
struct _PM_DISPATCH_TABLE;
struct _POWER_SEQUENCE;
struct _PROCLOCALAPIC;
struct _PROFILE_PARAMETER_BLOCK;
struct _PcMpApicIntiEntry;
struct _PcMpBusEntry;
struct _PcMpIoApicEntry;
struct _PcMpLintiEntry;
struct _PcMpProcessorEntry;
struct _PolarityAndLevel;
struct _RSDP;
struct _RSDT;
struct _RTL_BITMAP;
struct _RTL_RANGE;
struct _SCATTER_GATHER_ELEMENT;
struct _SCATTER_GATHER_LIST;
struct _SCSI_REQUEST_BLOCK;
struct _SECTION_OBJECT_POINTERS;
struct _SETUP_LOADER_BLOCK;
struct _SINGLE_LIST_ENTRY;
struct _STRING;
struct _SUPPORTED_RANGE;
struct _SUPPORTED_RANGES;
struct _TIME_FIELDS;
struct _TRANSLATOR_INTERFACE;
struct _UNICODE_STRING;
struct _VPB;
struct _WAIT_CONTEXT_BLOCK;

union _LARGE_INTEGER;
union _MCI_ADDR;
union _MCI_STATS;
union _POWER_STATE;
union _SLIST_HEADER;
union _ULARGE_INTEGER;

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
    PULONG IoApicBase[8];
    ULONG IoApicPhys[8];
    ULONG IoApicVectorBase[8];
    struct _PcMpProcessorEntry *ProcessorEntryPtr;
    struct _PcMpBusEntry *BusEntryPtr;
    struct _PcMpIoApicEntry *IoApicEntryPtr;
    struct _PcMpApicIntiEntry *IntiEntryPtr;
    struct _PcMpLintiEntry *LintiEntryPtr;
    struct MPS_EXTENTRY *ExtensionTable;
    struct MPS_EXTENTRY *EndOfExtensionTable;
};

typedef struct IO_NMISOURCE {
    UCHAR Type;
    UCHAR Length;
    USHORT Flags;
    ULONG GlobalSystemInterruptVector;
};

typedef struct ISA_VECTOR {
    UCHAR Type;
    UCHAR Length;
    UCHAR Bus;
    UCHAR Source;
    ULONG GlobalSystemInterruptVector;
    USHORT Flags;
};

typedef struct LIST_ENTRY32 {
    ULONG Flink;
    ULONG Blink;
};

typedef struct LIST_ENTRY64 {
    ULONG64 Flink;
    ULONG64 Blink;
};

typedef struct LOCAL_NMISOURCE {
    UCHAR Type;
    UCHAR Length;
    UCHAR ProcessorID;
    USHORT Flags;
    UCHAR LINTIN;
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

typedef struct PROCESSOR_IDLE_TIMES {
    ULONG64 StartTime;
    ULONG64 EndTime;
    ULONG IdleHandlerReserved[4];
};

typedef struct ROUTING_TOKEN {
    PVOID LinkNode;
    ULONG StaticVector;
    UCHAR Flags;
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
};

typedef struct _ALPHA_LOADER_BLOCK {
    ULONG PlaceHolder;
};

typedef struct _ARBITER_CONFLICT_INFO {
    struct _DEVICE_OBJECT *OwningObject;
    ULONG64 Start;
    ULONG64 End;
};

typedef struct _ARBITER_PARAMETERS {
    union {
        struct {
            struct _LIST_ENTRY *ArbitrationList;
            ULONG AllocateFromCount;
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *AllocateFrom;
        } TestAllocation;
        struct {
            struct _LIST_ENTRY *ArbitrationList;
            ULONG AllocateFromCount;
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *AllocateFrom;
        } RetestAllocation;
        struct {
            struct _LIST_ENTRY *ArbitrationList;
        } BootAllocation;
        struct {
            struct _CM_PARTIAL_RESOURCE_LIST **AllocatedResources;
        } QueryAllocatedResources;
        struct {
            struct _DEVICE_OBJECT *PhysicalDeviceObject;
            struct _IO_RESOURCE_DESCRIPTOR *ConflictingResource;
            PULONG ConflictCount;
            struct _ARBITER_CONFLICT_INFO **Conflicts;
        } QueryConflict;
        struct {
            struct _LIST_ENTRY *ArbitrationList;
        } QueryArbitrate;
        struct {
            struct _DEVICE_OBJECT *ReserveDevice;
        } AddReserved;
    } Parameters;
};

typedef struct _ARC_DISK_INFORMATION {
    struct _LIST_ENTRY DiskSignatures;
};

typedef struct _BUS_HANDLER {
    ULONG Version;
    LONG InterfaceType;
    LONG ConfigurationType;
    ULONG BusNumber;
    struct _DEVICE_OBJECT *DeviceObject;
    struct _BUS_HANDLER *ParentHandler;
    PVOID BusData;
    ULONG DeviceControlExtensionSize;
    struct _SUPPORTED_RANGES *BusAddresses;
    ULONG Reserved[4];
    PULONG GetBusData;
    PULONG SetBusData;
    PLONG AdjustResourceList;
    PLONG AssignSlotResources;
    PULONG GetInterruptVector;
    PUCHAR TranslateBusAddress;
    PVOID Spare1;
    PVOID Spare2;
    PVOID Spare3;
    PVOID Spare4;
    PVOID Spare5;
    PVOID Spare6;
    PVOID Spare7;
    PVOID Spare8;
};

typedef struct _CM_FULL_RESOURCE_DESCRIPTOR {
    LONG InterfaceType;
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

typedef struct _CONFIGURATION_COMPONENT {
    LONG Class;
    LONG Type;
    struct _DEVICE_FLAGS Flags;
    USHORT Version;
    USHORT Revision;
    ULONG Key;
    ULONG AffinityMask;
    ULONG ConfigurationDataLength;
    ULONG IdentifierLength;
    PCHAR Identifier;
};

typedef struct _CONFIGURATION_COMPONENT_DATA {
    struct _CONFIGURATION_COMPONENT_DATA *Parent;
    struct _CONFIGURATION_COMPONENT_DATA *Child;
    struct _CONFIGURATION_COMPONENT_DATA *Sibling;
    struct _CONFIGURATION_COMPONENT ComponentEntry;
    PVOID ConfigurationData;
};

typedef struct _CONTEXT {
    ULONG ContextFlags;
    ULONG Dr0;
    ULONG Dr1;
    ULONG Dr2;
    ULONG Dr3;
    ULONG Dr6;
    ULONG Dr7;
    struct _FLOATING_SAVE_AREA FloatSave;
    ULONG SegGs;
    ULONG SegFs;
    ULONG SegEs;
    ULONG SegDs;
    ULONG Edi;
    ULONG Esi;
    ULONG Ebx;
    ULONG Edx;
    ULONG Ecx;
    ULONG Eax;
    ULONG Ebp;
    ULONG Eip;
    ULONG SegCs;
    ULONG EFlags;
    ULONG Esp;
    ULONG SegSs;
    UCHAR ExtendedRegisters[512];
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
    LONG DeviceState[7];
    LONG SystemWake;
    LONG DeviceWake;
    ULONG D1Latency;
    ULONG D2Latency;
    ULONG D3Latency;
};

typedef struct _DEVICE_CONTROL_CONTEXT {
    LONG Status;
    struct _DEVICE_HANDLER_OBJECT *DeviceHandler;
    struct _DEVICE_OBJECT *DeviceObject;
    ULONG ControlCode;
    PVOID Buffer;
    PULONG BufferLength;
    PVOID Context;
};

typedef struct _DEVICE_FLAGS {
    ULONG Failed : 1;
    ULONG ReadOnly : 1;
    ULONG Removable : 1;
    ULONG ConsoleIn : 1;
    ULONG ConsoleOut : 1;
    ULONG Input : 1;
    ULONG Output : 1;
};

typedef struct _DEVICE_HANDLER_OBJECT {
    SHORT Type;
    USHORT Size;
    struct _BUS_HANDLER *BusHandler;
    ULONG SlotNumber;
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

typedef struct _DRIVE_LAYOUT_INFORMATION {
};

typedef struct _EPROCESS {
};

typedef struct _ETHREAD {
};

typedef struct _EXCEPTION_RECORD {
    LONG ExceptionCode;
    ULONG ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    ULONG NumberParameters;
    ULONG ExceptionInformation[15];
};

typedef struct _FACS {
    ULONG Signature;
    ULONG Length;
    ULONG HardwareSignature;
    ULONG pFirmwareWakingVector;
    ULONG GlobalLock;
    ULONG Flags;
    UCHAR Reserved[40];
};

typedef struct _FADT {
    struct _DESCRIPTION_HEADER Header;
    ULONG facs;
    ULONG dsdt;
    UCHAR int_model;
    UCHAR reserved4;
    USHORT sci_int_vector;
    ULONG smi_cmd_io_port;
    UCHAR acpi_on_value;
    UCHAR acpi_off_value;
    UCHAR s4bios_req;
    UCHAR reserved1;
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
    UCHAR reserved2;
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
};

typedef struct _FAST_IO_DISPATCH {
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

typedef struct _FLOATING_SAVE_AREA {
    ULONG ControlWord;
    ULONG StatusWord;
    ULONG TagWord;
    ULONG ErrorOffset;
    ULONG ErrorSelector;
    ULONG DataOffset;
    ULONG DataSelector;
    UCHAR RegisterArea[80];
    ULONG Cr0NpxState;
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
    LONG Type;
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
    ULONG64 PageFrameNumber : 24;
    ULONG64 reserved1 : 28;
    ULONG LowPart;
    ULONG HighPart;
};

typedef struct _I386_LOADER_BLOCK {
    PVOID CommonDataArea;
    ULONG MachineType;
    ULONG VirtualBias;
};

typedef struct _IA64_LOADER_BLOCK {
    ULONG PlaceHolder;
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

typedef struct _IO_COMPLETION_CONTEXT {
    PVOID Port;
    PVOID Key;
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
            PVOID AssignedResource;
        } AssignedResource;
        struct {
            UCHAR Type;
            UCHAR Reserved[3];
            PVOID AssignedResource;
            union _LARGE_INTEGER Transformation;
        } SubAllocateFrom;
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
    LONG InterfaceType;
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
            LONG FileInformationClass;
        } QueryFile;
        struct {
            ULONG Length;
            LONG FileInformationClass;
            struct _FILE_OBJECT *FileObject;
            UCHAR ReplaceIfExists;
            UCHAR AdvanceOnly;
            ULONG ClusterCount;
            PVOID DeleteHandle;
        } SetFile;
        struct {
            ULONG Length;
            LONG FsInformationClass;
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
            LONG Type;
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
            LONG IdType;
        } QueryId;
        struct {
            LONG DeviceTextType;
            ULONG LocaleId;
        } QueryDeviceText;
        struct {
            UCHAR InPath;
            UCHAR Reserved[3];
            LONG Type;
        } UsageNotification;
        struct {
            LONG PowerState;
        } WaitWake;
        struct {
            struct _POWER_SEQUENCE *PowerSequence;
        } PowerSequence;
        struct {
            ULONG SystemContext;
            LONG Type;
            union _POWER_STATE State;
            LONG ShutdownType;
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

typedef struct _KINTERRUPT {
    SHORT Type;
    SHORT Size;
    struct _LIST_ENTRY InterruptListEntry;
    PUCHAR ServiceRoutine;
    PVOID ServiceContext;
    ULONG SpinLock;
    ULONG Spare1;
    PULONG ActualLock;
    PVOID DispatchAddress;
    ULONG Vector;
    UCHAR Irql;
    UCHAR SynchronizeIrql;
    UCHAR FloatingSave;
    UCHAR Connected;
    CHAR Number;
    UCHAR ShareVector;
    LONG Mode;
    ULONG ServiceCount;
    ULONG Spare3;
    ULONG DispatchCode[106];
};

typedef struct _KTHREAD {
};

typedef struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

typedef struct _LOADER_PARAMETER_BLOCK {
    struct _LIST_ENTRY LoadOrderListHead;
    struct _LIST_ENTRY MemoryDescriptorListHead;
    struct _LIST_ENTRY BootDriverListHead;
    ULONG KernelStack;
    ULONG Prcb;
    ULONG Process;
    ULONG Thread;
    ULONG RegistryLength;
    PVOID RegistryBase;
    struct _CONFIGURATION_COMPONENT_DATA *ConfigurationRoot;
    PCHAR ArcBootDeviceName;
    PCHAR ArcHalDeviceName;
    PCHAR NtBootPathName;
    PCHAR NtHalPathName;
    PCHAR LoadOptions;
    struct _NLS_DATA_BLOCK *NlsData;
    struct _ARC_DISK_INFORMATION *ArcDiskInformation;
    PVOID OemFontFile;
    struct _SETUP_LOADER_BLOCK *SetupLoaderBlock;
    struct _LOADER_PARAMETER_EXTENSION *Extension;
    union {
        struct _I386_LOADER_BLOCK I386;
        struct _ALPHA_LOADER_BLOCK Alpha;
        struct _IA64_LOADER_BLOCK Ia64;
    } u;
};

typedef struct _LOADER_PARAMETER_EXTENSION {
    ULONG Size;
    struct _PROFILE_PARAMETER_BLOCK Profile;
    ULONG MajorVersion;
    ULONG MinorVersion;
    PVOID InfFileImage;
    ULONG InfFileSize;
    PVOID TriageDumpBlock;
};

typedef struct _MAPIC {
    struct _DESCRIPTION_HEADER Header;
    ULONG LocalAPICAddress;
    ULONG Flags;
    ULONG APICTables[1];
};

typedef struct _MCA_EXCEPTION {
    ULONG VersionNumber;
    LONG ExceptionType;
    union _LARGE_INTEGER TimeStamp;
    ULONG ProcessorNumber;
    union {
        struct {
            UCHAR BankNumber;
            union _MCI_STATS Status;
            union _MCI_ADDR Address;
            ULONG64 Misc;
        } Mca;
        struct {
            ULONG64 Address;
            ULONG64 Type;
        } Mce;
    } u;
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

typedef struct _NLS_DATA_BLOCK {
    PVOID AnsiCodePageData;
    PVOID OemCodePageData;
    PVOID UnicodeCaseTableData;
};

typedef struct _NPAGED_LOOKASIDE_LIST {
    struct _GENERAL_LOOKASIDE L;
    ULONG Lock;
};

typedef struct _PM_DISPATCH_TABLE {
    ULONG Signature;
    ULONG Version;
    PVOID Function[1];
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

typedef struct _PROFILE_PARAMETER_BLOCK {
    USHORT Status;
    USHORT Reserved;
    USHORT DockingState;
    USHORT Capabilities;
    ULONG DockID;
    ULONG SerialNumber;
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
    UCHAR Reserved[1];
    ULONG RsdtAddress;
};

typedef struct _RSDT {
    struct _DESCRIPTION_HEADER Header;
    ULONG Tables[1];
};

typedef struct _RTL_BITMAP {
    ULONG SizeOfBitMap;
    PULONG Buffer;
};

typedef struct _RTL_RANGE {
    ULONG64 Start;
    ULONG64 End;
    PVOID UserData;
    PVOID Owner;
    UCHAR Attributes;
    UCHAR Flags;
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

typedef struct _SETUP_LOADER_BLOCK {
};

typedef struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY *Next;
};

typedef struct _STRING {
    USHORT Length;
    USHORT MaximumLength;
    PCHAR Buffer;
};

typedef struct _SUPPORTED_RANGE {
    struct _SUPPORTED_RANGE *Next;
    ULONG SystemAddressSpace;
    LONG64 SystemBase;
    LONG64 Base;
    LONG64 Limit;
};

typedef struct _SUPPORTED_RANGES {
    USHORT Version;
    UCHAR Sorted;
    UCHAR Reserved;
    ULONG NoIO;
    struct _SUPPORTED_RANGE IO;
    ULONG NoMemory;
    struct _SUPPORTED_RANGE Memory;
    ULONG NoPrefetchMemory;
    struct _SUPPORTED_RANGE PrefetchMemory;
    ULONG NoDma;
    struct _SUPPORTED_RANGE Dma;
};

typedef struct _TIME_FIELDS {
    SHORT Year;
    SHORT Month;
    SHORT Day;
    SHORT Hour;
    SHORT Minute;
    SHORT Second;
    SHORT Milliseconds;
    SHORT Weekday;
};

typedef struct _TRANSLATOR_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PVOID InterfaceReference;
    PVOID InterfaceDereference;
    PLONG TranslateResources;
    PLONG TranslateResourceRequirements;
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
    PLONG DeviceRoutine;
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

typedef union _MCI_ADDR {
    ULONG Address;
    ULONG Reserved;
    ULONG64 QuadPart;
};

typedef union _MCI_STATS {
    struct {
        USHORT McaCod;
        USHORT MsCod;
        ULONG OtherInfo : 25;
        ULONG Damage : 1;
        ULONG AddressValid : 1;
        ULONG MiscValid : 1;
        ULONG Enabled : 1;
        ULONG UnCorrected : 1;
        ULONG OverFlow : 1;
        ULONG Valid : 1;
    } MciStats;
    ULONG64 QuadPart;
};

typedef union _POWER_STATE {
    LONG SystemState;
    LONG DeviceState;
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

ComPort;
CurTiledCr3LowPart;
EisaNMIMsg;
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
HalpActiveProcessors;
HalpAddressUsageList;
HalpAllocationDescriptorArray;
HalpApicErrorLog;
HalpApicTable;
HalpApicUsage;
HalpAsmDataMarker;
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
HalpCurrentRTCRegisterA;
HalpDbgErrorCount;
HalpDbgPortsPresent;
HalpDebugPortTable;
HalpDefaultInterruptAffinity;
HalpDefaultPcIoSpace;
HalpDevLevel;
HalpDevPolarity;
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
HalpFDMAInterfaceList;
HalpFDMANotificationHandle;
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
HalpINTItoVector;
HalpIOApicVersion;
HalpIRQLtoTPR;
HalpImcrIoSpace;
HalpInitLevel;
HalpInitStallComputedCount;
HalpInitStallLoopCount;
HalpInitialClockRateIndex;
HalpIntDestMap;
HalpIntiInfo;
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
HalpMaxPciBus;
HalpMaxProcs;
HalpMaxProcsPerCluster;
HalpMcaInfo;
HalpMinPciBus;
HalpMotherboardState;
HalpMpInfoTable;
HalpMustUseResetReg;
HalpNMIDumpFlag;
HalpNMIInProgress;
HalpNewAdapter;
HalpNextMSRate;
HalpNvsVirtualAddress;
HalpOutstandingScatterGatherCount;
HalpOwnedDisplayBeforeSleep;
HalpP0StallFactor;
HalpPCIConfigLock;
HalpPICINTToVector;
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
HalpPiix4UpperBoundTable;
HalpProc0TSCHz;
HalpProcLocalApicTable;
HalpProcessedACPIPhase0;
HalpProcessorPCR;
HalpProcessorsNotHalted;
HalpProfileRunning;
HalpPteForFlush;
HalpRTCApic;
HalpRTCInti;
HalpRateAdjustment;
HalpRebootNow;
HalpRtcRegA;
HalpRtcRegB;
HalpRtcTimeIncrements;
HalpSerialLen;
HalpSerialNumber;
HalpShutdownContext;
HalpSleepContext;
HalpSleepPage16Lock;
HalpSleepPageLock;
HalpSleepSync;
HalpStaticIntAffinity;
HalpSystemHardwareLock;
HalpSzBreak;
HalpSzClockLevel;
HalpSzForceClusterMode;
HalpSzForceResetReg;
HalpSzInterruptAffinity;
HalpSzOneCpu;
HalpSzPciLock;
HalpSzSerialNumber;
HalpSzSystem;
HalpSzTimerRes;
HalpSzUse8254;
HalpSzUsePmTimer;
HalpThrottleScale;
HalpTiledCr3Addresses;
HalpTimerWatchdogCurFrame;
HalpTimerWatchdogEnabled;
HalpTimerWatchdogLastFrame;
HalpTimerWatchdogStorage;
HalpTimerWatchdogStorageOverflow;
HalpUse8254;
HalpUsePmTimer;
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
LessThan16Mb;
MasterAdapter24;
MasterAdapter32;
MsgMCEPending;
NoMCABugCheck;
PCIConfigHandler;
PCIConfigHandlerType1;
PCIConfigHandlerType2;
PCIDeref;
PMTimerFreq;
PciIrqRoutingInterface;
PciIsaIrq;
PfnMmMapLockedPagesWithReservedMapping;
PfnMmUnmapReservedMapping;
PicExtintIntiHandlers;
PicNopIntiHandlers;
PmAcpiDispatchTable;
Port;
PortInformation;
QueryTimer;
RTCClockFreq;
RegisterAClockValue;
TimerInfo;
UserSpecifiedCpuCount;
_IMPORT_DESCRIPTOR_ntoskrnl;
_NULL_IMPORT_DESCRIPTOR;
_imp_InterlockedDecrement;
_imp_InterlockedIncrement;
_imp_IofCallDriver;
_imp_IofCompleteRequest;
_imp_Kei386EoiHelper;
_imp_KiAcquireSpinLock;
_imp_KiReleaseSpinLock;
_imp_ObfDereferenceObject;
_imp_ObfReferenceObject;
_imp__DbgBreakPoint;
_imp__DbgPrint;
_imp__ExAllocatePool;
_imp__ExAllocatePoolWithTag;
_imp__ExCreateCallback;
_imp__ExFreePool;
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
_imp__IoAssignResources;
_imp__IoAttachDeviceToDeviceStack;
_imp__IoBuildSynchronousFsdRequest;
_imp__IoCreateDevice;
_imp__IoCreateDriver;
_imp__IoDeleteDevice;
_imp__IoGetDeviceInterfaces;
_imp__IoGetDeviceObjectPointer;
_imp__IoRegisterPlugPlayNotification;
_imp__IoReportDetectedDevice;
_imp__IoReportHalResourceUsage;
_imp__KdDebuggerEnabled;
_imp__KdDebuggerNotPresent;
_imp__KdEnteredDebugger;
_imp__KeBugCheckEx;
_imp__KeEnterKernelDebugger;
_imp__KeFindConfigurationEntry;
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
_imp__KeSetProfileIrql;
_imp__KeSetSystemAffinityThread;
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
_imp__MmFreeContiguousMemory;
_imp__MmGetPhysicalAddress;
_imp__MmGetSystemRoutineAddress;
_imp__MmLockPagableDataSection;
_imp__MmMapIoSpace;
_imp__MmMapLockedPagesSpecifyCache;
_imp__MmUnlockPagableImageSection;
_imp__MmUnmapIoSpace;
_imp__ObCreateObject;
_imp__ObInsertObject;
_imp__ObReferenceObjectByPointer;
_imp__PoSetHiberRange;
_imp__PoStartNextPowerIrp;
_imp__PsGetCurrentProcessId;
_imp__RtlAnsiStringToUnicodeString;
_imp__RtlClearBits;
_imp__RtlEqualUnicodeString;
_imp__RtlFillMemory;
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
_imp__RtlZeroMemory;
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
_imp___allshl;
_imp___allshr;
_imp___aullshr;
_imp___stricmp;
_imp__atoi;
_imp__sprintf;
_imp__strncpy;
_imp__strstr;
rgzApicNotVerified;
rgzBadApicVersion;
rgzBadDefault;
rgzBadHal;
rgzConfigurationData;
rgzCrashControl;
rgzEnableMCA;
rgzEnableMCE;
rgzIdentifier;
rgzMPPTRCheck;
rgzMPSBadCheck;
rgzMPSBadSig;
rgzMultiFunctionAdapter;
rgzNMICrashDump;
rgzNoApic;
rgzNoApicTable;
rgzNoMPTable;
rgzNoMpsTable;
rgzPCICardList;
rgzPCIIdentifier;
rgzRTCNotFound;
rgzReservedResources;
rgzSessionManager;
rgzSuspendCallbackName;
vBucket;
ntoskrnl_NULL_THUNK_DATA;

Abios_HApicErr_a();
Abios_HGeneric_a();
Abios_HPn_a();
Abios_HReboot_a();
Abios_HStub_a();
Abios_Hci_a();
Abios_Hcpic_a();
Abios_Hipi_a();
Abios_Hpf_a();
Abios_Hpi_a();
Abios_hapc_a();
Abios_hdpi_a();
CpDoesPortExist();
CpGetByte();
CpInitialize();
CpPutByte();
CpReadLsr();
CpSendModemString();
CpSetBaud();
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
HalAcpiC1Idle();
HalAcpiC2Idle();
HalAcpiC3ArbdisIdle();
HalAcpiTimerCarry();
HalAcquireDisplayOwnership();
HalAdjustResourceList();
HalAllProcessorsStarted();
HalAllocateAdapterChannel();
HalAllocateCommonBuffer();
HalAllocateCrashDumpRegisters();
HalAssignSlotResources();
HalBeginSystemInterrupt();
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
HalProcessorThrottle();
HalPutDmaAdapter();
HalPutScatterGatherList();
HalQueryDisplayParameters();
HalQueryRealTimeClock();
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
HalTranslateBusAddress();
HalTranslatorReference();
HalaAcpiTimerInit();
HalacpiGetInterruptTranslator();
HalacpiIrqTranslateResourceRequirementsIsa();
HalacpiIrqTranslateResourcesIsa();
HaliAcpiMachineStateInit();
HaliAcpiQueryFlags();
HaliAcpiSleep();
HaliAcpiTimerInit();
HaliGetDmaAdapter();
HaliInitPnpDriver();
HaliInitPowerManagement();
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
HalpAcpiTimerSetTimeIncrement();
HalpAcpiTimerStallExecProc();
HalpAcquireCmosSpinLock();
HalpAcquireHighLevelLock();
HalpAcquireSystemHardwareSpinLock();
HalpAddDevice();
HalpAddInterruptDest();
HalpAllocPhysicalMemory();
HalpAllocateAdapterCallback();
HalpAllocateAdapterEx();
HalpApcInterrupt();
HalpApicRebootService();
HalpApicSpuriousService();
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
HalpBuildTiledCR3Ex();
HalpCheckPowerButton();
HalpClockInterrupt();
HalpClockInterruptPn();
HalpClockInterruptStub();
HalpComplete440BXWorkaround();
HalpCopyBufferMap();
HalpCopyBufferMapSafe();
HalpCpuID();
HalpDisableAllInterrupts();
HalpDisablePicInti();
HalpDisableRedirEntry();
HalpDispatchInterrupt();
HalpDispatchPnp();
HalpDispatchPower();
HalpDispatchV86Opcode();
HalpDriverEntry();
HalpEnableLocalNmiSources();
HalpEnableNMI();
HalpEnablePerfInterupt();
HalpEnablePicInti();
HalpEnableRedirEntry();
HalpFDMANotificationCallback();
HalpFindBusAddressTranslation();
HalpFlushTLB();
HalpFreeNvsBuffers();
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
HalpIncrementPte();
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
HalpInti2ApicInti();
HalpInti2BusInterruptLevel();
HalpIoDelay();
HalpIpiHandler();
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
HalpMcaQueueDpc();
HalpMcaReadProcessorException();
HalpMcaRegisterDriver();
HalpMcaSwitchMcaExceptionStackAndBugCheck();
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
HalpPiix4Detect();
HalpPmTimerCalibratePerfCount();
HalpPmTimerQueryPerfCount();
HalpPollForBroadcast();
HalpPostSleepMP();
HalpPowerStateCallback();
HalpPreserveNvsArea();
HalpProfileInterrupt();
HalpPushInt();
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
HalpReadCmosTime();
HalpReadPCIConfig();
HalpRealModeEnd();
HalpRealModeStart();
HalpReboot();
HalpReenableAcpi();
HalpReenableInterrupts();
HalpRegisterVector();
HalpReleaseCmosSpinLock();
HalpReleaseHighLevelLock();
HalpReleaseSystemHardwareSpinLock();
HalpRemapVirtualAddress64();
HalpRemoveFences();
HalpRemoveInterruptDest();
HalpReportResourceUsage();
HalpReportSerialNumber();
HalpRequestNmi();
HalpResetAllProcessors();
HalpResetThisProcessor();
HalpRestoreDmaControllerState();
HalpRestoreInterruptControllerState();
HalpRestoreIoApicRedirTable();
HalpRestoreIopm();
HalpRestoreNvsArea();
HalpRestoreTimerState();
HalpReturnTss();
HalpSaveDmaControllerState();
HalpSaveInterruptControllerState();
HalpSaveProcessorStateAndWait();
HalpScaleTimers();
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
HalpSetRedirEntry();
HalpSetSystemInformation();
HalpSetWakeAlarm();
HalpSetup440BXWorkaround();
HalpSetupAcpiPhase0();
HalpSetupRealModeResume();
HalpStopUhciInterrupt();
HalpStoreAndClearIopm();
HalpTranslateBusAddress();
HalpTrap06();
HalpTrap0D();
HalpUnMapIOApics();
HalpUnmapVirtualAddress();
HalpUnmaskAcpiInterrupt();
HalpValidPCISlot();
HalpVerifyIOUnit();
HalpWaitForPending();
HalpWakeupTimeElapsed();
HalpWriteCmosTime();
HalpWritePCIConfig();
HalpWriteResetCommand();
HalpYieldProcessor();
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
IoAssignDriveLetters();
IoFlushAdapterBuffers();
IoFreeAdapterChannel();
IoFreeMapRegisters();
IoMapTransfer();
IoReadPartitionTable();
IoSetPartitionInformation();
IoWritePartitionTable();
KdPortGetByte();
KdPortInitialize();
KdPortPollByte();
KdPortPutByte();
KdPortRestore();
KdPortSave();
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
MiGetPdiShift();
MiGetPteAddress();
MiGetPteIndex();
PcMpDefaultConfig1();
PcMpDefaultConfig2();
PcMpDefaultConfig3();
PcMpDefaultConfig4();
PcMpDefaultConfig5();
PcMpDefaultConfig6();
PcMpDefaultConfig7();
PcMpDefaultTablePtrs();
PicHandler();
PicNopHandler();
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
RtlFillMemory();
RtlMoveMemory();
RtlZeroMemory();
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
WRITE_REGISTER_UCHAR();
WRMSR();
_allmul();
_allshl();
_allshr();
_aullshr();
_stricmp();
atoi();
sprintf();
strncpy();
strstr();
