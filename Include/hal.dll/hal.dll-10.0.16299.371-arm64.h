struct LIST_ENTRY32;
struct LIST_ENTRY64;
struct POHANDLE__;
struct _ACCESS_STATE;
struct _ACPI_CACHED_TABLE;
struct _ADAPTER_OBJECT;
struct _CM_FULL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_LIST;
struct _CM_RESOURCE_LIST;
struct _COMPRESSED_DATA_INFO;
struct _CONTEXT;
struct _CONTROLLER_OBJECT;
struct _DESCRIPTION_HEADER;
struct _DEVICE_CAPABILITIES;
struct _DEVICE_OBJECT;
struct _DEVICE_OBJECT_POWER_EXTENSION;
struct _DEVOBJ_EXTENSION;
struct _DEVPROPKEY;
struct _DISPATCHER_HEADER;
struct _DMA_ADAPTER;
struct _DMA_ADAPTER_INFO;
struct _DMA_ADAPTER_INFO_V1;
struct _DMA_FUNCTION_TABLE;
struct _DMA_OPERATIONS;
struct _DMA_REQUEST_LINE_BINDING_DESCRIPTION;
struct _DMA_SCATTER_GATHER_LIST;
struct _DMA_TRANSFER_CONTEXT;
struct _DMA_TRANSFER_CONTEXT_V1;
struct _DMA_TRANSFER_INFO;
struct _DMA_TRANSFER_INFO_V1;
struct _DRIVER_EXTENSION;
struct _DRIVER_OBJECT;
struct _ECP_LIST;
struct _EJOB;
struct _EPROCESS;
struct _ERESOURCE;
struct _ETHREAD;
struct _EVENT_DATA_DESCRIPTOR;
struct _EVENT_DESCRIPTOR;
struct _EXCEPTION_RECORD;
struct _EXCEPTION_REGISTRATION_RECORD;
struct _EXT_DELETE_PARAMETERS;
struct _EXT_SET_PARAMETERS_V0;
struct _EX_PUSH_LOCK;
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
struct _GROUP_AFFINITY;
struct _GUID;
struct _HALP_ALLOC_CONTEXT;
struct _HALP_DMA_ADAPTER_OBJECT;
struct _HALP_DMA_CHANNEL;
struct _HALP_DMA_CONTROLLER;
struct _HALP_DMA_DOMAIN_OBJECT;
struct _HALP_DMA_MASTER_ADAPTER_OBJECT;
struct _HALP_DMA_TRANSLATION_BUFFER;
struct _HALP_DMA_TRANSLATION_BUFFER_POSITION;
struct _HALP_DMA_TRANSLATION_ENTRY;
struct _HAL_ARM_ENLIGHTENMENT_INFORMATION;
struct _HARDWARE_PTE;
struct _INITIAL_PRIVILEGE_SET;
struct _INTERFACE;
struct _INTERRUPT_FUNCTION_TABLE;
struct _INTERRUPT_LINE;
struct _INTERRUPT_LINE_STATE;
struct _INTERRUPT_TARGET;
struct _IOAPIC;
struct _IOMMU_DEVICE_PATH;
struct _IOSAPIC;
struct _IO_APIC_DATA;
struct _IO_APIC_REGISTERS;
struct _IO_COMPLETION_CONTEXT;
struct _IO_DRIVER_CREATE_CONTEXT;
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
struct _KAFFINITY_EX;
struct _KAPC;
struct _KARM64_ARCH_STATE;
struct _KDEVICE_QUEUE;
struct _KDEVICE_QUEUE_ENTRY;
struct _KDPC;
struct _KEVENT;
struct _KFLOATING_SAVE;
struct _KPCR;
struct _KPRCB;
struct _KPROCESS;
struct _KPROCESSOR_STATE;
struct _KSPECIAL_REGISTERS;
struct _KSPIN_LOCK_QUEUE;
struct _KTHREAD;
struct _LIST_ENTRY;
struct _LOCAL_NMISOURCE;
struct _LOOKASIDE_LIST_EX;
struct _LUID;
struct _LUID_AND_ATTRIBUTES;
struct _MAILSLOT_CREATE_PARAMETERS;
struct _MAPIC;
struct _MDL;
struct _NAMED_PIPE_CREATE_PARAMETERS;
struct _NPAGED_LOOKASIDE_LIST;
struct _NT_TIB;
struct _OWNER_ENTRY;
struct _PAGED_LOOKASIDE_LIST;
struct _PLATFORM_INTERRUPT;
struct _POWER_SEQUENCE;
struct _PRIVILEGE_SET;
struct _PROCLOCALAPIC;
struct _PROCLOCALSAPIC;
struct _REGISTERED_INTERRUPT_CONTROLLER;
struct _RSDP;
struct _RSDT_32;
struct _RTL_AVL_TREE;
struct _RTL_BALANCED_NODE;
struct _RTL_BITMAP;
struct _RTL_DYNAMIC_HASH_TABLE;
struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT;
struct _RTL_DYNAMIC_HASH_TABLE_ENTRY;
struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR;
struct _RTL_QUERY_REGISTRY_TABLE;
struct _RTL_RB_TREE;
struct _RTL_SPLAY_LINKS;
struct _SCATTER_GATHER_ELEMENT;
struct _SCATTER_GATHER_LIST;
struct _SCSI_REQUEST_BLOCK;
struct _SECONDARY_IC_LIST_ENTRY;
struct _SECONDARY_INTERRUPT_LINE_STATE;
struct _SECONDARY_INTERRUPT_PROVIDER_INTERFACE;
struct _SECTION_OBJECT_POINTERS;
struct _SECURITY_QUALITY_OF_SERVICE;
struct _SECURITY_SUBJECT_CONTEXT;
struct _SINGLE_LIST_ENTRY;
struct _SLIST_ENTRY;
struct _STRING;
struct _SYSTEM_POWER_STATE_CONTEXT;
struct _TXN_PARAMETER_BLOCK;
struct _UNICODE_STRING;
struct _VPB;
struct _WAIT_CONTEXT_BLOCK;
struct _WHEA_ERROR_PACKET_V2;
struct _WHEA_ERROR_RECORD;
struct _WHEA_ERROR_RECORD_HEADER;
struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR;
struct _WHEA_PROCESSOR_GENERIC_ERROR_SECTION;
struct _WHEA_RECOVERY_CONTEXT;
struct _WHEA_XPF_MCA_SECTION;
struct _WHEA_XPF_PROCESSOR_ERROR_SECTION;
struct _WORK_QUEUE_ITEM;
struct _XSDT;

union _ARM64_NT_NEON128;
union _LARGE_INTEGER;
union _MCG_STATUS;
union _MCI_STATUS;
union _POWER_STATE;
union _SLIST_HEADER;
union _ULARGE_INTEGER;
union _WHEA_ERROR_PACKET_FLAGS;
union _WHEA_ERROR_RECORD_HEADER_FLAGS;
union _WHEA_ERROR_RECORD_HEADER_VALIDBITS;
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS;
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS;
union _WHEA_PERSISTENCE_INFO;
union _WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS;
union _WHEA_REVISION;
union _WHEA_TIMESTAMP;
union _WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS;
union __n64;

enum BUS_QUERY_ID_TYPE;
enum DEVICE_TEXT_TYPE;
enum DMA_COMPLETION_STATUS;
enum POWER_ACTION;
enum _DEVICE_POWER_STATE;
enum _DEVICE_RELATION_TYPE;
enum _DEVICE_USAGE_NOTIFICATION_TYPE;
enum _DEVICE_WAKE_DEPTH;
enum _DIRECTORY_NOTIFY_INFORMATION_CLASS;
enum _DMA_INTERRUPT_TYPE;
enum _DMA_WIDTH;
enum _EVENT_TYPE;
enum _EXCEPTION_DISPOSITION;
enum _EXT_IOMMU_TRANSLATION_TYPE;
enum _FILE_INFORMATION_CLASS;
enum _FSINFOCLASS;
enum _HALP_DMA_MAP_BUFFER_TYPE;
enum _HAL_DMA_CRASH_DUMP_REGISTER_TYPE;
enum _HAL_INIT_PHASE;
enum _INTERFACE_TYPE;
enum _INTERLOCKED_RESULT;
enum _INTERRUPT_PROBLEM;
enum _INTERRUPT_RESULT;
enum _INTERRUPT_TARGET_TYPE;
enum _IOMMU_DEVICE_BUS_TYPE;
enum _IO_ALLOCATION_ACTION;
enum _IRQ_PRIORITY;
enum _KINTERRUPT_MODE;
enum _KINTERRUPT_POLARITY;
enum _KNOWN_CONTROLLER_TYPE;
enum _KSPIN_LOCK_QUEUE_NUMBER;
enum _MEMORY_CACHING_TYPE;
enum _MEMORY_CACHING_TYPE_ORIG;
enum _MODE;
enum _POOL_TYPE;
enum _POWER_STATE_TYPE;
enum _PSCI_CALL_SUPPORTED;
enum _PSCI_FUNCTION;
enum _REG_NOTIFY_CLASS;
enum _SECURITY_IMPERSONATION_LEVEL;
enum _SYSTEM_POWER_STATE;
enum _USER_ACTIVITY_PRESENCE;
enum _WHEA_CPU_VENDOR;
enum _WHEA_ERROR_PACKET_DATA_FORMAT;
enum _WHEA_ERROR_SEVERITY;
enum _WHEA_ERROR_SOURCE_TYPE;
enum _WHEA_ERROR_TYPE;
enum _tag_ARM64INTR_BARRIER_TYPE;

typedef struct LIST_ENTRY32 {
    ULONG Flink;
    ULONG Blink;
};

typedef struct LIST_ENTRY64 {
    ULONG64 Flink;
    ULONG64 Blink;
};

