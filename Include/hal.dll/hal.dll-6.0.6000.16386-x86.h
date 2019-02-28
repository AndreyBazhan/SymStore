struct HalpMpInfo;
struct LIST_ENTRY32;
struct LIST_ENTRY64;
struct _ACCESS_STATE;
struct _ADAPTER_OBJECT;
struct _CM_FULL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_LIST;
struct _CM_RESOURCE_LIST;
struct _COMPRESSED_DATA_INFO;
struct _CONTROLLER_OBJECT;
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
struct _ERESOURCE;
struct _ETHREAD;
struct _EVENT_DATA_DESCRIPTOR;
struct _EVENT_DESCRIPTOR;
struct _FACS;
struct _FADT;
struct _FAST_IO_DISPATCH;
struct _FAST_MUTEX;
struct _FILE_BASIC_INFORMATION;
struct _FILE_GET_QUOTA_INFORMATION;
struct _FILE_NETWORK_OPEN_INFORMATION;
struct _FILE_OBJECT;
struct _FILE_STANDARD_INFORMATION;
struct _GENERAL_LOOKASIDE;
struct _GENERAL_LOOKASIDE_POOL;
struct _GEN_ADDR;
struct _GUID;
struct _HARDWARE_PTE_X86;
struct _HARDWARE_PTE_X86PAE;
struct _INITIAL_PRIVILEGE_SET;
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
struct _KPROCESS;
struct _KSEMAPHORE;
struct _KTHREAD;
struct _LIST_ENTRY;
struct _LOCAL_NMISOURCE;
struct _LOOKASIDE_LIST_EX;
struct _LUID;
struct _LUID_AND_ATTRIBUTES;
struct _MAPIC;
struct _MDL;
struct _NPAGED_LOOKASIDE_LIST;
struct _OBJECT_ATTRIBUTES;
struct _OBJECT_TYPE;
struct _OWNER_ENTRY;
struct _PAGED_LOOKASIDE_LIST;
struct _PCIE_DEVICE_ID;
struct _PLATFORM_INTERRUPT;
struct _POWER_SEQUENCE;
struct _PRIVILEGE_SET;
struct _PROCLOCALAPIC;
struct _PROCLOCALSAPIC;
struct _RSDP;
struct _RSDT_32;
struct _RTL_BITMAP;
struct _SCATTER_GATHER_ELEMENT;
struct _SCATTER_GATHER_LIST;
struct _SCSI_REQUEST_BLOCK;
struct _SECTION_OBJECT_POINTERS;
struct _SECURITY_QUALITY_OF_SERVICE;
struct _SECURITY_SUBJECT_CONTEXT;
struct _SINGLE_LIST_ENTRY;
struct _STRING;
struct _SYSTEM_POWER_STATE_CONTEXT;
struct _UNICODE_STRING;
struct _VPB;
struct _WAIT_CONTEXT_BLOCK;
struct _WHEA_ERROR_PACKET;
struct _WHEA_ERROR_RECORD;
struct _WHEA_ERROR_RECORD_HEADER;
struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR;
struct _WHEA_ERROR_STATUS;
struct _WHEA_GENERIC_PROCESSOR_ERROR;
struct _WHEA_MEMORY_ERROR;
struct _WHEA_NMI_ERROR;
struct _WHEA_PCIEXPRESS_ERROR;
struct _WHEA_PCIX_BUS_ERROR;
struct _WHEA_PCIX_BUS_VALIDATION_BITS;
struct _WHEA_PCIX_DEVICE_ERROR;
struct _WHEA_PCIX_DEV_VALIDATION_BITS;
struct _WHEA_PERSISTENCE_INFO;

union _LARGE_INTEGER;
union _POWER_STATE;
union _SLIST_HEADER;
union _ULARGE_INTEGER;

enum BUS_QUERY_ID_TYPE;
enum DEVICE_TEXT_TYPE;
enum PCI_EXPRESS_DEVICE_TYPE;
enum POWER_ACTION;
enum _DEVICE_POWER_STATE;
enum _DEVICE_RELATION_TYPE;
enum _DEVICE_USAGE_NOTIFICATION_TYPE;
enum _EVENT_TYPE;
enum _FILE_INFORMATION_CLASS;
enum _FSINFOCLASS;
enum _INTERFACE_TYPE;
enum _IO_ALLOCATION_ACTION;
enum _IRQ_DEVICE_POLICY;
enum _IRQ_PRIORITY;
enum _KSPIN_LOCK_QUEUE_NUMBER;
enum _MEMORY_CACHING_TYPE_ORIG;
enum _POOL_TYPE;
enum _POWER_STATE_TYPE;
enum _REG_NOTIFY_CLASS;
enum _SECURITY_IMPERSONATION_LEVEL;
enum _SYSTEM_POWER_STATE;
enum _WHEA_ERROR_SEVERITY;
enum _WHEA_ERROR_SOURCE_TYPE;
enum _WHEA_ERROR_STATUS_FORMAT;
enum _WHEA_ERROR_TYPE;

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
    ULONG IoApicIntiBase[64];
};

typedef struct LIST_ENTRY32 {
    ULONG Flink;
    ULONG Blink;
};

typedef struct LIST_ENTRY64 {
    ULONG64 Flink;
    ULONG64 Blink;
};

typedef struct _ACCESS_STATE {
    struct _LUID OperationID;
    UCHAR SecurityEvaluated;
    UCHAR GenerateAudit;
    UCHAR GenerateOnClose;
    UCHAR PrivilegesAllocated;
    ULONG Flags;
    ULONG RemainingDesiredAccess;
    ULONG PreviouslyGrantedAccess;
    ULONG OriginalDesiredAccess;
    struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext;
    PVOID SecurityDescriptor;
    PVOID AuxData;
    union {
        struct _INITIAL_PRIVILEGE_SET InitialPrivilegeSet;
        struct _PRIVILEGE_SET PrivilegeSet;
    } Privileges;
    UCHAR AuditPrivileges;
    struct _UNICODE_STRING ObjectName;
    struct _UNICODE_STRING ObjectTypeName;
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
    UCHAR LegacyAdapter;
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
            struct {
                USHORT Reserved;
                USHORT MessageCount;
                ULONG Vector;
                ULONG Affinity;
            } Raw;
            struct {
                ULONG Level;
                ULONG Vector;
                ULONG Affinity;
            } Translated;
        } MessageInterrupt;
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
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length40;
        } Memory40;
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length48;
        } Memory48;
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length64;
        } Memory64;
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

typedef struct _COMPRESSED_DATA_INFO {
};

typedef struct _CONTROLLER_OBJECT {
    SHORT Type;
    SHORT Size;
    PVOID ControllerExtension;
    struct _KDEVICE_QUEUE DeviceWaitQueue;
    ULONG Spare1;
    union _LARGE_INTEGER Spare2;
};

