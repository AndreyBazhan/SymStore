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
struct _CONTEXT;
struct _CONTROLLER_OBJECT;
struct _DESCRIPTION_HEADER;
struct _DESCRIPTOR;
struct _DEVICE_CAPABILITIES;
struct _DEVICE_OBJECT;
struct _DEVOBJ_EXTENSION;
struct _DISPATCHER_HEADER;
struct _DMA_ADAPTER;
struct _DMA_OPERATIONS;
struct _DRIVER_EXTENSION;
struct _DRIVER_OBJECT;
struct _ECP_LIST;
struct _EPROCESS;
struct _ERESOURCE;
struct _ETHREAD;
struct _EVENT_DATA_DESCRIPTOR;
struct _EVENT_DESCRIPTOR;
struct _EXCEPTION_RECORD;
struct _EXCEPTION_REGISTRATION_RECORD;
struct _FACS;
struct _FADT;
struct _FAST_IO_DISPATCH;
struct _FAST_MUTEX;
struct _FILE_BASIC_INFORMATION;
struct _FILE_GET_QUOTA_INFORMATION;
struct _FILE_NETWORK_OPEN_INFORMATION;
struct _FILE_OBJECT;
struct _FILE_STANDARD_INFORMATION;
struct _FLOATING_SAVE_AREA;
struct _GENERAL_LOOKASIDE;
struct _GENERAL_LOOKASIDE_POOL;
struct _GEN_ADDR;
struct _GUID;
struct _HAL_ENLIGHTENMENT;
struct _HARDWARE_PTE_X86;
struct _HARDWARE_PTE_X86PAE;
struct _INITIAL_PRIVILEGE_SET;
struct _INTERFACE;
struct _IOAPIC;
struct _IOSAPIC;
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
struct _KAPC;
struct _KDEVICE_QUEUE;
struct _KDEVICE_QUEUE_ENTRY;
struct _KDPC;
struct _KEVENT;
struct _KGDTENTRY;
struct _KIDTENTRY;
struct _KPCR;
struct _KPRCB;
struct _KPROCESS;
struct _KPROCESSOR_STATE;
struct _KSEMAPHORE;
struct _KSPECIAL_REGISTERS;
struct _KSPIN_LOCK_QUEUE;
struct _KSYSTEM_TIME;
struct _KTHREAD;
struct _KTSS;
struct _KUSER_SHARED_DATA;
struct _KiIoAccessMap;
struct _LIST_ENTRY;
struct _LOCAL_NMISOURCE;
struct _LOOKASIDE_LIST_EX;
struct _LUID;
struct _LUID_AND_ATTRIBUTES;
struct _MAPIC;
struct _MDL;
struct _NPAGED_LOOKASIDE_LIST;
struct _NT_TIB;
struct _OBJECT_ATTRIBUTES;
struct _OBJECT_TYPE;
struct _OWNER_ENTRY;
struct _PAGED_LOOKASIDE_LIST;
struct _PLATFORM_INTERRUPT;
struct _POWER_SEQUENCE;
struct _PRIVILEGE_SET;
struct _PROCLOCALAPIC;
struct _PROCLOCALSAPIC;
struct _RSDP;
struct _RSDT_32;
struct _RTL_BITMAP;
struct _RTL_DYNAMIC_HASH_TABLE;
struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT;
struct _RTL_DYNAMIC_HASH_TABLE_ENTRY;
struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR;
struct _SCATTER_GATHER_ELEMENT;
struct _SCATTER_GATHER_LIST;
struct _SCSI_REQUEST_BLOCK;
struct _SECTION_OBJECT_POINTERS;
struct _SECURITY_QUALITY_OF_SERVICE;
struct _SECURITY_SUBJECT_CONTEXT;
struct _SINGLE_LIST_ENTRY;
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
struct _WHEA_XPF_MCA_SECTION;
struct _WHEA_XPF_PROCESSOR_ERROR_SECTION;
struct _XSTATE_CONFIGURATION;
struct _XSTATE_FEATURE;

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

enum BUS_QUERY_ID_TYPE;
enum DEVICE_TEXT_TYPE;
enum POWER_ACTION;
enum _ALTERNATIVE_ARCHITECTURE_TYPE;
enum _DEVICE_POWER_STATE;
enum _DEVICE_RELATION_TYPE;
enum _DEVICE_USAGE_NOTIFICATION_TYPE;
enum _EVENT_TYPE;
enum _EXCEPTION_DISPOSITION;
enum _FILE_INFORMATION_CLASS;
enum _FSINFOCLASS;
enum _INTERFACE_TYPE;
enum _IO_ALLOCATION_ACTION;
enum _IRQ_PRIORITY;
enum _KSPIN_LOCK_QUEUE_NUMBER;
enum _MEMORY_CACHING_TYPE_ORIG;
enum _NT_PRODUCT_TYPE;
enum _POOL_TYPE;
enum _POWER_STATE_TYPE;
enum _REG_NOTIFY_CLASS;
enum _SECURITY_IMPERSONATION_LEVEL;
enum _SYSTEM_POWER_STATE;
enum _WHEA_CPU_VENDOR;
enum _WHEA_ERROR_PACKET_DATA_FORMAT;
enum _WHEA_ERROR_SEVERITY;
enum _WHEA_ERROR_SOURCE_TYPE;
enum _WHEA_ERROR_TYPE;