typedef struct POHANDLE__ {
    LONG unused;
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

typedef struct _ACPI_CACHED_TABLE {
    struct _LIST_ENTRY Links;
    union _LARGE_INTEGER PhysicalAddress;
    struct _DESCRIPTION_HEADER Header;
};

typedef struct _ADAPTER_OBJECT {
    struct _HALP_DMA_ADAPTER_OBJECT AdapterObject;
    struct _HALP_DMA_MASTER_ADAPTER_OBJECT *MasterAdapter;
    struct _LIST_ENTRY WaitQueueEntry;
    struct _KDEVICE_QUEUE ChannelWaitQueue;
    ULONG64 ResourceWaitLock;
    struct _LIST_ENTRY ResourceWaitQueue;
    struct _LIST_ENTRY ChannelResourceWaitQueue;
    UCHAR ResourceQueueBusy;
    ULONG MapRegistersPerChannel;
    PVOID MapRegisterBase;
    ULONG NumberOfMapRegisters;
    PVOID CrashDumpRegisterBase[2];
    ULONG NumberOfCrashDumpRegisters[2];
    ULONG CrashDumpRegisterRefCount[2];
    struct _LIST_ENTRY AdapterCrashDumpList;
    struct _MDL *MapRegisterMdl;
    ULONG64 MapRegisterMdlLock;
    PVOID AllocationHandle;
    PVOID VirtualAddress;
    UCHAR IsAllocationMdlBased;
    UCHAR NoLocalPool;
    struct _WAIT_CONTEXT_BLOCK *CurrentWcb;
    struct _DMA_TRANSFER_CONTEXT *CurrentTransferContext;
    struct _HALP_DMA_CONTROLLER *DmaController;
    ULONG Controller;
    ULONG ChannelNumber;
    ULONG RequestLine;
    ULONG RequestedChannelCount;
    ULONG AllocatedChannelCount;
    ULONG AllocatedChannels[8];
    PVOID ChannelAdapter;
    UCHAR NeedsMapRegisters;
    UCHAR MasterDevice;
    UCHAR ScatterGather;
    UCHAR AutoInitialize;
    UCHAR IgnoreCount;
    UCHAR CacheCoherent;
    UCHAR Dma32BitAddresses;
    UCHAR Dma64BitAddresses;
    ULONG DmaAddressWidth;
    enum _DMA_WIDTH DmaPortWidth;
    union _LARGE_INTEGER DeviceAddress;
    struct _LIST_ENTRY AdapterList;
    struct _WORK_QUEUE_ITEM WorkItem;
    PVOID DomainHandle;
    struct _HALP_DMA_DOMAIN_OBJECT *DomainPointer;
    enum _EXT_IOMMU_TRANSLATION_TYPE TranslationType;
    UCHAR AdapterInUse;
    struct _DEVICE_OBJECT *DeviceObject;
    struct _IOMMU_DEVICE_PATH *DevicePath;
    struct _MDL *ScatterGatherMdl;
    ULONG ScatterGatherBufferLength;
    struct _SCATTER_GATHER_LIST ScatterGatherBuffer;
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
            USHORT Level;
            USHORT Group;
            ULONG Vector;
            ULONG64 Affinity;
        } Interrupt;
        struct {
            struct {
                USHORT Group;
                USHORT MessageCount;
                ULONG Vector;
                ULONG64 Affinity;
            } Raw;
            struct {
                USHORT Level;
                USHORT Group;
                ULONG Vector;
                ULONG64 Affinity;
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
            ULONG Channel;
            ULONG RequestLine;
            UCHAR TransferWidth;
            UCHAR Reserved1;
            UCHAR Reserved2;
            UCHAR Reserved3;
        } DmaV3;
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
        struct {
            UCHAR Class;
            UCHAR Type;
            UCHAR Reserved1;
            UCHAR Reserved2;
            ULONG IdLowPart;
            ULONG IdHighPart;
        } Connection;
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

typedef struct _CONTEXT {
    ULONG ContextFlags;
    ULONG Cpsr;
    ULONG64 X0;
    ULONG64 X1;
    ULONG64 X2;
    ULONG64 X3;
    ULONG64 X4;
    ULONG64 X5;
    ULONG64 X6;
    ULONG64 X7;
    ULONG64 X8;
    ULONG64 X9;
    ULONG64 X10;
    ULONG64 X11;
    ULONG64 X12;
    ULONG64 X13;
    ULONG64 X14;
    ULONG64 X15;
    ULONG64 X16;
    ULONG64 X17;
    ULONG64 X18;
    ULONG64 X19;
    ULONG64 X20;
    ULONG64 X21;
    ULONG64 X22;
    ULONG64 X23;
    ULONG64 X24;
    ULONG64 X25;
    ULONG64 X26;
    ULONG64 X27;
    ULONG64 X28;
    ULONG64 Fp;
    ULONG64 Lr;
    ULONG64 X[31];
    ULONG64 Sp;
    ULONG64 Pc;
    union _ARM64_NT_NEON128 V[32];
    ULONG Fpcr;
    ULONG Fpsr;
    ULONG Bcr[8];
    ULONG64 Bvr[8];
    ULONG Wcr[2];
    ULONG64 Wvr[2];
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
    ULONG Reserved1 : 1;
    ULONG WakeFromInterrupt : 1;
    ULONG SecureDevice : 1;
    ULONG Reserved : 11;
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

typedef struct _DEVICE_OBJECT_POWER_EXTENSION {
};

typedef struct _DEVOBJ_EXTENSION {
    SHORT Type;
    USHORT Size;
    struct _DEVICE_OBJECT *DeviceObject;
    ULONG PowerFlags;
    struct _DEVICE_OBJECT_POWER_EXTENSION *Dope;
    ULONG ExtensionFlags;
    PVOID DeviceNode;
    struct _DEVICE_OBJECT *AttachedTo;
    LONG StartIoCount;
    LONG StartIoKey;
    ULONG StartIoFlags;
    struct _VPB *Vpb;
    PVOID DependencyNode;
    PVOID InterruptContext;
    PVOID VerifierContext;
};

typedef struct _DEVPROPKEY {
    struct _GUID fmtid;
    ULONG pid;
};

typedef struct _DISPATCHER_HEADER {
    LONG Lock;
    LONG LockNV;
    UCHAR Type;
    UCHAR Signalling;
    UCHAR Size;
    UCHAR Reserved1;
    UCHAR TimerType;
    UCHAR TimerControlFlags;
    UCHAR Absolute : 1;
    UCHAR Wake : 1;
    UCHAR EncodedTolerableDelay : 6;
    UCHAR Hand;
    UCHAR TimerMiscFlags;
    UCHAR Index : 6;
    UCHAR Inserted : 1;
    UCHAR Expired : 1;
    UCHAR Timer2Type;
    UCHAR Timer2Flags;
    UCHAR Timer2Inserted : 1;
    UCHAR Timer2Expiring : 1;
    UCHAR Timer2CancelPending : 1;
    UCHAR Timer2SetPending : 1;
    UCHAR Timer2Running : 1;
    UCHAR Timer2Disabled : 1;
    UCHAR Timer2ReservedFlags : 2;
    UCHAR Timer2ComponentId;
    UCHAR Timer2RelativeId;
    UCHAR QueueType;
    UCHAR QueueControlFlags;
    UCHAR Abandoned : 1;
    UCHAR DisableIncrement : 1;
    UCHAR QueueReservedControlFlags : 6;
    UCHAR QueueSize;
    UCHAR QueueReserved;
    UCHAR ThreadType;
    UCHAR ThreadReserved;
    UCHAR ThreadControlFlags;
    UCHAR CycleProfiling : 1;
    UCHAR CounterProfiling : 1;
    UCHAR GroupScheduling : 1;
    UCHAR AffinitySet : 1;
    UCHAR Tagged : 1;
    UCHAR EnergyProfiling : 1;
    UCHAR ThreadReservedControlFlags : 2;
    UCHAR DebugActive;
    UCHAR ActiveDR7 : 1;
    UCHAR Instrumented : 1;
    UCHAR Minimal : 1;
    UCHAR Reserved4 : 3;
    UCHAR UmsScheduled : 1;
    UCHAR UmsPrimary : 1;
    UCHAR MutantType;
    UCHAR MutantSize;
    UCHAR DpcActive;
    UCHAR MutantReserved;
    LONG SignalState;
    struct _LIST_ENTRY WaitListHead;
};

typedef struct _DMA_ADAPTER {
    USHORT Version;
    USHORT Size;
    struct _DMA_OPERATIONS *DmaOperations;
};

typedef struct _DMA_ADAPTER_INFO {
    ULONG Version;
    struct _DMA_ADAPTER_INFO_V1 V1;
};

typedef struct _DMA_ADAPTER_INFO_V1 {
    ULONG ReadDmaCounterAvailable;
    ULONG ScatterGatherLimit;
    ULONG DmaAddressWidth;
    ULONG Flags;
    ULONG MinimumTransferUnit;
};

typedef struct _DMA_FUNCTION_TABLE {
    PVOID InitializeController;
    PUCHAR ValidateRequestLineBinding;
    PULONG QueryMaxFragments;
    PVOID ProgramChannel;
    PLONG ConfigureChannel;
    PVOID FlushChannel;
    PUCHAR HandleInterrupt;
    PULONG ReadDmaCounter;
    PVOID ReportCommonBuffer;
    PUCHAR CancelTransfer;
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
    PLONG GetDmaAdapterInfo;
    PLONG GetDmaTransferInfo;
    PLONG InitializeDmaTransferContext;
    PVOID *AllocateCommonBufferEx;
    PLONG AllocateAdapterChannelEx;
    PLONG ConfigureAdapterChannel;
    PUCHAR CancelAdapterChannel;
    PLONG MapTransferEx;
    PLONG GetScatterGatherListEx;
    PLONG BuildScatterGatherListEx;
    PLONG FlushAdapterBuffersEx;
    PVOID FreeAdapterObject;
    PLONG CancelMappedTransfer;
    PLONG AllocateDomainCommonBuffer;
    PLONG FlushDmaBuffer;
    PLONG JoinDmaDomain;
    PLONG LeaveDmaDomain;
    PVOID *GetDmaDomain;
};

typedef struct _DMA_REQUEST_LINE_BINDING_DESCRIPTION {
    ULONG RequestLine;
    ULONG ChannelNumber;
};

typedef struct _DMA_SCATTER_GATHER_LIST {
    ULONG NumberOfElements;
    ULONG64 Reserved;
    struct _SCATTER_GATHER_ELEMENT Elements[0];
};

typedef struct _DMA_TRANSFER_CONTEXT {
    ULONG Version;
    struct _DMA_TRANSFER_CONTEXT_V1 V1;
};

typedef struct _DMA_TRANSFER_CONTEXT_V1 {
    LONG DmaState;
    ULONG TransferState;
    struct _WAIT_CONTEXT_BLOCK Wcb;
    PVOID HalWcb;
};

typedef struct _DMA_TRANSFER_INFO {
    ULONG Version;
    struct _DMA_TRANSFER_INFO_V1 V1;
};

typedef struct _DMA_TRANSFER_INFO_V1 {
    ULONG MapRegisterCount;
    ULONG ScatterGatherElementCount;
    ULONG ScatterGatherListSize;
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

typedef struct _ECP_LIST {
};

typedef struct _EJOB {
};

typedef struct _EPROCESS {
};

typedef struct _ERESOURCE {
    struct _LIST_ENTRY SystemResourcesList;
    struct _OWNER_ENTRY *OwnerTable;
    SHORT ActiveCount;
    USHORT Flag;
    UCHAR ReservedLowFlags;
    UCHAR WaiterPriority;
    PVOID SharedWaiters;
    PVOID ExclusiveWaiters;
    struct _OWNER_ENTRY OwnerEntry;
    ULONG ActiveEntries;
    ULONG ContentionCount;
    ULONG NumberOfSharedWaiters;
    ULONG NumberOfExclusiveWaiters;
    PVOID Reserved2;
    PVOID Address;
    ULONG64 CreatorBackTraceIndex;
    ULONG64 SpinLock;
};

typedef struct _ETHREAD {
};

typedef struct _EVENT_DATA_DESCRIPTOR {
    ULONG64 Ptr;
    ULONG Size;
    ULONG Reserved;
    UCHAR Type;
    UCHAR Reserved1;
    USHORT Reserved2;
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

typedef struct _EXCEPTION_RECORD {
    LONG ExceptionCode;
    ULONG ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    ULONG NumberParameters;
    ULONG64 ExceptionInformation[15];
};

typedef struct _EXCEPTION_REGISTRATION_RECORD {
    struct _EXCEPTION_REGISTRATION_RECORD *Next;
    enum _EXCEPTION_DISPOSITION *Handler;
};

typedef struct _EXT_DELETE_PARAMETERS {
    ULONG Version;
    ULONG Reserved;
    PVOID DeleteCallback;
    PVOID DeleteContext;
};

typedef struct _EXT_SET_PARAMETERS_V0 {
    ULONG Version;
    ULONG Reserved;
    LONG64 NoWakeTolerance;
};

typedef struct _EX_PUSH_LOCK {
    ULONG64 Locked : 1;
    ULONG64 Waiting : 1;
    ULONG64 Waking : 1;
    ULONG64 MultipleShared : 1;
    ULONG64 Shared : 60;
    ULONG64 Value;
    PVOID Ptr;
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
    USHORT arm_boot_arch;
    UCHAR minor_version_number;
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
    struct _GEN_ADDR sleep_control_reg;
    struct _GEN_ADDR sleep_status_reg;
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
    PVOID Owner;
    ULONG Contention;
    struct _KEVENT Event;
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
    ULONG64 IrpListLock;
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

typedef struct _GROUP_AFFINITY {
    ULONG64 Mask;
    USHORT Group;
    USHORT Reserved[3];
};

typedef struct _GUID {
    ULONG Data1;
    USHORT Data2;
    USHORT Data3;
    UCHAR Data4[8];
};

typedef struct _HALP_ALLOC_CONTEXT {
    struct _LIST_ENTRY BufferList;
    ULONG64 Lock;
};

typedef struct _HALP_DMA_ADAPTER_OBJECT {
    struct _DMA_ADAPTER DmaHeader;
    struct _RTL_BITMAP *ContiguousMapRegisters;
    struct _HALP_DMA_TRANSLATION_ENTRY *ScatterBufferListHead;
    ULONG NumberOfFreeScatterBuffers;
    struct _HALP_DMA_TRANSLATION_BUFFER *ContiguousTranslations;
    struct _HALP_DMA_TRANSLATION_BUFFER *ScatterTranslations;
    struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ContiguousTranslationEnd;
    struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ScatterTranslationEnd;
    struct {
        struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ContiguousHint;
        struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ScatterHint;
    } CrashDump;
    ULONG64 SpinLock;
    ULONG64 GrowLock;
    union _LARGE_INTEGER MaximumPhysicalAddress;
    UCHAR IsMasterAdapter;
    UCHAR DmaCanCross64K;
    ULONG LibraryVersion;
};

typedef struct _HALP_DMA_CHANNEL {
    ULONG ChannelNumber;
    UCHAR Initialized;
    UCHAR Busy;
    UCHAR Complete;
    PVOID CurrentCompletionRoutine;
    PVOID CurrentCompletionContext;
    struct _ADAPTER_OBJECT *CurrentChildAdapter;
    enum _DMA_INTERRUPT_TYPE CurrentInterruptType;
    struct _KDPC Dpc;
    UCHAR GeneratesInterrupt;
    LONG Gsi;
    enum _KINTERRUPT_POLARITY InterruptPolarity;
    enum _KINTERRUPT_MODE InterruptMode;
    ULONG CommonBufferLength;
    PVOID CommonBufferVirtualAddress;
    union _LARGE_INTEGER CommonBufferLogicalAddress;
    struct _LIST_ENTRY AdapterQueue;
};

typedef struct _HALP_DMA_CONTROLLER {
    struct _LIST_ENTRY Controllers;
    struct _LIST_ENTRY AdapterList;
    ULONG ControllerId;
    ULONG MinimumRequestLine;
    ULONG MaximumRequestLine;
    ULONG ChannelCount;
    ULONG ScatterGatherLimit;
    struct _HALP_DMA_CHANNEL *Channels;
    PVOID ExtensionData;
    UCHAR CacheCoherent;
    ULONG DmaAddressWidth;
    struct _DMA_FUNCTION_TABLE Operations;
    ULONG SupportedPortWidths;
    ULONG MinimumTransferUnit;
    ULONG64 Lock;
    UCHAR Irql;
    UCHAR GeneratesInterrupt;
    LONG Gsi;
    enum _KINTERRUPT_POLARITY InterruptPolarity;
    enum _KINTERRUPT_MODE InterruptMode;
    struct _UNICODE_STRING ResourceId;
    struct POHANDLE__ *PowerHandle;
    UCHAR PowerActive;
};

typedef struct _HALP_DMA_DOMAIN_OBJECT {
    struct _LIST_ENTRY ListEntry;
    UCHAR AddedToDomainList;
    union _LARGE_INTEGER MaximumPhysicalAddress;
    union _LARGE_INTEGER BoundaryAddressMultiple;
    UCHAR CacheCoherent;
    PVOID IommuDomainPointer;
    PVOID LaState;
    ULONG64 LaStateLock;
    enum _EXT_IOMMU_TRANSLATION_TYPE TranslationType;
    struct _ADAPTER_OBJECT *OwningAdapter;
    struct _LIST_ENTRY CommonBufferListHead;
    ULONG64 CommonBufferListLock;
};

typedef struct _HALP_DMA_MASTER_ADAPTER_OBJECT {
    struct _HALP_DMA_ADAPTER_OBJECT AdapterObject;
    struct _LIST_ENTRY ContiguousAdapterQueue;
    struct _LIST_ENTRY ScatterAdapterQueue;
    ULONG MapBufferSize;
    union _LARGE_INTEGER MapBufferPhysicalAddress;
    ULONG ContiguousPageCount;
    ULONG ContiguousPageLimit;
    ULONG ScatterPageCount;
    ULONG ScatterPageLimit;
};

typedef struct _HALP_DMA_TRANSLATION_BUFFER {
    struct _HALP_DMA_TRANSLATION_BUFFER *Next;
    ULONG EntryCount;
    struct _HALP_DMA_TRANSLATION_ENTRY *Entries;
};

typedef struct _HALP_DMA_TRANSLATION_BUFFER_POSITION {
    struct _HALP_DMA_TRANSLATION_BUFFER *Buffer;
    ULONG Offset;
};

typedef struct _HALP_DMA_TRANSLATION_ENTRY {
    ULONG64 PhysicalAddress;
    struct _HALP_DMA_TRANSLATION_ENTRY *Next;
    ULONG MappedLength;
    ULONG64 LogicalAddress;
    ULONG64 LogicalMappedLength;
    union {
        PVOID VirtualAddress;
        struct {
            ULONG64 BoundToMaster : 1;
            ULONG64 BoundToScatterPool : 1;
            ULONG64 OwnedByMaster : 1;
            ULONG64 OwnedByScatterPool : 1;
            ULONG64 TemporaryMapping : 1;
            ULONG64 ZeroBuffer : 1;
            ULONG64 Address : 58;
        } Flags;
    } u;
    struct _HALP_DMA_TRANSLATION_ENTRY *NextMapping;
};

typedef struct _HAL_ARM_ENLIGHTENMENT_INFORMATION {
    ULONG Enlightenments;
    ULONG HypervisorConnected;
    ULONG Reserved0;
    ULONG SpinCountMask;
    PVOID LongSpinWait;
    PULONG64 GetReferenceTime;
    PLONG SetSystemSleepProperty;
    PLONG EnterSleepState;
    PLONG NotifyDebugDeviceAvailable;
    PLONG MapDeviceInterrupt;
    PLONG UnmapDeviceInterrupt;
    PLONG RetargetDeviceInterrupt;
    PLONG QueryAssociatedProcessors;
    PLONG GetMachineCheckContext;
    PLONG SuspendPartition;
    PLONG ResumePartition;
    PLONG SetSystemMachineCheckProperty;
    PLONG WheaErrorNotification;
    PULONG GetProcessorIndexFromVpIndex;
    PLONG SyntheticClusterIpi;
    PUCHAR VpStartEnabled;
    PLONG StartVirtualProcessor;
    PLONG GetVpIndexFromApicId;
    PLONG IumAccessPciDevice;
    PULONG64 IumEfiRuntimeService;
    PLONG SetQpcBias;
    PULONG64 GetQpcBias;
};

typedef struct _HARDWARE_PTE {
    ULONG64 Valid : 1;
    ULONG64 NotLargePage : 1;
    ULONG64 CacheType : 2;
    ULONG64 OsAvailable2 : 1;
    ULONG64 NonSecure : 1;
    ULONG64 Owner : 1;
    ULONG64 NotDirty : 1;
    ULONG64 Shareability : 2;
    ULONG64 Accessed : 1;
    ULONG64 NonGlobal : 1;
    ULONG64 PageFrameNumber : 36;
    ULONG64 reserved1 : 4;
    ULONG64 ContiguousBit : 1;
    ULONG64 PrivilegedNoExecute : 1;
    ULONG64 UserNoExecute : 1;
    ULONG64 Writable : 1;
    ULONG64 CopyOnWrite : 1;
    ULONG64 OsAvailable : 2;
    ULONG64 PxnTable : 1;
    ULONG64 UxnTable : 1;
    ULONG64 ApTable : 2;
    ULONG64 NsTable : 1;
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

typedef struct _INTERRUPT_FUNCTION_TABLE {
    PLONG InitializeLocalUnit;
    PLONG InitializeIoUnit;
    PVOID SetPriority;
    PULONG GetLocalUnitError;
    PVOID ClearLocalUnitError;
    PLONG GetLogicalId;
    PLONG SetLogicalId;
    enum _INTERRUPT_RESULT *AcceptAndGetSource;
    PVOID EndOfInterrupt;
    PVOID FastEndOfInterrupt;
    PLONG SetLineState;
    PLONG RequestInterrupt;
    PLONG StartProcessor;
    PLONG GenerateMessage;
    PLONG ConvertId;
    PLONG SaveLocalInterrupts;
    PLONG ReplayLocalInterrupts;
    PLONG DeinitializeLocalUnit;
    PLONG DeinitializeIoUnit;
    enum _INTERRUPT_RESULT *QueryAndGetSource;
    PVOID DeactivateInterrupt;
};

typedef struct _INTERRUPT_LINE {
    ULONG UnitId;
    LONG Line;
};

typedef struct _INTERRUPT_LINE_STATE {
    enum _KINTERRUPT_POLARITY Polarity;
    UCHAR EmulateActiveBoth;
    enum _KINTERRUPT_MODE TriggerMode;
    ULONG Flags;
    struct _INTERRUPT_LINE Routing;
    struct _INTERRUPT_TARGET ProcessorTarget;
    ULONG Vector;
    ULONG Priority;
};

typedef struct _INTERRUPT_TARGET {
    enum _INTERRUPT_TARGET_TYPE Target;
    ULONG PhysicalTarget;
    ULONG LogicalFlatTarget;
    ULONG RemapIndex;
    ULONG ClusterId;
    ULONG ClusterMask;
    struct {
        ULONG Low32;
        ULONG High32;
        ULONG64 InterruptData;
    } HypervisorTarget;
};

typedef struct _IOAPIC {
    UCHAR Type;
    UCHAR Length;
    UCHAR IOAPICID;
    UCHAR Reserved;
    ULONG IOAPICAddress;
    ULONG SystemVectorBase;
};

typedef struct _IOMMU_DEVICE_PATH {
    enum _IOMMU_DEVICE_BUS_TYPE BusType;
    ULONG UniqueIdLength;
    ULONG PathLength;
    PVOID UniqueId;
    PVOID Path;
};

typedef struct _IOSAPIC {
    UCHAR Type;
    UCHAR Length;
    UCHAR IOSAPICID;
    UCHAR Reserved;
    ULONG SystemVectorBase;
    ULONG64 IOSAPICAddress;
};

typedef struct _IO_APIC_DATA {
    ULONG64 PhysicalAddress;
    ULONG Identifier;
    struct _IO_APIC_REGISTERS *BaseAddress;
    UCHAR Version;
    UCHAR PinCount;
    UCHAR Initialized;
    UCHAR InitializedFirstLocalUnit;
    ULONG GsiBase;
    ULONG CmciRegister;
    UCHAR IoUnitMissing;
};

typedef struct _IO_APIC_REGISTERS {
    ULONG RegisterIndex;
    ULONG Reserved1[3];
    ULONG RegisterValue;
};

typedef struct _IO_COMPLETION_CONTEXT {
    PVOID Port;
    PVOID Key;
};

typedef struct _IO_DRIVER_CREATE_CONTEXT {
    SHORT Size;
    struct _ECP_LIST *ExtraCreateParameter;
    PVOID DeviceObjectHint;
    struct _TXN_PARAMETER_BLOCK *TxnParameters;
    struct _EJOB *SiloContext;
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
            USHORT AffinityPolicy;
            USHORT Group;
            enum _IRQ_PRIORITY PriorityPolicy;
            ULONG64 TargetedProcessors;
        } Interrupt;
        struct {
            ULONG MinimumChannel;
            ULONG MaximumChannel;
        } Dma;
        struct {
            ULONG RequestLine;
            ULONG Reserved;
            ULONG Channel;
            ULONG TransferWidth;
        } DmaV3;
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
        struct {
            UCHAR Class;
            UCHAR Type;
            UCHAR Reserved1;
            UCHAR Reserved2;
            ULONG IdLowPart;
            ULONG IdHighPart;
        } Connection;
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
            struct _IO_SECURITY_CONTEXT *SecurityContext;
            ULONG Options;
            USHORT Reserved;
            USHORT ShareAccess;
            struct _NAMED_PIPE_CREATE_PARAMETERS *Parameters;
        } CreatePipe;
        struct {
            struct _IO_SECURITY_CONTEXT *SecurityContext;
            ULONG Options;
            USHORT Reserved;
            USHORT ShareAccess;
            struct _MAILSLOT_CREATE_PARAMETERS *Parameters;
        } CreateMailslot;
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
            ULONG CompletionFilter;
            enum _DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass;
        } NotifyDirectoryEx;
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
            ULONG64 ProviderId;
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
    ULONG64 Information;
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

typedef struct _KAFFINITY_EX {
    USHORT Count;
    USHORT Size;
    ULONG Reserved;
    ULONG64 Bitmap[20];
};

typedef struct _KAPC {
    UCHAR Type;
    UCHAR SpareByte0;
    UCHAR Size;
    UCHAR SpareByte1;
    ULONG SpareLong0;
    struct _KTHREAD *Thread;
    struct _LIST_ENTRY ApcListEntry;
    PVOID Reserved[3];
    PVOID NormalContext;
    PVOID SystemArgument1;
    PVOID SystemArgument2;
    CHAR ApcStateIndex;
    CHAR ApcMode;
    UCHAR Inserted;
};

typedef struct _KARM64_ARCH_STATE {
    ULONG64 Midr_El1;
    ULONG64 Sctlr_El1;
    ULONG64 Actlr_El1;
    ULONG64 Cpacr_El1;
    ULONG64 Tcr_El1;
    ULONG64 Ttbr0_El1;
    ULONG64 Ttbr1_El1;
    ULONG64 Esr_El1;
    ULONG64 Far_El1;
    ULONG64 Pmcr_El0;
    ULONG64 Pmcntenset_El0;
    ULONG64 Pmccntr_El0;
    ULONG64 Pmxevcntr_El0[31];
    ULONG64 Pmxevtyper_El0[31];
    ULONG64 Pmovsclr_El0;
    ULONG64 Pmselr_El0;
    ULONG64 Pmuserenr_El0;
    ULONG64 Mair_El1;
    ULONG64 Vbar_El1;
};

typedef struct _KDEVICE_QUEUE {
    SHORT Type;
    SHORT Size;
    struct _LIST_ENTRY DeviceListHead;
    ULONG64 Lock;
    UCHAR Busy;
};

typedef struct _KDEVICE_QUEUE_ENTRY {
    struct _LIST_ENTRY DeviceListEntry;
    ULONG SortKey;
    UCHAR Inserted;
};

typedef struct _KDPC {
    ULONG TargetInfoAsUlong;
    UCHAR Type;
    UCHAR Importance;
    USHORT Number;
    struct _SINGLE_LIST_ENTRY DpcListEntry;
    ULONG64 ProcessorHistory;
    PVOID DeferredRoutine;
    PVOID DeferredContext;
    PVOID SystemArgument1;
    PVOID SystemArgument2;
    PVOID DpcData;
};

typedef struct _KEVENT {
    struct _DISPATCHER_HEADER Header;
};

typedef struct _KFLOATING_SAVE {
    ULONG Dummy;
};

typedef struct _KPCR {
    struct _NT_TIB NtTib;
    PVOID TibPad0[2];
    PVOID Spare1;
    struct _KPCR *Self;
    PVOID PcrReserved0;
    struct _KSPIN_LOCK_QUEUE *LockArray;
    PVOID Used_Self;
    UCHAR CurrentIrql;
    UCHAR SecondLevelCacheAssociativity;
    UCHAR Pad1[2];
    USHORT MajorVersion;
    USHORT MinorVersion;
    ULONG StallScaleFactor;
    ULONG SecondLevelCacheSize;
    USHORT SoftwareInterruptPending;
    UCHAR ApcInterrupt;
    UCHAR DispatchInterrupt;
    USHORT InterruptPad;
    ULONG64 PanicStorage[6];
    PVOID KdVersionBlock;
    PVOID HalReserved[15];
};

typedef struct _KPRCB {
    UCHAR LegacyNumber;
    UCHAR ReservedMustBeZero;
    UCHAR IdleHalt;
    struct _KTHREAD *CurrentThread;
    struct _KTHREAD *NextThread;
    struct _KTHREAD *IdleThread;
    UCHAR NestingLevel;
    UCHAR ClockOwner;
    UCHAR PendingTickFlags;
    UCHAR PendingTick : 1;
    UCHAR PendingBackupTick : 1;
    UCHAR IdleState;
    ULONG Number;
    ULONG64 PrcbLock;
    PCHAR PriorityState;
    struct _KPROCESSOR_STATE ProcessorState;
    USHORT ProcessorModel;
    USHORT ProcessorRevision;
    ULONG MHz;
    ULONG64 CycleCounterFrequency;
    ULONG64 HalReserved[10];
    USHORT MinorVersion;
    USHORT MajorVersion;
    UCHAR BuildType;
    UCHAR CpuVendor;
    UCHAR CoresPerPhysicalProcessor;
    UCHAR LogicalProcessorsPerCore;
    PVOID AcpiReserved;
    ULONG64 GroupSetMember;
    UCHAR Group;
    UCHAR GroupIndex;
};

typedef struct _KPROCESS {
};

typedef struct _KPROCESSOR_STATE {
    struct _KSPECIAL_REGISTERS SpecialRegisters;
    struct _KARM64_ARCH_STATE ArchState;
    struct _CONTEXT ContextFrame;
};

typedef struct _KSPECIAL_REGISTERS {
    ULONG64 Elr_El1;
    ULONG Spsr_El1;
    ULONG64 Tpidr_El0;
    ULONG64 Tpidrro_El0;
    ULONG64 Tpidr_El1;
    ULONG64 KernelBvr[8];
    ULONG KernelBcr[8];
    ULONG64 KernelWvr[2];
    ULONG KernelWcr[2];
};

typedef struct _KSPIN_LOCK_QUEUE {
    struct _KSPIN_LOCK_QUEUE *Next;
    PULONG64 Lock;
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

typedef struct _MAILSLOT_CREATE_PARAMETERS {
    ULONG MailslotQuota;
    ULONG MaximumMessageSize;
    union _LARGE_INTEGER ReadTimeout;
    UCHAR TimeoutSpecified;
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

typedef struct _NAMED_PIPE_CREATE_PARAMETERS {
    ULONG NamedPipeType;
    ULONG ReadMode;
    ULONG CompletionMode;
    ULONG MaximumInstances;
    ULONG InboundQuota;
    ULONG OutboundQuota;
    union _LARGE_INTEGER DefaultTimeout;
    UCHAR TimeoutSpecified;
};

typedef struct _NPAGED_LOOKASIDE_LIST {
    struct _GENERAL_LOOKASIDE L;
};

typedef struct _NT_TIB {
    struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList;
    PVOID StackBase;
    PVOID StackLimit;
    PVOID SubSystemTib;
    PVOID FiberData;
    ULONG Version;
    PVOID ArbitraryUserPointer;
    struct _NT_TIB *Self;
};

typedef struct _OWNER_ENTRY {
    ULONG64 OwnerThread;
    ULONG IoPriorityBoosted : 1;
    ULONG OwnerReferenced : 1;
    ULONG IoQoSPriorityBoosted : 1;
    ULONG OwnerCount : 29;
    ULONG TableSize;
};

typedef struct _PAGED_LOOKASIDE_LIST {
    struct _GENERAL_LOOKASIDE L;
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
    ULONG ACPIProcessorUIDInteger;
    CHAR ACPIProcessorUIDString[1];
};

typedef struct _REGISTERED_INTERRUPT_CONTROLLER {
    struct _LIST_ENTRY ListEntry;
    PVOID InternalData;
    ULONG InternalDataSize;
    struct _INTERRUPT_FUNCTION_TABLE FunctionTable;
    enum _KNOWN_CONTROLLER_TYPE KnownType;
    ULONG Capabilities;
    ULONG Flags;
    ULONG MaxPriority;
    ULONG UnitId;
    struct _LIST_ENTRY LinesHead;
    struct _LIST_ENTRY OutputLinesHead;
    LONG MinLine;
    LONG MaxLine;
    ULONG MaxClusterSize;
    ULONG MaxClusters;
    ULONG InterruptReplayDataSize;
    enum _INTERRUPT_PROBLEM Problem;
    LONG ProblemStatus;
    PCHAR ProblemSourceFile;
    ULONG ProblemSourceLine;
    ULONG CustomProblem;
    LONG CustomProblemStatus;
    struct _UNICODE_STRING ResourceId;
    struct POHANDLE__ *PowerHandle;
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

typedef struct _RTL_AVL_TREE {
    struct _RTL_BALANCED_NODE *Root;
};

typedef struct _RTL_BALANCED_NODE {
    struct _RTL_BALANCED_NODE *Children[2];
    struct _RTL_BALANCED_NODE *Left;
    struct _RTL_BALANCED_NODE *Right;
    UCHAR Red : 1;
    UCHAR Balance : 2;
    ULONG64 ParentValue;
};

typedef struct _RTL_BITMAP {
    ULONG SizeOfBitMap;
    PULONG Buffer;
};

typedef struct _RTL_DYNAMIC_HASH_TABLE {
    ULONG Flags;
    ULONG Shift;
    ULONG TableSize;
    ULONG Pivot;
    ULONG DivisorMask;
    ULONG NumEntries;
    ULONG NonEmptyBuckets;
    ULONG NumEnumerators;
    PVOID Directory;
};

typedef struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT {
    struct _LIST_ENTRY *ChainHead;
    struct _LIST_ENTRY *PrevLinkage;
    ULONG64 Signature;
};

typedef struct _RTL_DYNAMIC_HASH_TABLE_ENTRY {
    struct _LIST_ENTRY Linkage;
    ULONG64 Signature;
};

typedef struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR {
    struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;
    struct _LIST_ENTRY *CurEntry;
    struct _LIST_ENTRY *ChainHead;
    ULONG BucketIndex;
};

typedef struct _RTL_QUERY_REGISTRY_TABLE {
    PLONG QueryRoutine;
    ULONG Flags;
    PWCHAR Name;
    PVOID EntryContext;
    ULONG DefaultType;
    PVOID DefaultData;
    ULONG DefaultLength;
};

typedef struct _RTL_RB_TREE {
    struct _RTL_BALANCED_NODE *Root;
    UCHAR Encoded : 1;
    struct _RTL_BALANCED_NODE *Min;
};

typedef struct _RTL_SPLAY_LINKS {
    struct _RTL_SPLAY_LINKS *Parent;
    struct _RTL_SPLAY_LINKS *LeftChild;
    struct _RTL_SPLAY_LINKS *RightChild;
};

typedef struct _SCATTER_GATHER_ELEMENT {
    union _LARGE_INTEGER Address;
    ULONG Length;
    ULONG64 Reserved;
};

typedef struct _SCATTER_GATHER_LIST {
    ULONG NumberOfElements;
    ULONG64 Reserved;
    struct _SCATTER_GATHER_ELEMENT Elements[0];
};

typedef struct _SCSI_REQUEST_BLOCK {
};

typedef struct _SECONDARY_IC_LIST_ENTRY {
    struct _LIST_ENTRY ListEntry;
    ULONG GsivBase;
    ULONG GsivSize;
    struct _SECONDARY_INTERRUPT_PROVIDER_INTERFACE Interface;
    LONG BusyCount;
    LONG ExclusiveWaiterCount;
    struct _KEVENT NotificationEvent;
    struct _LIST_ENTRY SignalListEntry;
    struct _SECONDARY_INTERRUPT_LINE_STATE State[1];
};

typedef struct _SECONDARY_INTERRUPT_LINE_STATE {
    enum _KINTERRUPT_POLARITY Polarity;
    enum _KINTERRUPT_MODE Mode;
    ULONG Vector;
    UCHAR Unmasked;
};

typedef struct _SECONDARY_INTERRUPT_PROVIDER_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    ULONG GsivBase;
    USHORT GsivSize;
    struct _DRIVER_OBJECT *DriverObject;
    PVOID Reserved1;
    PVOID Reserved2;
    PVOID Reserved3;
    PVOID Reserved4;
    PVOID Reserved5;
    PVOID Reserved6;
    PVOID Reserved7;
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

typedef struct _SLIST_ENTRY {
    struct _SLIST_ENTRY *Next;
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
    ULONG PseudoTransition : 1;
    ULONG KernelSoftReboot : 1;
    ULONG Reserved2 : 9;
    ULONG ContextAsUlong;
};

typedef struct _TXN_PARAMETER_BLOCK {
    USHORT Length;
    USHORT TxFsContext;
    PVOID TransactionObject;
};

typedef struct _UNICODE_STRING {
    USHORT Length;
    USHORT MaximumLength;
    PWCHAR Buffer;
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
    struct _LIST_ENTRY DmaWaitEntry;
    ULONG NumberOfChannels;
    ULONG SyncCallback : 1;
    ULONG DmaContext : 1;
    ULONG ZeroMapRegisters : 1;
    ULONG Reserved : 29;
    enum _IO_ALLOCATION_ACTION *DeviceRoutine;
    PVOID DeviceContext;
    ULONG NumberOfMapRegisters;
    PVOID DeviceObject;
    PVOID CurrentIrp;
    struct _KDPC *BufferChainingDpc;
};

typedef struct _WHEA_ERROR_PACKET_V2 {
    ULONG Signature;
    ULONG Version;
    ULONG Length;
    union _WHEA_ERROR_PACKET_FLAGS Flags;
    enum _WHEA_ERROR_TYPE ErrorType;
    enum _WHEA_ERROR_SEVERITY ErrorSeverity;
    ULONG ErrorSourceId;
    enum _WHEA_ERROR_SOURCE_TYPE ErrorSourceType;
    struct _GUID NotifyType;
    ULONG64 Context;
    enum _WHEA_ERROR_PACKET_DATA_FORMAT DataFormat;
    ULONG Reserved1;
    ULONG DataOffset;
    ULONG DataLength;
    ULONG PshedDataOffset;
    ULONG PshedDataLength;
};

typedef struct _WHEA_ERROR_RECORD {
    struct _WHEA_ERROR_RECORD_HEADER Header;
    struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR SectionDescriptor[1];
};

typedef struct _WHEA_ERROR_RECORD_HEADER {
    ULONG Signature;
    union _WHEA_REVISION Revision;
    ULONG SignatureEnd;
    USHORT SectionCount;
    enum _WHEA_ERROR_SEVERITY Severity;
    union _WHEA_ERROR_RECORD_HEADER_VALIDBITS ValidBits;
    ULONG Length;
    union _WHEA_TIMESTAMP Timestamp;
    struct _GUID PlatformId;
    struct _GUID PartitionId;
    struct _GUID CreatorId;
    struct _GUID NotifyType;
    ULONG64 RecordId;
    union _WHEA_ERROR_RECORD_HEADER_FLAGS Flags;
    union _WHEA_PERSISTENCE_INFO PersistenceInfo;
    UCHAR Reserved[12];
};

typedef struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR {
    ULONG SectionOffset;
    ULONG SectionLength;
    union _WHEA_REVISION Revision;
    union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS ValidBits;
    UCHAR Reserved;
    union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS Flags;
    struct _GUID SectionType;
    struct _GUID FRUId;
    enum _WHEA_ERROR_SEVERITY SectionSeverity;
    CHAR FRUText[20];
};

typedef struct _WHEA_PROCESSOR_GENERIC_ERROR_SECTION {
    union _WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS ValidBits;
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
    ULONG64 RequesterId;
    ULONG64 ResponderId;
    ULONG64 InstructionPointer;
};

typedef struct _WHEA_RECOVERY_CONTEXT {
    struct {
        ULONG64 Address;
        UCHAR Consumed;
        USHORT ErrorCode;
        UCHAR ErrorIpValid;
        UCHAR RestartIpValid;
    } MemoryError;
    ULONG64 PartitionId;
    ULONG VpIndex;
};

typedef struct _WHEA_XPF_MCA_SECTION {
    ULONG VersionNumber;
    enum _WHEA_CPU_VENDOR CpuVendor;
    union _LARGE_INTEGER Timestamp;
    ULONG ProcessorNumber;
    union _MCG_STATUS GlobalStatus;
    ULONG64 InstructionPointer;
    ULONG BankNumber;
    union _MCI_STATUS Status;
    ULONG64 Address;
    ULONG64 Misc;
    ULONG ExtendedRegisterCount;
    ULONG Reserved2;
    ULONG64 ExtendedRegisters[24];
};

typedef struct _WHEA_XPF_PROCESSOR_ERROR_SECTION {
    union _WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS ValidBits;
    ULONG64 LocalAPICId;
    UCHAR CpuId[48];
    UCHAR VariableInfo[1];
};

typedef struct _WORK_QUEUE_ITEM {
    struct _LIST_ENTRY List;
    PVOID WorkerRoutine;
    PVOID Parameter;
};

typedef struct _XSDT {
    struct _DESCRIPTION_HEADER Header;
    union _LARGE_INTEGER Tables[1];
};

typedef union _ARM64_NT_NEON128 {
    ULONG64 Low;
    LONG64 High;
    DOUBLE D[2];
    FLOAT S[4];
    USHORT H[8];
    UCHAR B[16];
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

typedef union _MCG_STATUS {
    ULONG RestartIpValid : 1;
    ULONG ErrorIpValid : 1;
    ULONG MachineCheckInProgress : 1;
    ULONG Reserved1 : 29;
    ULONG Reserved2;
    ULONG64 QuadPart;
};

typedef union _MCI_STATUS {
    USHORT McaErrorCode;
    USHORT ModelErrorCode;
    ULONG OtherInformation : 23;
    ULONG ActionRequired : 1;
    ULONG Signalling : 1;
    ULONG ContextCorrupt : 1;
    ULONG AddressValid : 1;
    ULONG MiscValid : 1;
    ULONG ErrorEnabled : 1;
    ULONG UncorrectedError : 1;
    ULONG StatusOverFlow : 1;
    ULONG Valid : 1;
    ULONG64 QuadPart;
};

typedef union _POWER_STATE {
    enum _SYSTEM_POWER_STATE SystemState;
    enum _DEVICE_POWER_STATE DeviceState;
};

typedef union _SLIST_HEADER {
    ULONG64 Alignment;
    ULONG64 Region;
    struct {
        ULONG64 Depth : 16;
        ULONG64 Sequence : 48;
        ULONG64 Reserved : 4;
        ULONG64 NextEntry : 60;
    } HeaderArm64;
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

typedef union _WHEA_ERROR_PACKET_FLAGS {
    ULONG PreviousError : 1;
    ULONG Reserved1 : 1;
    ULONG HypervisorError : 1;
    ULONG Simulated : 1;
    ULONG PlatformPfaControl : 1;
    ULONG PlatformDirectedOffline : 1;
    ULONG Reserved2 : 26;
    ULONG AsULONG;
};

typedef union _WHEA_ERROR_RECORD_HEADER_FLAGS {
    ULONG Recovered : 1;
    ULONG PreviousError : 1;
    ULONG Simulated : 1;
    ULONG Reserved : 29;
    ULONG AsULONG;
};

typedef union _WHEA_ERROR_RECORD_HEADER_VALIDBITS {
    ULONG PlatformId : 1;
    ULONG Timestamp : 1;
    ULONG PartitionId : 1;
    ULONG Reserved : 29;
    ULONG AsULONG;
};

typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS {
    ULONG Primary : 1;
    ULONG ContainmentWarning : 1;
    ULONG Reset : 1;
    ULONG ThresholdExceeded : 1;
    ULONG ResourceNotAvailable : 1;
    ULONG LatentError : 1;
    ULONG Propagated : 1;
    ULONG Reserved : 25;
    ULONG AsULONG;
};

typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS {
    UCHAR FRUId : 1;
    UCHAR FRUText : 1;
    UCHAR Reserved : 6;
    UCHAR AsUCHAR;
};

typedef union _WHEA_PERSISTENCE_INFO {
    ULONG64 Signature : 16;
    ULONG64 Length : 24;
    ULONG64 Identifier : 16;
    ULONG64 Attributes : 2;
    ULONG64 DoNotLog : 1;
    ULONG64 Reserved : 5;
    ULONG64 AsULONGLONG;
};

typedef union _WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS {
    ULONG64 ProcessorType : 1;
    ULONG64 InstructionSet : 1;
    ULONG64 ErrorType : 1;
    ULONG64 Operation : 1;
    ULONG64 Flags : 1;
    ULONG64 Level : 1;
    ULONG64 CPUVersion : 1;
    ULONG64 CPUBrandString : 1;
    ULONG64 ProcessorId : 1;
    ULONG64 TargetAddress : 1;
    ULONG64 RequesterId : 1;
    ULONG64 ResponderId : 1;
    ULONG64 InstructionPointer : 1;
    ULONG64 Reserved : 51;
    ULONG64 ValidBits;
};

typedef union _WHEA_REVISION {
    UCHAR MinorRevision;
    UCHAR MajorRevision;
    USHORT AsUSHORT;
};

typedef union _WHEA_TIMESTAMP {
    ULONG64 Seconds : 8;
    ULONG64 Minutes : 8;
    ULONG64 Hours : 8;
    ULONG64 Precise : 1;
    ULONG64 Reserved : 7;
    ULONG64 Day : 8;
    ULONG64 Month : 8;
    ULONG64 Year : 8;
    ULONG64 Century : 8;
    union _LARGE_INTEGER AsLARGE_INTEGER;
};

typedef union _WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS {
    ULONG64 LocalAPICId : 1;
    ULONG64 CpuId : 1;
    ULONG64 ProcInfoCount : 6;
    ULONG64 ContextInfoCount : 6;
    ULONG64 Reserved : 50;
    ULONG64 ValidBits;
};

typedef union __n64 {
    ULONG64 n64_u64[1];
    ULONG n64_u32[2];
    USHORT n64_u16[4];
    UCHAR n64_u8[8];
    LONG64 n64_i64[1];
    LONG n64_i32[2];
    SHORT n64_i16[4];
    CHAR n64_i8[8];
    FLOAT n64_f32[2];
    DOUBLE n64_f64[1];
};

typedef enum BUS_QUERY_ID_TYPE {
    BusQueryDeviceID = 0,
    BusQueryHardwareIDs = 1,
    BusQueryCompatibleIDs = 2,
    BusQueryInstanceID = 3,
    BusQueryDeviceSerialNumber = 4,
    BusQueryContainerID = 5
};

typedef enum DEVICE_TEXT_TYPE {
    DeviceTextDescription = 0,
    DeviceTextLocationInformation = 1
};

typedef enum DMA_COMPLETION_STATUS {
    DmaComplete = 0,
    DmaAborted = 1,
    DmaError = 2,
    DmaCancelled = 3
};

typedef enum POWER_ACTION {
    PowerActionNone = 0,
    PowerActionReserved = 1,
    PowerActionSleep = 2,
    PowerActionHibernate = 3,
    PowerActionShutdown = 4,
    PowerActionShutdownReset = 5,
    PowerActionShutdownOff = 6,
    PowerActionWarmEject = 7,
    PowerActionDisplayOff = 8
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
    SingleBusRelations = 5,
    TransportRelations = 6
};

typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE {
    DeviceUsageTypeUndefined = 0,
    DeviceUsageTypePaging = 1,
    DeviceUsageTypeHibernation = 2,
    DeviceUsageTypeDumpFile = 3,
    DeviceUsageTypeBoot = 4,
    DeviceUsageTypePostDisplay = 5
};

typedef enum _DEVICE_WAKE_DEPTH {
    DeviceWakeDepthNotWakeable = 0,
    DeviceWakeDepthD0 = 1,
    DeviceWakeDepthD1 = 2,
    DeviceWakeDepthD2 = 3,
    DeviceWakeDepthD3hot = 4,
    DeviceWakeDepthD3cold = 5,
    DeviceWakeDepthMaximum = 6
};

typedef enum _DIRECTORY_NOTIFY_INFORMATION_CLASS {
    DirectoryNotifyInformation = 1,
    DirectoryNotifyExtendedInformation = 2
};

typedef enum _DMA_INTERRUPT_TYPE {
    InterruptTypeCompletion = 0,
    InterruptTypeError = 1,
    InterruptTypeCancelled = 2
};

typedef enum _DMA_WIDTH {
    Width8Bits = 0,
    Width16Bits = 1,
    Width32Bits = 2,
    Width64Bits = 3,
    WidthNoWrap = 4,
    MaximumDmaWidth = 5
};

typedef enum _EVENT_TYPE {
    NotificationEvent = 0,
    SynchronizationEvent = 1
};

typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution = 0,
    ExceptionContinueSearch = 1,
    ExceptionNestedException = 2,
    ExceptionCollidedUnwind = 3
};

typedef enum _EXT_IOMMU_TRANSLATION_TYPE {
    TypePassThrough = 0,
    TypeSafePassThrough = 1,
    TypeBlocked = 2,
    TypeTranslate = 3,
    TypeInvalid = 4
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
    FileIdGlobalTxDirectoryInformation = 50,
    FileIsRemoteDeviceInformation = 51,
    FileUnusedInformation = 52,
    FileNumaNodeInformation = 53,
    FileStandardLinkInformation = 54,
    FileRemoteProtocolInformation = 55,
    FileRenameInformationBypassAccessCheck = 56,
    FileLinkInformationBypassAccessCheck = 57,
    FileVolumeNameInformation = 58,
    FileIdInformation = 59,
    FileIdExtdDirectoryInformation = 60,
    FileReplaceCompletionInformation = 61,
    FileHardLinkFullIdInformation = 62,
    FileIdExtdBothDirectoryInformation = 63,
    FileDispositionInformationEx = 64,
    FileRenameInformationEx = 65,
    FileRenameInformationExBypassAccessCheck = 66,
    FileDesiredStorageClassInformation = 67,
    FileStatInformation = 68,
    FileMemoryPartitionInformation = 69,
    FileMaximumInformation = 70
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
    FileFsSectorSizeInformation = 11,
    FileFsDataCopyInformation = 12,
    FileFsMetadataSizeInformation = 13,
    FileFsMaximumInformation = 14
};

typedef enum _HALP_DMA_MAP_BUFFER_TYPE {
    HalpDmaContiguousMapBuffer = 0,
    HalpDmaNonContiguousMapBuffer = 1,
    HalpDmaMaximumMapBufferType = 2
};

typedef enum _HAL_DMA_CRASH_DUMP_REGISTER_TYPE {
    HalDmaCrashDumpRegisterSet1 = 0,
    HalDmaCrashDumpRegisterSet2 = 1,
    HalDmaCrashDumpRegisterSetMax = 2
};

typedef enum _HAL_INIT_PHASE {
    HalInitPhaseBspProcEarly = 0,
    HalInitPhaseBspProcEarlyMmReady = 1,
    HalInitPhaseBspProcEarlyTimerReady = 2,
    HalInitPhaseBspProcEarlyEnd = 3,
    HalInitPhasePnProcEarly = 4,
    HalInitPhasePnProcEarlyEnd = 5,
    HalInitPhaseBspSystemEarly = 6,
    HalInitPhaseBspSystemEarlyAcpiReady = 7,
    HalInitPhaseBspSystemEarlyHalExtensionsReady = 8,
    HalInitPhaseBspSystemEarlyInterruptsAlmostReady = 9,
    HalInitPhaseBspSystemEarlyIommusReady = 10,
    HalInitPhaseBspSystemEarlyInterruptsReady = 11,
    HalInitPhaseBspSystemEarlyDmaReady = 11,
    HalInitPhaseBspSystemEarlyProcReady = 12,
    HalInitPhaseBspSystemEarlyHwPerfCntReady = 13,
    HalInitPhaseBspSystemEarlyAllocationDone = 14,
    HalInitPhaseBspSystemEarlyEnd = 15,
    HalInitPhaseBspSystemLate = 16,
    HalInitPhaseBspSystemLateEnd = 17,
    HalInitPhasePnSystemLate = 18,
    HalInitPhasePnSystemLateEnd = 19,
    HalInitPhaseAllProcStartComplete = 20,
    HalInitPhaseAllProcStartCompleteEnd = 21,
    HalInitPhaseAcpiPdoStarted = 22,
    HalInitPhaseAcpiPdoStartedEnd = 23,
    HalInitPhaseReportResources = 24,
    HalInitPhaseReportResourcesEnd = 25,
    HalInitPhaseReportCoreSystemResources = 26,
    HalInitPhaseReportCoreSystemResourcesEnd = 27,
    HalInitPhaseInitializeTelemetry = 28,
    HalInitPhaseTelemetryReady = 29,
    HalInitPhaseTelemetryEnd = 30
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
    Vmcs = 16,
    ACPIBus = 17,
    MaximumInterfaceType = 18
};

typedef enum _INTERLOCKED_RESULT {
    ResultNegative = 1,
    ResultZero = 0,
    ResultPositive = 2
};

typedef enum _INTERRUPT_PROBLEM {
    InterruptProblemNone = 0,
    InterruptProblemMadtParsingFailure = 1,
    InterruptProblemNoControllersFound = 2,
    InterruptProblemFailedDiscovery = 3,
    InterruptProblemInitializeLocalUnitFailed = 4,
    InterruptProblemInitializeIoUnitFailed = 5,
    InterruptProblemSetLogicalIdFailed = 6,
    InterruptProblemSetLineStateFailed = 7,
    InterruptProblemGenerateMessageFailed = 8,
    InterruptProblemConvertIdFailed = 9,
    InterruptProblemCmciSetupFailed = 10,
    InterruptProblemQueryMaxProcessorsCalledTooEarly = 11,
    InterruptProblemProcessorReset = 12,
    InterruptProblemStartProcessorFailed = 13,
    InterruptProblemProcessorNotAlive = 14,
    InterruptProblemLowerIrqlViolation = 15,
    InterruptProblemInvalidIrql = 16,
    InterruptProblemNoSuchController = 17,
    InterruptProblemNoSuchLines = 18,
    InterruptProblemBadConnectionData = 19,
    InterruptProblemBadRoutingData = 20,
    InterruptProblemInvalidProcessor = 21,
    InterruptProblemFailedToAttainTarget = 22,
    InterruptProblemUnsupportedWiringConfiguration = 23,
    InterruptProblemSpareAlreadyStarted = 24,
    InterruptProblemClusterNotFullyReplaced = 25,
    InterruptProblemNewClusterAlreadyActive = 26,
    InterruptProblemNewClusterTooLarge = 27,
    InterruptProblemCannotHardwareQuiesce = 28,
    InterruptProblemIpiDestinationUpdateFailed = 29,
    InterruptProblemNoMemory = 30,
    InterruptProblemNoIrtEntries = 31,
    InterruptProblemConnectionDataBaitAndSwitch = 32,
    InterruptProblemInvalidLogicalFlatId = 33,
    InterruptProblemDeinitializeLocalUnitFailed = 34,
    InterruptProblemDeinitializeIoUnitFailed = 35,
    InterruptProblemMismatchedThermalLvtIsr = 36,
    InterruptProblemHvRetargetFailed = 37
};

typedef enum _INTERRUPT_RESULT {
    InterruptBeginFatalError = 0,
    InterruptBeginLine = 1,
    InterruptBeginSpurious = 2,
    InterruptBeginVector = 3,
    InterruptBeginNone = 4
};

typedef enum _INTERRUPT_TARGET_TYPE {
    InterruptTargetInvalid = 0,
    InterruptTargetAllIncludingSelf = 1,
    InterruptTargetAllExcludingSelf = 2,
    InterruptTargetSelfOnly = 3,
    InterruptTargetPhysical = 4,
    InterruptTargetLogicalFlat = 5,
    InterruptTargetLogicalClustered = 6,
    InterruptTargetRemapIndex = 7,
    InterruptTargetHypervisor = 8
};

typedef enum _IOMMU_DEVICE_BUS_TYPE {
    IommuDeviceBusPci = 0,
    IommuDeviceBusAcpi = 1,
    IommuDeviceBusTest = 2,
    IommuDeviceBusMax = 3
};

typedef enum _IO_ALLOCATION_ACTION {
    KeepObject = 1,
    DeallocateObject = 2,
    DeallocateObjectKeepRegisters = 3
};

typedef enum _IRQ_PRIORITY {
    IrqPriorityUndefined = 0,
    IrqPriorityLow = 1,
    IrqPriorityNormal = 2,
    IrqPriorityHigh = 3
};

typedef enum _KINTERRUPT_MODE {
    LevelSensitive = 0,
    Latched = 1
};

typedef enum _KINTERRUPT_POLARITY {
    InterruptPolarityUnknown = 0,
    InterruptActiveHigh = 1,
    InterruptRisingEdge = 1,
    InterruptActiveLow = 2,
    InterruptFallingEdge = 2,
    InterruptActiveBoth = 3,
    InterruptActiveBothTriggerLow = 3,
    InterruptActiveBothTriggerHigh = 4
};

typedef enum _KNOWN_CONTROLLER_TYPE {
    InterruptControllerInvalid = 0,
    InterruptControllerPic = 1,
    InterruptControllerApic = 2,
    InterruptControllerGic = 3,
    InterruptControllerGicV3 = 4,
    InterruptControllerGicV4 = 5,
    InterruptControllerBcm = 6,
    InterruptControllerUnknown = 4096
};

typedef enum _KSPIN_LOCK_QUEUE_NUMBER {
    LockQueueUnusedSpare0 = 0,
    LockQueueUnusedSpare1 = 1,
    LockQueueUnusedSpare2 = 2,
    LockQueueUnusedSpare3 = 3,
    LockQueueVacbLock = 4,
    LockQueueMasterLock = 5,
    LockQueueNonPagedPoolLock = 6,
    LockQueueIoCancelLock = 7,
    LockQueueUnusedSpare8 = 8,
    LockQueueIoVpbLock = 9,
    LockQueueIoDatabaseLock = 10,
    LockQueueIoCompletionLock = 11,
    LockQueueNtfsStructLock = 12,
    LockQueueAfdWorkQueueLock = 13,
    LockQueueBcbLock = 14,
    LockQueueUnusedSpare15 = 15,
    LockQueueUnusedSpare16 = 16,
    LockQueueMaximumLock = 17
};

typedef enum _MEMORY_CACHING_TYPE {
    MmNonCached = 0,
    MmCached = 1,
    MmWriteCombined = 2,
    MmHardwareCoherentCached = 3,
    MmNonCachedUnordered = 4,
    MmUSWCCached = 5,
    MmMaximumCacheType = 6,
    MmNotMapped = -1
};

typedef enum _MEMORY_CACHING_TYPE_ORIG {
    MmFrameBufferCached = 2
};

typedef enum _MODE {
    KernelMode = 0,
    UserMode = 1,
    MaximumMode = 2
};

typedef enum _POOL_TYPE {
    NonPagedPool = 0,
    NonPagedPoolExecute = 0,
    PagedPool = 1,
    NonPagedPoolMustSucceed = 2,
    DontUseThisType = 3,
    NonPagedPoolCacheAligned = 4,
    PagedPoolCacheAligned = 5,
    NonPagedPoolCacheAlignedMustS = 6,
    MaxPoolType = 7,
    NonPagedPoolBase = 0,
    NonPagedPoolBaseMustSucceed = 2,
    NonPagedPoolBaseCacheAligned = 4,
    NonPagedPoolBaseCacheAlignedMustS = 6,
    NonPagedPoolSession = 32,
    PagedPoolSession = 33,
    NonPagedPoolMustSucceedSession = 34,
    DontUseThisTypeSession = 35,
    NonPagedPoolCacheAlignedSession = 36,
    PagedPoolCacheAlignedSession = 37,
    NonPagedPoolCacheAlignedMustSSession = 38,
    NonPagedPoolNx = 512,
    NonPagedPoolNxCacheAligned = 516,
    NonPagedPoolSessionNx = 544
};

typedef enum _POWER_STATE_TYPE {
    SystemPowerState = 0,
    DevicePowerState = 1
};

typedef enum _PSCI_CALL_SUPPORTED {
    PsciCallNotSupported = 0,
    PsciCallSupportedButNotUsed = 0,
    PsciCallUndetermined = 1,
    PsciCallSupported = 2
};

typedef enum _PSCI_FUNCTION {
    PsciFunctionVersion = 0,
    PsciFunctionCpuOn = 1,
    PsciFunctionCpuSuspend = 2,
    PsciFunctionCpuOff = 3,
    PsciFunctionFeatures = 4,
    PsciFunctionCpuFreeze = 5,
    PsciFunctionCpuDefaultSuspend = 6,
    PsciFunctionSystemReset = 7,
    PsciFunctionSystemOff = 8,
    PsciFunctionSetSuspendMode = 9,
    PsciFunctionStatResidency = 10,
    PsciFunctionStatCount = 11,
    PsciFunctionSystemReset2 = 12,
    PsciFunctionMemProtect = 13,
    PsciFunctionMemProtectCheckRange = 14,
    PsciFunctionMax = 15
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
    RegNtPreRestoreKey = 41,
    RegNtPostRestoreKey = 42,
    RegNtPreSaveKey = 43,
    RegNtPostSaveKey = 44,
    RegNtPreReplaceKey = 45,
    RegNtPostReplaceKey = 46,
    RegNtPreQueryKeyName = 47,
    RegNtPostQueryKeyName = 48,
    MaxRegNtNotifyClass = 49
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

typedef enum _USER_ACTIVITY_PRESENCE {
    PowerUserPresent = 0,
    PowerUserNotPresent = 1,
    PowerUserInactive = 2,
    PowerUserMaximum = 3,
    PowerUserInvalid = 3
};

typedef enum _WHEA_CPU_VENDOR {
    WheaCpuVendorOther = 0,
    WheaCpuVendorIntel = 1,
    WheaCpuVendorAmd = 2
};

typedef enum _WHEA_ERROR_PACKET_DATA_FORMAT {
    WheaDataFormatIPFSalRecord = 0,
    WheaDataFormatXPFMCA = 1,
    WheaDataFormatMemory = 2,
    WheaDataFormatPCIExpress = 3,
    WheaDataFormatNMIPort = 4,
    WheaDataFormatPCIXBus = 5,
    WheaDataFormatPCIXDevice = 6,
    WheaDataFormatGeneric = 7,
    WheaDataFormatMax = 8
};

typedef enum _WHEA_ERROR_SEVERITY {
    WheaErrSevRecoverable = 0,
    WheaErrSevFatal = 1,
    WheaErrSevCorrected = 2,
    WheaErrSevInformational = 3
};

typedef enum _WHEA_ERROR_SOURCE_TYPE {
    WheaErrSrcTypeMCE = 0,
    WheaErrSrcTypeCMC = 1,
    WheaErrSrcTypeCPE = 2,
    WheaErrSrcTypeNMI = 3,
    WheaErrSrcTypePCIe = 4,
    WheaErrSrcTypeGeneric = 5,
    WheaErrSrcTypeINIT = 6,
    WheaErrSrcTypeBOOT = 7,
    WheaErrSrcTypeSCIGeneric = 8,
    WheaErrSrcTypeIPFMCA = 9,
    WheaErrSrcTypeIPFCMC = 10,
    WheaErrSrcTypeIPFCPE = 11,
    WheaErrSrcTypeGenericV2 = 12,
    WheaErrSrcTypeSCIGenericV2 = 13,
    WheaErrSrcTypeMax = 14
};

typedef enum _WHEA_ERROR_TYPE {
    WheaErrTypeProcessor = 0,
    WheaErrTypeMemory = 1,
    WheaErrTypePCIExpress = 2,
    WheaErrTypeNMI = 3,
    WheaErrTypePCIXBus = 4,
    WheaErrTypePCIXDevice = 5,
    WheaErrTypeGeneric = 6
};

typedef enum _tag_ARM64INTR_BARRIER_TYPE {
    _ARM64_BARRIER_SY = 15,
    _ARM64_BARRIER_ST = 14,
    _ARM64_BARRIER_LD = 13,
    _ARM64_BARRIER_ISH = 11,
    _ARM64_BARRIER_ISHST = 10,
    _ARM64_BARRIER_ISHLD = 9,
    _ARM64_BARRIER_NSH = 7,
    _ARM64_BARRIER_NSHST = 6,
    _ARM64_BARRIER_NSHLD = 5,
    _ARM64_BARRIER_OSH = 3,
    _ARM64_BARRIER_OSHST = 2,
    _ARM64_BARRIER_OSHLD = 1
};

 ?? ::EKOMKFNL::`string';
AcpiRootPdo;
ArmActiveCounters;
ArmCounterStatus;
ArmProfileInterface;
ArmProfileIntervalLimits;
ArmProfileSourceDescriptorTable;
ArmTotalCounters;
Bcm2836GlobalPriorities;
Bcm2836LocalPriorities;
DEVPKEY_Device_DmaRemappingPolicy;
DefaultProfileInterface;
DefaultProfileIntervalLimits;
DefaultProfileSourceDescriptor;
DevicesList;
DmaDispatch;
DmarptPageSizes;
ExtEnvAllocationList;
ExtEnvAllocationLock;
ExtEnvLockList;
GENERIC_NOTIFY_TYPE_GUID;
GUID_BUS_INTERFACE_STANDARD;
GUID_DEVICE_ACPI_TIME;
GUID_DEVICE_INTERFACE_REMOVAL;
GUID_DMA_CACHE_COHERENCY_INTERFACE;
GUID_EM_DISABLE_MSI_RULE;
GUID_HAL_CALLBACK_ACPI_CREATOR_REVISION;
GUID_HAL_CALLBACK_ACPI_FADT_BOOTARCH;
GUID_HAL_CALLBACK_ACPI_OEM_ID;
GUID_HAL_CALLBACK_ACPI_OEM_REVISION;
GUID_HAL_CALLBACK_ACPI_OEM_TABLE_ID;
GUID_HAL_CALLBACK_ACPI_REVISION;
GUID_IOMMU_BUS_INTERFACE;
GUID_PCC_INTERFACE_STANDARD;
HAL_ETW_EVENT_FIRMWARE_SLEEP_CORRUPTION;
HAL_ETW_EVENT_WATCHDOG_TRIGGERED;
HAL_ETW_PROVIDER;
HalAcpiDispatchTable;
HalAcpiHardwareIdString;
HalDispatchTable;
HalEfiMissedMappingsCount;
HalEfiRuntimeServicesBlock;
HalEfiRuntimeServicesTable;
HalEfiSetVirtualAddressMapStatus;
HalEfiToNtStatusMappings;
HalFirmwareInformationBlock;
HalFirmwareTypeEfi;
HalHardwareIdString;
HalInstanceIdString;
HalIommuDispatch;
HalName;
HalPrivateDispatchTable;
HalSubComponents;
HalUefiHardwareIdString;
HalpAcpiFacsMapping;
HalpAcpiMpst;
HalpAcpiMsct;
HalpAcpiMultiNode;
HalpAcpiSlit;
HalpAcpiSrat;
HalpAcpiTableCacheList;
HalpAcpiTableCacheLock;
HalpAcpiTableMatchList;
HalpAcpiTablePointers;
HalpAcpiVerifiedTable;
HalpAcquiredInterface;
HalpAllocationDescriptorArray;
HalpAllocationDescriptorArraySize;
HalpAllocationDescriptorStaticArray;
HalpAlwaysOnCounter;
HalpAlwaysOnTimer;
HalpArmErrataInfo;
HalpAuditResults;
HalpAuditStatus;
HalpAuxiliaryCounter;
HalpAvoidMmConfigAccessMethod;
HalpBarrier;
HalpCacheDisabled;
HalpCacheExt;
HalpCachingRequirements;
HalpCachingRequirementsEntryCount;
HalpChannelMemoryRangeCount;
HalpChannelMemoryRanges;
HalpClockTimer;
HalpClockWorkUnion;
HalpCmcErrorSource;
HalpCoreDmaAlignment;
HalpDiagnosticEventHandle;
HalpDiagnosticEventsRegistered;
HalpDisableHibernate;
HalpDisableNvsSaveRestore;
HalpDmaAdapterList;
HalpDmaAdapterListLock;
HalpDmaAdapterObjectType;
HalpDmaAdapters;
HalpDmaControllers;
HalpDmaDomainList;
HalpDmaDomainListLock;
HalpDmaDomainMapping;
HalpDmaDomainObjectType;
HalpDmaGrowMapBufferWorkerQueued;
HalpDmaHibernateAdapter;
HalpDmaHibernateAdapters;
HalpDmaHibernatePhase1RegisterSetIndex;
HalpDmaHibernateRegisterPhase;
HalpDmaHibernateRegisterSetIndex;
HalpDmaHibernateRegisterSets;
HalpDmaLastControllerId;
HalpDmaOperationsV2;
HalpDmaOperationsV3;
HalpDmaPdoList;
HalpDmaPdoListLock;
HalpDoingCrashDump;
HalpDriverObject;
HalpDynamicDeviceInterfaceLock;
HalpDynamicDeviceInterfaces;
HalpDynamicDevices;
HalpDynamicDevicesReady;
HalpEfiBugcheckCallbackNextRuntimeServiceIndex;
HalpEfiCapsuleCalls;
HalpEfiCapsuleWrites;
HalpEfiRuntimeCallbackRecord;
HalpEfiTimeCalls;
HalpEfiTimeWrites;
HalpEfiVariableCalls;
HalpEfiVariableWrites;
HalpEmulatedGic;
HalpEnlightenment;
HalpEnlightenmentHbSaved;
HalpExtEnvAllocationPhase;
HalpExtEnvLoaderBlock;
HalpExtHandleArray;
HalpExtHandleCount;
HalpExtLoaderBlock;
HalpExtensionImports;
HalpFallbackPerformanceCounter;
HalpFeatureBits;
HalpFirmwareStartedInEL2;
HalpFixedAcpiDescTable;
HalpFlushBarrier;
HalpFwBootPerformanceTable;
HalpFwBootPerformanceTableMaximumLength;
HalpFwS3PerformanceTable;
HalpFwS3PerformanceTableMaximumLength;
HalpGenericConfiguration;
HalpGenericGsivErrorSourceListHead;
HalpGenericGsivInitDone;
HalpGenericInitDone;
HalpGenericNmiErrorSourceListHead;
HalpGenericNmiInitDone;
HalpGenericPolledContext;
HalpGenericPolledErrorSourceListHead;
HalpGenericPollingInitDone;
HalpGenericSeaErrorSourceListHead;
HalpGenericSeaInitDone;
HalpGenericSeiErrorSourceListHead;
HalpGenericSeiInitDone;
HalpGic3;
HalpGic3ItsRequired;
HalpGic3RedistMapSize;
HalpGicLocalUnitPhysicalAddress;
HalpGitFrequency;
HalpGlobalArmMemoryMap;
HalpGlobalVolatile;
HalpHeapEnd;
HalpHeapStart;
HalpHiberInProgress;
HalpHiberProcState;
HalpHvCpuManager;
HalpHvPhysicalMemoryApi;
HalpHvPresent;
HalpHvQpcSync;
HalpHvSleepEnlightenedCpuManager;
HalpHvTimerApi;
HalpHvciEnabled;
HalpHwPerfCntProfileAcrossHaltOverride;
HalpHwToSwIrqlMap;
HalpIDTUsage;
HalpIDTUsageFlags;
HalpInterruptClusterData;
HalpInterruptClusterDataCount;
HalpInterruptClusterDataEnd;
HalpInterruptClusterDataLimit;
HalpInterruptClusterModeEnabled;
HalpInterruptClusterModeForced;
HalpInterruptController;
HalpInterruptControllerCount;
HalpInterruptDynamicProcessorCount;
HalpInterruptDynamicProcessorState;
HalpInterruptEfficiencyPresent;
HalpInterruptFixedLines;
HalpInterruptGicVersion;
HalpInterruptGlobalStartupBlock;
HalpInterruptGlobalStartupCodePhysical;
HalpInterruptHasPriorities;
HalpInterruptIoApic;
HalpInterruptIoApicCount;
HalpInterruptIpiLines;
HalpInterruptLastProblem;
HalpInterruptLastProcessorStartupInMs;
HalpInterruptLocalUnitErrorLock;
HalpInterruptLock;
HalpInterruptLogicalFlatLimit;
HalpInterruptLogicalMode;
HalpInterruptMaxCluster;
HalpInterruptMaxClusterSize;
HalpInterruptMaxGroupStarted;
HalpInterruptMaxProcessors;
HalpInterruptMsiOverrideFlags;
HalpInterruptMsiSupportDetermined;
HalpInterruptMsiSupported;
HalpInterruptNextCluster;
HalpInterruptNextClusterIndex;
HalpInterruptNmiSources;
HalpInterruptNoShorthand;
HalpInterruptOverrides;
HalpInterruptP0LocalId;
HalpInterruptPackagesStarted;
HalpInterruptPerfLinesFound;
HalpInterruptPhysicalModeOnly;
HalpInterruptPhysicalTargets;
HalpInterruptPicStateIntact;
HalpInterruptProcessorCap;
HalpInterruptProcessorCount;
HalpInterruptProcessorPcr;
HalpInterruptProcessorState;
HalpInterruptProcessorStateInitialized;
HalpInterruptProcessorSuccessfulRestarts;
HalpInterruptProcessorUnsuccessfulRestarts;
HalpInterruptProcessorsStarted;
HalpInterruptRegistrationAllowed;
HalpInterruptReplayCount;
HalpInterruptSintServiceRoutine;
HalpInterruptTargets;
HalpIommuBlockedDomain;
HalpIommuBypassDomain;
HalpIommuCount;
HalpIommuExceptionList;
HalpIommuList;
HalpIommuPageTableCached;
HalpIommuPolicy;
HalpIommuSecurityPolicy;
HalpIommuSkipPciConfigDisabled;
HalpIrtIndexBitmap;
HalpIrtIndexBitmapSize;
HalpIrtIndexCount;
HalpIrtIndexStart;
HalpIrtTotalEntries;
HalpItsExtensionInitialized;
HalpItsIort;
HalpItsRedistributorCount;
HalpItsRedistributorInfo;
HalpItsRemapInfo;
HalpItsRemapLock;
HalpIumEfiWrapperTable;
HalpKInterruptHeap;
HalpKInterruptHeapUsed;
HalpKInterruptPostPhaseZero;
HalpKInterruptPostPhaseZeroTotal;
HalpKInterruptPostPhaseZeroUsed;
HalpLaReservedRanges;
HalpLocalGic;
HalpMachineCheckConfiguration;
HalpMaxHotPlugMemoryAddress;
HalpMaxNumaPage;
HalpMaxPciBus;
HalpMaximumClockDomainCount;
HalpMaximumPhysicalMemoryAddress;
HalpMcUpdateMicrocodeFunc;
HalpMceErrorSource;
HalpMemoryCoolingPacket;
HalpMemoryCoolingPacketLock;
HalpMinNumaPage;
HalpMinPciBus;
HalpMiscCallbackRecord;
HalpMiscDebugBreakRequested;
HalpMiscDiscardLowMemory;
HalpMmLeftoverMemory;
HalpMmLeftoverMemorySize;
HalpMmLoaderBlock;
HalpMsiLinesRegistered;
HalpNPPoolAllocCtx;
HalpNewAdapter;
HalpNmiConfiguration;
HalpNmiInfo;
HalpNumaConfig;
HalpNumaDynamicMemoryRanges;
HalpNumaInitializationComplete;
HalpNumaMaxMemoryRangeCount;
HalpNumaMemoryRangeCount;
HalpNumaMemoryRangeLock;
HalpNumaMemoryRanges;
HalpNumaPageCount;
HalpNvsPreservedData;
HalpNvsPreservedDataSize;
HalpNvsRegionCount;
HalpNvsRegionData;
HalpOriginalHeapEnd;
HalpOriginalHeapStart;
HalpOriginalPerformanceCounter;
HalpOriginalStallTimer;
HalpPCIConfigLock;
HalpPciMaxDeviceOnBus;
HalpPciMcfgTable;
HalpPciMcfgTableCount;
HalpPciMcfgTableSegments;
HalpPciMmConfigReadHandlers;
HalpPciMmConfigVirtualAddress;
HalpPciMmConfigWriteHandlers;
HalpPciMultiBaseAddressSegmentAllowed;
HalpPerfCounterOverflowErrata;
HalpPerfInterruptHandler;
HalpPerformanceCounter;
HalpPicVectorRedirect;
HalpPlatformFlags;
HalpPmuHandle;
HalpPmuInUse;
HalpPowerPsciCpuSuspendFeatures;
HalpPowerPsciCurrentConduit;
HalpPowerPsciIsQc8994;
HalpPowerPsciPlatformInfo;
HalpPowerPsciPlatformInfoVersionUnknown;
HalpPowerPsciPlatformInfo_v0_2;
HalpPowerPsciPlatformInfo_v0_2_Qc8994;
HalpPowerPsciPlatformInfo_v1_0;
HalpPowerPsciPlatformInfo_v1_1;
HalpPowerPsciVersionMajor;
HalpProcessedACPIPhase0;
HalpProcessorInMceHandler;
HalpProcessorInNmiHandler;
HalpProcessorsNotCacheCoherent;
HalpProfileData;
HalpProfileInterface;
HalpProfileTimer;
HalpProfilingActive;
HalpReEnableDiagnosticEventsOnResume;
HalpRebootHandler;
HalpRegisteredInterruptControllers;
HalpRegisteredTimerCount;
HalpRegisteredTimers;
HalpResumeFlags;
HalpResumeFromHibernate;
HalpResumeStructuresAllocated;
HalpResumeTime;
HalpSaveStateSync;
HalpSavedStallCounter;
HalpShutdownActive;
HalpShutdownContext;
HalpSleepContext;
HalpSleepPageLock;
HalpStallCounter;
HalpSzBreak;
HalpSzDisableExtCache;
HalpSzDisableIommuPolicy;
HalpSzDisallowMmConfig;
HalpSzDisallowMsi;
HalpSzDmaSecurityEnabled;
HalpSzEnableIommuPolicy;
HalpSzForceClusterMode;
HalpSzForceMSI;
HalpSzMaxApicCluster;
HalpSzOneCpu;
HalpSzProfileAcrossHaltOverride;
HalpSzUseLowMemory;
HalpSzUsePhysicalApic;
HalpSzUsePlatformClock;
HalpSzUsePlatformTick;
HalpSzWatchdogDisable;
HalpSzWatchdogPhysicalOnly;
HalpTimeStampAtResume;
HalpTimerAuxiliaryClockEnabled;
HalpTimerClockStatePeriodic;
HalpTimerClockSwapViolationCount;
HalpTimerClosestAuxiliaryQpcPair;
HalpTimerCriticalClockSource;
HalpTimerCriticalClockSourceCount;
HalpTimerDeepestIdleState;
HalpTimerDelayedQueryHardwareCount;
HalpTimerDpc;
HalpTimerDriftReadjustmentCount;
HalpTimerEarliestQpcAllowedToConvert;
HalpTimerFrequenciesMeasured;
HalpTimerHeavilyPenalizedQpcCalls;
HalpTimerHvReferenceCallbackList;
HalpTimerHypervisorReferenceTime;
HalpTimerLastAlwaysOnCounterValue;
HalpTimerLastDpc;
HalpTimerLastProblem;
HalpTimerLoaderBlock;
HalpTimerMaxIncrement;
HalpTimerMaximumAllowableDrift;
HalpTimerPeriodicTimer;
HalpTimerPlatformClockSourceForced;
HalpTimerPlatformSourceForced;
HalpTimerProcessorFrequencyKnown;
HalpTimerProcessorsFrozen;
HalpTimerProfilingCallback;
HalpTimerQpcFreqForAuxQpcConversion;
HalpTimerRegistrationAllowed;
HalpTimerRtcErrorCode;
HalpTimerSavedPerformanceCounter;
HalpTimerSavedProcessorCounter;
HalpTimerWatchdogArmed;
HalpTimerWatchdogDisable;
HalpTimerWatchdogLastReset;
HalpTimerWatchdogResetCount;
HalpTimerWatchdogStopCount;
HalpTimerWatchdogTimeout;
HalpTscOnWake;
HalpTscRestoreValue;
HalpUsedAllocDescriptors;
HalpVpptLock;
HalpVpptPhysicalTimer;
HalpVpptPhysicalTimerTarget;
HalpVpptQueue;
HalpVrtcTimeStale;
HalpWakeVector;
HalpWakeupState;
HalpWatchdogTimer;
HalpWatchdogWakeDueTime;
HalpWheaCpuid;
HalpWheaMappingLock;
HalpWheaMappingMceLock;
HalpWheaMappingMceReservation;
HalpWheaMappingNmiLock;
HalpWheaMappingNmiReservation;
HalpWheaMappingReservation;
INTERRUPT_CONNECTION_DATA_PKEY;
IommuRemappingPolicy;
IommupPasidTableLock;
IommupSystemContextListHead;
IommupSystemContextListLock;
KdComPortInUse;
KdDebugDevice;
KdHvComPortInUse;
MEMORY_ERROR_SECTION_GUID;
MasterAdapterV2;
MasterAdapterV3;
NMI_NOTIFY_TYPE_GUID;
NMI_SECTION_GUID;
PCIDeref;
PROCESSOR_GENERIC_ERROR_SECTION_GUID;
PmAcpiDispatchTable;
PmRegisters;
PsciFunctionCodes;
SecondaryGsivAssignedCount;
SecondaryGsivRangeSize;
SecondaryGsivRangeStart;
SecondaryIcList;
SecondaryIcListSpinLock;
SecondaryIcServicesEnabled;
SecondarySignalDpc;
SecondarySignalDpcRunning;
SecondarySignalList;
SecondarySignalListLock;
SmmuCachedDataList;
SmmuMemoryRequirementList;
SmmuReserveOnly;
SystemPowerPhase;
TraceLoggingMetadata;
TraceLoggingMetadataEnd;
VrtcTime;
WHEA_BUSCHECK_GUID;
WHEA_CACHECHECK_GUID;
WHEA_ERROR_PACKET_SECTION_GUID;
WHEA_MSCHECK_GUID;
WHEA_TLBCHECK_GUID;
WdrtRev1Instructions;
XPF_MCA_SECTION_GUID;
XPF_PROCESSOR_ERROR_SECTION_GUID;
_IMPORT_DESCRIPTOR_PSHED;
_IMPORT_DESCRIPTOR_kdcom;
_IMPORT_DESCRIPTOR_ntoskrnl;
_NULL_IMPORT_DESCRIPTOR;
_guard_check_icall_fptr;
_imp_DbgPrint;
_imp_DbgPrintEx;
_imp_EmClientQueryRuleState;
_imp_EmpProviderRegister;
_imp_EtwEventEnabled;
_imp_EtwRegister;
_imp_EtwSetInformation;
_imp_EtwWrite;
_imp_EtwWriteTransfer;
_imp_ExAcquireFastMutex;
_imp_ExAcquirePushLockExclusiveEx;
_imp_ExAcquirePushLockSharedEx;
_imp_ExAcquireSpinLockExclusive;
_imp_ExAcquireSpinLockShared;
_imp_ExAllocatePoolWithTag;
_imp_ExCreateCallback;
_imp_ExFreePoolWithTag;
_imp_ExInitializeRundownProtection;
_imp_ExLocalTimeToSystemTime;
_imp_ExQueueWorkItem;
_imp_ExReInitializeRundownProtection;
_imp_ExRealTimeIsUniversal;
_imp_ExRegisterCallback;
_imp_ExReleaseFastMutex;
_imp_ExReleasePushLockExclusiveEx;
_imp_ExReleasePushLockSharedEx;
_imp_ExReleaseSpinLockExclusive;
_imp_ExReleaseSpinLockShared;
_imp_ExRundownCompleted;
_imp_ExSystemTimeToLocalTime;
_imp_ExWaitForRundownProtectionRelease;
_imp_ExpInterlockedPopEntrySList;
_imp_ExpInterlockedPushEntrySList;
_imp_HalDispatchTable;
_imp_HalPrivateDispatchTable;
_imp_InitializeSListHead;
_imp_IoAllocateMdl;
_imp_IoAttachDeviceToDeviceStack;
_imp_IoBuildDeviceIoControlRequest;
_imp_IoBuildPartialMdl;
_imp_IoBuildSynchronousFsdRequest;
_imp_IoConnectInterruptEx;
_imp_IoCreateDevice;
_imp_IoCreateDriver;
_imp_IoDeleteDevice;
_imp_IoFreeMdl;
_imp_IoGetAttachedDeviceReference;
_imp_IoGetDeviceObjectPointer;
_imp_IoGetDevicePropertyData;
_imp_IoQueryInterface;
_imp_IoRegisterPlugPlayNotification;
_imp_IoReportDetectedDevice;
_imp_IoReportHalResourceUsage;
_imp_IoSetDevicePropertyData;
_imp_IofCallDriver;
_imp_IofCompleteRequest;
_imp_KdGetDebugDevice;
_imp_KdInitialize;
_imp_KdPowerTransitionEx;
_imp_KeAcquireInStackQueuedSpinLock;
_imp_KeAcquireInStackQueuedSpinLockAtDpcLevel;
_imp_KeAcquireSpinLockAtDpcLevel;
_imp_KeAcquireSpinLockRaiseToDpc;
_imp_KeAddGroupAffinityEx;
_imp_KeAddProcessorAffinityEx;
_imp_KeAddProcessorGroupAffinity;
_imp_KeAndAffinityEx;
_imp_KeAndGroupAffinityEx;
_imp_KeBugCheckEx;
_imp_KeClockInterruptNotify;
_imp_KeClockTimerPowerChange;
_imp_KeCopyAffinityEx;
_imp_KeDispatchSecondaryInterrupt;
_imp_KeEnumerateNextProcessor;
_imp_KeFindConfigurationEntry;
_imp_KeFindConfigurationNextEntry;
_imp_KeFindFirstSetRightGroupAffinity;
_imp_KeFlushIoBuffers;
_imp_KeGetClockOwner;
_imp_KeGetClockTimerResolution;
_imp_KeGetCurrentThread;
_imp_KeGetNextClockTickDuration;
_imp_KeGetProcessorIndexFromNumber;
_imp_KeGetProcessorNumberFromIndex;
_imp_KeGetRecommendedSharedDataAlignment;
_imp_KeInitializeAffinityEx;
_imp_KeInitializeDeviceQueue;
_imp_KeInitializeDpc;
_imp_KeInitializeEnumerationContext;
_imp_KeInitializeEnumerationContextFromGroup;
_imp_KeInitializeEvent;
_imp_KeInitializeInterrupt;
_imp_KeInitializeMutex;
_imp_KeInitializeSecondaryInterruptServices;
_imp_KeInitializeSpinLock;
_imp_KeInitializeTimer;
_imp_KeInitializeTimerEx;
_imp_KeInsertDeviceQueue;
_imp_KeInsertQueueDpc;
_imp_KeInvalidateRangeAllCaches;
_imp_KeIpiGenericCall;
_imp_KeIsEmptyAffinityEx;
_imp_KeNotifyProcessorFreezeSupported;
_imp_KeProcessorGroupAffinity;
_imp_KeProfileInterruptWithSource;
_imp_KeQueryActiveProcessorAffinity;
_imp_KeQueryActiveProcessorCountEx;
_imp_KeQueryGroupAffinity;
_imp_KeQueryInterruptTimePrecise;
_imp_KeQueryMaximumProcessorCountEx;
_imp_KeQueryPrcbAddress;
_imp_KeQuerySystemTimePrecise;
_imp_KeQueryTimeIncrement;
_imp_KeRegisterBugCheckCallback;
_imp_KeRegisterBugCheckReasonCallback;
_imp_KeReleaseInStackQueuedSpinLock;
_imp_KeReleaseInStackQueuedSpinLockFromDpcLevel;
_imp_KeReleaseSpinLock;
_imp_KeReleaseSpinLockFromDpcLevel;
_imp_KeRemoveDeviceQueue;
_imp_KeRemoveProcessorAffinityEx;
_imp_KeRestoreProcessorState;
_imp_KeRevertToUserGroupAffinityThread;
_imp_KeSaveStateForHibernate;
_imp_KeSetEvent;
_imp_KeSetProfileIrql;
_imp_KeSetSystemGroupAffinityThread;
_imp_KeSetTimerEx;
_imp_KeStallWhileFrozen;
_imp_KeSweepLocalCaches;
_imp_KeSynchronizeTimeToQpc;
_imp_KeSystemFullyCacheCoherent;
_imp_KeWaitForSingleObject;
_imp_KiConnectHalInterrupt;
_imp_KiDeliverApc;
_imp_KiDispatchInterrupt;
_imp_KiIpiServiceRoutine;
_imp_KiReplayInterrupt;
_imp_MmAllocateContiguousMemorySpecifyCacheNode;
_imp_MmAllocateContiguousNodeMemory;
_imp_MmAllocateMappingAddress;
_imp_MmAllocatePagesForMdl;
_imp_MmBuildMdlForNonPagedPool;
_imp_MmFreeContiguousMemory;
_imp_MmFreeContiguousMemorySpecifyCache;
_imp_MmFreeMappingAddress;
_imp_MmFreePagesFromMdl;
_imp_MmGetPhysicalAddress;
_imp_MmLockPagableDataSection;
_imp_MmLockPagableSectionByHandle;
_imp_MmMapIoSpaceEx;
_imp_MmMapLockedPagesSpecifyCache;
_imp_MmMapLockedPagesWithReservedMapping;
_imp_MmSizeOfMdl;
_imp_MmUnlockPagableImageSection;
_imp_MmUnmapIoSpace;
_imp_MmUnmapLockedPages;
_imp_MmUnmapReservedMapping;
_imp_ObCreateObject;
_imp_ObCreateObjectType;
_imp_ObInsertObject;
_imp_ObReferenceObjectByHandle;
_imp_ObReferenceObjectByHandleWithTag;
_imp_ObReferenceObjectByPointer;
_imp_ObReferenceObjectSafe;
_imp_ObfDereferenceObject;
_imp_ObfDereferenceObjectWithTag;
_imp_ObfReferenceObject;
_imp_ObfReferenceObjectWithTag;
_imp_PoFxActivateComponent;
_imp_PoFxCompleteIdleCondition;
_imp_PoFxRegisterCoreDevice;
_imp_PoFxStartDevicePowerManagement;
_imp_PoGetProcessorIdleAccounting;
_imp_PoInitiateProcessorWake;
_imp_PoSetFixedWakeSource;
_imp_PoSetHiberRange;
_imp_PoStartNextPowerIrp;
_imp_PsGetCurrentProcessId;
_imp_PshedMarkHiberPhase;
_imp_PshedRetrieveErrorInfo;
_imp_RtlAreBitsClear;
_imp_RtlClearBit;
_imp_RtlClearBits;
_imp_RtlCompareMemory;
_imp_RtlCopyUnicodeString;
_imp_RtlEqualString;
_imp_RtlFindClearBits;
_imp_RtlFindClearBitsAndSet;
_imp_RtlFindLeastSignificantBit;
_imp_RtlFindMostSignificantBit;
_imp_RtlFindNextForwardRunClear;
_imp_RtlFindSetBitsAndClear;
_imp_RtlInitString;
_imp_RtlInitUnicodeString;
_imp_RtlInitializeBitMap;
_imp_RtlNumberOfClearBits;
_imp_RtlRaiseException;
_imp_RtlSetAllBits;
_imp_RtlSetBits;
_imp_RtlTimeFieldsToTime;
_imp_RtlTimeToTimeFields;
_imp_WheaConfigureErrorSource;
_imp_WheaInitializeRecordHeader;
_imp_WheaReportHwError;
_imp_ZwClose;
_imp_ZwCreateKey;
_imp_ZwDeleteValueKey;
_imp_ZwDuplicateObject;
_imp_ZwOpenFile;
_imp_ZwOpenKey;
_imp_ZwPowerInformation;
_imp_ZwQueryLicenseValue;
_imp_ZwSetValueKey;
_imp___chkstk;
_imp_atoi;
_imp_qsort;
_imp_strcmp;
_imp_strncmp;
_imp_strnlen;
_imp_strstr;
_imp_swprintf_s;
_imp_wcscpy_s;
_imp_wcsncmp;
_imp_wcsncpy_s;
_security_cookie;
_security_cookie_complement;
load_config_used;
PSHED_NULL_THUNK_DATA;
kdcom_NULL_THUNK_DATA;
ntoskrnl_NULL_THUNK_DATA;

 ?? ::FNODOBFM::`string'();
 ?? ::NNGAKEGL::`string'();
 ?? ::OKHAJAOM::`string'();
 ?? ::PBOPGDP::`string'();
Aa64HviGetVpRegister128();
Aa64HviGetVpRegister64();
Aa64HviSetVpRegister64();
ArbDeleteMmConfigRange();
ArbInitializeMmConfigRange();
ArmAllocateCounter();
ArmAllocateHardwareCounter();
ArmDisableMonitoring();
ArmEnableCounters();
ArmEnableMonitoring();
ArmEnableProfilingHardware();
ArmFreeCounter();
ArmGenWriteEventCounter();
ArmGenWriteEventType();
ArmGetProfileDescriptor();
ArmHardwareOverflowHandler();
ArmInitializeGlobalStructures();
ArmInitializeProfiling();
ArmInitializeProfilingHardware();
ArmPauseProfiling();
ArmQueryInformation();
ArmQueryProcHaltAllowed();
ArmRestartProfiling();
ArmResumeProfiling();
ArmSetInterval();
ArmSetOverflowInterval();
ArmSetupHardwareCounter();
DefaultDisableMonitoring();
DefaultEnableMonitoring();
DefaultInitializeProfiling();
DefaultOverflowHandler();
DefaultQueryInformation();
DefaultRestartProfiling();
DefaultSetInterval();
ExtDiscoverSmmu();
ExtEnvAllocateMemoryRuntime();
ExtEnvAllocatePhysicalMemory();
ExtEnvFreePhysicalMemory();
ExtEnvGetAcpiTable();
ExtEnvInitializeSpinLock();
ExtEnvRegisterIommu();
ExtEnvSetVpptTarget();
ExtEnvZeroMemory();
HalAcpiEmCheckOperator();
HalAcpiGetAllTablesDispatch();
HalAcpiGetFacsMappingDispatch();
HalAcpiGetRsdpDispatch();
HalAcpiGetTable();
HalAcpiGetTableDispatch();
HalAcpiGetTableEx();
HalAllProcessorsStarted();
HalAllocateAdapterChannel();
HalAllocateAdapterChannelEx();
HalAllocateAdapterChannelV2();
HalAllocateCommonBuffer();
HalAllocateCommonBufferEx();
HalAllocateCommonBufferV2();
HalAllocateCrashDumpRegisters();
HalAllocateDomainCommonBuffer();
HalAllocateHardwareCounters();
HalBeginSystemInterruptUnspecified();
HalBugCheckSystem();
HalBuildMdlFromScatterGatherListV2();
HalBuildMdlFromScatterGatherListV3();
HalBuildScatterGatherListEx();
HalBuildScatterGatherListV2();
HalBuildScatterGatherListV3();
HalCalculateScatterGatherListSizeV2();
HalCalculateScatterGatherListSizeV3();
HalCalibratePerformanceCounter();
HalCancelAdapterChannel();
HalCancelMappedTransfer();
HalConfigureAdapterChannel();
HalConvertDeviceIdtToIrql();
HalDisableInterrupt();
HalDmaAllocateCrashDumpRegistersEx();
HalDmaFreeCrashDumpRegistersEx();
HalEfiGetEnvironmentVariable();
HalEfiQueryCapsuleCapabilities();
HalEfiQueryVariableInfo();
HalEfiResetSystem();
HalEfiSetEnvironmentVariable();
HalEfiUpdateCapsule();
HalEnableInterrupt();
HalEndSystemInterrupt();
HalEnumerateEnvironmentVariablesEx();
HalEnumerateProcessors();
HalFlushAdapterBuffersEx();
HalFlushDmaBuffer();
HalFreeAdapterObject();
HalFreeCommonBuffer();
HalFreeCommonBufferV3();
HalFreeHardwareCounters();
HalGetAdapterV2();
HalGetAdapterV3();
HalGetBusDataByOffset();
HalGetDmaAdapterInfo();
HalGetDmaAlignment();
HalGetDmaDomain();
HalGetDmaTransferInfo();
HalGetDmaTransferInfoInternal();
HalGetEnvironmentVariable();
HalGetEnvironmentVariableEx();
HalGetInterruptTargetInformation();
HalGetMemoryCachingRequirements();
HalGetMessageRoutingInfo();
HalGetProcessorIdByNtNumber();
HalGetScatterGatherList();
HalGetScatterGatherListEx();
HalGetVectorInput();
HalInitSystem();
HalInitializeDmaTransferContext();
HalInitializeOnResume();
HalInitializeProcessor();
HalJoinDmaDomain();
HalLeaveDmaDomain();
HalMapIoSpace();
HalMapTransferEx();
HalMatchAcpiCreatorRevision();
HalMatchAcpiFADTBootArch();
HalMatchAcpiOemId();
HalMatchAcpiOemRevision();
HalMatchAcpiOemTableId();
HalMatchAcpiRevision();
HalPnpGetDmaAdapter();
HalProcessorIdle();
HalPutDmaAdapter();
HalPutScatterGatherList();
HalPutScatterGatherListV2();
HalPutScatterGatherListV3();
HalQueryEnvironmentVariableInfoEx();
HalQueryMaximumProcessorCount();
HalQueryRealTimeClock();
HalReadDmaCounter();
HalReadDmaCounterV3();
HalRealAllocateAdapterChannelV2();
HalRealAllocateAdapterChannelV3();
HalRegisterDynamicProcessor();
HalRegisterErrataCallbacks();
HalRegisterPermanentAddressUsage();
HalReportResourceUsage();
HalRequestClockInterrupt();
HalRequestIpi();
HalRequestIpiSpecifyVector();
HalRequestSoftwareInterrupt();
HalReturnToFirmware();
HalSendSoftwareInterrupt();
HalSetBusDataByOffset();
HalSetEnvironmentVariable();
HalSetEnvironmentVariableEx();
HalSetInterruptProblem();
HalSetProfileInterval();
HalSetRealTimeClock();
HalSetTimerProblem();
HalSocGetAcpiTable();
HalSocRequestApi();
HalSocRequestConfigurationData();
HalStartDynamicProcessor();
HalStartNextProcessor();
HalStartProfileInterrupt();
HalStopProfileInterrupt();
HalTranslateBusAddress();
HalUnmapIoSpace();
HalUpdateTimerCapabilities();
HalacpiIrqTranslateResourceRequirementsIsa();
HalacpiIrqTranslateResourcesIsa();
HaliAcpiMachineStateInit();
HaliAcpiQueryFlags();
HaliAcpiSleep();
HaliAddInterruptRemapping();
HaliGetDmaAdapter();
HaliGetInterruptTranslator();
HaliHaltSystem();
HaliInitPnpDriver();
HaliInitPowerManagement();
HaliLocateHiberRanges();
HaliPciInterfaceReadConfig();
HaliPciInterfaceWriteConfig();
HaliQuerySystemInformation();
HaliRemoveInterruptRemapping();
HaliSetMaxLegacyPciBusNumber();
HaliSetWakeAlarm();
HalpAcpiAllocateMemory();
HalpAcpiAoacCapable();
HalpAcpiCacheOverrideTables();
HalpAcpiCacheTable();
HalpAcpiCalculateCacheSizeForOverrideTables();
HalpAcpiCheckAndMapTable();
HalpAcpiCopyBiosTable();
HalpAcpiDetectMachineSpecificActions();
HalpAcpiFallbackOnLegacyConfigMethod();
HalpAcpiFindRsdp();
HalpAcpiGetAllTablesWork();
HalpAcpiGetCachedTable();
HalpAcpiGetFacsMapping();
HalpAcpiGetRsdt();
HalpAcpiGetTable();
HalpAcpiGetTableFromBios();
HalpAcpiGetTableWork();
HalpAcpiIBMExaMatch();
HalpAcpiIBMVigilMatch();
HalpAcpiInitDiscard();
HalpAcpiInitSystem();
HalpAcpiPmRegisterAvailable();
HalpAcpiPmRegisterRead();
HalpAcpiPmRegisterReadPciConfigSpace();
HalpAcpiPmRegisterReadPort();
HalpAcpiPmRegisterReadRegister();
HalpAcpiPmRegisterWrite();
HalpAcpiPmRegisterWritePciConfigSpace();
HalpAcpiPmRegisterWritePort();
HalpAcpiPmRegisterWriteRegister();
HalpAcpiPostSleep();
HalpAcpiPreSleep();
HalpAcpiQualcomm8994Match();
HalpAcpiRealTimeToUtcTime();
HalpAcpiSetupPmRegister();
HalpAcpiSetupPmRegisterLegacy();
HalpAcpiTableCacheInit();
HalpAcpiValidateAcpiTable();
HalpAcquireHighLevelLock();
HalpAcquirePccInterface();
HalpAcquireSecondaryIcEntryExclusive();
HalpAddAdapterToList();
HalpAddAdapterToSystemList();
HalpAddDevice();
HalpAddMcaToMemoryErrorSection();
HalpAddMcaToProcessorGenericSection();
HalpAddMcaToProcessorSpecificSection();
HalpAdjustWakeSecondsDue();
HalpAllocPhysicalMemory();
HalpAllocPhysicalMemoryInternal();
HalpAllocateAdapterCallbackV2();
HalpAllocateAdapterCallbackV3();
HalpAllocateAdapterChannel();
HalpAllocateDmaChannels();
HalpAllocateDmaResources();
HalpAllocateDmaResourcesInternal();
HalpAllocateEarlyPages();
HalpAllocateGsivForSecondaryInterrupt();
HalpAllocateKInterrupt();
HalpAllocateMapRegisters();
HalpAllocateMsiLines();
HalpAllocateNumaConfigData();
HalpAllocatePmcCounterSet();
HalpAllocateScratchMemory();
HalpAreDriversDmarCompatible();
HalpArmAcpiWakeAlarm();
HalpAssignSlotResourcesStub();
HalpAuditAcpiTables();
HalpAuditAllocateRsdtArrayTable();
HalpAuditEnumerateRsdts();
HalpAuditEnumerateRsdtsInRange();
HalpAuditGetExtendedBiosDataArea();
HalpAuditQueryResults();
HalpAuditQuerySlicAddresses();
HalpAuditSelectRsdtOrXsdt();
HalpAuditSlicTables();
HalpBcm2836AcceptAndGetSource();
HalpBcm2836ConvertId();
HalpBcm2836DescribeLines();
HalpBcm2836Discover();
HalpBcm2836EnsureIoUnitsMapped();
HalpBcm2836GetPriorityForLine();
HalpBcm2836InitializeIoUnit();
HalpBcm2836InitializeLocalUnit();
HalpBcm2836RegisterIoUnit();
HalpBcm2836RequestInterrupt();
HalpBcm2836SetLineState();
HalpBcm2836SetPriority();
HalpBcm2836StartProcessor();
HalpBcm2836ToggleAllInterrupts();
HalpBcm2836ToggleInterrupt();
HalpBcm2836WriteEndOfInterrupt();
HalpBuildResumeStructures();
HalpBuildScatterGatherList();
HalpCacheEnable();
HalpCacheFlush();
HalpCacheFlushAndInvalidatePage();
HalpCacheFlushIoBuffers();
HalpCacheFlushIoRectangle();
HalpCacheInitialize();
HalpCacheInitializeProcessor();
HalpCacheMarkHiberPhase();
HalpCalculateDivisorRate();
HalpCalculateScatterGatherListSize();
HalpCalculateTickCount();
HalpCallWakeAlarmDriver();
HalpChannelAscendingSort();
HalpChannelAssignmentSort();
HalpChannelInitializeStaticConfiguration();
HalpChannelMpnIdSort();
HalpChannelPowerRequest();
HalpCheckFixedWakeSources();
HalpCheckInterruptType();
HalpCheckSecondaryInterruptSupported();
HalpCheckWakeupTimeAndAdjust();
HalpClearPendingSwInt();
HalpCollectPmcCounters();
HalpCommitTiledPageTableWorker();
HalpConnectSyntheticInterrupt();
HalpConvertEfiToNtStatus();
HalpCopyDebugDescriptor();
HalpCorrectErrSrc();
HalpCreateErrorRecord();
HalpCreateMachineCheckErrorRecord();
HalpCreateMcaMemoryErrorRecord();
HalpCreateMcaProcessorErrorRecord();
HalpCreateNMIErrorRecord();
HalpCreateSecondaryIcEntry();
HalpCycleCounterDiscover();
HalpCycleCounterInitialize();
HalpDbgInitSystem();
HalpDeallocateMsiLines();
HalpDeleteSecondaryIcEntry();
HalpDetectHypervisor();
HalpDeviceEquals();
HalpDisableSecondaryInterrupt();
HalpDispatchPnp();
HalpDispatchPower();
HalpDispatchSoftwareInterrupt();
HalpDispatchSystemStateTransition();
HalpDispatchWmi();
HalpDmaAcquireBufferMappings();
HalpDmaAllocateChildAdapterV2();
HalpDmaAllocateChildAdapterV3();
HalpDmaAllocateContiguousMemory();
HalpDmaAllocateContiguousPagesFromContiguousPool();
HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel();
HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2();
HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3();
HalpDmaAllocateContiguousPagesFromContiguousPoolV2();
HalpDmaAllocateContiguousPagesFromContiguousPoolV3();
HalpDmaAllocateDomain();
HalpDmaAllocateEmergencyResources();
HalpDmaAllocateLocalContiguousPool();
HalpDmaAllocateLocalScatterPool();
HalpDmaAllocateMapRegisters();
HalpDmaAllocateMapRegistersAtHighLevel();
HalpDmaAllocateMappingResources();
HalpDmaAllocateNewTranslationBuffer();
HalpDmaAllocateReservedMapping();
HalpDmaAllocateReservedMappingArray();
HalpDmaAllocateScatterMemory();
HalpDmaAllocateScatterPagesFromContiguousPool();
HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2();
HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3();
HalpDmaAllocateScatterPagesFromContiguousPoolV2();
HalpDmaAllocateScatterPagesFromContiguousPoolV3();
HalpDmaAllocateScatterPagesFromScatterPool();
HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel();
HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevelV2();
HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevelV3();
HalpDmaAllocateScatterPagesFromScatterPoolV2();
HalpDmaAllocateScatterPagesFromScatterPoolV3();
HalpDmaAllocateTranslationBuffer();
HalpDmaCheckAdapterToken();
HalpDmaCommitContiguousMapBuffers();
HalpDmaCommitScatterMapBuffers();
HalpDmaControllerCancelTransfer();
HalpDmaControllerDpcRoutine();
HalpDmaControllerFlushChannel();
HalpDmaControllerInitializeController();
HalpDmaControllerInterruptRoutine();
HalpDmaControllerProgramChannel();
HalpDmaControllerQueryMaxFragments();
HalpDmaControllerReadDmaCounter();
HalpDmaControllerValidateRequestLineBinding();
HalpDmaDeleteDomain();
HalpDmaDequeueAdapter();
HalpDmaFindAdapterByDeviceObject();
HalpDmaFindDeviceObjectByToken();
HalpDmaFlushBuffer();
HalpDmaFlushBufferWithEmergencyResources();
HalpDmaFlushContiguousTransferV2();
HalpDmaFlushContiguousTransferV3();
HalpDmaFlushScatterTransferV2();
HalpDmaFlushScatterTransferV3();
HalpDmaForceAllocation();
HalpDmaFreeChildAdapter();
HalpDmaFreeCrashDumpRegisters();
HalpDmaFreeMapRegisters();
HalpDmaFreeTranslationBuffer();
HalpDmaGetAdapterCacheAlignment();
HalpDmaGetAdapterVersion();
HalpDmaGetIommuInterface();
HalpDmaGetMasterAdapterVersion();
HalpDmaGetNextWcb();
HalpDmaGetRemappingInformation();
HalpDmaGetTranslationEntries();
HalpDmaGrowContiguousMapBuffers();
HalpDmaGrowScatterMapBuffers();
HalpDmaIndexToTranslationEntry();
HalpDmaInit();
HalpDmaInitDiscard();
HalpDmaInitMemory();
HalpDmaInitPowerManagement();
HalpDmaInitSystem();
HalpDmaInitializeControllers();
HalpDmaInitializeDomain();
HalpDmaInitializeLogicalSpace();
HalpDmaInitializeMasterAdapter();
HalpDmaInsertDeviceObjectByToken();
HalpDmaIsAutomaticDomain();
HalpDmaIsDomainCompatible();
HalpDmaLinkContiguousTranslations();
HalpDmaLinkDeviceObjectByToken();
HalpDmaMapContiguousTransferV2();
HalpDmaMapContiguousTransferV3();
HalpDmaMapScatterTransferV2();
HalpDmaMapScatterTransferV3();
HalpDmaMarkHiberAdapter();
HalpDmaNextContiguousPiece();
HalpDmaNextContiguousPieceV2();
HalpDmaNextContiguousPieceV3();
HalpDmaPowerCriticalTransitionCallback();
HalpDmaPrependTranslations();
HalpDmaProcessMapRegisterQueueV2();
HalpDmaProcessMapRegisterQueueV3();
HalpDmaQueueAdapter();
HalpDmaReleaseBufferMappings();
HalpDmaRemoveAdapterFromChannelQueue();
HalpDmaRemoveAdapterFromMasterQueue();
HalpDmaRemoveWcb();
HalpDmaReturnPageToOwner();
HalpDmaReturnPageToSource();
HalpDmaReturnToContiguousPool();
HalpDmaReturnToScatterPool();
HalpDmaStartWcb();
HalpDmaSyncMapBuffers();
HalpDmaSyncMapBuffersWithEmergencyResources();
HalpDmaTranslationEntryToIndex();
HalpDmaZeroMapBuffers();
HalpDomainLaAllocate();
HalpDomainLaDelete();
HalpDpInitDiscard();
HalpDpInitSystem();
HalpDpQueryMaxHotPlugMemoryAddress();
HalpDriverEntry();
HalpDynamicDeviceInterfaceNotification();
HalpEL2InitProcessor();
HalpEfiBugCheckAddPagesCallback();
HalpEfiInitialization();
HalpEfiInitializeOnResume();
HalpEfiLockOutRuntimeCallsForSystemSleep();
HalpEfiStartRuntimeCode();
HalpEnableSecondaryInterrupt();
HalpEnumerateEnvironmentVariablesWithFilter();
HalpErrataInitSystem();
HalpExtBuildResourceIdString();
HalpExtEnvInitSystem();
HalpExtEnvMarkHiberRegions();
HalpExtGetAcpiTable();
HalpExtGetNextResourceDescriptor();
HalpExtInitExtensions();
HalpExtMarkHiberPhase();
HalpExtRegisterResourceDescriptor();
HalpExtractGenericErrorData();
HalpFindAdapterByRequestLine();
HalpFindBusAddressTranslation();
HalpFindDevice();
HalpFindDmaControllerByRequestLine();
HalpFindInterruptController();
HalpFindSecondaryIcEntry();
HalpFindSecondaryIcEntryFromObjectAndRange();
HalpFindTimer();
HalpFirmwareInitDiscard();
HalpFirmwareInitSystem();
HalpFlushAndWait();
HalpFlushMapBuffers();
HalpFreeDmaChannels();
HalpFreeNvsBuffers();
HalpFreePmcCounterSet();
HalpFreeResumeStructures();
HalpGenericPolledDpcRoutine();
HalpGenericPolledWorkerRoutine();
HalpGetAcpiStaticNumaTopology();
HalpGetAdapter();
HalpGetAvailableProximityId();
HalpGetCacheCoherency();
HalpGetDynamicDevicePointer();
HalpGetIrtEntryCount();
HalpGetMemoryRangeIndex();
HalpGetNumaProcMemoryCount();
HalpGetPCIData();
HalpGetPlatformTimerInformation();
HalpGetProcessorStats();
HalpGetResourceSortValue();
HalpGic3AcceptAndGetSource();
HalpGic3ConvertId();
HalpGic3ConvertInterruptTargetToIndex();
HalpGic3DescribeLines();
HalpGic3Discover();
HalpGic3EnsureDistributorMapped();
HalpGic3EnsureRedistributorMapped();
HalpGic3FindRedistributor();
HalpGic3GenerateMessage();
HalpGic3InitializeIoUnit();
HalpGic3InitializeLocalUnit();
HalpGic3QueryAndGetSource();
HalpGic3RegisterIoUnit();
HalpGic3RequestInterrupt();
HalpGic3SetLineState();
HalpGic3SetPriority();
HalpGic3ValidateIoUnit();
HalpGic3WriteEndOfInterrupt();
HalpGicAcceptAndGetSource();
HalpGicConvertId();
HalpGicDescribeLinesTemp();
HalpGicDiscover();
HalpGicEnsureIoUnitMapped();
HalpGicInitializeIoUnit();
HalpGicInitializeLocalUnit();
HalpGicQueryAndGetSource();
HalpGicRegisterIoUnit();
HalpGicRequestInterrupt();
HalpGicSetLineState();
HalpGicSetPriority();
HalpGicStartProcessor();
HalpGicWriteEndOfInterrupt();
HalpGitAcknowledgeInterrupt();
HalpGitArmTimer();
HalpGitAuxDiscover();
HalpGitAuxInitialize();
HalpGitAuxQueryCounter();
HalpGitDiscover();
HalpGitInitialize();
HalpGitProcessGtBlock();
HalpGitQueryCounter();
HalpGitQueryCounterA73Errata();
HalpGitRegisterMmioTimer();
HalpGitRegisterWatchdogTimer();
HalpGitStop();
HalpGitWdArmTimer();
HalpGitWdInitialize();
HalpGitWdStop();
HalpGitWriteCompareRegister();
HalpGitWriteControlRegister();
HalpGrowMapBufferWorker();
HalpHalExtInitSystem();
HalpHalt();
HalpHandleDmaCacheCoherencyInterface();
HalpHandleMaskUnmaskSecondaryInterrupt();
HalpHvCounterInitialize();
HalpHvCounterQueryCounter();
HalpHvCounterQuerySyncCounter();
HalpHvCounterUpdateCallback();
HalpHvCpuid();
HalpHvDiscover();
HalpHvGetTscFrequency();
HalpHvInitDiscard();
HalpHvInitSystem();
HalpHvMapIoApicDeviceInterrupt();
HalpHvNotifyDebugDeviceAvailable();
HalpHvRetargetDeviceMsiInterrupt();
HalpHvRetargetIoApicDeviceInterrupt();
HalpHvSetQpcBias();
HalpHvSetSleepStateProperty();
HalpHvStartProcessor();
HalpHvTimerAcknowledgeInterrupt();
HalpHvTimerArm();
HalpHvTimerInitialize();
HalpHvTimerSetInterruptVector();
HalpHvTimerStop();
HalpHvVpStartEnabled();
HalpHwPerfCntInitSystem();
HalpInitGenericErrorSourceEntry();
HalpInitGenericErrorSourceEntryV2();
HalpInitGenericErrorSourcePollingRoutine();
HalpInitMemoryCachingRequirementsTable();
HalpInitNonBusHandler();
HalpInitSystemHelper();
HalpInitSystemPhase0();
HalpInitSystemPhase1();
HalpInitializeConfigurationFromMadt();
HalpInitializeErrSrc();
HalpInitializeGenericErrorSource();
HalpInitializeInterruptRemappingBspLate();
HalpInitializeInterrupts();
HalpInitializeInterruptsBspLate();
HalpInitializeInterruptsPn();
HalpInitializePnTimers();
HalpInitializeProfiling();
HalpInitializeSecondaryInterruptServices();
HalpInitializeTelemetry();
HalpInitializeTimers();
HalpInitializeWheaPhysicalMappings();
HalpInsertSecondarySignalList();
HalpInterruptApplyOverrides();
HalpInterruptBuildGlobalStartupStub();
HalpInterruptBuildStartupStub();
HalpInterruptCheckForSoftwareInterrupt();
HalpInterruptConnect();
HalpInterruptControllerInUse();
HalpInterruptDefaultSintServiceRoutine();
HalpInterruptDestinationToTarget();
HalpInterruptEnableNmi();
HalpInterruptEnablePerformanceEvents();
HalpInterruptEnumerateUnmaskedInterrupts();
HalpInterruptEnumerateUnmaskedSecondaryInterrupts();
HalpInterruptFindBestRouting();
HalpInterruptFindControllerAndLineState();
HalpInterruptFindLines();
HalpInterruptFindLinesForGsiRange();
HalpInterruptGenerateMessage();
HalpInterruptGetHighestPriorityInterrupt();
HalpInterruptGetLocalIdentifier();
HalpInterruptGetNextProcessorLocalId();
HalpInterruptGetParkingPageInformation();
HalpInterruptGetPriority();
HalpInterruptGetRemappedLineState();
HalpInterruptGsiToLine();
HalpInterruptInitDiscard();
HalpInterruptInitPowerManagement();
HalpInterruptInitSystem();
HalpInterruptInitializeController();
HalpInterruptInitializeGlobals();
HalpInterruptInitializeIpis();
HalpInterruptInitializeLocalUnit();
HalpInterruptInternalService();
HalpInterruptIsMsiSupported();
HalpInterruptIsPicStateIntact();
HalpInterruptIsRemappingRequired();
HalpInterruptLineToGsi();
HalpInterruptLockTiledMemoryMap();
HalpInterruptLookupController();
HalpInterruptLowerHardwareIrql();
HalpInterruptMapParkedPage();
HalpInterruptMarkProcessorStarted();
HalpInterruptMaskAcpi();
HalpInterruptModel();
HalpInterruptMsiToLines();
HalpInterruptParseAcpiTables();
HalpInterruptParseMadt();
HalpInterruptPicLine();
HalpInterruptPowerChange();
HalpInterruptPowerComponentActiveCallback();
HalpInterruptPowerComponentIdleCallback();
HalpInterruptPowerCriticalTransitionCallback();
HalpInterruptPreSendIpi();
HalpInterruptQueryControllerInfo();
HalpInterruptQueryEfficiencyInformation();
HalpInterruptQueryMpidr();
HalpInterruptQueryProcessorRestartEntryPoint();
HalpInterruptRebootService();
HalpInterruptRegisterController();
HalpInterruptRegisterDynamicProcessor();
HalpInterruptRegisterLine();
HalpInterruptReinitialize();
HalpInterruptReinitializeThisProcessor();
HalpInterruptRemap();
HalpInterruptRemapFixedLines();
HalpInterruptRemapUpdateDeliveryMode();
HalpInterruptRequestInterrupt();
HalpInterruptRequestSecondaryInterrupt();
HalpInterruptResetThisProcessor();
HalpInterruptRestoreAllControllerState();
HalpInterruptRestoreClock();
HalpInterruptRestoreController();
HalpInterruptSendIpi();
HalpInterruptSendMailboxIpi();
HalpInterruptSetDestination();
HalpInterruptSetDestinationInternal();
HalpInterruptSetIdtEntry();
HalpInterruptSetLineState();
HalpInterruptSetLineStateInternal();
HalpInterruptSetMsiOverride();
HalpInterruptSetProblemEx();
HalpInterruptSetProcessorStartContext();
HalpInterruptSetRemappedDestination();
HalpInterruptSetRemappedDestinationHv();
HalpInterruptSetRemappedLineStateInternal();
HalpInterruptSintService();
HalpInterruptStartProcessor();
HalpInterruptStartProcessorPsci();
HalpInterruptUnmap();
HalpInterruptVectorDataToGsiv();
HalpInterruptWaitForProcessorStartUp();
HalpInvokeIsrForGsiv();
HalpIommuAcquireNewDomain();
HalpIommuAllocateDmaDomain();
HalpIommuAllocateRemappingTableEntry();
HalpIommuAttachDeviceDomain();
HalpIommuBlockDevice();
HalpIommuCheckDpptException();
HalpIommuCleanupPageTable();
HalpIommuConfigureInterrupt();
HalpIommuCreateDmarPageTable();
HalpIommuDereferenceHardwareDomain();
HalpIommuDomainMapLogicalRange();
HalpIommuDomainUnmapLogicalRange();
HalpIommuFreeDmaDomain();
HalpIommuFreeDomain();
HalpIommuFreeRemappingTableEntry();
HalpIommuGetDmarptPte();
HalpIommuGetHardwareDomain();
HalpIommuGetSecurityPolicy();
HalpIommuInitDiscard();
HalpIommuInitSystem();
HalpIommuInitializeAll();
HalpIommuInitializeDmar();
HalpIommuInterruptRoutine();
HalpIommuJoinDmaDomain();
HalpIommuLeaveDmaDomain();
HalpIommuLocateFromDevice();
HalpIommuMapLogicalRange();
HalpIommuMapPage();
HalpIommuMarkHiberPhase();
HalpIommuPopulateExceptionList();
HalpIommuQueryDmaRemappingCapability();
HalpIommuRegisterDispatchTable();
HalpIommuSetPolicy();
HalpIommuSetupMessageInterruptRouting();
HalpIommuSupportEnabled();
HalpIommuUnblockDevice();
HalpIommuUnmapLogicalRange();
HalpIommuUpdateRemappingTableEntry();
HalpIrtAllocateIndex();
HalpIrtFreeIndex();
HalpIsEFIRuntimeActive();
HalpIsInterruptTypeSecondary();
HalpIsPartitionCpuManager();
HalpIsSynicAvailable();
HalpIsUefiFirmwareResourceTablePresent();
HalpItsAllocateCollectionTable();
HalpItsAllocateCommandQueue();
HalpItsAllocateDeviceTable();
HalpItsAllocateRemappingTableEntry();
HalpItsConfigureSettings();
HalpItsDiscover();
HalpItsEnsureItsMapped();
HalpItsExecuteCommand();
HalpItsExecuteSyncCommand();
HalpItsFindDeviceID();
HalpItsFreeRemappingTableEntry();
HalpItsGetMessageInfo();
HalpItsInitialize();
HalpItsInvalidateLine();
HalpItsSetLpiPending();
HalpItsUpdateCollectionTableEntry();
HalpItsUpdateDeviceTable();
HalpItsUpdateDeviceTableEntry();
HalpItsUpdateInterruptTranslationTableEntry();
HalpItsUpdateRemappingTableEntry();
HalpItsValidateIts();
HalpIumGetNextVariableName();
HalpIumGetTime();
HalpIumGetVariable();
HalpIumQueryCapsuleCapabilities();
HalpIumQueryVariableInfo();
HalpIumResetSystem();
HalpIumSetTime();
HalpIumSetVariable();
HalpIumUpdateCapsule();
HalpKdEnumerateDebuggingDevices();
HalpKdReadPCIConfig();
HalpKdReleaseDebuggingDevice();
HalpKdSetupDebuggingDevice();
HalpKdWritePCIConfig();
HalpLaAllocate();
HalpLaDelete();
HalpLaFreeState();
HalpLaInitializeState();
HalpLapDeleteSubtree();
HalpLapReserveRange();
HalpLapSplitNode();
HalpLegacyShutdown();
HalpMap();
HalpMapEarlyPages();
HalpMapNvsArea();
HalpMapPhysicalMemory64();
HalpMapPhysicalMemoryWriteThrough64();
HalpMapTiled();
HalpMapTransferV2();
HalpMapTransferV3();
HalpMarkSourceSupported();
HalpMaskInterrupt();
HalpMiscBugCheckCallback();
HalpMiscGetParameters();
HalpMiscInitDiscard();
HalpMiscInitSystem();
HalpMiscInitializeTelemetry();
HalpMmAllocCtxAlloc();
HalpMmAllocCtxAllocBuffer();
HalpMmAllocCtxBufferCleanup();
HalpMmAllocCtxFree();
HalpMmAllocCtxInit();
HalpMmAllocCtxMarkHiberPhase();
HalpMmAllocateMemory();
HalpMmAllocateMemoryInternal();
HalpMmBuildTiledMemoryMap();
HalpMmGetPteAddressSafe();
HalpMmInitSystem();
HalpMmIsInsideHalVa();
HalpMmReservePageTablePages();
HalpMmZeroPageWithTemporaryMapping();
HalpMpsValueAscendingSort();
HalpNodeCostSort();
HalpNullReadWriteBusData();
HalpNumaAddRangeProximity();
HalpNumaInitializeStaticConfiguration();
HalpNumaQueryNodeCapacity();
HalpNumaQueryNodeDistance();
HalpNumaQueryProcessorNode();
HalpNumaQueryProximityId();
HalpNumaQueryProximityNode();
HalpNumaUpdateLocalId();
HalpPCIAcquireConfigSpaceLock();
HalpPCIConfig();
HalpPCIPerformConfigAccess();
HalpParseChannelCount();
HalpPassIrpFromFdoToPdo();
HalpPciAccessMmConfigSpace();
HalpPciDetectNXPiMX6();
HalpPciGetMmConfigPhysicalAddress();
HalpPciInitSystem();
HalpPciInitializeMmConfigAccess();
HalpPciMarkHiberPhase();
HalpPciReadMmConfigUchar();
HalpPciReadMmConfigUlong();
HalpPciReadMmConfigUshort();
HalpPciReportMmConfigAddressRange();
HalpPciWriteMmConfigUchar();
HalpPciWriteMmConfigUlong();
HalpPciWriteMmConfigUshort();
HalpPerfInterrupt();
HalpPnpInitSystem();
HalpPopulateMsiMessages();
HalpPostPnpInitialize();
HalpPostSleepMP();
HalpPowerBugcheckPsciReturn();
HalpPowerEarlyRestore();
HalpPowerGetPsciFunctionCode();
HalpPowerInitDiscard();
HalpPowerInitFwPerformanceTableMappings();
HalpPowerInitNvsRegionData();
HalpPowerInitPsciConduitContext();
HalpPowerInitSystem();
HalpPowerInvokeHvc();
HalpPowerInvokeSmc();
HalpPowerNtNumberAsMpidr();
HalpPowerPsciConduit();
HalpPowerPsciCpuDefaultSuspend();
HalpPowerPsciCpuOff();
HalpPowerPsciCpuOn();
HalpPowerPsciCpuSuspend();
HalpPowerPsciDecodeStateId();
HalpPowerPsciInitDiscard();
HalpPowerPsciInitDiscardDiscoverFeatures();
HalpPowerPsciInitDiscardGetVersion();
HalpPowerPsciIsFunctionAvailable();
HalpPowerPsciStatCount();
HalpPowerPsciStatResidency();
HalpPowerPsciSystemOff();
HalpPowerPsciSystemReset();
HalpPowerQueryPsciInformation();
HalpPowerSetPsciSuspendModeInternal();
HalpPowerSetRebootHandler();
HalpPowerStateCallback();
HalpPowerWriteResetCommand();
HalpPreAllocateKInterrupts();
HalpPrepareForBugcheck();
HalpPreserveNvsArea();
HalpProcGetFeatureBits();
HalpProcInitDiscard();
HalpProcInitSystem();
HalpProcessSecondarySignalList();
HalpProcessorFreeze();
HalpProcessorHalt();
HalpProcessorHaltEntry();
HalpProcessorHaltExit();
HalpProcessorHaltInternal();
HalpProcessorHaltPsciCpuFreeze();
HalpProcessorHaltPsciCpuOff();
HalpProcessorHaltPsciCpuSuspend();
HalpProcessorOff();
HalpProcessorOn();
HalpProcessorPrepareForIdle();
HalpProcessorResumeFromIdle();
HalpQueryAcpiRealTimeClock();
HalpQueryAcpiResourceRequirements();
HalpQueryAcpiWakeAlarmSystemPowerState();
HalpQueryCapsuleCapabilities();
HalpQueryChannelTopologyInformation();
HalpQueryDebuggerInformation();
HalpQueryDeviceRelations();
HalpQueryExternalCacheInformation();
HalpQueryIdFdo();
HalpQueryIdPdo();
HalpQueryInterface();
HalpQueryMaximumGsiv();
HalpQueryMaximumRegisteredProcessorCount();
HalpQueryNumaRangeTableInformation();
HalpQueryPccInterface();
HalpQueryProfileInformation();
HalpQueryResources();
HalpQueryRuntimeServicesBlockInformation();
HalpQuerySecondaryInterruptInformation();
HalpQueryVirtualRtc();
HalpQueueMapBufferWorker();
HalpReadGenericErrorInfo();
HalpReadPCIConfig();
HalpReadWheaPhysicalMemory();
HalpReadWriteWheaPhysicalMemory();
HalpReboot();
HalpRecordSecondaryGsivRange();
HalpRecoverErrSrc();
HalpReenableAcpi();
HalpRegisterCache();
HalpRegisterDeviceInUse();
HalpRegisterDmaChannel();
HalpRegisterDmaController();
HalpRegisterKdSupportFunctions();
HalpRegisterSecondaryIcInterface();
HalpReleaseHighLevelLock();
HalpReleaseSecondaryIcEntryExclusive();
HalpReleaseSecondaryIcEntryShared();
HalpRemapVirtualAddress64();
HalpReportResourceUsage();
HalpReserveHalPtes();
HalpRestartProfiling();
HalpRestoreHvEnlightenment();
HalpRestoreNvsArea();
HalpSaveAndDisableEnlightenment();
HalpSaveDmaControllerState();
HalpSaveProcessorState();
HalpSecondaryInterruptQueryPrimaryInformation();
HalpSelectFeasibleLowPowerState();
HalpSendPccCommand();
HalpSetAcpiRealTimeClock();
HalpSetIrtEntry();
HalpSetPCIData();
HalpSetPlatformFlags();
HalpSetProfileSourceInterval();
HalpSetResumeTime();
HalpSetSystemInformation();
HalpSetTimer();
HalpSetTimerAnyMode();
HalpSetVirtualRtc();
HalpSetWakeAlarm();
HalpSetupAcpiPhase0();
HalpShutdown();
HalpSignalRAS();
HalpSocApiAllocatePhysicalMemory();
HalpStartupStub();
HalpStartupStubEnd();
HalpStartupStubTarget();
HalpStartupStubThunk();
HalpStartupStubVirtualTarget();
HalpStubVmTarget();
HalpTimerAlwaysOnClockInterrupt();
HalpTimerCalculateMaximumAllowableDrift();
HalpTimerCalibratePerformanceCounter();
HalpTimerCaptureCloestAuxiliaryQpcPair();
HalpTimerCaptureCurrentAuxiliaryQpcPair();
HalpTimerClearProblem();
HalpTimerClockActivate();
HalpTimerClockArm();
HalpTimerClockInitialize();
HalpTimerClockInterrupt();
HalpTimerClockInterruptStub();
HalpTimerClockIpiRoutine();
HalpTimerClockPowerChange();
HalpTimerClockStart();
HalpTimerClockStop();
HalpTimerConfigureInterrupt();
HalpTimerConfigureQpcBypass();
HalpTimerConvertAuxiliaryCounter();
HalpTimerConvertAuxiliaryCounterToPerformanceCounter();
HalpTimerConvertPerformanceCounterToAuxiliaryCounter();
HalpTimerDelayedQueryCounter();
HalpTimerDetermineValidTimerPairReadLatency();
HalpTimerDpcRoutine();
HalpTimerFindIdealPerformanceCounterSource();
HalpTimerFindIdealScalingSource();
HalpTimerFindIdealWatchdog();
HalpTimerGetClockConfiguration();
HalpTimerGetClockRates();
HalpTimerGetInternalData();
HalpTimerGetProfilingHandler();
HalpTimerGetProfilingTarget();
HalpTimerGetSavedPerformanceCounter();
HalpTimerInitPowerManagement();
HalpTimerInitSystem();
HalpTimerInitialize();
HalpTimerInitializeClock();
HalpTimerInitializeClockPn();
HalpTimerInitializeEarlyStallSource();
HalpTimerInitializeProfiling();
HalpTimerInitializeSystemWatchdog();
HalpTimerMarkWake();
HalpTimerMeasureAllProcessorFrequencies();
HalpTimerMeasureFrequencies();
HalpTimerMeasureProcessorsWorker();
HalpTimerNoteHpetMaskingBehavior();
HalpTimerNotifyProcessorFreeze();
HalpTimerOnlyClockInterruptPending();
HalpTimerPerformanceCounterPowerChange();
HalpTimerPowerChange();
HalpTimerPowerComponentIdleCallback();
HalpTimerPowerCriticalTransitionCallback();
HalpTimerPrepareClockInterrupt();
HalpTimerProcessorRestoreContext();
HalpTimerProfileInterrupt();
HalpTimerProfilePowerChange();
HalpTimerQueryAndResetRtcErrors();
HalpTimerQueryAuxiliaryCounterFrequency();
HalpTimerQueryCycleCounter();
HalpTimerQueryProfileAvailability();
HalpTimerQueryWakeTime();
HalpTimerQueryWatchdogType();
HalpTimerReadTimerPairWithLatencyLimit();
HalpTimerRegister();
HalpTimerResetProfileAdjustment();
HalpTimerRestartProfileInterrupt();
HalpTimerRestorePerformanceCounter();
HalpTimerRestoreProcessorCounter();
HalpTimerSavePerformanceCounter();
HalpTimerSaveProcessorFrequency();
HalpTimerScaleCounter();
HalpTimerSchedulePeriodicQueries();
HalpTimerSelectRoles();
HalpTimerSetProblemEx();
HalpTimerSetProfilingHandler();
HalpTimerSetTimerBackedProfileInterval();
HalpTimerStallCounterPowerChange();
HalpTimerStallExecutionProcessor();
HalpTimerStartProfileInterrupt();
HalpTimerStopProfileInterrupt();
HalpTimerSwitchStallSource();
HalpTimerSwitchToNormalClock();
HalpTimerTraceTimingHardware();
HalpTimerUnmapInterrupt();
HalpTimerWatchdogGeneratedLastReset();
HalpTimerWatchdogLogReset();
HalpTimerWatchdogPreResetInterrupt();
HalpTimerWatchdogQueryDueTime();
HalpTimerWatchdogResetCountdown();
HalpTimerWatchdogStart();
HalpTimerWatchdogStop();
HalpTimerWatchdogTriggerSystemReset();
HalpTimerWatchdogWakeSetDueTime();
HalpTranslateBusAddress();
HalpUnmapVirtualAddress();
HalpUnmaskInterrupt();
HalpUnregisterSecondaryIcInterface();
HalpUpdateCapsule();
HalpUpdateConfigurationFromMsct();
HalpUpdateCoolingPacket();
HalpUtcTimeToAcpiRealTime();
HalpValidPCISlot();
HalpValidateInterface();
HalpValidateMpns();
HalpVerifySratEntryLengthAndFlag();
HalpVirtualStubContinue();
HalpVpptAcknowledgeInterrupt();
HalpVpptArmTimer();
HalpVpptInitialize();
HalpVpptStop();
HalpVpptTimerRegister();
HalpVpptUpdatePhysicalTimer();
HalpWatchdogDelayExpiration();
HalpWdatArmTimer();
HalpWdatDiscover();
HalpWdatExecuteActionBeforeInitialize();
HalpWdatInitialize();
HalpWdatInitializeWdat();
HalpWdatInitializeWdrt();
HalpWdatProcessWdatInternalData();
HalpWdatProcessWdrtInternalData();
HalpWdatStop();
HalpWheaInitDiscard();
HalpWheaInitProcessorGenericSection();
HalpWheaInitSystem();
HalpWritePCIConfig();
HalpWriteWheaPhysicalMemory();
HvArm64GetStartStub();
HviGetEnlightenmentInformation();
HviGetHypervisorFeatures();
HviIsAnyHypervisorPresent();
HviIsHypervisorVendorMicrosoft();
IoFlushAdapterBuffers();
IoFlushAdapterBuffersV2();
IoFlushAdapterBuffersV3();
IoFreeAdapterChannel();
IoFreeAdapterChannelV2();
IoFreeAdapterChannelV3();
IoFreeAdapterChannelV3Internal();
IoFreeAdapterChannelV3Passive();
IoFreeMapRegisters();
IoFreeMapRegistersV2();
IoFreeMapRegistersV3();
IoMapTransfer();
IoMapTransferInternal();
IommuBeginDeviceReset();
IommuDevicePowerChange();
IommuDisableDevicePasid();
IommuEnableDevicePasid();
IommuFinalizeDeviceReset();
IommuFlushAllPasid();
IommuFlushTb();
IommuGetConfiguration();
IommuGetLibraryContext();
IommuInitializeLibrary();
IommuMapDevice();
IommuProcessPageRequestQueue();
IommuSetAddressSpace();
IommuUnmapDevice();
IommupGetSystemContext();
IortGetNextNodeHeader();
KeFlushWriteBuffer();
KeGetCurrentIrql();
KeQueryPerformanceCounter();
KeRestoreProcessorState();
KeSaveStateForHibernate();
KeStallExecutionProcessor();
KeSweepLocalCaches();
KfLowerIrql();
KfRaiseIrql();
READ_PORT_BUFFER_UCHAR();
READ_PORT_BUFFER_ULONG();
READ_PORT_BUFFER_USHORT();
READ_PORT_UCHAR();
READ_PORT_ULONG();
READ_PORT_USHORT();
ReadTimeStampCounter();
RtlMoveMemory();
RtlRaiseException();
RtlULongLongMult();
SmmuGetStMemoryRequirements();
SmmuProcessIortTable();
SmmuUpdateDevicesList();
SmmupGetNextNodeHeader();
SmmupInitializeDeviceNode();
TlgWrite();
TranslateGlobalVectorToIsaVector();
WRITE_PORT_BUFFER_UCHAR();
WRITE_PORT_BUFFER_ULONG();
WRITE_PORT_BUFFER_USHORT();
WRITE_PORT_UCHAR();
WRITE_PORT_ULONG();
WRITE_PORT_USHORT();
WdHwCreateHardwareRegister();
WdHwDestroyHardwareRegister();
WdHwpGetReadMethod();
WdHwpGetWriteMethod();
WdHwpReadRegisterUChar();
WdHwpReadRegisterULong();
WdHwpReadRegisterUShort();
WdHwpWriteRegisterUChar();
WdHwpWriteRegisterULong();
WdHwpWriteRegisterUShort();
WdInstrDestroyInstruction();
WdInstrExecuteAction();
WdInstrExecuteInstruction();
WdInstrInitializeInstruction();
ZwClose();
ZwOpenKey();
ZwSetValueKey();
_GSHandlerCheck();
_TlgDefineProvider_annotation__TlgHalTraceLoggingProviderProv();
_TlgEnableCallback();
_TlgKeywordOn();
_chkstk();
_gsfailure();
_memcpy_forward();
_memcpy_forward_large_neon();
_memcpy_reverse();
_memcpy_reverse_large_neon();
_ppgsfailure();
_report_gsfailure();
_security_check_cookie();
_security_init_cookie();
_security_pop_cookie();
_security_push_cookie();
memcmp();
memcpy();
memcpy_strict_align();
memmove();
memset();
strcmp();