typedef struct _DESCRIPTION_HEADER {
    ULONG Signature;
    ULONG Length;
    UCHAR Revision;
    UCHAR Checksum;
    CHAR OEMID[6];
    CHAR OEMTableID[8];
    ULONG OEMRevision;
    CHAR CreatorID[4];
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
    UCHAR Abandoned;
    UCHAR Absolute;
    UCHAR NpxIrql;
    UCHAR Signalling;
    UCHAR Size;
    UCHAR Hand;
    UCHAR Inserted;
    UCHAR DebugActive;
    UCHAR DpcActive;
    LONG Lock;
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

typedef struct _ERESOURCE {
    struct _LIST_ENTRY SystemResourcesList;
    struct _OWNER_ENTRY *OwnerTable;
    SHORT ActiveCount;
    USHORT Flag;
    struct _KSEMAPHORE *SharedWaiters;
    struct _KEVENT *ExclusiveWaiters;
    struct _OWNER_ENTRY OwnerEntry;
    ULONG ActiveEntries;
    ULONG ContentionCount;
    ULONG NumberOfSharedWaiters;
    ULONG NumberOfExclusiveWaiters;
    PVOID Address;
    ULONG CreatorBackTraceIndex;
    ULONG SpinLock;
};

typedef struct _ETHREAD {
};

typedef struct _EVENT_DATA_DESCRIPTOR {
    ULONG64 Ptr;
    ULONG Size;
    ULONG Reserved;
};

typedef struct _EVENT_DESCRIPTOR {
    USHORT Id;
    UCHAR Version;
    UCHAR Channel;
    UCHAR Level;
    UCHAR Opcode;
    USHORT Task;
    ULONG64 Keyword;
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
    ULONG SizeOfFastIoDispatch;
    PUCHAR FastIoCheckIfPossible;
    PUCHAR FastIoRead;
    PUCHAR FastIoWrite;
    PUCHAR FastIoQueryBasicInfo;
    PUCHAR FastIoQueryStandardInfo;
    PUCHAR FastIoLock;
    PUCHAR FastIoUnlockSingle;
    PUCHAR FastIoUnlockAll;
    PUCHAR FastIoUnlockAllByKey;
    PUCHAR FastIoDeviceControl;
    PVOID AcquireFileForNtCreateSection;
    PVOID ReleaseFileForNtCreateSection;
    PVOID FastIoDetachDevice;
    PUCHAR FastIoQueryNetworkOpenInfo;
    PLONG AcquireForModWrite;
    PUCHAR MdlRead;
    PUCHAR MdlReadComplete;
    PUCHAR PrepareMdlWrite;
    PUCHAR MdlWriteComplete;
    PUCHAR FastIoReadCompressed;
    PUCHAR FastIoWriteCompressed;
    PUCHAR MdlReadCompleteCompressed;
    PUCHAR MdlWriteCompleteCompressed;
    PUCHAR FastIoQueryOpen;
    PLONG ReleaseForModWrite;
    PLONG AcquireForCcFlush;
    PLONG ReleaseForCcFlush;
};

typedef struct _FAST_MUTEX {
    LONG Count;
    struct _KTHREAD *Owner;
    ULONG Contention;
    struct _KEVENT Gate;
    ULONG OldIrql;
};

typedef struct _FILE_BASIC_INFORMATION {
    union _LARGE_INTEGER CreationTime;
    union _LARGE_INTEGER LastAccessTime;
    union _LARGE_INTEGER LastWriteTime;
    union _LARGE_INTEGER ChangeTime;
    ULONG FileAttributes;
};

typedef struct _FILE_GET_QUOTA_INFORMATION {
};

typedef struct _FILE_NETWORK_OPEN_INFORMATION {
    union _LARGE_INTEGER CreationTime;
    union _LARGE_INTEGER LastAccessTime;
    union _LARGE_INTEGER LastWriteTime;
    union _LARGE_INTEGER ChangeTime;
    union _LARGE_INTEGER AllocationSize;
    union _LARGE_INTEGER EndOfFile;
    ULONG FileAttributes;
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
    ULONG IrpListLock;
    struct _LIST_ENTRY IrpList;
    PVOID FileObjectExtension;
};

typedef struct _FILE_STANDARD_INFORMATION {
    union _LARGE_INTEGER AllocationSize;
    union _LARGE_INTEGER EndOfFile;
    ULONG NumberOfLinks;
    UCHAR DeletePending;
    UCHAR Directory;
};

typedef struct _GENERAL_LOOKASIDE {
    union _SLIST_HEADER ListHead;
    struct _SINGLE_LIST_ENTRY SingleListHead;
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
    PVOID *AllocateEx;
    PVOID *Allocate;
    PVOID FreeEx;
    PVOID Free;
    struct _LIST_ENTRY ListEntry;
    ULONG LastTotalAllocates;
    ULONG LastAllocateMisses;
    ULONG LastAllocateHits;
    ULONG Future[2];
};

typedef struct _GENERAL_LOOKASIDE_POOL {
    union _SLIST_HEADER ListHead;
    struct _SINGLE_LIST_ENTRY SingleListHead;
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
    PVOID *AllocateEx;
    PVOID *Allocate;
    PVOID FreeEx;
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
    UCHAR AccessSize;
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

typedef struct _INITIAL_PRIVILEGE_SET {
    ULONG PrivilegeCount;
    ULONG Control;
    struct _LUID_AND_ATTRIBUTES Privilege[3];
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
            enum _IRQ_DEVICE_POLICY AffinityPolicy;
            enum _IRQ_PRIORITY PriorityPolicy;
            ULONG TargetedProcessors;
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
        struct {
            ULONG Length40;
            ULONG Alignment40;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Memory40;
        struct {
            ULONG Length48;
            ULONG Alignment48;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Memory48;
        struct {
            ULONG Length64;
            ULONG Alignment64;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Memory64;
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
    struct _SECURITY_QUALITY_OF_SERVICE *SecurityQos;
    struct _ACCESS_STATE *AccessState;
    ULONG DesiredAccess;
    ULONG FullCreateOptions;
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
            struct _UNICODE_STRING *FileName;
            enum _FILE_INFORMATION_CLASS FileInformationClass;
            ULONG FileIndex;
        } QueryDirectory;
        struct {
            ULONG Length;
            ULONG CompletionFilter;
        } NotifyDirectory;
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
            PVOID EaList;
            ULONG EaListLength;
            ULONG EaIndex;
        } QueryEa;
        struct {
            ULONG Length;
        } SetEa;
        struct {
            ULONG Length;
            enum _FSINFOCLASS FsInformationClass;
        } QueryVolume;
        struct {
            ULONG Length;
            enum _FSINFOCLASS FsInformationClass;
        } SetVolume;
        struct {
            ULONG OutputBufferLength;
            ULONG InputBufferLength;
            ULONG FsControlCode;
            PVOID Type3InputBuffer;
        } FileSystemControl;
        struct {
            union _LARGE_INTEGER *Length;
            ULONG Key;
            union _LARGE_INTEGER ByteOffset;
        } LockControl;
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
            ULONG Length;
            PVOID StartSid;
            struct _FILE_GET_QUOTA_INFORMATION *SidList;
            ULONG SidListLength;
        } QueryQuota;
        struct {
            ULONG Length;
        } SetQuota;
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
            struct _SYSTEM_POWER_STATE_CONTEXT SystemPowerStateContext;
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
            PVOID IssuingProcess;
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
    UCHAR Type;
    UCHAR SpareByte0;
    UCHAR Size;
    UCHAR SpareByte1;
    ULONG SpareLong0;
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
    UCHAR Type;
    UCHAR Importance;
    USHORT Number;
    struct _LIST_ENTRY DpcListEntry;
    PVOID DeferredRoutine;
    PVOID DeferredContext;
    PVOID SystemArgument1;
    PVOID SystemArgument2;
    PVOID DpcData;
};

typedef struct _KEVENT {
    struct _DISPATCHER_HEADER Header;
};

typedef struct _KPROCESS {
};

typedef struct _KSEMAPHORE {
    struct _DISPATCHER_HEADER Header;
    LONG Limit;
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

typedef struct _LOOKASIDE_LIST_EX {
    struct _GENERAL_LOOKASIDE_POOL L;
};

typedef struct _LUID {
    ULONG LowPart;
    LONG HighPart;
};

typedef struct _LUID_AND_ATTRIBUTES {
    struct _LUID Luid;
    ULONG Attributes;
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

typedef struct _OWNER_ENTRY {
    ULONG OwnerThread;
    LONG OwnerCount;
    ULONG TableSize;
};

typedef struct _PAGED_LOOKASIDE_LIST {
    struct _GENERAL_LOOKASIDE L;
    struct _FAST_MUTEX Lock__ObsoleteButDoNotDelete;
};

typedef struct _PCIE_DEVICE_ID {
    USHORT VendorID;
    USHORT DeviceID;
    ULONG ClassCode : 24;
    ULONG FunctionNumber : 8;
    ULONG DeviceNumber : 8;
    ULONG Segment : 16;
    ULONG PrimaryBusNumber : 8;
    ULONG SecondaryBusNumber : 8;
    ULONG Reserved1 : 2;
    ULONG SlotNumber : 14;
    ULONG Reserved2 : 8;
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

typedef struct _PRIVILEGE_SET {
    ULONG PrivilegeCount;
    ULONG Control;
    struct _LUID_AND_ATTRIBUTES Privilege[1];
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

typedef struct _SECURITY_QUALITY_OF_SERVICE {
    ULONG Length;
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
    UCHAR ContextTrackingMode;
    UCHAR EffectiveOnly;
};

typedef struct _SECURITY_SUBJECT_CONTEXT {
    PVOID ClientToken;
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
    PVOID PrimaryToken;
    PVOID ProcessAuditId;
};

typedef struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY *Next;
};

typedef struct _STRING {
    USHORT Length;
    USHORT MaximumLength;
    PCHAR Buffer;
};

typedef struct _SYSTEM_POWER_STATE_CONTEXT {
    ULONG Reserved1 : 8;
    ULONG TargetSystemState : 4;
    ULONG EffectiveSystemState : 4;
    ULONG CurrentSystemState : 4;
    ULONG IgnoreHibernationPath : 1;
    ULONG Reserved2 : 11;
    ULONG ContextAsUlong;
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
    WCHAR VolumeLabel[32];
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

typedef struct _WHEA_ERROR_PACKET {
    ULONG Signature;
    ULONG Flags;
    ULONG64 Size;
    ULONG64 RawDataLength;
    ULONG64 Context;
    enum _WHEA_ERROR_TYPE ErrorType;
    enum _WHEA_ERROR_SEVERITY ErrorSeverity;
    ULONG ErrorSourceId;
    enum _WHEA_ERROR_SOURCE_TYPE ErrorSourceType;
    ULONG Reserved1;
    ULONG Version;
    ULONG64 Cpu;
    union {
        struct _WHEA_GENERIC_PROCESSOR_ERROR ProcessorError;
        struct _WHEA_MEMORY_ERROR MemoryError;
        struct _WHEA_NMI_ERROR NmiError;
        struct _WHEA_PCIEXPRESS_ERROR PciExpressError;
        struct _WHEA_PCIX_BUS_ERROR PciXBusError;
        struct _WHEA_PCIX_DEVICE_ERROR PciXDeviceError;
    } u;
    enum _WHEA_ERROR_STATUS_FORMAT RawDataFormat;
    ULONG Reserved2;
    UCHAR RawData[1];
};

typedef struct _WHEA_ERROR_RECORD {
    struct _WHEA_ERROR_RECORD_HEADER Header;
    struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR SectionDescriptor[1];
};

typedef struct _WHEA_ERROR_RECORD_HEADER {
    ULONG Signature;
    USHORT Revision;
    USHORT Reserved1;
    USHORT Reserved2;
    USHORT SectionCount;
    enum _WHEA_ERROR_SEVERITY Severity;
    ULONG ValidationBits;
    ULONG Length;
    union _LARGE_INTEGER Timestamp;
    struct _GUID PlatformId;
    struct _GUID PartitionId;
    struct _GUID CreatorId;
    struct _GUID NotifyType;
    ULONG64 RecordId;
    ULONG Flags;
    struct _WHEA_PERSISTENCE_INFO PersistenceInfo;
    UCHAR Reserved3[12];
};

typedef struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR {
    ULONG SectionOffset;
    ULONG SectionLength;
    USHORT Revision;
    UCHAR ValidationBits;
    UCHAR Reserved;
    ULONG Flags;
    struct _GUID SectionType;
    struct _GUID FRUId;
    enum _WHEA_ERROR_SEVERITY SectionSeverity;
    CHAR FRUText[20];
};

typedef struct _WHEA_ERROR_STATUS {
    ULONG64 Reserved1 : 8;
    ULONG64 ErrorType : 8;
    ULONG64 Address : 1;
    ULONG64 Control : 1;
    ULONG64 Data : 1;
    ULONG64 Responder : 1;
    ULONG64 Requester : 1;
    ULONG64 FirstError : 1;
    ULONG64 Overflow : 1;
    ULONG64 Reserved2 : 41;
};

typedef struct _WHEA_GENERIC_PROCESSOR_ERROR {
    ULONG64 ValidBits;
    UCHAR ProcessorType;
    UCHAR InstructionSet;
    UCHAR ErrorType;
    UCHAR Operation;
    UCHAR Flags;
    UCHAR Level;
    USHORT Reserved;
    ULONG64 CPUVersion;
    UCHAR CPUBrandString[128];
    ULONG64 ProcessorId;
    ULONG64 TargetAddress;
    ULONG64 RequestorId;
    ULONG64 ResponderId;
    ULONG64 InstructionPointer;
};

typedef struct _WHEA_MEMORY_ERROR {
    ULONG64 ValidationBits;
    struct _WHEA_ERROR_STATUS ErrorStatus;
    ULONG64 PhysicalAddress;
    ULONG64 PhysicalAddressMask;
    USHORT Node;
    USHORT Card;
    USHORT Module;
    USHORT Bank;
    USHORT Device;
    USHORT Row;
    USHORT Column;
    USHORT BitPosition;
    ULONG64 RequestorId;
    ULONG64 ResponderId;
    ULONG64 TargetId;
    UCHAR ErrorType;
};

typedef struct _WHEA_NMI_ERROR {
    UCHAR Data[8];
};

typedef struct _WHEA_PCIEXPRESS_ERROR {
    ULONG64 ValidationBits;
    enum PCI_EXPRESS_DEVICE_TYPE PortType;
    ULONG Version;
    ULONG CommandStatus;
    ULONG Reserved;
    struct _PCIE_DEVICE_ID DeviceId;
    ULONG64 DeviceSN;
    ULONG BridgeCtrlSts;
    UCHAR ExpressCapability[60];
    UCHAR AerInfo[96];
};

typedef struct _WHEA_PCIX_BUS_ERROR {
    struct _WHEA_PCIX_BUS_VALIDATION_BITS ValidationBits;
    struct _WHEA_ERROR_STATUS ErrorStatus;
    USHORT ErrorType;
    USHORT BusId;
    ULONG Reserved;
    ULONG64 BusAddress;
    ULONG64 BusData;
    ULONG64 BusCommand;
    ULONG64 BusRequestorId;
    ULONG64 BusCompleterId;
    ULONG64 TargetId;
};

typedef struct _WHEA_PCIX_BUS_VALIDATION_BITS {
    ULONG64 ErrorStatusValid : 1;
    ULONG64 ErrorTypeValid : 1;
    ULONG64 BusIdValid : 1;
    ULONG64 BusAddressValid : 1;
    ULONG64 BusDataValid : 1;
    ULONG64 CommandValid : 1;
    ULONG64 RequestorIdValid : 1;
    ULONG64 CompleterIdValid : 1;
    ULONG64 TargetIdValid : 1;
    ULONG64 Reserved : 55;
};

typedef struct _WHEA_PCIX_DEVICE_ERROR {
    struct _WHEA_PCIX_DEV_VALIDATION_BITS ValidationBits;
    struct _WHEA_ERROR_STATUS ErrorStatus;
    UCHAR IdInfo[16];
    ULONG MemoryNumber;
    ULONG IoNumber;
    UCHAR RegisterDataPairs[64];
};

typedef struct _WHEA_PCIX_DEV_VALIDATION_BITS {
    ULONG64 ErrorStatusValid : 1;
    ULONG64 IdInfoValid : 1;
    ULONG64 MemoryNumberValid : 1;
    ULONG64 IoNumberValid : 1;
    ULONG64 RegisterDataPairValid : 1;
    ULONG64 Reserved : 59;
};

typedef struct _WHEA_PERSISTENCE_INFO {
    ULONG64 Identifier : 16;
    ULONG64 Length : 24;
    ULONG64 Reserved : 6;
    ULONG64 Attributes : 2;
    ULONG64 Signature : 16;
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

typedef enum PCI_EXPRESS_DEVICE_TYPE {
    PciExpressEndpoint = 0,
    PciExpressLegacyEndpoint = 1,
    PciExpressRootPort = 4,
    PciExpressUpstreamSwitchPort = 5,
    PciExpressDownstreamSwitchPort = 6,
    PciExpressToPciXBridge = 7,
    PciXToExpressBridge = 8,
    PciExpressRootComplexIntegratedEndpoint = 9,
    PciExpressRootComplexEventCollector = 10
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

typedef enum _EVENT_TYPE {
    NotificationEvent = 0,
    SynchronizationEvent = 1
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
    FileIoCompletionNotificationInformation = 41,
    FileIoStatusBlockRangeInformation = 42,
    FileIoPriorityHintInformation = 43,
    FileSfioReserveInformation = 44,
    FileSfioVolumeInformation = 45,
    FileHardLinkInformation = 46,
    FileProcessIdsUsingFileInformation = 47,
    FileNormalizedNameInformation = 48,
    FileNetworkPhysicalNameInformation = 49,
    FileMaximumInformation = 50
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
    FileFsVolumeFlagsInformation = 10,
    FileFsMaximumInformation = 11
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

typedef enum _IRQ_DEVICE_POLICY {
    IrqPolicyMachineDefault = 0,
    IrqPolicyAllCloseProcessors = 1,
    IrqPolicyOneCloseProcessor = 2,
    IrqPolicyAllProcessorsInMachine = 3,
    IrqPolicySpecifiedProcessors = 4,
    IrqPolicySpreadMessagesAcrossAllProcessors = 5
};

typedef enum _IRQ_PRIORITY {
    IrqPriorityUndefined = 0,
    IrqPriorityLow = 1,
    IrqPriorityNormal = 2,
    IrqPriorityHigh = 3
};

typedef enum _KSPIN_LOCK_QUEUE_NUMBER {
    LockQueueDispatcherLock = 0,
    LockQueueExpansionLock = 1,
    LockQueuePfnLock = 2,
    LockQueueSystemSpaceLock = 3,
    LockQueueVacbLock = 4,
    LockQueueMasterLock = 5,
    LockQueueNonPagedPoolLock = 6,
    LockQueueIoCancelLock = 7,
    LockQueueWorkQueueLock = 8,
    LockQueueIoVpbLock = 9,
    LockQueueIoDatabaseLock = 10,
    LockQueueIoCompletionLock = 11,
    LockQueueNtfsStructLock = 12,
    LockQueueAfdWorkQueueLock = 13,
    LockQueueBcbLock = 14,
    LockQueueMmNonPagedPoolLock = 15,
    LockQueueUnusedSpare16 = 16,
    LockQueueTimerTableLock = 17,
    LockQueueMaximumLock = 33
};

typedef enum _MEMORY_CACHING_TYPE_ORIG {
    MmFrameBufferCached = 2
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

typedef enum _REG_NOTIFY_CLASS {
    RegNtDeleteKey = 0,
    RegNtPreDeleteKey = 0,
    RegNtSetValueKey = 1,
    RegNtPreSetValueKey = 1,
    RegNtDeleteValueKey = 2,
    RegNtPreDeleteValueKey = 2,
    RegNtSetInformationKey = 3,
    RegNtPreSetInformationKey = 3,
    RegNtRenameKey = 4,
    RegNtPreRenameKey = 4,
    RegNtEnumerateKey = 5,
    RegNtPreEnumerateKey = 5,
    RegNtEnumerateValueKey = 6,
    RegNtPreEnumerateValueKey = 6,
    RegNtQueryKey = 7,
    RegNtPreQueryKey = 7,
    RegNtQueryValueKey = 8,
    RegNtPreQueryValueKey = 8,
    RegNtQueryMultipleValueKey = 9,
    RegNtPreQueryMultipleValueKey = 9,
    RegNtPreCreateKey = 10,
    RegNtPostCreateKey = 11,
    RegNtPreOpenKey = 12,
    RegNtPostOpenKey = 13,
    RegNtKeyHandleClose = 14,
    RegNtPreKeyHandleClose = 14,
    RegNtPostDeleteKey = 15,
    RegNtPostSetValueKey = 16,
    RegNtPostDeleteValueKey = 17,
    RegNtPostSetInformationKey = 18,
    RegNtPostRenameKey = 19,
    RegNtPostEnumerateKey = 20,
    RegNtPostEnumerateValueKey = 21,
    RegNtPostQueryKey = 22,
    RegNtPostQueryValueKey = 23,
    RegNtPostQueryMultipleValueKey = 24,
    RegNtPostKeyHandleClose = 25,
    RegNtPreCreateKeyEx = 26,
    RegNtPostCreateKeyEx = 27,
    RegNtPreOpenKeyEx = 28,
    RegNtPostOpenKeyEx = 29,
    RegNtPreFlushKey = 30,
    RegNtPostFlushKey = 31,
    RegNtPreLoadKey = 32,
    RegNtPostLoadKey = 33,
    RegNtPreUnLoadKey = 34,
    RegNtPostUnLoadKey = 35,
    RegNtPreQueryKeySecurity = 36,
    RegNtPostQueryKeySecurity = 37,
    RegNtPreSetKeySecurity = 38,
    RegNtPostSetKeySecurity = 39,
    RegNtCallbackObjectContextCleanup = 40,
    MaxRegNtNotifyClass = 41
};

typedef enum _SECURITY_IMPERSONATION_LEVEL {
    SecurityAnonymous = 0,
    SecurityIdentification = 1,
    SecurityImpersonation = 2,
    SecurityDelegation = 3
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

typedef enum _WHEA_ERROR_SEVERITY {
    WheaErrSevRecoverable = 0,
    WheaErrSevFatal = 1,
    WheaErrSevCorrected = 2,
    WheaErrSevNone = 3
};

typedef enum _WHEA_ERROR_SOURCE_TYPE {
    WheaErrSrcTypeMCE = 0,
    WheaErrSrcTypeCMC = 1,
    WheaErrSrcTypeCPE = 2,
    WheaErrSrcTypeNMI = 3,
    WheaErrSrcTypePCIe = 4,
    WheaErrSrcTypeOther = 5,
    WheaErrSrcTypeMax = 6
};

typedef enum _WHEA_ERROR_STATUS_FORMAT {
    WheaErrorStatusFormatIPFSalRecord = 0,
    WheaErrorStatusFormatIA32MCA = 1,
    WheaErrorStatusFormatEM64TMCA = 2,
    WheaErrorStatusFormatAMD64MCA = 3,
    WheaErrorStatusFormatPCIExpress = 4,
    WheaErrorStatusFormatNMIPort = 5,
    WheaErrorStatusFormatOther = 6,
    WheaErrorStatusFormatMax = 7
};

typedef enum _WHEA_ERROR_TYPE {
    WheaErrTypeProcessor = 0,
    WheaErrTypeMemory = 1,
    WheaErrTypePCIExpress = 2,
    WheaErrTypeNMI = 3,
    WheaErrTypePCIXBus = 4,
    WheaErrTypePCIXDevice = 5
};

ArbMmConfigRange;
BadIOAddrList;
CmosRangeHandlersStdPCAT;
CurTiledCr3LowPart;
EisaNMIMsg;
False;
GUID_ACPI_CMOS_INTERFACE_STANDARD;
GUID_EM_DISABLE_MSI_RULE;
GUID_FDMA_INTERFACE_PRIVATE;
GUID_HAL_CALLBACK_ACPI_CREATOR_REVISION;
GUID_HAL_CALLBACK_ACPI_FADT_BOOTARCH;
GUID_HAL_CALLBACK_ACPI_OEM_ID;
GUID_HAL_CALLBACK_ACPI_OEM_REVISION;
GUID_HAL_CALLBACK_ACPI_OEM_TABLE_ID;
GUID_HAL_CALLBACK_ACPI_REVISION;
GUID_ISA_FDMA_INTERFACE;
GUID_TARGET_DEVICE_QUERY_REMOVE;
HAL_ETW_EVENT_HPET_INTERRUPT_ERROR;
HAL_ETW_EVENT_HPET_UNSUPPORTED_TABLE;
HAL_ETW_EVENT_HPET_UNSUPPORTED_TIMER;
HAL_ETW_PROVIDER;
HalAcpiDispatchTable;
HalDispatchTable;
HalEfiMissedMappingsCount;
HalEfiRuntimeServicesBlock;
HalEfiRuntimeServicesTable;
HalEfiSetVirtualAddressMapStatus;
HalEfiToNtStatusMappings;
HalFirmwareTypeEfi;
HalHardwareIdString;
HalName;
HalPrivateDispatchTable;
Halp1stPhysicalPageVaddr;
Halp8259Counts;
HalpAccountingLock;
HalpAcpiCountDown;
HalpAcpiCountReset;
HalpAcpiFacsMapping;
HalpAcpiFlags;
HalpAcpiInterruptMasked;
HalpAcpiInterruptRunning;
HalpAcpiMultiNode;
HalpAcpiNvsData;
HalpAcpiSrat;
HalpAcpiTableCacheList;
HalpAcpiTableCacheLock;
HalpAcpiTableMatchList;
HalpAcpiTablePointers;
HalpActiveProcessors;
HalpAddressUsageList;
HalpAllocationDescriptorArray;
HalpApicErrorLog;
HalpApicMaxCluster;
HalpApicTable;
HalpApicUsage;
HalpAssertFailedOnce;
HalpAuthenticAMD;
HalpAvoidMmConfigAccessMethod;
HalpBarrier;
HalpBroadcastContext;
HalpBroadcastFunction;
HalpBroadcastLock;
HalpBroadcastTargets;
HalpBroken440BX;
HalpBrokenAcpiTimer;
HalpBrokenPmTimerClockIncrement;
HalpBrokenPmTimerFrequency;
HalpBrokenPmTimerOldTime;
HalpBrokenPmTimerSkew;
HalpBusType;
HalpCMCEnabled;
HalpCR3Root;
HalpCallbackRecord;
HalpChipHackCount;
HalpChipHacksTable;
HalpClearMachineCheckStatusRegistersOnInit;
HalpClockInterrupt;
HalpClockInterruptStub;
HalpClockMcaQueueDpc;
HalpClockSetMSRate;
HalpClockSource;
HalpClockWork;
HalpCmosCenturyOffset;
HalpComIoSpace;
HalpComPortIrqMapping;
HalpCr4Exists;
HalpCriticalClockSourceCount;
HalpCriticalClockSources;
HalpCurrentClockRateAdjustment;
HalpCurrentClockRateIn100ns;
HalpCurrentRTCRegisterA;
HalpCurrentRateIndex;
HalpCurrentTimePort;
HalpDebugPortTable;
HalpDefaultApicDestinationModeMask;
HalpDefaultPcIoSpace;
HalpDevLevel;
HalpDevPolarity;
HalpDiagnosticEventHandle;
HalpDiagnosticEventsRegistered;
HalpDisableHibernate;
HalpDisableNvsSaveRestore;
HalpDisableS5Hibernation;
HalpDmaAdapterList;
HalpDmaAdapterListLock;
HalpDmaChannelState;
HalpDmaOperations;
HalpDoingCrashDump;
HalpDontConsumeLowMemory;
HalpDontStartProcessors;
HalpDriverObject;
HalpEisaAdapter;
HalpEisaControlBase;
HalpEisaDma;
HalpEisaELCR;
HalpEisaIoSpace;
HalpEisaIrqIgnore;
HalpEisaIrqMask;
HalpEnableIrqlAudit;
HalpEnlightenment;
HalpFDMAAvail;
HalpFDMAChecked;
HalpFDMAInterface;
HalpFakePciBusData;
HalpFakePciBusHandler;
HalpFeatureBits;
HalpFixedAcpiDescTable;
HalpForceApicPhysicalDestinationMode;
HalpForceClusteredApicMode;
HalpFrameBufferBase;
HalpGenuineIntel;
HalpGetInfoFromACPI;
HalpGlobal8259Mask;
HalpGlobalVolatile;
HalpHardwareTimeRollover;
HalpHeapStart;
HalpHiberInProgress;
HalpHiberProcState;
HalpHpetAddress;
HalpHpetClockTable;
HalpHpetClockTimerIrq;
HalpHpetCurrentProfileComparator;
HalpHpetCurrentProfileTickCount;
HalpHpetCurrentTime;
HalpHpetFrequency;
HalpHpetHalfRollover;
HalpHpetInitializationStatus;
HalpHpetInitialized;
HalpHpetLegacyInterruptCapable;
HalpHpetMemoryUsage;
HalpHpetMinimumOneShotTickCount;
HalpHpetPeriod;
HalpHpetPreviousTimeBias;
HalpHpetProfileTimerIrq;
HalpHpetRolloverTimerIrq;
HalpHpetTimeBias;
HalpHpetTimerCount;
HalpHpetTimerState;
HalpHybridApicPhysicalTargets;
HalpIDTUsage;
HalpIDTUsageFlags;
HalpIOApicVersion;
HalpIdtExclusionList;
HalpImcrIoSpace;
HalpInitLevel;
HalpInitialRtcClockRateIndex;
HalpIntDestMap;
HalpIntiInfo;
HalpInvalidAcpiTable;
HalpIoApicId;
HalpIoCompatibleRangeList0;
HalpIoCompatibleRangeList1;
HalpIoControlBase;
HalpIoMemoryBase;
HalpIpiClock;
HalpIpiPhysicalApicId;
HalpIpiPhysicalTargetMask;
HalpIpiPhysicalTargets;
HalpIpiRoutine;
HalpIpiTargetLookup;
HalpIpiTargetMask;
HalpLastTickIncrement;
HalpLocalApicErrorCount;
HalpLocalApicErrorLock;
HalpLocalNmiSources;
HalpLowMemoryMap;
HalpLowMemoryMapBitmapBuffer;
HalpLowStub;
HalpLowStubPhysicalAddress;
HalpMachineType;
HalpMaxApicInti;
HalpMaxHotPlugMemoryAddress;
HalpMaxPciBus;
HalpMaxProcs;
HalpMaxProcsPerCluster;
HalpMcUpdateLockFunc;
HalpMcUpdateMicrocodeFunc;
HalpMcUpdatePostUpdateFunc;
HalpMcUpdateUnlockFunc;
HalpMcaBlockErrorClearing;
HalpMcaInfo;
HalpMcaInterfaceLocked;
HalpMcaScanTime;
HalpMinPciBus;
HalpMotherboardState;
HalpMoveMemory;
HalpMpInfoTable;
HalpMsiOverrideFlags;
HalpMsiSupportDetermined;
HalpMsiSupported;
HalpNMIDumpFlag;
HalpNewAdapter;
HalpNextRateIndex;
HalpNmiInfo;
HalpNoMCABugCheck;
HalpNumaConfig;
HalpNumaLastRangeIndex;
HalpNumaMemoryNode;
HalpNumaMemoryRanges;
HalpNumberOfProcessorsInCluster;
HalpNvsVirtualAddress;
HalpOrionOPB;
HalpOutstandingScatterGatherCount;
HalpOwnedDisplayBeforeSleep;
HalpPCIConfigAccessMethod;
HalpPCIConfigLock;
HalpPCIConfigReadHandlers;
HalpPCIConfigSpaceInitialized;
HalpPCIConfigWriteHandlers;
HalpPICINTToVector;
HalpPciAmdK8SpecialLocationHack;
HalpPciDebuggingDevice;
HalpPciIrqMask;
HalpPciLockSettings;
HalpPciMmConfigBaseAddressList;
HalpPciMmConfigReadHandlers;
HalpPciMmConfigVirtualAddress;
HalpPciMmConfigWriteHandlers;
HalpPendingRate;
HalpPerfInterruptHandler;
HalpPhase0ClockInterruptCount;
HalpPhysicalMemoryCheckSums;
HalpPhysicalMemoryMayAppearAbove4GB;
HalpPicStateIntact;
HalpPicVectorFlags;
HalpPicVectorRedirect;
HalpPiix4;
HalpPiix4BusNumber;
HalpPiix4DevActB;
HalpPiix4SlotNumber;
HalpPmTimerCurrentTime;
HalpPmTimerDoubleFrequency;
HalpPmTimerSleepModeEnabled;
HalpPmTimerSleepModeLock;
HalpPmTimerTimeBias;
HalpProc0TSCHz;
HalpProcLocalApicTable;
HalpProcessedACPIPhase0;
HalpProcessorPCR;
HalpProcessorsNotHalted;
HalpProfileRunning;
HalpProfileTimerHandler;
HalpProfileTimerSource;
HalpPteForFlush;
HalpQueryPerformanceCounterSource;
HalpRateCorrection;
HalpReadMiscData;
HalpRebootNow;
HalpResumeStructuresAllocated;
HalpRtcRegA;
HalpRtcRegB;
HalpRtcTimeIncrements;
HalpScaleWithPmTimer;
HalpSerialLen;
HalpSerialNumber;
HalpShutdownContext;
HalpSimpleBootFlagTable;
HalpSleepContext;
HalpSleepPage16Lock;
HalpSleepPageLock;
HalpSleepSync;
HalpStallExecutionProcessorSource;
HalpStaticIntAffinity;
HalpStaticProcLocalApicTable;
HalpSystemHardwareLock;
HalpSzBreak;
HalpSzClockLevel;
HalpSzDisallowMmConfig;
HalpSzDisallowMsi;
HalpSzDontConsumeLowMemory;
HalpSzForceClusterMode;
HalpSzForceMSI;
HalpSzInterruptAffinity;
HalpSzMaxApicCluster;
HalpSzOneCpu;
HalpSzPciLock;
HalpSzSerialNumber;
HalpSzSystem;
HalpSzTimerRes;
HalpSzUse8254;
HalpSzUsePhysicalApic;
HalpTemporaryLogicalProcessorToApicIdMap;
HalpTiledCr3Addresses;
HalpTimeSourceInitializationComplete;
HalpTimerWatchdogEnabled;
HalpTimerWatchdogStorageOverflow;
HalpTotalReplayed;
HalpUseDbgPrint;
HalpUsedAllocDescriptors;
HalpVectorToIRQL;
HalpVerifierInUse;
HalpVirtAddrForFlush;
HalpWAETDeviceFlags;
HalpWakeVector;
HalpWakeupState;
HiberFreeCR3;
IoAdapterObjectType;
KdComPortInUse;
KdDebuggerEnabled;
KdDebuggerNotPresent;
KiBugCheckData;
LastKnownGood;
LessThan16Mb;
MasterAdapter24;
MasterAdapter32;
Mm64BitPhysicalAddress;
MsgMCEPending;
PCIDeref;
PciIrqRoutingInterface;
PciIsaIrq;
PmAcpiDispatchTable;
True;
UserSpecifiedCpuCount;
XmBitCount;
XmCmosAddress;
XmContext;
XmEmulatorInitialized;
XmGetPciData;
XmNumberPciBusses;
XmOpcodeControlTable1;
XmOpcodeControlTable2;
XmOpcodeFunctionTable;
XmOperandDecodeTable;
XmPCIConfigAddress;
XmPciBiosPresent;
XmSetPciData;
XmStatus;
_IMPORT_DESCRIPTOR_KDCOM;
_IMPORT_DESCRIPTOR_PSHED;
_IMPORT_DESCRIPTOR_ntoskrnl;
_NLG_Destination;
_NULL_IMPORT_DESCRIPTOR;
__fastflag;
__newclmap;
__newctype;
__newcumap;
__safe_se_handler_table;
__security_cookie;
_fltused;
_imp_ExiAcquireFastMutex;
_imp_ExiReleaseFastMutex;
_imp_IoAssignDriveLetters;
_imp_IoReadPartitionTable;
_imp_IoSetPartitionInformation;
_imp_IoWritePartitionTable;
_imp_IofCallDriver;
_imp_IofCompleteRequest;
_imp_KeUpdateRunTime;
_imp_Kei386EoiHelper;
_imp_KiAcquireSpinLock;
_imp_KiCheckForSListAddress;
_imp_KiReleaseSpinLock;
_imp_ObfDereferenceObject;
_imp_ObfReferenceObject;
_imp__DbgBreakPoint;
_imp__DbgPrint;
_imp__DbgPrintEx;
_imp__EmClientQueryRuleState;
_imp__EmpProviderRegister;
_imp__EtwEventEnabled;
_imp__EtwRegister;
_imp__EtwWrite;
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
_imp__IoAttachDeviceToDeviceStack;
_imp__IoBuildSynchronousFsdRequest;
_imp__IoCreateDevice;
_imp__IoCreateDriver;
_imp__IoDeleteDevice;
_imp__IoFreeMdl;
_imp__IoGetDeviceInterfaces;
_imp__IoGetDeviceObjectPointer;
_imp__IoGetStackLimits;
_imp__IoRegisterPlugPlayNotification;
_imp__IoReportDetectedDevice;
_imp__IoReportHalResourceUsage;
_imp__KdDebuggerEnabled;
_imp__KdDebuggerNotPresent;
_imp__KdRestore;
_imp__KeBugCheckEx;
_imp__KeEnterKernelDebugger;
_imp__KeFindConfigurationEntry;
_imp__KeFindConfigurationNextEntry;
_imp__KeInitializeDeviceQueue;
_imp__KeInitializeDpc;
_imp__KeInitializeEvent;
_imp__KeInitializeMutex;
_imp__KeInitializeTimerEx;
_imp__KeInsertDeviceQueue;
_imp__KeInsertQueueDpc;
_imp__KeProfileInterrupt;
_imp__KeQueryActiveProcessors;
_imp__KeQuerySystemTime;
_imp__KeRegisterBugCheckCallback;
_imp__KeRemoveDeviceQueue;
_imp__KeRevertToUserAffinityThread;
_imp__KeRevertToUserAffinityThreadEx;
_imp__KeSaveStateForHibernate;
_imp__KeSetEvent;
_imp__KeSetImportanceDpc;
_imp__KeSetProfileIrql;
_imp__KeSetSystemAffinityThread;
_imp__KeSetSystemAffinityThreadEx;
_imp__KeSetTargetProcessorDpc;
_imp__KeSetTimeIncrement;
_imp__KeSetTimerEx;
_imp__KeUpdateSystemTime;
_imp__KeWaitForSingleObject;
_imp__KiBugCheckData;
_imp__KiDeliverApc;
_imp__KiDispatchInterrupt;
_imp__KiIpiServiceRoutine;
_imp__Mm64BitPhysicalAddress;
_imp__MmAllocateContiguousMemory;
_imp__MmAllocateContiguousMemorySpecifyCache;
_imp__MmAllocateMappingAddress;
_imp__MmFreeContiguousMemory;
_imp__MmGetPhysicalAddress;
_imp__MmIsVerifierEnabled;
_imp__MmLockPagableDataSection;
_imp__MmLockPagableSectionByHandle;
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
_imp__PoSetFixedWakeSource;
_imp__PoSetHiberRange;
_imp__PoStartNextPowerIrp;
_imp__PsChargeProcessCpuCycles;
_imp__PsGetCurrentProcessId;
_imp__PshedRetrieveErrorInfo;
_imp__READ_REGISTER_ULONG;
_imp__RtlAreBitsClear;
_imp__RtlClearAllBits;
_imp__RtlClearBits;
_imp__RtlEqualString;
_imp__RtlFindClearBitsAndSet;
_imp__RtlFindFirstRunClear;
_imp__RtlFindLeastSignificantBit;
_imp__RtlFindNextForwardRunClear;
_imp__RtlInitString;
_imp__RtlInitUnicodeString;
_imp__RtlInitializeBitMap;
_imp__RtlIntegerToUnicodeString;
_imp__RtlMoveMemory;
_imp__RtlQueryRegistryValues;
_imp__RtlSetAllBits;
_imp__RtlSetBits;
_imp__RtlTestBit;
_imp__RtlTimeFieldsToTime;
_imp__RtlTimeToTimeFields;
_imp__RtlUnwind;
_imp__WRITE_REGISTER_UCHAR;
_imp__WRITE_REGISTER_ULONG;
_imp__WheaRegisterErrSrcInitializer;
_imp__WheaReportHwError;
_imp__ZwClose;
_imp__ZwCreateKey;
_imp__ZwDeleteValueKey;
_imp__ZwEnumerateValueKey;
_imp__ZwOpenKey;
_imp__ZwPowerInformation;
_imp__ZwQueryKey;
_imp__ZwQueryValueKey;
_imp__ZwSetValueKey;
_imp___alldvrm;
_imp___allmul;
_imp___allshl;
_imp___allshr;
_imp___aulldiv;
_imp___aulldvrm;
_imp___stricmp;
_imp___vsnwprintf;
_imp___wcsicmp;
_imp__atoi;
_imp__memcpy;
_imp__memset;
_imp__strncmp;
_imp__strstr;
_ldused;
_load_config_used;
_pctype;
_pwctype;
_wctype;
errno;
rgzApicNotVerified;
rgzBadApicVersion;
rgzBadDefault;
rgzBadHal;
rgzConfigurationData;
rgzEnableCMC;
rgzEnableMCA;
rgzEnableMCE;
rgzIdentifier;
rgzMPPTRCheck;
rgzMPSBadCheck;
rgzMPSBadSig;
rgzMultiFunctionAdapter;
rgzNoApic;
rgzNoApicTable;
rgzNoMCABugCheck;
rgzNoMPTable;
rgzNoMem;
rgzNoMpsTable;
rgzPCICardList;
rgzPCIIdentifier;
rgzRTCNotFound;
rgzReservedResources;
rgzSessionManager;
rgzSuspendCallbackName;
x86BiosBufferAllocated;
x86BiosFrameBuffer;
x86BiosInitialized;
x86BiosIoMemory;
x86BiosIoSpace;
x86BiosLowMemory;
x86BiosScratchMemory;
x86BiosTransferLength;
x86BiosTransferMemory;
KDCOM_NULL_THUNK_DATA;
PSHED_NULL_THUNK_DATA;
ntoskrnl_NULL_THUNK_DATA;

 ?? ::FNODOBFM::`string'();
 ?? ::NNGAKEGL::`string'();
 ?? ::OKHAJAOM::`string'();
 ?? ::PBOPGDP::`string'();
Abios_HApicErr_a();
Abios_HGeneric_a();
Abios_HPn_a();
Abios_HReboot_a();
Abios_HStub_a();
Abios_Hci_a();
Abios_Hcpic_a();
Abios_Hipi_a();
Abios_Hpetci_a();
Abios_Hpetro_a();
Abios_Hpetstub_a();
Abios_Hpf_a();
Abios_Hpi_a();
ArbDeleteMmConfigRange();
ArbInitializeMmConfigRange();
CMOS_READ();
CMOS_WRITE();
ConvertEfiToNtStatus();
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
Dr_Hpetci_a();
Dr_Hpetro_a();
Dr_Hpetstub_a();
Dr_Hpf_a();
Dr_Hpi_a();
EmClientQueryRuleState();
EmpProviderRegister();
GetPdeAddressEx();
GetPteAddress();
HalAcpiEmCheckOperator();
HalAcpiGetAllTablesDispatch();
HalAcpiGetFacsMappingDispatch();
HalAcpiGetRsdpDispatch();
HalAcpiGetTable();
HalAcpiGetTableDispatch();
HalAcquireDisplayOwnership();
HalAdjustResourceList();
HalAllProcessorsStarted();
HalAllocateAdapterChannel();
HalAllocateCommonBuffer();
HalAllocateCrashDumpRegisters();
HalAssignSlotResources();
HalBeginSystemInterrupt();
HalBugCheckSystem();
HalBuildMdlFromScatterGatherList();
HalBuildScatterGatherList();
HalCalculateScatterGatherListSize();
HalCalibratePerformanceCounter();
HalClearSoftwareInterrupt();
HalConvertDeviceIdtToIrql();
HalDisableInterrupt();
HalDisplayString();
HalDynamicProcessorStarted();
HalEfiGetEnvironmentVariable();
HalEfiSetEnvironmentVariable();
HalEnableInterrupt();
HalEndSystemInterrupt();
HalEnumerateEnvironmentVariablesEx();
HalFlushCommonBuffer();
HalFreeCommonBuffer();
HalGetAdapter();
HalGetBusData();
HalGetBusDataByOffset();
HalGetDmaAlignment();
HalGetEnvironmentVariable();
HalGetEnvironmentVariableEx();
HalGetInterruptTargetInformation();
HalGetInterruptVector();
HalGetMessageRoutingInfo();
HalGetScatterGatherList();
HalGetVectorInput();
HalHandleNMI();
HalInitApicInterruptHandlers();
HalInitSystem();
HalInitializeBios();
HalInitializeErrSrc();
HalInitializeMCA();
HalInitializeNMI();
HalInitializeProcessor();
HalMakeBeep();
HalMatchAcpiCreatorRevision();
HalMatchAcpiFADTBootArch();
HalMatchAcpiOemId();
HalMatchAcpiOemRevision();
HalMatchAcpiOemTableId();
HalMatchAcpiRevision();
HalProcessorIdle();
HalPutDmaAdapter();
HalPutScatterGatherList();
HalQueryDisplayParameters();
HalQueryRealTimeClock();
HalReadBootRegister();
HalReadDmaCounter();
HalRegisterErrataCallbacks();
HalReportResourceUsage();
HalRequestIpi();
HalRequestSoftwareInterrupt();
HalReturnToFirmware();
HalSetBusData();
HalSetBusDataByOffset();
HalSetDisplayParameters();
HalSetEnvironmentVariable();
HalSetEnvironmentVariableEx();
HalSetProfileInterval();
HalSetRealTimeClock();
HalSetTimeIncrement();
HalStartDynamicProcessor();
HalStartNextProcessor();
HalStartProcessor();
HalStartProfileInterrupt();
HalStopProfileInterrupt();
HalSystemVectorDispatchEntry();
HalTranslateBusAddress();
HalWriteBootRegister();
HalaAcpiTimerInit();
HalacpIrqTranslatorDereference();
HalacpiIrqTranslateResourceRequirementsIsa();
HalacpiIrqTranslateResourcesIsa();
HalacpiIrqTranslatorReference();
HaliAcpiMachineStateInit();
HaliAcpiQueryFlags();
HaliAcpiSleep();
HaliAcpiTimerCarry();
HaliAcpiTimerInit();
HaliGetDmaAdapter();
HaliGetInterruptTranslator();
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
HaliSetWakeAlarm();
HaliSetWakeEnable();
HalpAcpiAllocateMemory();
HalpAcpiApplyFadtSettings();
HalpAcpiCacheOverrideTables();
HalpAcpiCacheTable();
HalpAcpiCalculateCacheSizeForOverrideTables();
HalpAcpiCheckAndMapTable();
HalpAcpiCopyBiosTable();
HalpAcpiDetectMachineSpecificActions();
HalpAcpiFallbackOnLegacyConfigMethod();
HalpAcpiFindRsdp();
HalpAcpiFlushCache();
HalpAcpiGetAllTables();
HalpAcpiGetAllTablesWork();
HalpAcpiGetCachedTable();
HalpAcpiGetFacsMapping();
HalpAcpiGetTable();
HalpAcpiGetTableFromBios();
HalpAcpiGetTableWork();
HalpAcpiIBMExaMatch();
HalpAcpiIBMVigilMatch();
HalpAcpiPicStateIntact();
HalpAcpiPostSleep();
HalpAcpiPreSleep();
HalpAcpiTableCacheInit();
HalpAcpiValidateAcpiTable();
HalpAcquireCmosSpinLock();
HalpAcquireHighLevelLock();
HalpAcquireSystemHardwareSpinLock();
HalpAddAdapterToList();
HalpAddDevice();
HalpAddInterruptDest();
HalpAllocPhysicalMemory();
HalpAllocateAdapterCallback();
HalpAllocateAdapterEx();
HalpAllocateCR3Root();
HalpAllocateMapRegisters();
HalpApicRebootService();
HalpApicRestartProfileTimeInterrupt();
HalpApicSetProfileInterval();
HalpApicSpuriousService();
HalpApicStartProfileInterrupt();
HalpApicStopProfileInterrupt();
HalpAssignDriveLetters();
HalpAssignSlotResourcesStub();
HalpBiosDisplayReset();
HalpBroadcastCallService();
HalpBrokenPmTimerCalibratePerformanceCounter();
HalpBrokenPmTimerQueryPerformanceCounter();
HalpBrokenPmTimerRestorePerformanceCounter();
HalpBrokenPmTimerSavePerformanceCounter();
HalpBrokenPmTimerStallExecutionProcessor();
HalpBugCheckCallback();
HalpBuildAcpiResourceList();
HalpBuildIpiDestinationMap();
HalpBuildResumeStructures();
HalpBuildTiledCR3();
HalpBuildTiledCR3Ex();
HalpCheckFixedWakeSources();
HalpCheckForSoftwareInterrupt();
HalpCheckLowMemoryPostSleep();
HalpCheckLowMemoryPreSleep();
HalpCheckPowerButton();
HalpCheckWakeupTimeAndAdjust();
HalpClearSlpSmiStsInICH();
HalpClockInterruptPn();
HalpCmcDispatchRoutine();
HalpCmcInit();
HalpCmcPollingDpcRoutine();
HalpCmcPollingWorkerRoutine();
HalpCmosNullReference();
HalpCmosRangeHandler();
HalpComplete440BXWorkaround();
HalpConsumeLowMemory();
HalpCopyBufferMap();
HalpCopyBufferMapSafe();
HalpCopyFirmwareAndRuntimeInformation();
HalpCpuID();
HalpDetectPmTimerDoubleFrequency();
HalpDeterminePmTimerSkew();
HalpDisablePicInti();
HalpDisableRedirEntry();
HalpDisableSystemInterrupt();
HalpDispatchPnp();
HalpDispatchPower();
HalpDispatchSoftwareInterrupt();
HalpDispatchSystemStateTransition();
HalpDispatchWmi();
HalpDmaFinalizeDoubleBufferingDisposition();
HalpDriverEntry();
HalpDynamicSystemResourceConfiguration();
HalpEfiInitialization();
HalpEnableLocalNmiSources();
HalpEnableNMI();
HalpEnablePerfInterupt();
HalpEnableRedirEntry();
HalpEnableSystemInterrupt();
HalpEndOfBoot();
HalpFDMANotificationCallback();
HalpFindBusAddressTranslation();
HalpFixupPhysicalIntiDestinations();
HalpFlushTLB();
HalpFreeNvsBuffers();
HalpFreePte();
HalpFreeResumeStructures();
HalpFreeTiledCR3();
HalpFreeTiledCR3Ex();
HalpGenerateConsistentPmTimerRead();
HalpGenerateInterrupt();
HalpGenericCall();
HalpGetAcpiStaticNumaTopology();
HalpGetAdapterMaximumPhysicalAddress();
HalpGetApicIdByProcessorNumber();
HalpGetApicInti();
HalpGetApicVersion();
HalpGetCPUVendor();
HalpGetChipHacks();
HalpGetCmosCenturyByte();
HalpGetCmosData();
HalpGetDisplayBiosInformation();
HalpGetEisaData();
HalpGetFeatureBits();
HalpGetHotPlugMemoryInfo();
HalpGetIoApicId();
HalpGetMcaLog();
HalpGetMceInformation();
HalpGetNMICrashFlag();
HalpGetNextProcessorApicId();
HalpGetPCIData();
HalpGetPageFrameNumber();
HalpGetParameters();
HalpGetPmTimerPerfCounterValue();
HalpGetPmTimerSleepModePerfCounterValue();
HalpGetRedirEntry();
HalpGetResourceSortValue();
HalpGrowMapBufferWorker();
HalpGrowMapBuffers();
HalpHpetCalibratePerfCount();
HalpHpetClockInterrupt();
HalpHpetClockInterruptStub();
HalpHpetClockInterruptWork();
HalpHpetConfigureInterruptRouting();
HalpHpetHandleRollover();
HalpHpetInitializeClock();
HalpHpetPopulateIncrementTables();
HalpHpetQueryPerformanceCounter();
HalpHpetReinitializeClock();
HalpHpetResetCounter();
HalpHpetRolloverInterrupt();
HalpHpetSavePerformanceCounter();
HalpHpetSetProfileInterval();
HalpHpetSetTimeIncrement();
HalpHpetStallExecutionProcessor();
HalpHpetStartProfileInterrupt();
HalpHpetStopProfileInterrupt();
HalpHpetSuspendClock();
HalpHpetTickCountFromIncrement();
HalpHpetWriteEtwEvent();
HalpIRQLtoTPR();
HalpIndexPteArray();
HalpInitBootTable();
HalpInitChipHacks();
HalpInitErrorPktInfo();
HalpInitIntiInfo();
HalpInitIrqlAuditFlag();
HalpInitMP();
HalpInitMpInfo();
HalpInitNonBusHandler();
HalpInitReservedPages();
HalpInitializeApicAddressing();
HalpInitializeBrokenPmTimer();
HalpInitializeClock();
HalpInitializeCmos();
HalpInitializeHpet();
HalpInitializeIOUnits();
HalpInitializeLocalUnit();
HalpInitializePICs();
HalpInitializePciBus();
HalpInitializePciStubs();
HalpIoDelay();
HalpIpiHandler();
HalpIsMsiSupported();
HalpIsMsiSupportedAMD();
HalpIsMsiSupportedIntel();
HalpIsNXEnabled();
HalpIsPteFree();
HalpKdAllocateAddressRange();
HalpKdConfigureCardBusSocket();
HalpKdConfigureDebuggingDevice();
HalpKdExtendAddressRange();
HalpKdFindFreeResourceLimits();
HalpKdGetBarRange();
HalpKdGetCardBusBridgeResources();
HalpKdGetLengthFromBar();
HalpKdGetPciBridgeResources();
HalpKdMatchRequestedPciDevice();
HalpKdPowerUpDevice();
HalpKdReadPCIConfig();
HalpKdReleasePciDevice();
HalpKdRemoveSystemMemoryRanges();
HalpKdSearchBehindCardBusBridge();
HalpKdSearchBehindPciBridge();
HalpKdSearchForPciDebuggingDevice();
HalpKdSearchForTopOfMMIO();
HalpKdSetupPciDevice();
HalpKdStallExecution();
HalpKdSupersetRange();
HalpKdUnconfigureCardBusBridge();
HalpKdUnconfigurePciBridge();
HalpKdUpdateAddressRange();
HalpKdValidateCardbusSocketRegs();
HalpKdWidenCardBusBridgeBusRange();
HalpKdWidenCardBusBridgeIoRange();
HalpKdWidenCardBusBridgeMemoryRange();
HalpKdWidenPciBridgeBusRange();
HalpKdWidenPciBridgeIoRange();
HalpKdWidenPciBridgeMemoryRange();
HalpKdWritePCIConfig();
HalpLoadMicrocode();
HalpLocalApicErrorService();
HalpLockPagableCodeSection();
HalpLowerIrqlHardwareInterrupts();
HalpMapCR3Ex();
HalpMapNtToHwProcessorId();
HalpMapNvsArea();
HalpMapPhysicalMemory64();
HalpMapPhysicalMemoryWriteThrough64();
HalpMapTransfer();
HalpMapTransferHelper();
HalpMarkProcessorStarted();
HalpMaskAcpiInterrupt();
HalpMcUpdateFindDataTableEntry();
HalpMcUpdateInitialize();
HalpMcUpdateLock();
HalpMcUpdateMicrocode();
HalpMcUpdatePostUpdate();
HalpMcUpdateUnlock();
HalpMcaCurrentProcessorInitErrorPacket();
HalpMcaCurrentProcessorSetConfig();
HalpMcaCurrentProcessorSetTSS();
HalpMcaExceptionHandler();
HalpMcaExceptionHandlerWrapper();
HalpMcaFillSkeletalExceptionRecord();
HalpMcaGetConfiguration();
HalpMcaInit();
HalpMcaInitializeProcessor();
HalpMcaLockInterface();
HalpMcaQueueDpc();
HalpMcaReadProcessorException();
HalpMcaReadRegisterInterface();
HalpMcaRegisterDriver();
HalpMcaUnlockInterface();
HalpMceRegisterKernelDriver();
HalpMovntiCopyBuffer();
HalpNMIHalt();
HalpNumaInitializeStaticConfiguration();
HalpNumaQueryPageToNode();
HalpNumaQueryProcessorNode();
HalpNumaQueryProximityNode();
HalpPCIAcquireConfigSpaceLock();
HalpPCIAcquireType2Lock();
HalpPCIConfig();
HalpPCIConfigHoldingConfigLock();
HalpPCIEndConfigAccess();
HalpPCIISALine2Pin();
HalpPCIPerformConfigAccess();
HalpPCIPin2ISALine();
HalpPCIReadUcharType1();
HalpPCIReadUcharType2();
HalpPCIReadUlongType1();
HalpPCIReadUlongType2();
HalpPCIReadUshortType1();
HalpPCIReadUshortType2();
HalpPCIReleaseConfigSpaceLock();
HalpPCIReleaseType2Lock();
HalpPCIStartConfigAccess();
HalpPCIWriteUcharType1();
HalpPCIWriteUcharType2();
HalpPCIWriteUlongType1();
HalpPCIWriteUlongType2();
HalpPCIWriteUshortType1();
HalpPCIWriteUshortType2();
HalpPassIrpFromFdoToPdo();
HalpPciAccessMmConfigSpace();
HalpPciAddMmConfigEntry();
HalpPciCheckForAmdK8SpecialLocationHack();
HalpPciFindMmConfigBaseAddress();
HalpPciFreeMmConfigList();
HalpPciInitializeMmConfigAccess();
HalpPciMapMmConfigPhysicalAddress();
HalpPciReadMmConfigUchar();
HalpPciReadMmConfigUlong();
HalpPciReadMmConfigUshort();
HalpPciReportMmConfigAddressRange();
HalpPciWriteMmConfigUchar();
HalpPciWriteMmConfigUlong();
HalpPciWriteMmConfigUshort();
HalpPerfInterrupt();
HalpPhase0GetPciDataByOffset();
HalpPhase0SetPciDataByOffset();
HalpPiix4Detect();
HalpPmTimerCalibratePerformanceCounter();
HalpPmTimerCarry();
HalpPmTimerEnableSleepMode();
HalpPmTimerQueryPerformanceCounter();
HalpPmTimerRestorePerformanceCounter();
HalpPmTimerSavePerformanceCounter();
HalpPmTimerSleepModeCarry();
HalpPmTimerStallExecutionProcessor();
HalpPmTimerStallForScale();
HalpPmTimerTickCountStall();
HalpPollForBroadcast();
HalpPostSleepMP();
HalpPowerStateCallback();
HalpPreserveNvsArea();
HalpProcessAcpiStartDevice();
HalpProfileInterrupt();
HalpProgramHpetClock();
HalpProgramHpetRolloverTimer();
HalpProgramRtcClock();
HalpPutAcpiHacksInRegistry();
HalpQuery8254Counter();
HalpQueryAcpiResourceRequirements();
HalpQueryBrokenPmTimerCount();
HalpQueryCapabilities();
HalpQueryDeviceRelations();
HalpQueryHpetCount();
HalpQueryIdFdo();
HalpQueryIdPdo();
HalpQueryInterface();
HalpQueryPciRegistryInfo();
HalpQueryResourceRequirements();
HalpQueryResources();
HalpReadCmosDataByPort();
HalpReadCmosTime();
HalpReadErrorInfo();
HalpReadLocalApicID();
HalpReadPCIConfig();
HalpReadPartitionTable();
HalpReadRtcStdPCAT();
HalpReadStdCmosData();
HalpReboot();
HalpReenableAcpi();
HalpRegisterKdSupportFunctions();
HalpRegisterPciDebuggingDeviceInfo();
HalpRegisterVector();
HalpReleaseCmosSpinLock();
HalpReleaseHighLevelLock();
HalpReleaseSystemHardwareSpinLock();
HalpRemapVirtualAddress64();
HalpRemoveInterruptDest();
HalpReportMachineCheck();
HalpReportResourceUsage();
HalpReportSerialNumber();
HalpRequestIpiSpecifyVector();
HalpResetAllProcessors();
HalpResetSBF();
HalpResetThisProcessor();
HalpRestartProfileTimeInterrupt();
HalpRestoreDmaControllerState();
HalpRestoreInterruptControllerState();
HalpRestoreIoApicRedirTable();
HalpRestoreNvsArea();
HalpRestorePerformanceCounter();
HalpResumeClock();
HalpRtcClockInterrupt();
HalpRtcClockInterruptStub();
HalpRtcInitializeClock();
HalpRtcSetTimeIncrement();
HalpRtcUnmaskClock();
HalpSaveContextTargetProcessor();
HalpSaveDmaControllerState();
HalpSaveInterruptControllerState();
HalpSavePerformanceCounter();
HalpSaveProcessorStateAndWait();
HalpScaleTimers();
HalpSendFlatIpi();
HalpSendIpi();
HalpSendNodeIpi32();
HalpSendNodeIpi64();
HalpSendPhysicalIpi();
HalpSerialize();
HalpSet8259Mask();
HalpSetClockAfterSleep();
HalpSetClockBeforeSleep();
HalpSetCmosCenturyByte();
HalpSetCmosData();
HalpSetCr4MCEBit();
HalpSetInternalVector();
HalpSetInterruptControllerWakeupState();
HalpSetPCIData();
HalpSetPageFrameNumber();
HalpSetPartitionInformation();
HalpSetRedirEntry();
HalpSetSystemInformation();
HalpSetWakeAlarm();
HalpSetup440BXWorkaround();
HalpSetupAcpiPhase0();
HalpSetupRealModeResume();
HalpSetupSystemClockSupport();
HalpSimpleCheck();
HalpStartProcessor();
HalpStartProcessorsInClusteredApicMode();
HalpStopOhciInterrupt();
HalpStopUhciInterrupt();
HalpStoreFreeCr3();
HalpSuspendClock();
HalpTranslateBusAddress();
HalpTscQueryPerformanceCounter();
HalpUnMapIOApics();
HalpUnloadMicrocode();
HalpUnlockPagableCodeSection();
HalpUnmapVirtualAddress();
HalpUnmaskAcpiInterrupt();
HalpUnmaskClock();
HalpUnmaskCriticalClockInterruptSources();
HalpValidPCISlot();
HalpValidatePendingInterrupts();
HalpVerifyIOUnit();
HalpWaitForCmosRisingEdge();
HalpWaitForPending();
HalpWakeupTimeElapsed();
HalpWasteTime();
HalpWhackICHUsbSmi();
HalpWriteCmosDataByPort();
HalpWriteCmosTime();
HalpWritePCIConfig();
HalpWritePartitionTable();
HalpWriteResetCommand();
HalpWriteRtcStdPCAT();
HalpWriteStdCmosData();
HalpYieldProcessor();
HalpcGetCmosDataByType();
HalpcSetCmosDataByType();
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
KeAcquireSpinLockRaiseToSynchMCE();
KeFlushWriteBuffer();
KeGetCurrentIrql();
KeLowerIrql();
KeMemoryBarrier();
KeQueryPerformanceCounter();
KeRaiseIrql();
KeRaiseIrqlToDpcLevel();
KeRaiseIrqlToSynchLevel();
KeReleaseInStackQueuedSpinLock();
KeReleaseQueuedSpinLock();
KeReleaseSpinLock();
KeSaveStateForHibernate();
KeStallExecutionProcessor();
KeTryToAcquireQueuedSpinLock();
KeTryToAcquireQueuedSpinLockRaiseToSynch();
KeUpdateSystemTime();
KfAcquireSpinLock();
KfLowerIrql();
KfRaiseIrql();
KfReleaseSpinLock();
KiAcquireSpinLock();
KiCheckForSListAddress();
KiReleaseSpinLock();
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
PicExtintIntiHandlers();
PicHandler();
PicNopHandler();
PicNopIntiHandlers();
PicSpuriousService37();
PoSetFixedWakeSource();
PshedRetrieveErrorInfo();
RDMSR();
READ_PORT_BUFFER_UCHAR();
READ_PORT_BUFFER_ULONG();
READ_PORT_BUFFER_USHORT();
READ_PORT_UCHAR();
READ_PORT_ULONG();
READ_PORT_USHORT();
ResetPicInterruptHandler();
RtlMoveMemory();
RtlStringCbPrintfW();
RtlUnwind();
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
V86_Hpetci_a();
V86_Hpetro_a();
V86_Hpetstub_a();
V86_Hpf_a();
V86_Hpi_a();
WRITE_PORT_BUFFER_UCHAR();
WRITE_PORT_BUFFER_ULONG();
WRITE_PORT_BUFFER_USHORT();
WRITE_PORT_UCHAR();
WRITE_PORT_ULONG();
WRITE_PORT_USHORT();
WRMSR();
WheaRegisterErrSrcInitializer();
WheaReportHwError();
XmAaaOp();
XmAadOp();
XmAamOp();
XmAasOp();
XmAccumImmediate();
XmAccumRegister();
XmAdcOp();
XmAddOp();
XmAddOperands();
XmAndOp();
XmBitScanGeneral();
XmBoundOp();
XmBsfOp();
XmBsrOp();
XmBswapOp();
XmBtOp();
XmBtcOp();
XmBtrOp();
XmBtsOp();
XmByteImmediate();
XmCallOp();
XmCbwOp();
XmClcOp();
XmCldOp();
XmCliOp();
XmCmcOp();
XmCmpOp();
XmCmpsOp();
XmCmpxchgOp();
XmCompareOperands();
XmComputeParity();
XmCwdOp();
XmDaaOp();
XmDasOp();
XmDecOp();
XmDivOp();
XmEffectiveOffset();
XmEmulateInterrupt();
XmEmulateStream();
XmEnterOp();
XmEvaluateAddressSpecifier();
XmEvaluateIndexSpecifier();
XmExecuteInt1a();
XmFlagsRegister();
XmGeneralBitOffset();
XmGeneralRegister();
XmGetByteImmediate();
XmGetCodeByte();
XmGetImmediateSourceValue();
XmGetLongImmediate();
XmGetOffsetAddress();
XmGetRegisterAddress();
XmGetSignedByteImmediateToLong();
XmGetSignedByteImmediateToWord();
XmGetStringAddress();
XmGetStringAddressRange();
XmGetWordImmediate();
XmGroup1General();
XmGroup1Immediate();
XmGroup2By1();
XmGroup2ByByte();
XmGroup2ByCL();
XmGroup3General();
XmGroup45General();
XmGroup7General();
XmGroup8BitOffset();
XmHltOp();
XmIdivOp();
XmIllOp();
XmImmediateEnter();
XmImmediateJump();
XmImulImmediate();
XmImulOp();
XmImulxOp();
XmInOp();
XmIncOp();
XmInitializeEmulator();
XmInsOp();
XmInt1aFindPciClassCode();
XmInt1aFindPciDevice();
XmInt1aPciBiosPresent();
XmInt1aReadConfigRegister();
XmInt1aWriteConfigRegister();
XmIntOp();
XmIretOp();
XmJcxzOp();
XmJmpOp();
XmJxxOp();
XmLahfOp();
XmLeaveOp();
XmLoadSegment();
XmLodsOp();
XmLongJump();
XmLoopOp();
XmMovOp();
XmMoveGeneral();
XmMoveImmediate();
XmMoveRegImmediate();
XmMoveSegment();
XmMoveXxGeneral();
XmMovsOp();
XmMulOp();
XmNegOp();
XmNoOperands();
XmNopOp();
XmNotOp();
XmOpcodeEscape();
XmOpcodeRegister();
XmOrOp();
XmOutOp();
XmOutsOp();
XmPopGeneral();
XmPopOp();
XmPopStack();
XmPopaOp();
XmPortDX();
XmPortImmediate();
XmPrefixOpcode();
XmPushImmediate();
XmPushOp();
XmPushPopSegment();
XmPushStack();
XmPushaOp();
XmRclOp();
XmRcrOp();
XmRdtscOp();
XmRetOp();
XmRolOp();
XmRorOp();
XmSahfOp();
XmSarOp();
XmSbbOp();
XmScasOp();
XmSegmentOffset();
XmSetDataType();
XmSetDestinationValue();
XmSetImmediateSourceValue();
XmSetLogicalResult();
XmSetSourceValue();
XmSetccByte();
XmShiftDouble();
XmShlOp();
XmShldOp();
XmShortJump();
XmShrOp();
XmShrdOp();
XmSmswOp();
XmStcOp();
XmStdOp();
XmStiOp();
XmStoreResult();
XmStosOp();
XmStringOperands();
XmSubOp();
XmSubOperands();
XmSxxOp();
XmTestOp();
XmXaddOp();
XmXchgOp();
XmXlatOpcode();
XmXorOp();
ZwClose();
ZwDeleteValueKey();
ZwOpenKey();
ZwSetValueKey();
_EH4_CallFilterFunc();
_EH4_GlobalUnwind();
_EH4_LocalUnwind();
_EH4_TransferToHandler();
_NLG_Call();
_NLG_Dispatch();
_NLG_Dispatch2();
_NLG_Notify();
_NLG_Notify1();
_NLG_Return2();
_SEH_epilog4();
_SEH_prolog4();
__security_check_cookie();
_abnormal_termination();
_alldvrm();
_allmul();
_allshl();
_allshr();
_aulldiv();
_aulldvrm();
_aullrem();
_except_handler4();
_global_unwind2();
_invalid_parameter();
_iswctype_l();
_local_unwind2();
_local_unwind4();
_rt_probe_read4();
_seh_longjmp_unwind4();
_setjmp3();
_stricmp();
_vsnwprintf();
_wchartodigit();
_wcsicmp();
atoi();
iswctype();
longjmp();
memcpy();
memset();
strncmp();
strncpy_s();
strstr();
wcstoul();
x86BiosAllocateBuffer();
x86BiosCall();
x86BiosExecuteInterruptShadowed();
x86BiosFreeBuffer();
x86BiosGetPciBusData();
x86BiosInitializeBiosEx();
x86BiosInitializeBiosShadowed();
x86BiosReadCmosPort();
x86BiosReadCmosPortByte();
x86BiosReadIoSpace();
x86BiosReadMemory();
x86BiosReadPciAddressPort();
x86BiosReadPciDataPort();
x86BiosSetPciBusData();
x86BiosTranslateAddress();
x86BiosWriteCmosPort();
x86BiosWriteCmosPortByte();
x86BiosWriteIoSpace();
x86BiosWriteMemory();
x86BiosWritePciAddressPort();
x86BiosWritePciDataPort();