typedef struct HalpMpInfo {
    ULONG ApicVersion;
    ULONG ProcessorCount;
    ULONG DynamicProcessorCount;
    ULONG NtProcessors;
    ULONG StartedPackages;
    ULONG BusCount;
    ULONG IoApicCount;
    ULONG IoApicIntiCount;
    ULONG LintiCount;
    ULONG IMCRPresent;
    ULONG LocalApicBase;
    PULONG *IoApicBase;
    PULONG IoApicPhys;
    PULONG IoApicIntiBase;
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
            USHORT Level;
            USHORT Group;
            ULONG Vector;
            ULONG Affinity;
        } Interrupt;
        struct {
            struct {
                USHORT Group;
                USHORT MessageCount;
                ULONG Vector;
                ULONG Affinity;
            } Raw;
            struct {
                USHORT Level;
                USHORT Group;
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

typedef struct _DESCRIPTOR {
    USHORT Pad;
    USHORT Limit;
    ULONG Base;
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
    ULONG Reserved : 13;
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
    UCHAR TimerControlFlags;
    UCHAR Absolute : 1;
    UCHAR Coalescable : 1;
    UCHAR KeepShifting : 1;
    UCHAR EncodedTolerableDelay : 5;
    UCHAR Abandoned;
    UCHAR Signalling;
    UCHAR ThreadControlFlags;
    UCHAR CpuThrottled : 1;
    UCHAR CycleProfiling : 1;
    UCHAR CounterProfiling : 1;
    UCHAR Reserved : 5;
    UCHAR Hand;
    UCHAR Size;
    UCHAR TimerMiscFlags;
    UCHAR Index : 1;
    UCHAR Processor : 5;
    UCHAR Inserted : 1;
    UCHAR Expired : 1;
    UCHAR DebugActive;
    UCHAR ActiveDR7 : 1;
    UCHAR Instrumented : 1;
    UCHAR Reserved2 : 4;
    UCHAR UmsScheduled : 1;
    UCHAR UmsPrimary : 1;
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

typedef struct _ECP_LIST {
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

typedef struct _EXCEPTION_RECORD {
    LONG ExceptionCode;
    ULONG ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    ULONG NumberParameters;
    ULONG ExceptionInformation[15];
};

typedef struct _EXCEPTION_REGISTRATION_RECORD {
    struct _EXCEPTION_REGISTRATION_RECORD *Next;
    enum _EXCEPTION_DISPOSITION *Handler;
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

typedef struct _HAL_ENLIGHTENMENT {
    ULONG Enlightenments;
    ULONG HypervisorConnected;
    PVOID EndOfInterrupt;
    PVOID ApicWriteIcr;
    ULONG Reserved0;
    ULONG SpinCountMask;
    PVOID LongSpinWait;
    PULONG64 GetReferenceTime;
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
    UCHAR IOSAPICID;
    UCHAR Reserved;
    ULONG SystemVectorBase;
    ULONG IOSAPICAddress;
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

typedef struct _KGDTENTRY {
    USHORT LimitLow;
    USHORT BaseLow;
    union {
        struct {
            UCHAR BaseMid;
            UCHAR Flags1;
            UCHAR Flags2;
            UCHAR BaseHi;
        } Bytes;
        struct {
            ULONG BaseMid : 8;
            ULONG Type : 5;
            ULONG Dpl : 2;
            ULONG Pres : 1;
            ULONG LimitHi : 4;
            ULONG Sys : 1;
            ULONG Reserved_0 : 1;
            ULONG Default_Big : 1;
            ULONG Granularity : 1;
            ULONG BaseHi : 8;
        } Bits;
    } HighWord;
};

typedef struct _KIDTENTRY {
    USHORT Offset;
    USHORT Selector;
    USHORT Access;
    USHORT ExtendedOffset;
};

typedef struct _KPCR {
    struct _NT_TIB NtTib;
    struct _EXCEPTION_REGISTRATION_RECORD *Used_ExceptionList;
    PVOID Used_StackBase;
    PVOID Spare2;
    PVOID TssCopy;
    ULONG ContextSwitches;
    ULONG SetMemberCopy;
    PVOID Used_Self;
    struct _KPCR *SelfPcr;
    struct _KPRCB *Prcb;
    UCHAR Irql;
    ULONG IRR;
    ULONG IrrActive;
    ULONG IDR;
    PVOID KdVersionBlock;
    struct _KIDTENTRY *IDT;
    struct _KGDTENTRY *GDT;
    struct _KTSS *TSS;
    USHORT MajorVersion;
    USHORT MinorVersion;
    ULONG SetMember;
    ULONG StallScaleFactor;
    UCHAR SpareUnused;
    UCHAR Number;
    UCHAR Spare0;
    UCHAR SecondLevelCacheAssociativity;
    ULONG VdmAlert;
    ULONG KernelReserved[14];
    ULONG SecondLevelCacheSize;
    ULONG HalReserved[16];
};

typedef struct _KPRCB {
    USHORT MinorVersion;
    USHORT MajorVersion;
    struct _KTHREAD *CurrentThread;
    struct _KTHREAD *NextThread;
    struct _KTHREAD *IdleThread;
    UCHAR LegacyNumber;
    UCHAR NestingLevel;
    USHORT BuildType;
    CHAR CpuType;
    CHAR CpuID;
    USHORT CpuStep;
    UCHAR CpuStepping;
    UCHAR CpuModel;
    struct _KPROCESSOR_STATE ProcessorState;
    ULONG KernelReserved[16];
    ULONG HalReserved[16];
    ULONG CFlushSize;
    UCHAR CoresPerPhysicalProcessor;
    UCHAR LogicalProcessorsPerCore;
    UCHAR PrcbPad0[2];
    ULONG MHz;
    UCHAR CpuVendor;
    UCHAR GroupIndex;
    USHORT Group;
    ULONG GroupSetMember;
    ULONG Number;
    UCHAR PrcbPad1[72];
    struct _KSPIN_LOCK_QUEUE LockQueue[17];
};

typedef struct _KPROCESS {
};

typedef struct _KPROCESSOR_STATE {
    struct _CONTEXT ContextFrame;
    struct _KSPECIAL_REGISTERS SpecialRegisters;
};

typedef struct _KSEMAPHORE {
    struct _DISPATCHER_HEADER Header;
    LONG Limit;
};

typedef struct _KSPECIAL_REGISTERS {
    ULONG Cr0;
    ULONG Cr2;
    ULONG Cr3;
    ULONG Cr4;
    ULONG KernelDr0;
    ULONG KernelDr1;
    ULONG KernelDr2;
    ULONG KernelDr3;
    ULONG KernelDr6;
    ULONG KernelDr7;
    struct _DESCRIPTOR Gdtr;
    struct _DESCRIPTOR Idtr;
    USHORT Tr;
    USHORT Ldtr;
    ULONG Reserved[6];
};

typedef struct _KSPIN_LOCK_QUEUE {
    struct _KSPIN_LOCK_QUEUE *Next;
    PULONG Lock;
};

typedef struct _KSYSTEM_TIME {
    ULONG LowPart;
    LONG High1Time;
    LONG High2Time;
};

typedef struct _KTHREAD {
};

typedef struct _KTSS {
    USHORT Backlink;
    USHORT Reserved0;
    ULONG Esp0;
    USHORT Ss0;
    USHORT Reserved1;
    ULONG NotUsed1[4];
    ULONG CR3;
    ULONG Eip;
    ULONG EFlags;
    ULONG Eax;
    ULONG Ecx;
    ULONG Edx;
    ULONG Ebx;
    ULONG Esp;
    ULONG Ebp;
    ULONG Esi;
    ULONG Edi;
    USHORT Es;
    USHORT Reserved2;
    USHORT Cs;
    USHORT Reserved3;
    USHORT Ss;
    USHORT Reserved4;
    USHORT Ds;
    USHORT Reserved5;
    USHORT Fs;
    USHORT Reserved6;
    USHORT Gs;
    USHORT Reserved7;
    USHORT LDT;
    USHORT Reserved8;
    USHORT Flags;
    USHORT IoMapBase;
    struct _KiIoAccessMap IoMaps[1];
    UCHAR IntDirectionMap[32];
};

typedef struct _KUSER_SHARED_DATA {
    ULONG TickCountLowDeprecated;
    ULONG TickCountMultiplier;
    struct _KSYSTEM_TIME InterruptTime;
    struct _KSYSTEM_TIME SystemTime;
    struct _KSYSTEM_TIME TimeZoneBias;
    USHORT ImageNumberLow;
    USHORT ImageNumberHigh;
    WCHAR NtSystemRoot[260];
    ULONG MaxStackTraceDepth;
    ULONG CryptoExponent;
    ULONG TimeZoneId;
    ULONG LargePageMinimum;
    ULONG Reserved2[7];
    enum _NT_PRODUCT_TYPE NtProductType;
    UCHAR ProductTypeIsValid;
    ULONG NtMajorVersion;
    ULONG NtMinorVersion;
    UCHAR ProcessorFeatures[64];
    ULONG Reserved1;
    ULONG Reserved3;
    ULONG TimeSlip;
    enum _ALTERNATIVE_ARCHITECTURE_TYPE AlternativeArchitecture;
    ULONG AltArchitecturePad[1];
    union _LARGE_INTEGER SystemExpirationDate;
    ULONG SuiteMask;
    UCHAR KdDebuggerEnabled;
    UCHAR NXSupportPolicy;
    ULONG ActiveConsoleId;
    ULONG DismountCount;
    ULONG ComPlusPackage;
    ULONG LastSystemRITEventTickCount;
    ULONG NumberOfPhysicalPages;
    UCHAR SafeBootMode;
    UCHAR TscQpcData;
    UCHAR TscQpcEnabled : 1;
    UCHAR TscQpcSpareFlag : 1;
    UCHAR TscQpcShift : 6;
    UCHAR TscQpcPad[2];
    ULONG SharedDataFlags;
    ULONG DbgErrorPortPresent : 1;
    ULONG DbgElevationEnabled : 1;
    ULONG DbgVirtEnabled : 1;
    ULONG DbgInstallerDetectEnabled : 1;
    ULONG DbgSystemDllRelocated : 1;
    ULONG DbgDynProcessorEnabled : 1;
    ULONG DbgSEHValidationEnabled : 1;
    ULONG SpareBits : 25;
    ULONG DataFlagsPad[1];
    ULONG64 TestRetInstruction;
    ULONG SystemCall;
    ULONG SystemCallReturn;
    ULONG64 SystemCallPad[3];
    struct _KSYSTEM_TIME TickCount;
    ULONG64 TickCountQuad;
    ULONG ReservedTickCountOverlay[3];
    ULONG TickCountPad[1];
    ULONG Cookie;
    ULONG CookiePad[1];
    LONG64 ConsoleSessionForegroundProcessId;
    ULONG Wow64SharedInformation[16];
    USHORT UserModeGlobalLogger[16];
    ULONG ImageFileExecutionOptions;
    ULONG LangGenerationCount;
    ULONG64 Reserved5;
    ULONG64 InterruptTimeBias;
    ULONG64 TscQpcBias;
    ULONG ActiveProcessorCount;
    USHORT ActiveGroupCount;
    USHORT Reserved4;
    ULONG AitSamplingValue;
    ULONG AppCompatFlag;
    ULONG64 SystemDllNativeRelocation;
    ULONG SystemDllWowRelocation;
    ULONG XStatePad[1];
    struct _XSTATE_CONFIGURATION XState;
};

typedef struct _KiIoAccessMap {
    UCHAR DirectionMap[32];
    UCHAR IoMap[8196];
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
    ULONG IoPriorityBoosted : 1;
    ULONG OwnerReferenced : 1;
    ULONG OwnerCount : 30;
    ULONG TableSize;
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
    ULONG Signature;
};

typedef struct _RTL_DYNAMIC_HASH_TABLE_ENTRY {
    struct _LIST_ENTRY Linkage;
    ULONG Signature;
};

typedef struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR {
    struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;
    struct _LIST_ENTRY *ChainHead;
    ULONG BucketIndex;
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
    ULONG PseudoTransition : 1;
    ULONG Reserved2 : 10;
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

typedef struct _XSTATE_CONFIGURATION {
    ULONG64 EnabledFeatures;
    ULONG Size;
    ULONG OptimizedSave : 1;
    struct _XSTATE_FEATURE Features[64];
};

typedef struct _XSTATE_FEATURE {
    ULONG Offset;
    ULONG Size;
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
    ULONG Reserved : 26;
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

typedef enum _ALTERNATIVE_ARCHITECTURE_TYPE {
    StandardDesign = 0,
    NEC98x86 = 1,
    EndAlternatives = 2
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
    DeviceUsageTypeDumpFile = 3
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
    FileAttributeCacheInformation = 52,
    FileNumaNodeInformation = 53,
    FileStandardLinkInformation = 54,
    FileRemoteProtocolInformation = 55,
    FileMaximumInformation = 56
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
    Vmcs = 16,
    MaximumInterfaceType = 17
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

typedef enum _KSPIN_LOCK_QUEUE_NUMBER {
    LockQueueUnusedSpare0 = 0,
    LockQueueExpansionLock = 1,
    LockQueueUnusedSpare2 = 2,
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
    LockQueueMaximumLock = 17
};

typedef enum _MEMORY_CACHING_TYPE_ORIG {
    MmFrameBufferCached = 2
};

typedef enum _NT_PRODUCT_TYPE {
    NtProductWinNt = 1,
    NtProductLanManNt = 2,
    NtProductServer = 3
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
    RegNtPreRestoreKey = 41,
    RegNtPostRestoreKey = 42,
    RegNtPreSaveKey = 43,
    RegNtPostSaveKey = 44,
    RegNtPreReplaceKey = 45,
    RegNtPostReplaceKey = 46,
    MaxRegNtNotifyClass = 47
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
    WheaErrSrcTypeMax = 12
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

AcpiRootPdo;
ArbMmConfigRange;
BadIOAddrList;
CMC_NOTIFY_TYPE_GUID;
CmosRangeHandlersStdPCAT;
CurTiledCr3LowPart;
False;
GENERIC_NOTIFY_TYPE_GUID;
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
HAL_ETW_EVENT_EXPECTED_FALLBACK;
HAL_ETW_EVENT_FIRMWARE_SLEEP_CORRUPTION;
HAL_ETW_EVENT_HPET_INTERRUPT_ERROR;
HAL_ETW_EVENT_HPET_MSI_FAILURE;
HAL_ETW_EVENT_HPET_UNSUPPORTED_TABLE;
HAL_ETW_EVENT_HPET_UNSUPPORTED_TIMER;
HAL_ETW_EVENT_TIMER_PROC_DELTA_REPORT;
HAL_ETW_EVENT_TIMER_PROC_SYNCH_REPORT;
HAL_ETW_EVENT_TIMER_SYNCH_FAILED;
HAL_ETW_EVENT_TIMER_SYNCH_SUMMARY;
HAL_ETW_EVENT_UNEXPECTED_FALLBACK;
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
HalPerformEndOfInterrupt;
HalPrivateDispatchTable;
Halp1stPhysicalPageVaddr;
HalpAccountingLock;
HalpAcpiCountDown;
HalpAcpiCountReset;
HalpAcpiFacsMapping;
HalpAcpiFlags;
HalpAcpiInterruptMasked;
HalpAcpiInterruptRunning;
HalpAcpiMsct;
HalpAcpiMultiNode;
HalpAcpiNvsData;
HalpAcpiSrat;
HalpAcpiTableCacheList;
HalpAcpiTableCacheLock;
HalpAcpiTableMatchList;
HalpAcpiTablePointers;
HalpAcpiVerifiedTable;
HalpAddressUsageList;
HalpAllocationDescriptorArray;
HalpApicErrorLog;
HalpApicIcrNoDestShorthand;
HalpApicMaxCluster;
HalpApicReadGenericReg;
HalpApicTable;
HalpApicUsage;
HalpApicWaitForIcr;
HalpApicWriteGenericReg;
HalpApicWriteIcr;
HalpAssertFailedOnce;
HalpAuditResults;
HalpAuditStatus;
HalpAuthenticAMD;
HalpAvoidMmConfigAccessMethod;
HalpBarrier;
HalpBiosCallCount;
HalpBootProcIntMap;
HalpBroadcastContext;
HalpBroadcastFunction;
HalpBroadcastLock;
HalpBroadcastTargets;
HalpBroken440BX;
HalpBrokenAcpiTimer;
HalpBrokenPmTimerClockIncrement;
HalpBrokenPmTimerFrequency;
HalpBrokenPmTimerLockRequired;
HalpBrokenPmTimerOldTime;
HalpBrokenPmTimerSkew;
HalpBugcheckInProgress;
HalpCR3Root;
HalpCachingRequirements;
HalpCachingRequirementsEntryCount;
HalpCallbackRecord;
HalpChipHackCount;
HalpChipHacksTable;
HalpClockInterrupt;
HalpClockInterruptStub;
HalpClockMcaQueueDpc;
HalpClockMessageInterruptRouting;
HalpClockSetMSRate;
HalpClockSource;
HalpClockWork;
HalpClusterAffinity;
HalpClusterCount;
HalpClusterId;
HalpCmcContext;
HalpCmcErrorPacket;
HalpCmcErrorSource;
HalpCmcErrorSourceId;
HalpCmcFallbackLock;
HalpCmcLock;
HalpCmcPollingInitialized;
HalpCmcPollingStartDeferred;
HalpCmcPollingStarted;
HalpCmcReserveErrorPacket;
HalpCmciEnabled;
HalpCmciRevertToPolledMode;
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
HalpDeepIdleStatesDisableTscSource;
HalpDeepIdleStatesInUse;
HalpDefaultApicDestinationModeMask;
HalpDefaultPcIoSpace;
HalpDevLevel;
HalpDevPolarity;
HalpDiagnosticEventHandle;
HalpDiagnosticEventsRegistered;
HalpDisableHibernate;
HalpDisableNvsSaveRestore;
HalpDisableS5Hibernation;
HalpDiscardLowMemory;
HalpDmaAdapterList;
HalpDmaAdapterListLock;
HalpDmaChannelState;
HalpDmaOperations;
HalpDoingCrashDump;
HalpDontStartProcessors;
HalpDriverObject;
HalpDynamicProcLocalApicTable;
HalpEisaAdapter;
HalpEisaControlBase;
HalpEnableIrqlAudit;
HalpEnableIrqlPPRValidation;
HalpEnabledSmiRteCount;
HalpEnlightenment;
HalpFDMAAvail;
HalpFDMAChecked;
HalpFDMAInterface;
HalpFakePciBusData;
HalpFakePciBusHandler;
HalpFallbackPlatformClock;
HalpFallbackPlatformClockSupported;
HalpFeatureBits;
HalpFixedAcpiDescTable;
HalpForceApicPhysicalDestinationMode;
HalpForceClusteredApicMode;
HalpForceLegacyApicMode;
HalpFrameBufferBase;
HalpGenericConfiguration;
HalpGenericInitDone;
HalpGenericNmiErrorSourceListHead;
HalpGenericNmiInitDone;
HalpGenericPolledContext;
HalpGenericPolledErrorSourceListHead;
HalpGenericPollingInitDone;
HalpGenuineIntel;
HalpGetInfoFromACPI;
HalpGlobal8259Mask;
HalpGlobalVolatile;
HalpHardwareTimeRollover;
HalpHeapEnd;
HalpHeapStart;
HalpHiberInProgress;
HalpHiberProcState;
HalpHpetAddress;
HalpHpetClockTable;
HalpHpetClockTimerInti;
HalpHpetCurrentProfileComparator;
HalpHpetCurrentProfileTickCount;
HalpHpetCurrentTime;
HalpHpetFrequency;
HalpHpetHalfRollover;
HalpHpetHypervisorTimerInti;
HalpHpetInitializationStatus;
HalpHpetInitialized;
HalpHpetIrqOffset;
HalpHpetIrqPolicy;
HalpHpetLegacyInterruptCapable;
HalpHpetMemoryUsage;
HalpHpetMessageInterruptsEnabled;
HalpHpetMinimumOneShotTickCount;
HalpHpetPeriod;
HalpHpetPreviousTimeBias;
HalpHpetProfileTimerInti;
HalpHpetRolloverTimerInti;
HalpHpetTimeBias;
HalpHpetTimerCount;
HalpHpetTimerState;
HalpHvLaunchRequested;
HalpHvReferenceTimeBias;
HalpHybridApicPhysicalTargets;
HalpHyperThreadingEnabled;
HalpIDTUsage;
HalpIDTUsageFlags;
HalpIdtExclusionList;
HalpImcrIoSpace;
HalpInitLevel;
HalpInitialRtcClockRateIndex;
HalpIntDestMap;
HalpIntDestMapEx;
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
HalpIpiResGroupsReserved;
HalpIpiRoutine;
HalpIpiTargetLookup;
HalpIpiTargetMask;
HalpIrtCacheInvalidationLock;
HalpKdInitialResourceConstraints;
HalpKdSavedResourceConstraints;
HalpLastTickIncrement;
HalpLocalApicErrorCount;
HalpLocalApicErrorLock;
HalpLocalNmiSources;
HalpLowMemoryMap;
HalpLowMemoryMapBuffer;
HalpLowMemoryMapStack;
HalpLowMemoryMapStackBuffer;
HalpLowStub;
HalpLowStubPhysicalAddress;
HalpMachineCheckConfiguration;
HalpMachineType;
HalpManualClusterModeSpecified;
HalpMaxApicInti;
HalpMaxHotPlugMemoryAddress;
HalpMaxPciBus;
HalpMaxProcs;
HalpMaxProcsPerCluster;
HalpMaximumClockDomainCount;
HalpMaximumGroupSize;
HalpMaximumProcessorDependencyFlags;
HalpMcUpdateLockFunc;
HalpMcUpdateMicrocodeFunc;
HalpMcUpdatePostUpdateFunc;
HalpMcUpdateUnlockFunc;
HalpMcaBanksValidOnBoot;
HalpMcaEnabled;
HalpMcaMiscImplemented;
HalpMcaNumberOfBanks;
HalpMcaPcrContextData;
HalpMcaPollForCmc;
HalpMcaRecoveryPolicy;
HalpMcaRecoverySupported;
HalpMcaScanTime;
HalpMcaWheaReady;
HalpMceBackupErrorBuffer;
HalpMceBroadcast;
HalpMceEnabled;
HalpMceErrorFound;
HalpMceErrorSource;
HalpMceErrorSourceId;
HalpMceLock;
HalpMceProcessorCount;
HalpMceRendezvousCount;
HalpMceRendezvousInProgress;
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
HalpNmiConfiguration;
HalpNmiInfo;
HalpNumaConfig;
HalpNumaCurrentMemoryRangeCount;
HalpNumaDynamicMemoryRanges;
HalpNumaLastRangeIndex;
HalpNumaMaxMemoryRangeCount;
HalpNumaMemoryNode;
HalpNumaMemoryRangeLock;
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
HalpPciErrorHandlerCallback;
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
HalpPmuHandle;
HalpPmuInUse;
HalpProc0TSCHz;
HalpProcLocalApicTable;
HalpProcessedACPIPhase0;
HalpProcessorCounterLastWake;
HalpProcessorInMceHandler;
HalpProcessorInNmiHandler;
HalpProcessorPCR;
HalpProcessorsNotHalted;
HalpProfileRunning;
HalpProfileTimerHandler;
HalpProfileTimerSource;
HalpPteForFlush;
HalpQueryPerformanceCounterOriginalSource;
HalpQueryPerformanceCounterOriginalSourceFrequency;
HalpQueryPerformanceCounterSource;
HalpRateCorrection;
HalpRebootNow;
HalpResumeFromHibernate;
HalpResumeStructuresAllocated;
HalpRtcRegA;
HalpRtcRegB;
HalpRtcTimeIncrements;
HalpSafeBootMode;
HalpSavedProcessorCounter;
HalpScaleWithPmTimer;
HalpShutdownActive;
HalpShutdownContext;
HalpSimpleBootFlagTable;
HalpSleepContext;
HalpSleepPage16Lock;
HalpSleepPageLock;
HalpSleepSync;
HalpStallExecutionProcessorSavedSource;
HalpStallExecutionProcessorSource;
HalpStaticIntAffinity;
HalpSystemHardwareLock;
HalpSzBreak;
HalpSzClockLevel;
HalpSzDisallowMmConfig;
HalpSzDisallowMsi;
HalpSzEnableX2ApicPolicy;
HalpSzForceClusterMode;
HalpSzForceMSI;
HalpSzGroupSize;
HalpSzHypervisorLaunchRequested;
HalpSzInterruptAffinity;
HalpSzMaxApicCluster;
HalpSzOneCpu;
HalpSzPciLock;
HalpSzTimerRes;
HalpSzUse8254;
HalpSzUseLegacyApicMode;
HalpSzUseLowMemory;
HalpSzUsePhysicalApic;
HalpSzUsePlatformClock;
HalpTiledCr3Addresses;
HalpTimeSourceInitializationComplete;
HalpTimerWatchdogEnabled;
HalpTimerWatchdogStorageOverflow;
HalpTotalReplayed;
HalpTscBitShift;
HalpTscDeltas;
HalpTscFallbackLock;
HalpTscInvariantIdleStates;
HalpTscInvariantPerfStates;
HalpTscMaximumCounterSyncSpread;
HalpTscNopCycles;
HalpTscProcessorFeatureFallback;
HalpTscSkewOffset;
HalpTscSynchronizationFailureFallback;
HalpTscWaves;
HalpUseDbgPrint;
HalpUsePlatformClock;
HalpUsedAllocDescriptors;
HalpVectorToIRQL;
HalpVerifierInUse;
HalpVirtAddrForFlush;
HalpWAETDeviceFlags;
HalpWakeVector;
HalpWakeupState;
HalpWheaMappingLock;
HalpWheaMappingMceLock;
HalpWheaMappingMceReservation;
HalpWheaMappingNmiLock;
HalpWheaMappingNmiReservation;
HalpWheaMappingReservation;
HalpX2ApicModeEnabled;
HalpX2ApicPolicy;
HiberFreeCR3;
IoAdapterObjectType;
KdComPortInUse;
KdDebuggerEnabled;
KdDebuggerNotPresent;
KeTickCount;
KiBugCheckData;
LastKnownGood;
LessThan16Mb;
MCE_NOTIFY_TYPE_GUID;
MEMORY_ERROR_SECTION_GUID;
MasterAdapter24;
MasterAdapter32;
Mm64BitPhysicalAddress;
MsgMCEPending;
NMI_NOTIFY_TYPE_GUID;
NMI_SECTION_GUID;
PCIDeref;
PROCESSOR_GENERIC_ERROR_SECTION_GUID;
PciIrqRoutingInterface;
PmAcpiDispatchTable;
True;
TscRequest;
UserSpecifiedCpuCount;
WHEA_BUSCHECK_GUID;
WHEA_CACHECHECK_GUID;
WHEA_ERROR_PACKET_SECTION_GUID;
WHEA_MSCHECK_GUID;
WHEA_TLBCHECK_GUID;
XPF_MCA_SECTION_GUID;
XPF_PROCESSOR_ERROR_SECTION_GUID;
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
__safe_se_handler_table;
__security_cookie;
__security_cookie_complement;
_imp_ExiAcquireFastMutex;
_imp_ExiReleaseFastMutex;
_imp_IoReadPartitionTable;
_imp_IoSetPartitionInformation;
_imp_IoWritePartitionTable;
_imp_IofCallDriver;
_imp_IofCompleteRequest;
_imp_KeTryToAcquireSpinLockAtDpcLevel;
_imp_KeUpdateRunTime;
_imp_KefAcquireSpinLockAtDpcLevel;
_imp_KefReleaseSpinLockFromDpcLevel;
_imp_Kei386EoiHelper;
_imp_KiCheckForSListAddress;
_imp_ObfDereferenceObject;
_imp_ObfReferenceObject;
_imp__DbgPrint;
_imp__DbgPrintEx;
_imp__EmClientQueryRuleState;
_imp__EmpProviderRegister;
_imp__EtwEventEnabled;
_imp__EtwRegister;
_imp__EtwWrite;
_imp__ExAcquireSpinLockExclusive;
_imp__ExAcquireSpinLockShared;
_imp__ExAllocatePool;
_imp__ExAllocatePoolWithTag;
_imp__ExCreateCallback;
_imp__ExFreePoolWithTag;
_imp__ExQueueWorkItem;
_imp__ExRegisterCallback;
_imp__ExReleaseSpinLockExclusive;
_imp__ExReleaseSpinLockShared;
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
_imp__KeAddProcessorAffinityEx;
_imp__KeAndAffinityEx;
_imp__KeAndGroupAffinityEx;
_imp__KeBugCheckEx;
_imp__KeCheckProcessorAffinityEx;
_imp__KeComplementAffinityEx;
_imp__KeCountSetBitsAffinityEx;
_imp__KeEnterKernelDebugger;
_imp__KeEnumerateNextProcessor;
_imp__KeFindConfigurationEntry;
_imp__KeFindConfigurationNextEntry;
_imp__KeGetCurrentProcessorNumberEx;
_imp__KeGetProcessorIndexFromNumber;
_imp__KeGetProcessorNumberFromIndex;
_imp__KeInitializeAffinityEx;
_imp__KeInitializeDeviceQueue;
_imp__KeInitializeDpc;
_imp__KeInitializeEnumerationContext;
_imp__KeInitializeEvent;
_imp__KeInitializeMutex;
_imp__KeInitializeTimerEx;
_imp__KeInsertDeviceQueue;
_imp__KeIpiGenericCall;
_imp__KePollFreezeExecution;
_imp__KeProcessorGroupAffinity;
_imp__KeProfileInterrupt;
_imp__KeQueryActiveGroupCount;
_imp__KeQueryActiveProcessorAffinity;
_imp__KeQueryActiveProcessorCountEx;
_imp__KeQuerySystemTime;
_imp__KeQueryTimeIncrement;
_imp__KeRegisterBugCheckCallback;
_imp__KeRemoveDeviceQueue;
_imp__KeRemoveProcessorAffinityEx;
_imp__KeRevertToUserGroupAffinityThread;
_imp__KeSaveStateForHibernate;
_imp__KeSetEvent;
_imp__KeSetProfileIrql;
_imp__KeSetSystemGroupAffinityThread;
_imp__KeSetTimeIncrement;
_imp__KeSetTimerEx;
_imp__KeTickCount;
_imp__KeUpdateSystemTime;
_imp__KeWaitForSingleObject;
_imp__KiBugCheckData;
_imp__KiDeliverApc;
_imp__KiDispatchInterrupt;
_imp__KiIpiServiceRoutine;
_imp__LdrResSearchResource;
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
_imp__PshedGetErrorSourceInfo;
_imp__PshedIsSystemWheaEnabled;
_imp__PshedRetrieveErrorInfo;
_imp__READ_REGISTER_ULONG;
_imp__RtlAreBitsClear;
_imp__RtlClearAllBits;
_imp__RtlClearBits;
_imp__RtlCmEncodeMemIoResource;
_imp__RtlCompareUnicodeString;
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
_imp__RtlNumberOfSetBitsUlongPtr;
_imp__RtlSetAllBits;
_imp__RtlSetBit;
_imp__RtlSetBits;
_imp__RtlTestBit;
_imp__RtlTimeFieldsToTime;
_imp__RtlTimeToTimeFields;
_imp__RtlUnwind;
_imp__WRITE_REGISTER_UCHAR;
_imp__WRITE_REGISTER_ULONG;
_imp__WheaConfigureErrorSource;
_imp__WheaGetErrorSource;
_imp__WheaInitializeRecordHeader;
_imp__WheaReportHwError;
_imp__ZwClose;
_imp__ZwCreateKey;
_imp__ZwDeleteValueKey;
_imp__ZwEnumerateValueKey;
_imp__ZwOpenKey;
_imp__ZwPowerInformation;
_imp__ZwQueryKey;
_imp__ZwQueryLicenseValue;
_imp__ZwQueryValueKey;
_imp__ZwSetValueKey;
_imp___alldiv;
_imp___alldvrm;
_imp___allmul;
_imp___allshl;
_imp___allshr;
_imp___aulldiv;
_imp___aulldvrm;
_imp___aullshr;
_imp___stricmp;
_imp___vsnwprintf;
_imp___wcsicmp;
_imp__atoi;
_imp__memcpy;
_imp__memset;
_imp__strncmp;
_imp__strncpy_s;
_imp__strstr;
_imp__wcstoul;
_load_config_used;
rgzApicNotVerified;
rgzBadApicVersion;
rgzBadDefault;
rgzBadHal;
rgzConfigurationData;
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
ExAcquireSpinLockExclusive();
ExAcquireSpinLockShared();
ExReleaseSpinLockExclusive();
ExReleaseSpinLockShared();
GetPdeAddressEx();
GetPteAddress();
GsCpuId();
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
HalAllocateHardwareCounters();
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
HalEfiGetEnvironmentVariable();
HalEfiQueryVariableInfo();
HalEfiSetEnvironmentVariable();
HalEnableInterrupt();
HalEndSystemInterrupt();
HalEnumerateEnvironmentVariablesEx();
HalFlushCommonBuffer();
HalFreeCommonBuffer();
HalFreeHardwareCounters();
HalGetAdapter();
HalGetBusData();
HalGetBusDataByOffset();
HalGetDmaAlignment();
HalGetEnvironmentVariable();
HalGetEnvironmentVariableEx();
HalGetInterruptTargetInformation();
HalGetInterruptVector();
HalGetMemoryCachingRequirements();
HalGetMessageRoutingInfo();
HalGetProcessorIdByNtNumber();
HalGetScatterGatherList();
HalGetVectorInput();
HalHandleNMI();
HalInitApicInterruptHandlers();
HalInitSystem();
HalInitializeBios();
HalInitializeOnResume();
HalInitializeProcessor();
HalMakeBeep();
HalMatchAcpiCreatorRevision();
HalMatchAcpiFADTBootArch();
HalMatchAcpiOemId();
HalMatchAcpiOemRevision();
HalMatchAcpiOemTableId();
HalMatchAcpiRevision();
HalMcUpdateReadPCIConfig();
HalProcessorIdle();
HalPutDmaAdapter();
HalPutScatterGatherList();
HalQueryDisplayParameters();
HalQueryEnvironmentVariableInfoEx();
HalQueryMaximumProcessorCount();
HalQueryRealTimeClock();
HalReadBootRegister();
HalReadDmaCounter();
HalRegisterDynamicProcessor();
HalRegisterErrataCallbacks();
HalReportResourceUsage();
HalRequestClockInterrupt();
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
HalacpIrqTranslatorDereference();
HalacpiIrqTranslateResourceRequirementsIsa();
HalacpiIrqTranslateResourcesIsa();
HalacpiIrqTranslatorReference();
HaliAcpiMachineStateInit();
HaliAcpiQueryFlags();
HaliAcpiSleep();
HaliAcpiTimerCarry();
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
HaliSetPciErrorHandlerCallback();
HaliSetSystemInformation();
HaliSetWakeAlarm();
HaliSetWakeEnable();
HaliWheaInitProcessorGenericSection();
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
HalpAcpiGetRsdt();
HalpAcpiGetTable();
HalpAcpiGetTableFromBios();
HalpAcpiGetTableWork();
HalpAcpiIBMExaMatch();
HalpAcpiIBMVigilMatch();
HalpAcpiIsCachedTableCompromised();
HalpAcpiPicStateIntact();
HalpAcpiPostSleep();
HalpAcpiPreSleep();
HalpAcpiTableCacheInit();
HalpAcpiTimerInit();
HalpAcpiUnisysHorizonMatch();
HalpAcpiValidateAcpiTable();
HalpAcquireCmosSpinLock();
HalpAcquireHighLevelLock();
HalpAcquireSystemHardwareSpinLock();
HalpAddAdapterToList();
HalpAddDevice();
HalpAddInterruptDest();
HalpAddMcaToMemoryErrorSection();
HalpAddMcaToProcessorGenericSection();
HalpAddMcaToProcessorSpecificSection();
HalpAllocPhysicalMemory();
HalpAllocPhysicalMemoryFromDescriptor();
HalpAllocateAdapterCallback();
HalpAllocateAdapterEx();
HalpAllocateCR3Root();
HalpAllocateMapRegisters();
HalpAllocateNumaConfigData();
HalpApicRebootService();
HalpApicReserveResources();
HalpApicRestartProfileTimeInterrupt();
HalpApicSetProfileInterval();
HalpApicSpuriousService();
HalpApicStartProfileInterrupt();
HalpApicStopProfileInterrupt();
HalpAssignSlotResourcesStub();
HalpAuditAcpiTables();
HalpAuditAllocateRsdtArrayTable();
HalpAuditEnumerateRsdts();
HalpAuditEnumerateRsdtsInRange();
HalpAuditEnumerateSlicTables();
HalpAuditGetExtendedBiosDataArea();
HalpAuditQueryResults();
HalpAuditQuerySlicAddress();
HalpAuditSelectRsdtOrXsdt();
HalpAuditSlicTables();
HalpAuditValidateChecksum();
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
HalpBuildTiledCR3Ex();
HalpCheckFixedWakeSources();
HalpCheckForSoftwareInterrupt();
HalpCheckLowMemoryPostSleep();
HalpCheckLowMemoryPreSleep();
HalpCheckNonBspTimerCompatibility();
HalpCheckNumaConfiguration();
HalpCheckPowerButton();
HalpCheckWakeupTimeAndAdjust();
HalpClearCr4MCEBit();
HalpClearSlpSmiStsInICH();
HalpClockGetMessageRoutingInfo();
HalpClockInterruptPn();
HalpClockSetMessageInterruptRouting();
HalpClusterModeSupportedByProcessor();
HalpCmcDeferredRoutine();
HalpCmcInitializeErrorPacketContents();
HalpCmcInitializePolling();
HalpCmcPollProcessor();
HalpCmcStartPolling();
HalpCmcWorkerRoutine();
HalpCmciInit();
HalpCmciInitProcessor();
HalpCmciInitializeErrorPacket();
HalpCmosNullReference();
HalpCmosRangeHandler();
HalpComplete440BXWorkaround();
HalpConsumeLowMemory();
HalpCopyBufferMap();
HalpCopyBufferMapSafe();
HalpCopyFirmwareAndRuntimeInformation();
HalpCorrectErrSrc();
HalpCorrectGenericErrSrc();
HalpCorrectMachineCheckErrSrc();
HalpCorrectNMIErrSrc();
HalpCpuID();
HalpCreateErrorRecord();
HalpCreateMachineCheckErrorRecord();
HalpCreateMcaMemoryErrorRecord();
HalpCreateMcaProcessorErrorRecord();
HalpCreateNMIErrorRecord();
HalpDetectPmTimerDoubleFrequency();
HalpDeterminePmTimerSkew();
HalpDetermineSystemApicMode();
HalpDisableMSIInterrupt();
HalpDisableRedirEntry();
HalpDisableSystemInterrupt();
HalpDispatchPnp();
HalpDispatchPower();
HalpDispatchSoftwareInterrupt();
HalpDispatchSystemStateTransition();
HalpDispatchWmi();
HalpDmaFinalizeDoubleBufferingDisposition();
HalpDpGetInterruptReplayState();
HalpDpMaskLevelTriggeredInterrupts();
HalpDpOfflineProcessorForReplace();
HalpDpPostReplace();
HalpDpPostReplaceInitialization();
HalpDpPreReplace();
HalpDpReplaceBegin();
HalpDpReplaceControl();
HalpDpReplaceEnd();
HalpDpReplaceTarget();
HalpDpReplayInterrupts();
HalpDpReplaySendSelfIpi();
HalpDpSortApicList();
HalpDpStartProcessor();
HalpDpSwapProcessorIdentifiers();
HalpDpUnmaskLevelTriggeredInterrupts();
HalpDriverEntry();
HalpDynamicSystemResourceConfiguration();
HalpEarlyInitStallSource();
HalpEfiInitialization();
HalpEfiInitializeOnResume();
HalpEnableLocalNmiSources();
HalpEnableMSIInterrupt();
HalpEnableNMI();
HalpEnablePerfInterrupt();
HalpEnableRedirEntry();
HalpEnableSystemInterrupt();
HalpEndOfBoot();
HalpExtractGenericErrorData();
HalpFDMANotificationCallback();
HalpFindBusAddressTranslation();
HalpFlushTLB();
HalpFreeNvsBuffers();
HalpFreePte();
HalpFreeResumeStructures();
HalpFreeTiledCR3Ex();
HalpGenerateConsistentPmTimerRead();
HalpGenerateInterrupt();
HalpGenericCall();
HalpGenericPolledDpcRoutine();
HalpGenericPolledWorkerRoutine();
HalpGetAcpiStaticNumaTopology();
HalpGetAdapterMaximumPhysicalAddress();
HalpGetApicIdByProcessorIndex();
HalpGetApicInti();
HalpGetApicVersion();
HalpGetAvailableProximityId();
HalpGetChipHacks();
HalpGetCmosCenturyByte();
HalpGetCmosData();
HalpGetCpuInfo();
HalpGetDisplayBiosInformation();
HalpGetFeatureBits();
HalpGetHotPlugMemoryInfo();
HalpGetHypervisorInformation();
HalpGetIdealQueryPerformanceCounterSource();
HalpGetIoApicId();
HalpGetIoApicSystemVectorBase();
HalpGetIrtEntryCount();
HalpGetMcaLog();
HalpGetMceInformation();
HalpGetNMICrashFlag();
HalpGetNextProcessorApicId();
HalpGetNumaProcMemoryCount();
HalpGetPCIData();
HalpGetPageFrameNumber();
HalpGetParameters();
HalpGetPlatformTimerInformation();
HalpGetPmTimerPerfCounterValue();
HalpGetPmTimerSleepModePerfCounterValue();
HalpGetProcessorBrandString();
HalpGetProcessorCounterAttributes();
HalpGetRemappedIoApicRedirEntry();
HalpGetRemappedMsiAddressData();
HalpGetResourceSortValue();
HalpGrowMapBufferWorker();
HalpGrowMapBuffers();
HalpHandleMachineCheck();
HalpHandlePreviousMcaErrors();
HalpHandlePreviousMcaErrorsOnProcessor();
HalpHpetCalibratePerfCount();
HalpHpetClockInterrupt();
HalpHpetClockInterruptStub();
HalpHpetClockInterruptWork();
HalpHpetConfigureInterruptRouting();
HalpHpetDetectInterruptPolicy();
HalpHpetEnableLineBasedInterrupts();
HalpHpetHandleRollover();
HalpHpetHypervisorTimerConfigured();
HalpHpetHypervisorTimerReserved();
HalpHpetInitializeClock();
HalpHpetPopulateIncrementTables();
HalpHpetProgramClock();
HalpHpetProgramHypervisorTimer();
HalpHpetProgramRolloverTimer();
HalpHpetQueryCount();
HalpHpetQueryPerformanceCounter();
HalpHpetReinitializeClock();
HalpHpetResetCounter();
HalpHpetRolloverInterrupt();
HalpHpetSavePerformanceCounter();
HalpHpetSetNextHypervisorInterrupt();
HalpHpetSetProfileInterval();
HalpHpetSetTimeIncrement();
HalpHpetStallExecutionProcessor();
HalpHpetStartProfileInterrupt();
HalpHpetStopProfileInterrupt();
HalpHpetSuspendClock();
HalpHpetTickCountFromIncrement();
HalpHpetWriteEtwEvent();
HalpHpetWriteMessageInterruptConfiguration();
HalpHvApicWaitForIcr();
HalpHvApicWriteIcr();
HalpHvCpuid();
HalpHvIsReferenceTimeAvailable();
HalpHvQueryReferenceTime();
HalpHvRebootSystem();
HalpHvReferenceTimeCalibratePerformanceCounter();
HalpHvReferenceTimeQueryPerformanceCounter();
HalpHvReferenceTimeStallExecutionProcessor();
HalpHwParseMcaRecoverySupport();
HalpHwPolicyFindDataTableEntry();
HalpHwPolicyInitialize();
HalpHwPolicyLocatePolicyResource();
HalpIRQLtoTPR();
HalpIndexPteArray();
HalpInitBootTable();
HalpInitChipHacks();
HalpInitGenericErrorSourceEntry();
HalpInitGenericErrorSourcePollingRoutine();
HalpInitIntiInfo();
HalpInitIrqlAuditFlag();
HalpInitMP();
HalpInitMemoryCachingRequirementsTable();
HalpInitMpInfo();
HalpInitNonBusHandler();
HalpInitReservedPages();
HalpInitSystem();
HalpInitTimerSource();
HalpInitializeApicAddressing();
HalpInitializeBrokenPmTimer();
HalpInitializeClock();
HalpInitializeCmc();
HalpInitializeCmos();
HalpInitializeConfigurationFromMadt();
HalpInitializeErrSrc();
HalpInitializeGenericErrorSource();
HalpInitializeHpet();
HalpInitializeIOUnit();
HalpInitializeLegacyMcaException();
HalpInitializeLocalUnit();
HalpInitializeMce();
HalpInitializeNMI();
HalpInitializePICs();
HalpInitializePciBus();
HalpInitializePciStubs();
HalpInitializeWheaPhysicalMappings();
HalpInterruptRemappingEnabled();
HalpInvalidateIRTCacheEntry();
HalpIoDelay();
HalpIpiHandler();
HalpIpiReserveResources();
HalpIsCmciImplemented();
HalpIsHardwareWatchdogTimerPresent();
HalpIsHvPresent();
HalpIsHvUsedForReboot();
HalpIsMicrosoftCompatibleHvLoaded();
HalpIsMsiSupported();
HalpIsMsiSupportedAMD();
HalpIsMsiSupportedIntel();
HalpIsMsiSupportedVIA();
HalpIsNXEnabled();
HalpIsPteFree();
HalpIsTimeToPollSource();
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
HalpLegacyApicEndOfInterrupt();
HalpLegacyApicReadGenericReg();
HalpLegacyApicWaitForIcr();
HalpLegacyApicWriteGenericReg();
HalpLegacyApicWriteIcr();
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
HalpMcaClearError();
HalpMcaCurrentProcessorSetTSS();
HalpMcaExceptionHandler();
HalpMcaExceptionHandlerWrapper();
HalpMcaInitializeErrorSection();
HalpMcaInitializePcrContext();
HalpMcaQueueDpc();
HalpMcaReadError();
HalpMcaReadErrorPresence();
HalpMcaReportError();
HalpMcaResumeProcessorConfig();
HalpMcaSetFeatureFlags();
HalpMcaSetProcessorConfig();
HalpMcaStuckErrorCheck();
HalpMceBarrierWait();
HalpMceHandler();
HalpMceHandlerWithRendezvous();
HalpMceInit();
HalpMceInitProcessor();
HalpMceInitializeErrorPacket();
HalpMceInitializeErrorPacketContents();
HalpMceIsProcessorTssSet();
HalpMovntiCopyBuffer();
HalpNMIHalt();
HalpNmiGenericErrorHandler();
HalpNumaAddRangeProximity();
HalpNumaInitializeStaticConfiguration();
HalpNumaQueryNodeCapacity();
HalpNumaQueryNodeDistance();
HalpNumaQueryPageToNode();
HalpNumaQueryProcessorNode();
HalpNumaQueryProximityId();
HalpNumaQueryProximityNode();
HalpNumaSortMemoryRanges();
HalpOfflineProcessor();
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
HalpPmTimerInit();
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
HalpPrepareForBugcheck();
HalpPreserveNvsArea();
HalpProbeIoApic();
HalpProcessAcpiStartDevice();
HalpProfileInterrupt();
HalpProgramDrhd();
HalpProgramRtcClock();
HalpPteReserveResources();
HalpPutAcpiHacksInRegistry();
HalpQuery8254Counter();
HalpQueryAcpiResourceRequirements();
HalpQueryBrokenPmTimerCount();
HalpQueryCapabilities();
HalpQueryDeviceRelations();
HalpQueryIdFdo();
HalpQueryIdPdo();
HalpQueryInterface();
HalpQueryMaximumRegisteredProcessorCount();
HalpQueryPciRegistryInfo();
HalpQueryProcessorCounterSynchronization();
HalpQueryResourceRequirements();
HalpQueryResources();
HalpQuerySratProcessorCount();
HalpQueryWakeTime();
HalpReadCmosDataByPort();
HalpReadCmosTime();
HalpReadGenericErrorInfo();
HalpReadLocalApicID();
HalpReadPCIConfig();
HalpReadPartitionTable();
HalpReadRtcStdPCAT();
HalpReadStdCmosData();
HalpReadWheaPhysicalMemory();
HalpReadWriteWheaPhysicalMemory();
HalpReboot();
HalpReenableAcpi();
HalpRegisterApicAddressUsage();
HalpRegisterKdSupportFunctions();
HalpRegisterPciDebuggingDeviceInfo();
HalpRegisterVector();
HalpReleaseCmosSpinLock();
HalpReleaseHighLevelLock();
HalpReleaseSystemHardwareSpinLock();
HalpRemapVirtualAddress64();
HalpRemoveInterruptDest();
HalpReportIdleStateUsage();
HalpReportResourceUsage();
HalpRequestIpiCommand();
HalpRequestIpiSpecifyVector();
HalpReserveHalPtes();
HalpResetAllProcessors();
HalpResetProcessorCounter();
HalpResetSBF();
HalpResetThisProcessor();
HalpRestartProfileTimeInterrupt();
HalpRestoreDmaControllerState();
HalpRestoreIdealStallSource();
HalpRestoreInterruptControllerState();
HalpRestoreInterruptRemappingUnits();
HalpRestoreIoApicRedirTable();
HalpRestoreNvsArea();
HalpRestorePerformanceCounter();
HalpRestoreProcessorCounter();
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
HalpSaveProcessorCounter();
HalpSaveProcessorStateAndWait();
HalpScaleQueryPerformanceCounter();
HalpScaleTimers();
HalpSendFlatIpi();
HalpSendIpiWithNoShorthand();
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
HalpSetIrtEntry();
HalpSetPCIData();
HalpSetPageFrameNumber();
HalpSetPartitionInformation();
HalpSetRedirEntry();
HalpSetSystemInformation();
HalpSetWakeAlarm();
HalpSetup440BXWorkaround();
HalpSetupAcpiPhase0();
HalpSetupApicRegisterAccessFunctions();
HalpSetupRealModeResume();
HalpSetupSystemClockSupport();
HalpShutdown();
HalpSimpleCheck();
HalpStartProcessor();
HalpStartProcessorsInClusteredApicMode();
HalpStopLegacyUsbInterrupts();
HalpStopOhciInterrupt();
HalpStopUhciInterrupt();
HalpStoreFreeCr3();
HalpSuspendClock();
HalpSwitchToEarlyStallSource();
HalpSwitchToX2ApicMode();
HalpTranslateBusAddress();
HalpTranslateToLegacyMcaException();
HalpTscAdvSynchCalculateRemoteDelta();
HalpTscAdvSynchCalculateRemoteDeltas();
HalpTscAdvSynchComputeMinimumDelta();
HalpTscAdvSynchLeader();
HalpTscAdvSynchReadTimeStamp();
HalpTscAdvSynchSkewCounter();
HalpTscAdvSynchTarget();
HalpTscAdvSynchToLeader();
HalpTscAdvSynchToTarget();
HalpTscCompatibilitySynchronization();
HalpTscDetermineCounterShift();
HalpTscFallback();
HalpTscFallbackToPlatformSource();
HalpTscFinalizeDisposition();
HalpTscInitializeSynchronizationContext();
HalpTscQueryPerformanceCounter();
HalpTscReserveResources();
HalpTscStallExecutionProcessor();
HalpTscSynchronization();
HalpTscSynchronizationWorker();
HalpTscTraceProcessorDelta();
HalpTscTraceProcessorSynchronization();
HalpTscTraceStatus();
HalpTscTraceSynchronizationSummary();
HalpUnloadMicrocode();
HalpUnlockPagableCodeSection();
HalpUnmapVirtualAddress();
HalpUnmaskAcpiInterrupt();
HalpUnmaskClock();
HalpUnmaskCriticalClockInterruptSources();
HalpUpSendIpi();
HalpUpdateConfigurationFromMsct();
HalpUpdateExtendedDestination();
HalpUpdateInterruptDest();
HalpUpdateIrtDestinationId();
HalpUpdateNumaConfiguration();
HalpUpdateProcessorApicId();
HalpUpdateSingleTargetExtendedDestination();
HalpValidPCISlot();
HalpValidatePendingInterrupts();
HalpVerifyIOUnit();
HalpVerifySratEntryLengthAndFlag();
HalpWaitForCmosRisingEdge();
HalpWaitForPhase0ClockTick();
HalpWakeupTimeElapsed();
HalpWasteTime();
HalpWhackICHUsbSmi();
HalpWheaInitProcessorGenericSection();
HalpWriteCmosDataByPort();
HalpWriteCmosTime();
HalpWritePCIConfig();
HalpWritePartitionTable();
HalpWriteResetCommand();
HalpWriteRtcStdPCAT();
HalpWriteStdCmosData();
HalpWriteWheaPhysicalMemory();
HalpX2ApicModeSupportedByProcessor();
HalpX2ApicSendLogicalIpi();
HalpX2ApicSendPhysicalIpi();
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
KeAddProcessorAffinityEx();
KeAndAffinityEx();
KeAndGroupAffinityEx();
KeCheckProcessorAffinityEx();
KeComplementAffinityEx();
KeCountSetBitsAffinityEx();
KeEnumerateNextProcessor();
KeFlushWriteBuffer();
KeGetCurrentIrql();
KeGetProcessorIndexFromNumber();
KeGetProcessorNumberFromIndex();
KeInitializeAffinityEx();
KeInitializeEnumerationContext();
KeLowerIrql();
KeMemoryBarrier();
KeProcessorGroupAffinity();
KeQueryPerformanceCounter();
KeRaiseIrql();
KeRaiseIrqlToDpcLevel();
KeRaiseIrqlToSynchLevel();
KeReleaseInStackQueuedSpinLock();
KeReleaseQueuedSpinLock();
KeReleaseSpinLock();
KeRemoveProcessorAffinityEx();
KeSaveStateForHibernate();
KeStallExecutionProcessor();
KeTryToAcquireQueuedSpinLock();
KeTryToAcquireQueuedSpinLockRaiseToSynch();
KeUpdateSystemTime();
KfAcquireSpinLock();
KfLowerIrql();
KfRaiseIrql();
KfReleaseSpinLock();
KiCheckForSListAddress();
MiGetPteAddress();
MiGetPteIndex();
PicExtintIntiHandlers();
PicHandler();
PicNopHandler();
PicNopIntiHandlers();
PicSpuriousService37();
PoSetFixedWakeSource();
PshedGetErrorSourceInfo();
PshedIsSystemWheaEnabled();
PshedRetrieveErrorInfo();
RDMSR();
READ_PORT_BUFFER_UCHAR();
READ_PORT_BUFFER_ULONG();
READ_PORT_BUFFER_USHORT();
READ_PORT_UCHAR();
READ_PORT_ULONG();
READ_PORT_USHORT();
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
__report_gsfailure();
__security_check_cookie();
__security_init_cookie();
_abnormal_termination();
_alldiv();
_alldvrm();
_allmul();
_allshl();
_allshr();
_aulldiv();
_aulldvrm();
_aullrem();
_aullshr();
_except_handler4();
_global_unwind2();
_local_unwind2();
_local_unwind4();
_rt_probe_read4();
_seh_longjmp_unwind4();
_setjmp3();
_stricmp();
_vsnwprintf();
_wcsicmp();
atoi();
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
