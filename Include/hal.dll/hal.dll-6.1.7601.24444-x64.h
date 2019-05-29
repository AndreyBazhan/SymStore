struct HalpMpInfo;
struct LIST_ENTRY32;
struct LIST_ENTRY64;
struct _ACCESS_STATE;
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
struct _DEVOBJ_EXTENSION;
struct _DISPATCHER_HEADER;
struct _DRIVER_EXTENSION;
struct _DRIVER_OBJECT;
struct _ECP_LIST;
struct _EPROCESS;
struct _ERESOURCE;
struct _ETHREAD;
struct _EVENT_DATA_DESCRIPTOR;
struct _EVENT_DESCRIPTOR;
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
struct _GENERAL_LOOKASIDE;
struct _GENERAL_LOOKASIDE_POOL;
struct _GEN_ADDR;
struct _GUID;
struct _HAL_ENLIGHTENMENT;
struct _HARDWARE_PTE;
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
struct _KDESCRIPTOR;
struct _KDEVICE_QUEUE;
struct _KDEVICE_QUEUE_ENTRY;
struct _KDPC;
struct _KEVENT;
struct _KPCR;
struct _KPRCB;
struct _KPROCESS;
struct _KPROCESSOR_STATE;
struct _KSEMAPHORE;
struct _KSPECIAL_REGISTERS;
struct _KSPIN_LOCK_QUEUE;
struct _KTHREAD;
struct _KTSS64;
struct _LIST_ENTRY;
struct _LOCAL_NMISOURCE;
struct _LOOKASIDE_LIST_EX;
struct _LUID;
struct _LUID_AND_ATTRIBUTES;
struct _M128A;
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
struct _SCSI_REQUEST_BLOCK;
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
struct _WHEA_XPF_MCA_SECTION;
struct _WHEA_XPF_PROCESSOR_ERROR_SECTION;
struct _XSAVE_FORMAT;

union _KGDTENTRY64;
union _KIDTENTRY64;
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
enum _DEVICE_POWER_STATE;
enum _DEVICE_RELATION_TYPE;
enum _DEVICE_USAGE_NOTIFICATION_TYPE;
enum _EVENT_TYPE;
enum _FILE_INFORMATION_CLASS;
enum _FSINFOCLASS;
enum _HALP_DMA_MAP_BUFFER_TYPE;
enum _INTERFACE_TYPE;
enum _INTERLOCKED_RESULT;
enum _IO_ALLOCATION_ACTION;
enum _IRQ_PRIORITY;
enum _MEMORY_CACHING_TYPE_ORIG;
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
    ULONG64 P1Home;
    ULONG64 P2Home;
    ULONG64 P3Home;
    ULONG64 P4Home;
    ULONG64 P5Home;
    ULONG64 P6Home;
    ULONG ContextFlags;
    ULONG MxCsr;
    USHORT SegCs;
    USHORT SegDs;
    USHORT SegEs;
    USHORT SegFs;
    USHORT SegGs;
    USHORT SegSs;
    ULONG EFlags;
    ULONG64 Dr0;
    ULONG64 Dr1;
    ULONG64 Dr2;
    ULONG64 Dr3;
    ULONG64 Dr6;
    ULONG64 Dr7;
    ULONG64 Rax;
    ULONG64 Rcx;
    ULONG64 Rdx;
    ULONG64 Rbx;
    ULONG64 Rsp;
    ULONG64 Rbp;
    ULONG64 Rsi;
    ULONG64 Rdi;
    ULONG64 R8;
    ULONG64 R9;
    ULONG64 R10;
    ULONG64 R11;
    ULONG64 R12;
    ULONG64 R13;
    ULONG64 R14;
    ULONG64 R15;
    ULONG64 Rip;
    struct _XSAVE_FORMAT FltSave;
    struct _M128A Header[2];
    struct _M128A Legacy[8];
    struct _M128A Xmm0;
    struct _M128A Xmm1;
    struct _M128A Xmm2;
    struct _M128A Xmm3;
    struct _M128A Xmm4;
    struct _M128A Xmm5;
    struct _M128A Xmm6;
    struct _M128A Xmm7;
    struct _M128A Xmm8;
    struct _M128A Xmm9;
    struct _M128A Xmm10;
    struct _M128A Xmm11;
    struct _M128A Xmm12;
    struct _M128A Xmm13;
    struct _M128A Xmm14;
    struct _M128A Xmm15;
    struct _M128A VectorRegister[26];
    ULONG64 VectorControl;
    ULONG64 DebugControl;
    ULONG64 LastBranchToRip;
    ULONG64 LastBranchFromRip;
    ULONG64 LastExceptionToRip;
    ULONG64 LastExceptionFromRip;
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
    UCHAR Index : 6;
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

typedef struct _EXCEPTION_REGISTRATION_RECORD {
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

typedef struct _HARDWARE_PTE {
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
    ULONG64 PageFrameNumber : 36;
    ULONG64 reserved1 : 4;
    ULONG64 SoftwareWsIndex : 11;
    ULONG64 NoExecute : 1;
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
    ULONG64 IOSAPICAddress;
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
            ULONG64 TargetedProcessors;
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

typedef struct _KDESCRIPTOR {
    USHORT Pad[3];
    USHORT Limit;
    PVOID Base;
};

typedef struct _KDEVICE_QUEUE {
    SHORT Type;
    SHORT Size;
    struct _LIST_ENTRY DeviceListHead;
    ULONG64 Lock;
    UCHAR Busy;
    LONG64 Reserved : 8;
    LONG64 Hint : 56;
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

typedef struct _KPCR {
    struct _NT_TIB NtTib;
    union _KGDTENTRY64 *GdtBase;
    struct _KTSS64 *TssBase;
    ULONG64 UserRsp;
    struct _KPCR *Self;
    struct _KPRCB *CurrentPrcb;
    struct _KSPIN_LOCK_QUEUE *LockArray;
    PVOID Used_Self;
    union _KIDTENTRY64 *IdtBase;
    ULONG64 Unused[2];
    UCHAR Irql;
    UCHAR SecondLevelCacheAssociativity;
    UCHAR ObsoleteNumber;
    UCHAR Fill0;
    ULONG Unused0[3];
    USHORT MajorVersion;
    USHORT MinorVersion;
    ULONG StallScaleFactor;
    PVOID Unused1[3];
    ULONG KernelReserved[15];
    ULONG SecondLevelCacheSize;
    ULONG HalReserved[16];
    ULONG Unused2;
    PVOID KdVersionBlock;
    PVOID Unused3;
    ULONG PcrAlign1[24];
};

typedef struct _KPRCB {
    ULONG MxCsr;
    UCHAR LegacyNumber;
    UCHAR ReservedMustBeZero;
    UCHAR InterruptRequest;
    UCHAR IdleHalt;
    struct _KTHREAD *CurrentThread;
    struct _KTHREAD *NextThread;
    struct _KTHREAD *IdleThread;
    UCHAR NestingLevel;
    UCHAR PrcbPad00[3];
    ULONG Number;
    ULONG64 RspBase;
    ULONG64 PrcbLock;
    ULONG64 PrcbPad01;
    struct _KPROCESSOR_STATE ProcessorState;
    CHAR CpuType;
    CHAR CpuID;
    USHORT CpuStep;
    UCHAR CpuStepping;
    UCHAR CpuModel;
    ULONG MHz;
    ULONG64 HalReserved[8];
    USHORT MinorVersion;
    USHORT MajorVersion;
    UCHAR BuildType;
    UCHAR CpuVendor;
    UCHAR CoresPerPhysicalProcessor;
    UCHAR LogicalProcessorsPerCore;
    ULONG ApicMask;
    ULONG CFlushSize;
    PVOID AcpiReserved;
    ULONG InitialApicId;
    ULONG Stride;
    USHORT Group;
    ULONG64 GroupSetMember;
    UCHAR GroupIndex;
};

typedef struct _KPROCESS {
};

typedef struct _KPROCESSOR_STATE {
    struct _KSPECIAL_REGISTERS SpecialRegisters;
    struct _CONTEXT ContextFrame;
};

typedef struct _KSEMAPHORE {
    struct _DISPATCHER_HEADER Header;
    LONG Limit;
};

typedef struct _KSPECIAL_REGISTERS {
    ULONG64 Cr0;
    ULONG64 Cr2;
    ULONG64 Cr3;
    ULONG64 Cr4;
    ULONG64 KernelDr0;
    ULONG64 KernelDr1;
    ULONG64 KernelDr2;
    ULONG64 KernelDr3;
    ULONG64 KernelDr6;
    ULONG64 KernelDr7;
    struct _KDESCRIPTOR Gdtr;
    struct _KDESCRIPTOR Idtr;
    USHORT Tr;
    USHORT Ldtr;
    ULONG MxCsr;
    ULONG64 DebugControl;
    ULONG64 LastBranchToRip;
    ULONG64 LastBranchFromRip;
    ULONG64 LastExceptionToRip;
    ULONG64 LastExceptionFromRip;
    ULONG64 Cr8;
    ULONG64 MsrGsBase;
    ULONG64 MsrGsSwap;
    ULONG64 MsrStar;
    ULONG64 MsrLStar;
    ULONG64 MsrCStar;
    ULONG64 MsrSyscallMask;
};

typedef struct _KSPIN_LOCK_QUEUE {
    struct _KSPIN_LOCK_QUEUE *Next;
    PULONG64 Lock;
};

typedef struct _KTHREAD {
};

typedef struct _KTSS64 {
    ULONG Reserved0;
    ULONG64 Rsp0;
    ULONG64 Rsp1;
    ULONG64 Rsp2;
    ULONG64 Ist[8];
    ULONG64 Reserved1;
    USHORT Reserved2;
    USHORT IoMapBase;
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

typedef struct _M128A {
    ULONG64 Low;
    LONG64 High;
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
    ULONG64 OwnerThread;
    ULONG IoPriorityBoosted : 1;
    ULONG OwnerReferenced : 1;
    ULONG OwnerCount : 30;
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
    ULONG64 Signature;
};

typedef struct _RTL_DYNAMIC_HASH_TABLE_ENTRY {
    struct _LIST_ENTRY Linkage;
    ULONG64 Signature;
};

typedef struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR {
    struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;
    struct _LIST_ENTRY *ChainHead;
    ULONG BucketIndex;
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

typedef struct _XSAVE_FORMAT {
    USHORT ControlWord;
    USHORT StatusWord;
    UCHAR TagWord;
    UCHAR Reserved1;
    USHORT ErrorOpcode;
    ULONG ErrorOffset;
    USHORT ErrorSelector;
    USHORT Reserved2;
    ULONG DataOffset;
    USHORT DataSelector;
    USHORT Reserved3;
    ULONG MxCsr;
    ULONG MxCsr_Mask;
    struct _M128A FloatRegisters[8];
    struct _M128A XmmRegisters[16];
    UCHAR Reserved4[96];
};

typedef union _KGDTENTRY64 {
    USHORT LimitLow;
    USHORT BaseLow;
    struct {
        UCHAR BaseMiddle;
        UCHAR Flags1;
        UCHAR Flags2;
        UCHAR BaseHigh;
    } Bytes;
    struct {
        ULONG BaseMiddle : 8;
        ULONG Type : 5;
        ULONG Dpl : 2;
        ULONG Present : 1;
        ULONG LimitHigh : 4;
        ULONG System : 1;
        ULONG LongMode : 1;
        ULONG DefaultBig : 1;
        ULONG Granularity : 1;
        ULONG BaseHigh : 8;
    } Bits;
    ULONG BaseUpper;
    ULONG MustBeZero;
    ULONG64 Alignment;
};

typedef union _KIDTENTRY64 {
    USHORT OffsetLow;
    USHORT Selector;
    USHORT IstIndex : 3;
    USHORT Reserved0 : 5;
    USHORT Type : 5;
    USHORT Dpl : 2;
    USHORT Present : 1;
    USHORT OffsetMiddle;
    ULONG OffsetHigh;
    ULONG Reserved1;
    ULONG64 Alignment;
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
        ULONG64 Sequence : 9;
        ULONG64 NextEntry : 39;
        ULONG64 HeaderType : 1;
        ULONG64 Init : 1;
        ULONG64 Reserved : 59;
        ULONG64 Region : 3;
    } Header8;
    struct {
        ULONG64 Depth : 16;
        ULONG64 Sequence : 48;
        ULONG64 HeaderType : 1;
        ULONG64 Init : 1;
        ULONG64 Reserved : 2;
        ULONG64 NextEntry : 60;
    } Header16;
    struct {
        ULONG64 Depth : 16;
        ULONG64 Sequence : 48;
        ULONG64 HeaderType : 1;
        ULONG64 Reserved : 3;
        ULONG64 NextEntry : 60;
    } HeaderX64;
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
    FileFsSectorSizeInformation = 11,
    FileFsMaximumInformation = 12
};

typedef enum _HALP_DMA_MAP_BUFFER_TYPE {
    HalpDmaContiguousMapBuffer = 0,
    HalpDmaNonContiguousMapBuffer = 1,
    HalpDmaMaximumMapBufferType = 2
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

typedef enum _INTERLOCKED_RESULT {
    ResultNegative = 1,
    ResultZero = 0,
    ResultPositive = 2
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

$$VProc_ImageExportDirectory;
AcpiRootPdo;
Amd64ProfileInterface;
Amd64ProfileSourceDescriptorTable;
BadIOAddrList;
CMC_NOTIFY_TYPE_GUID;
CmosRangeHandlersStdPCAT;
CounterStatus;
CurTiledCr3LowPart;
DefaultProfileInterface;
DefaultProfileSourceDescriptor;
EmonCounterResolution;
EmonCounterStatus;
EmonNumberCounters;
EmonProfileInterface;
EmonProfileSourceDescriptorTable;
EmonVersion;
False;
GENERIC_NOTIFY_TYPE_GUID;
GUID_ACPI_CMOS_INTERFACE_STANDARD;
GUID_BUS_INTERFACE_STANDARD;
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
HalpApicMaxCluster;
HalpApicReadGenericReg;
HalpApicTable;
HalpApicUsage;
HalpApicWaitForIcr;
HalpApicWriteGenericReg;
HalpApicWriteIcr;
HalpAuditResults;
HalpAuditStatus;
HalpAvoidMmConfigAccessMethod;
HalpBarrier;
HalpBiosCallCount;
HalpBootProcIntMap;
HalpBroken440BX;
HalpBrokenAcpiTimer;
HalpBugcheckInProgress;
HalpCR3Root;
HalpCachingRequirements;
HalpCachingRequirementsEntryCount;
HalpCallbackRecord;
HalpChipHackCount;
HalpChipHacksTable;
HalpClockInterrupt;
HalpClockInterruptStub;
HalpClockMessageInterruptRouting;
HalpClockSource;
HalpClockWorkUnion;
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
HalpCmciConfigurationLoaded;
HalpCmciEnabled;
HalpCmciImplementationChecked;
HalpCmciImplementationPresent;
HalpCmciRegister;
HalpCmciRevertToPolledMode;
HalpCmciThresholdCount;
HalpCmciThresholdTime;
HalpCmosBusParameterTable;
HalpCmosCenturyOffset;
HalpComIoSpace;
HalpComPortIrqMapping;
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
HalpDmaGrowMapBufferWorkerQueued;
HalpDmaHibernateAdapter;
HalpDmaHibernateRegisterSetIndex;
HalpDmaHibernateRegisterSets;
HalpDmaOperations;
HalpDoingCrashDump;
HalpDontStartProcessors;
HalpDriverObject;
HalpDynamicProcLocalApicTable;
HalpEisaAdapter;
HalpEisaControlBase;
HalpEnabledSmiRteCount;
HalpEnlightenment;
HalpFDMAAvail;
HalpFDMAChecked;
HalpFDMAInterface;
HalpFakePciBusData;
HalpFakePciBusHandler;
HalpFallbackPlatformClock;
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
HalpGetInfoFromACPI;
HalpGlobal8259Mask;
HalpGlobalVolatile;
HalpHardwareLockFlags;
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
HalpHypervisorInterruptCount;
HalpIDTUsage;
HalpIDTUsageFlags;
HalpIdtExclusionList;
HalpImcrIoSpace;
HalpIntDestMap;
HalpIntDestMapEx;
HalpIntiInfo;
HalpInvalidAcpiTable;
HalpIoApicId;
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
HalpIrqlTablesInitialized;
HalpIrtCacheInvalidationLock;
HalpKInterruptHeap;
HalpKInterruptHeapUsed;
HalpKInterruptPostPhaseZero;
HalpKInterruptPostPhaseZeroTotal;
HalpKInterruptPostPhaseZeroUsed;
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
HalpMcaMemoryErrorContext;
HalpMcaMemoryErrorDrsObject;
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
HalpNmiRebootInProgress;
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
HalpPCIConfigAccessMethod;
HalpPCIConfigLock;
HalpPCIConfigReadHandlers;
HalpPCIConfigSpaceInitialized;
HalpPCIConfigWriteHandlers;
HalpPMStub;
HalpPciAmdK8SpecialLocationHack;
HalpPciDebuggingDevice;
HalpPciErrorHandlerCallback;
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
HalpProcessorRestarting;
HalpProcessorsNotHalted;
HalpProfileInterface;
HalpProfileRunning;
HalpProfileTimerHandler;
HalpProfileTimerSource;
HalpPteForFlush;
HalpQueryPerformanceCounterOriginalSource;
HalpQueryPerformanceCounterOriginalSourceFrequency;
HalpQueryPerformanceCounterSource;
HalpRMStub;
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
HalpSleepPageLock;
HalpSleepSync;
HalpStallExecutionProcessorSavedSource;
HalpStallExecutionProcessorSource;
HalpStaticIntAffinity;
HalpSystemHardwareLock;
HalpSzBreak;
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
HalpSzUseLegacyApicMode;
HalpSzUseLowMemory;
HalpSzUsePhysicalApic;
HalpSzUsePlatformClock;
HalpTiledCr3Addresses;
HalpTimeSourceInitializationComplete;
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
HalpVectorInit;
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
HotPatchBuffer;
IoAdapterObjectType;
KdComPortInUse;
KdDebuggerEnabled;
KdDebuggerNotPresent;
KiBugCheckData;
LastKnownGood;
LessThan16Mb;
MCE_NOTIFY_TYPE_GUID;
MEMORY_ERROR_SECTION_GUID;
MasterAdapter24;
MasterAdapter32;
McaWmiCallback;
NMI_NOTIFY_TYPE_GUID;
NMI_SECTION_GUID;
PCIDeref;
PROCESSOR_GENERIC_ERROR_SECTION_GUID;
PmAcpiDispatchTable;
True;
TscRequest;
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
_imp_DbgPrint;
_imp_DbgPrintEx;
_imp_EmClientQueryRuleState;
_imp_EmpProviderRegister;
_imp_EtwEventEnabled;
_imp_EtwRegister;
_imp_EtwWrite;
_imp_ExAcquireFastMutex;
_imp_ExAcquireSpinLockExclusive;
_imp_ExAcquireSpinLockShared;
_imp_ExAllocatePool;
_imp_ExAllocatePoolWithTag;
_imp_ExCreateCallback;
_imp_ExFreePoolWithTag;
_imp_ExQueueWorkItem;
_imp_ExRegisterCallback;
_imp_ExReleaseFastMutex;
_imp_ExReleaseSpinLockExclusive;
_imp_ExReleaseSpinLockShared;
_imp_ExpInterlockedPopEntrySList;
_imp_ExpInterlockedPushEntrySList;
_imp_HalDispatchTable;
_imp_HalPrivateDispatchTable;
_imp_InbvAcquireDisplayOwnership;
_imp_InbvCheckDisplayOwnership;
_imp_InbvDisplayString;
_imp_InbvEnableDisplayString;
_imp_InbvInstallDisplayStringFilter;
_imp_InbvIsBootDriverInstalled;
_imp_InbvResetDisplay;
_imp_InbvSetScrollRegion;
_imp_InbvSetTextColor;
_imp_InbvSolidColorFill;
_imp_InitializeSListHead;
_imp_IoAdapterObjectType;
_imp_IoAllocateMdl;
_imp_IoAttachDeviceToDeviceStack;
_imp_IoBuildSynchronousFsdRequest;
_imp_IoCreateDevice;
_imp_IoCreateDriver;
_imp_IoDeleteDevice;
_imp_IoFreeMdl;
_imp_IoGetDeviceInterfaces;
_imp_IoGetDeviceObjectPointer;
_imp_IoGetStackLimits;
_imp_IoReadPartitionTable;
_imp_IoRegisterPlugPlayNotification;
_imp_IoReportDetectedDevice;
_imp_IoReportHalResourceUsage;
_imp_IoSetPartitionInformation;
_imp_IoWritePartitionTable;
_imp_IofCallDriver;
_imp_IofCompleteRequest;
_imp_KdDebuggerEnabled;
_imp_KdDebuggerNotPresent;
_imp_KdRestore;
_imp_KeAcquireInStackQueuedSpinLock;
_imp_KeAcquireInStackQueuedSpinLockAtDpcLevel;
_imp_KeAcquireSpinLockAtDpcLevel;
_imp_KeAcquireSpinLockRaiseToDpc;
_imp_KeAddProcessorAffinityEx;
_imp_KeAndAffinityEx;
_imp_KeAndGroupAffinityEx;
_imp_KeBugCheckEx;
_imp_KeCheckProcessorAffinityEx;
_imp_KeComplementAffinityEx;
_imp_KeConnectInterruptForHal;
_imp_KeCountSetBitsAffinityEx;
_imp_KeEnterKernelDebugger;
_imp_KeEnumerateNextProcessor;
_imp_KeFindConfigurationEntry;
_imp_KeFindConfigurationNextEntry;
_imp_KeFlushCurrentTbImmediately;
_imp_KeGetCurrentProcessorNumberEx;
_imp_KeGetProcessorIndexFromNumber;
_imp_KeGetProcessorNumberFromIndex;
_imp_KeInitializeAffinityEx;
_imp_KeInitializeDeviceQueue;
_imp_KeInitializeDpc;
_imp_KeInitializeEnumerationContext;
_imp_KeInitializeEvent;
_imp_KeInitializeInterrupt;
_imp_KeInitializeMutex;
_imp_KeInitializeTimerEx;
_imp_KeInsertDeviceQueue;
_imp_KeInsertQueueDpc;
_imp_KeIpiGenericCall;
_imp_KeProcessorGroupAffinity;
_imp_KeProfileInterruptWithSource;
_imp_KeQueryActiveGroupCount;
_imp_KeQueryActiveProcessorAffinity;
_imp_KeQueryActiveProcessorCountEx;
_imp_KeQueryMaximumProcessorCountEx;
_imp_KeQueryPrcbAddress;
_imp_KeQueryTimeIncrement;
_imp_KeRegisterBugCheckCallback;
_imp_KeReleaseInStackQueuedSpinLock;
_imp_KeReleaseInStackQueuedSpinLockFromDpcLevel;
_imp_KeReleaseSpinLock;
_imp_KeReleaseSpinLockFromDpcLevel;
_imp_KeRemoveDeviceQueue;
_imp_KeRemoveProcessorAffinityEx;
_imp_KeRevertToUserGroupAffinityThread;
_imp_KeSaveStateForHibernate;
_imp_KeSetEvent;
_imp_KeSetProfileIrql;
_imp_KeSetSystemGroupAffinityThread;
_imp_KeSetTargetProcessorDpcEx;
_imp_KeSetTimeIncrement;
_imp_KeSetTimerEx;
_imp_KeTestSpinLock;
_imp_KeTryToAcquireSpinLockAtDpcLevel;
_imp_KeUpdateSystemTime;
_imp_KeWaitForSingleObject;
_imp_KiBugCheckData;
_imp_KiCpuId;
_imp_LdrResSearchResource;
_imp_MmAllocateContiguousMemory;
_imp_MmAllocateContiguousMemorySpecifyCache;
_imp_MmAllocateMappingAddress;
_imp_MmAllocatePagesForMdl;
_imp_MmFreeContiguousMemory;
_imp_MmFreeContiguousMemorySpecifyCache;
_imp_MmFreeMappingAddress;
_imp_MmFreePagesFromMdl;
_imp_MmGetPhysicalAddress;
_imp_MmIsVerifierEnabled;
_imp_MmLockPagableDataSection;
_imp_MmLockPagableSectionByHandle;
_imp_MmMapIoSpace;
_imp_MmMapLockedPagesSpecifyCache;
_imp_MmMapLockedPagesWithReservedMapping;
_imp_MmUnlockPagableImageSection;
_imp_MmUnmapIoSpace;
_imp_MmUnmapLockedPages;
_imp_MmUnmapReservedMapping;
_imp_ObCreateObject;
_imp_ObInsertObject;
_imp_ObReferenceObjectByPointer;
_imp_ObfDereferenceObject;
_imp_ObfReferenceObject;
_imp_PoSetFixedWakeSource;
_imp_PoSetHiberRange;
_imp_PoStartNextPowerIrp;
_imp_PsGetCurrentProcessId;
_imp_PshedGetErrorSourceInfo;
_imp_PshedIsSystemWheaEnabled;
_imp_PshedRetrieveErrorInfo;
_imp_RtlAreBitsClear;
_imp_RtlClearAllBits;
_imp_RtlClearBits;
_imp_RtlCmEncodeMemIoResource;
_imp_RtlCompareUnicodeString;
_imp_RtlCopyMemoryNonTemporal;
_imp_RtlEqualString;
_imp_RtlFindClearBitsAndSet;
_imp_RtlFindFirstRunClear;
_imp_RtlFindLeastSignificantBit;
_imp_RtlFindNextForwardRunClear;
_imp_RtlInitString;
_imp_RtlInitUnicodeString;
_imp_RtlInitializeBitMap;
_imp_RtlIntegerToUnicodeString;
_imp_RtlNumberOfClearBits;
_imp_RtlNumberOfSetBitsUlongPtr;
_imp_RtlQueryRegistryValues;
_imp_RtlSetAllBits;
_imp_RtlSetBit;
_imp_RtlSetBits;
_imp_RtlTestBit;
_imp_RtlTimeFieldsToTime;
_imp_RtlTimeToTimeFields;
_imp_WheaAttemptPhysicalPageOffline;
_imp_WheaConfigureErrorSource;
_imp_WheaDeferredRecoveryService;
_imp_WheaGetErrorSource;
_imp_WheaInitializeDeferredRecoveryObject;
_imp_WheaInitializeRecordHeader;
_imp_WheaReportHwError;
_imp_WheaRequestDeferredRecovery;
_imp_ZwClose;
_imp_ZwCreateKey;
_imp_ZwDeleteValueKey;
_imp_ZwEnumerateValueKey;
_imp_ZwOpenKey;
_imp_ZwPowerInformation;
_imp_ZwQueryKey;
_imp_ZwQueryLicenseValue;
_imp_ZwQueryValueKey;
_imp_ZwSetValueKey;
_imp__setjmp;
_imp__stricmp;
_imp__vsnwprintf;
_imp__wcsicmp;
_imp_atoi;
_imp_longjmp;
_imp_strncmp;
_imp_strncpy_s;
_imp_strstr;
_imp_wcstoul;
_security_cookie;
_security_cookie_complement;
rgzBadApicVersion;
rgzBadHal;
rgzConfigurationData;
rgzIdentifier;
rgzMultiFunctionAdapter;
rgzNoApic;
rgzNoApicTable;
rgzPCICardList;
rgzRTCNotFound;
x86BiosBufferAllocated;
x86BiosFrameBuffer;
x86BiosInitialized;
x86BiosIoMemory;
x86BiosIoSpace;
x86BiosLowMemory;
x86BiosScratchMemory;
x86BiosTransferLength;
x86BiosTransferMemory;

 ?? ::FNODOBFM::`string'();
 ?? ::NNGAKEGL::`string'();
 ?? ::OKHAJAOM::`string'();
 ?? ::PBOPGDP::`string'();
Amd64DisableMonitoring();
Amd64EnableMonitoring();
Amd64FreeCounter();
Amd64GetProfileDescriptor();
Amd64InitializeProfiling();
Amd64OverflowHandler();
Amd64QueryInformation();
Amd64SetInterval();
ArbDeleteMmConfigRange();
DbgPrint();
DefaultDisableMonitoring();
DefaultEnableMonitoring();
DefaultInitializeProfiling();
DefaultOverflowHandler();
DefaultQueryInformation();
DefaultSetInterval();
DetectAcpiMP();
EmClientQueryRuleState();
EmonDisableMonitoring();
EmonEnableMonitoring();
EmonFreeCounter();
EmonGetProfileDescriptor();
EmonInitializeProfiling();
EmonOverflowHandler();
EmonQueryInformation();
EmonSetInterval();
EmpProviderRegister();
ExAcquireSpinLockExclusive();
ExAcquireSpinLockShared();
ExReleaseSpinLockExclusive();
ExReleaseSpinLockShared();
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
HalBugCheckSystem();
HalBuildMdlFromScatterGatherList();
HalBuildScatterGatherList();
HalCalculateScatterGatherListSize();
HalCalibratePerformanceCounter();
HalClearSoftwareInterrupt();
HalConvertDeviceIdtToIrql();
HalDisableInterrupt();
HalDisplayString();
HalEfiSetEnvironmentVariable();
HalEnableInterrupt();
HalEnumerateEnvironmentVariablesEx();
HalEnumerateProcessors();
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
HalHandleMcheck();
HalHandleNMI();
HalInitApicInterruptHandlers();
HalInitSystem();
HalInitializeBios();
HalInitializeOnResume();
HalInitializeProcessor();
HalIsHyperThreadingEnabled();
HalMakeBeep();
HalMatchAcpiCreatorRevision();
HalMatchAcpiFADTBootArch();
HalMatchAcpiOemId();
HalMatchAcpiOemRevision();
HalMatchAcpiOemTableId();
HalMatchAcpiRevision();
HalMcUpdateReadPCIConfig();
HalPnpGetDmaAdapter();
HalPnpInterfaceDereference();
HalPnpInterfaceReference();
HalProcessorIdle();
HalPutDmaAdapter();
HalPutScatterGatherList();
HalQueryDisplayParameters();
HalQueryEnvironmentVariableInfoEx();
HalQueryMaximumProcessorCount();
HalQueryRealTimeClock();
HalReadDmaCounter();
HalRealAllocateAdapterChannel();
HalRegisterDynamicProcessor();
HalRegisterErrataCallbacks();
HalReportResourceUsage();
HalRequestClockInterrupt();
HalRequestDeferredRecoveryServiceInterrupt();
HalRequestIpi();
HalRequestSoftwareInterrupt();
HalReturnToFirmware();
HalSendNMI();
HalSendSoftwareInterrupt();
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
HaliSetWakeAlarm();
HaliSetWakeEnable();
HalpAcpiAllocateMemory();
HalpAcpiCacheTable();
HalpAcpiCheckAndMapTable();
HalpAcpiCopyBiosTable();
HalpAcpiDetectMachineSpecificActions();
HalpAcpiFallbackOnLegacyConfigMethod();
HalpAcpiFindRsdp();
HalpAcpiFlushCache();
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
HalpAcquireCmosSpinLockAndWait();
HalpAcquireCmosSpinLockEx();
HalpAcquireHighLevelLock();
HalpAddAdapterToList();
HalpAddDevice();
HalpAddInterruptDest();
HalpAddMcaToProcessorGenericSection();
HalpAddMcaToProcessorSpecificSection();
HalpAllocPhysicalMemory();
HalpAllocateAdapterCallback();
HalpAllocateCR3Root();
HalpAllocateMapRegisters();
HalpAllocateNumaConfigData();
HalpApicRebootService();
HalpApicReserveResources();
HalpApicSpuriousService();
HalpAssignSlotResourcesStub();
HalpAuditAcpiTables();
HalpAuditAllocateRsdtArrayTable();
HalpAuditEnumerateRsdts();
HalpAuditEnumerateRsdtsInRange();
HalpAuditEnumerateSlicTables();
HalpAuditSelectRsdtOrXsdt();
HalpAuditSlicTables();
HalpBiosDisplayReset();
HalpBugCheckCallback();
HalpBuildIpiDestinationMap();
HalpBuildKGDTEntry32();
HalpBuildRealModeStartBlock();
HalpBuildResumeStructures();
HalpBuildTiledCR3Ex();
HalpCheckLowMemoryPostSleep();
HalpCheckLowMemoryPreSleep();
HalpCheckNonBspTimerCompatibility();
HalpCheckPowerButton();
HalpCheckWakeupTimeAndAdjust();
HalpClockGetMessageRoutingInfo();
HalpClockSetMessageInterruptRouting();
HalpClusterModeSupportedByProcessor();
HalpCmcDeferredRoutine();
HalpCmcInitializePolling();
HalpCmcPollProcessor();
HalpCmcStartPolling();
HalpCmcWorkerRoutine();
HalpCmciDeferredRoutine();
HalpCmciInit();
HalpCmciInitProcessor();
HalpCmciInitializeErrorPacket();
HalpCmciLoadThresholdConfiguration();
HalpCmciPollProcessor();
HalpCmciService();
HalpCmciSetProcessorConfig();
HalpCmciSetProcessorConfigAMD();
HalpCmciSetProcessorConfigIntel();
HalpCmciSetProcessorMiscConfigAMD();
HalpCmosNullReference();
HalpCmosRangeHandler();
HalpCmosReadByte();
HalpCmosWriteByte();
HalpCommitCR3Worker();
HalpConsumeLowMemory();
HalpCorrectErrSrc();
HalpCorrectGenericErrSrc();
HalpCorrectNMIErrSrc();
HalpCpuID();
HalpCreateErrorRecord();
HalpCreateInterrupt();
HalpCreateMachineCheckErrorRecord();
HalpCreateMcaMemoryErrorRecord();
HalpCreateMcaProcessorErrorRecord();
HalpCreateNMIErrorRecord();
HalpDeferredRecoveryService();
HalpDetectAlwaysRunningApicTimer();
HalpDetermineSystemApicMode();
HalpDisableCmciOnProcessor();
HalpDisableMSIInterrupt();
HalpDisableSystemInterrupt();
HalpDispatchPnp();
HalpDispatchPower();
HalpDispatchSystemStateTransition();
HalpDispatchWmi();
HalpDmaAcquireBufferMappings();
HalpDmaAllocateChildAdapter();
HalpDmaAllocateContiguousMemory();
HalpDmaAllocateContiguousPagesFromContiguousPool();
HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel();
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
HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevel();
HalpDmaAllocateScatterPagesFromScatterPool();
HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel();
HalpDmaAllocateTranslationBuffer();
HalpDmaCommitContiguousMapBuffers();
HalpDmaCommitScatterMapBuffers();
HalpDmaFinalizeDoubleBufferingDisposition();
HalpDmaFlushScatterTransfer();
HalpDmaForceAllocation();
HalpDmaFreeChildAdapterWorker();
HalpDmaFreeMapRegisters();
HalpDmaGetTranslationEntries();
HalpDmaGrowContiguousMapBuffers();
HalpDmaGrowScatterMapBuffers();
HalpDmaInit();
HalpDmaInitializeMasterAdapter();
HalpDmaLinkContiguousTranslations();
HalpDmaMapScatterTransfer();
HalpDmaNextContiguousPiece();
HalpDmaPrependTranslations();
HalpDmaQueueAdapter();
HalpDmaReleaseBufferMappings();
HalpDmaReturnPageToOwner();
HalpDmaReturnPageToSource();
HalpDmaReturnToContiguousPool();
HalpDmaReturnToScatterPool();
HalpDmaSyncMapBuffers();
HalpDmaSyncMapBuffersWithEmergencyResources();
HalpDmaZeroMapBuffers();
HalpDpGetInterruptReplayState();
HalpDpMaskLevelTriggeredInterrupts();
HalpDpPostReplace();
HalpDpPostReplaceInitialization();
HalpDpReplaceBegin();
HalpDpReplaceControl();
HalpDpReplaceEnd();
HalpDpReplaceTarget();
HalpDpReplayInterrupts();
HalpDpStartProcessor();
HalpDpSwapProcessorIdentifiers();
HalpDpUnmaskLevelTriggeredInterrupts();
HalpDriverEntry();
HalpECmosReadByte();
HalpECmosWriteByte();
HalpEfiInitialization();
HalpEfiInitializeOnResume();
HalpEnableMSIInterrupt();
HalpEnableNMI();
HalpEnableRedirEntry();
HalpEnableSystemInterrupt();
HalpEndOfBoot();
HalpFDMANotificationCallback();
HalpFindBusAddressTranslation();
HalpFreeTiledCR3Ex();
HalpGenericPolledDpcRoutine();
HalpGenericPolledWorkerRoutine();
HalpGetAcpiStaticNumaTopology();
HalpGetApicIdByProcessorIndex();
HalpGetApicInti();
HalpGetApicVersion();
HalpGetChipHacks();
HalpGetCmosData();
HalpGetCpuInfo();
HalpGetDisplayBiosInformation();
HalpGetFeatureBits();
HalpGetHypervisorInformation();
HalpGetIdealQueryPerformanceCounterSource();
HalpGetNextProcessorApicId();
HalpGetNumaProcMemoryCount();
HalpGetPCIData();
HalpGetParameters();
HalpGetPlatformTimerInformation();
HalpGetPmTimerSleepModePerfCounterValue();
HalpGetProcessorBrandString();
HalpGetProcessorCounterAttributes();
HalpGetResourceSortValue();
HalpGetSetCmosData();
HalpGrowMapBufferWorker();
HalpHalt();
HalpHandlePreviousMcaErrors();
HalpHandlePreviousMcaErrorsOnProcessor();
HalpHpetClockInterrupt();
HalpHpetClockInterruptStub();
HalpHpetClockInterruptWork();
HalpHpetEnableHypervisorTimer();
HalpHpetEnableLineBasedInterrupts();
HalpHpetHypervisorInterruptStub();
HalpHpetProgramClock();
HalpHpetProgramHypervisorTimer();
HalpHpetProgramRolloverTimer();
HalpHpetRolloverInterrupt();
HalpHpetStartProfileInterrupt();
HalpHpetWriteEtwEvent();
HalpHvApicWaitForIcr();
HalpHvApicWriteIcr();
HalpHvCpuid();
HalpHvIsReferenceTimeAvailable();
HalpHwPolicyInitialize();
HalpInitChipHacks();
HalpInitGenericErrorSourceEntry();
HalpInitGenericErrorSourcePollingRoutine();
HalpInitIntiInfo();
HalpInitMpInfo();
HalpInitNonBusHandler();
HalpInitSystem();
HalpInitTimerSource();
HalpInitializeApicAddressing();
HalpInitializeClock();
HalpInitializeCmos();
HalpInitializeConfigurationFromMadt();
HalpInitializeErrSrc();
HalpInitializeGenericErrorSource();
HalpInitializeHpet();
HalpInitializeIOUnit();
HalpInitializeInterruptRemapping();
HalpInitializeLocalUnit();
HalpInitializeMce();
HalpInitializeNMI();
HalpInitializePICs();
HalpInitializePciStubs();
HalpInitializeProfiling();
HalpInitializeWheaPhysicalMappings();
HalpInterruptRemappingEnabled();
HalpInvalidateIRTCacheEntry();
HalpIoDelay();
HalpIpiReserveResources();
HalpIsCmciImplemented();
HalpIsHardwareWatchdogTimerPresent();
HalpIsHvPresent();
HalpIsMicrosoftCompatibleHvLoaded();
HalpIsMsiSupported();
HalpKdAllocateAddressRange();
HalpKdConfigureCardBusSocket();
HalpKdConfigureDebuggingDevice();
HalpKdExtendAddressRange();
HalpKdFindFreeResourceLimits();
HalpKdGetBarRange();
HalpKdGetCardBusBridgeResources();
HalpKdGetPciBridgeResources();
HalpKdPowerUpDevice();
HalpKdReadPCIConfig();
HalpKdReleasePciDevice();
HalpKdSearchBehindCardBusBridge();
HalpKdSearchBehindPciBridge();
HalpKdSearchForPciDebuggingDevice();
HalpKdSearchForTopOfMMIO();
HalpKdSetupPciDevice();
HalpKdUnconfigureCardBusBridge();
HalpKdUpdateAddressRange();
HalpKdWidenCardBusBridgeBusRange();
HalpKdWidenCardBusBridgeIoRange();
HalpKdWidenCardBusBridgeMemoryRange();
HalpKdWidenPciBridgeBusRange();
HalpKdWidenPciBridgeIoRange();
HalpKdWidenPciBridgeMemoryRange();
HalpKdWritePCIConfig();
HalpLMIdentityStub();
HalpLMIdentityStubEnd();
HalpLMStub();
HalpLegacyApicEndOfInterrupt();
HalpLegacyApicReadGenericReg();
HalpLegacyApicWriteGenericReg();
HalpLoadMicrocode();
HalpLocalApicErrorService();
HalpMapCR3Ex();
HalpMapNtToHwProcessorId();
HalpMapNvsArea();
HalpMapPhysicalMemory64();
HalpMapPhysicalMemoryWriteThrough64();
HalpMapTransfer();
HalpMarkProcessorStarted();
HalpMcUpdateFindDataTableEntry();
HalpMcUpdateInitialize();
HalpMcUpdateLock();
HalpMcUpdateMicrocode();
HalpMcUpdatePostUpdate();
HalpMcUpdateUnlock();
HalpMcaClearError();
HalpMcaInitializePcrContext();
HalpMcaQueueDpc();
HalpMcaReadError();
HalpMcaReadErrorPresence();
HalpMcaReportError();
HalpMcaResumeProcessorConfig();
HalpMcaSetProcessorConfig();
HalpMceBarrierWait();
HalpMceHandler();
HalpMceHandlerWithRendezvous();
HalpMceInit();
HalpMceInitializeErrorPacket();
HalpMceInitializeRecovery();
HalpMceMemoryErrorDeferredRecovery();
HalpMceRecovery();
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
HalpPCIStartConfigAccess();
HalpPCIWriteUcharType1();
HalpPCIWriteUcharType2();
HalpPCIWriteUlongType1();
HalpPCIWriteUlongType2();
HalpPCIWriteUshortType1();
HalpPCIWriteUshortType2();
HalpPassIrpFromFdoToPdo();
HalpPciAddMmConfigEntry();
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
HalpPmTimerTickCountStall();
HalpPostSleepMP();
HalpPowerStateCallback();
HalpPreAllocateKInterrupts();
HalpPrepareForBugcheck();
HalpPreprocessNmi();
HalpPreserveNvsArea();
HalpProbeIoApic();
HalpProcessorFence();
HalpProfileInterrupt();
HalpProgramDrhd();
HalpProgramRtcClock();
HalpPteReserveResources();
HalpPutAcpiHacksInRegistry();
HalpQueryAcpiResourceRequirements();
HalpQueryDeviceRelations();
HalpQueryIdFdo();
HalpQueryIdPdo();
HalpQueryInterface();
HalpQueryMaximumRegisteredProcessorCount();
HalpQueryPciRegistryInfo();
HalpQueryProcessorCounterSynchronization();
HalpQueryResources();
HalpQueryWakeTime();
HalpQueueMapBufferWorker();
HalpReadCmosTime();
HalpReadGenericErrorInfo();
HalpReadLocalApicID();
HalpReadPCIConfig();
HalpReadPartitionTable();
HalpReadRtcStdPCAT();
HalpReadStdCmosData();
HalpReadWheaPhysicalMemory();
HalpReadWriteWheaPhysicalMemory();
HalpRegisterApicAddressUsage();
HalpRegisterPciDebuggingDeviceInfo();
HalpRegisterVector();
HalpReleaseCmosSpinLock();
HalpReleaseHighLevelLock();
HalpRemapVirtualAddress64();
HalpRemoveInterruptDest();
HalpReportIdleStateUsage();
HalpReportResourceUsage();
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
HalpSaveDmaControllerState();
HalpSavePerformanceCounter();
HalpSaveProcessorStateAndWait();
HalpScaleQueryPerformanceCounter();
HalpScaleTimers();
HalpSendFlatIpi();
HalpSendNodeIpi64();
HalpSendPhysicalIpi();
HalpSet8259Mask();
HalpSetClockAfterSleep();
HalpSetClockBeforeSleep();
HalpSetCmosData();
HalpSetHandlerAddressToIDTIrql();
HalpSetInternalVector();
HalpSetInterruptControllerWakeupState();
HalpSetIrtEntry();
HalpSetPCIData();
HalpSetPartitionInformation();
HalpSetProfileSourceInterval();
HalpSetRedirEntry();
HalpSetSystemInformation();
HalpSetWakeAlarm();
HalpSetupAcpiPhase0();
HalpSetupApicRegisterAccessFunctions();
HalpSetupRealModeResume();
HalpSetupSystemClockSupport();
HalpShutdown();
HalpSortLocalApicTable();
HalpStartProcessor();
HalpStopLegacyUsbInterrupts();
HalpStopOhciInterrupt();
HalpStopUhciInterrupt();
HalpStoreFreeCr3();
HalpSuspendClock();
HalpSwitchToEarlyStallSource();
HalpSwitchToX2ApicMode();
HalpTranslateBusAddress();
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
HalpTscFallback();
HalpTscFallbackToPlatformSource();
HalpTscFinalizeDisposition();
HalpTscInitializeSynchronizationContext();
HalpTscReserveResources();
HalpTscStallExecutionProcessor();
HalpTscSynchronization();
HalpTscSynchronizationWorker();
HalpTscTraceProcessorSynchronization();
HalpTscTraceStatus();
HalpUnloadMicrocode();
HalpUnmapVirtualAddress();
HalpUnmaskCriticalClockInterruptSources();
HalpUpSendIpi();
HalpUpdateConfigurationFromMsct();
HalpUpdateExtendedDestination();
HalpUpdateInterruptDest();
HalpUpdateIrtDestinationId();
HalpUpdateProcessorApicId();
HalpUpdateSingleTargetExtendedDestination();
HalpValidPCISlot();
HalpVerifyIOUnit();
HalpVerifySratEntryLengthAndFlag();
HalpWaitForPhase0ClockTick();
HalpWhackICHUsbSmi();
HalpWheaInitProcessorGenericSection();
HalpWriteCmosTime();
HalpWritePCIConfig();
HalpWritePartitionTable();
HalpWriteResetCommand();
HalpWriteRtcStdPCAT();
HalpWriteStdCmosData();
HalpWriteWheaPhysicalMemory();
HalpX2ApicEndOfInterrupt();
HalpX2ApicModeSupportedByProcessor();
HalpX2ApicReadGenericReg();
HalpX2ApicSendLogicalIpi();
HalpX2ApicSendPhysicalIpi();
HalpX2ApicWaitForIcr();
HalpX2ApicWriteGenericReg();
HalpX2ApicWriteIcr();
HalpcGetCmosDataByType();
HalpcSetCmosDataByType();
IoFlushAdapterBuffers();
IoFreeAdapterChannel();
IoFreeMapRegisters();
IoMapTransfer();
KdRestore();
KeAddProcessorAffinityEx();
KeAndAffinityEx();
KeAndGroupAffinityEx();
KeCheckProcessorAffinityEx();
KeComplementAffinityEx();
KeCountSetBitsAffinityEx();
KeEnumerateNextProcessor();
KeFlushWriteBuffer();
KeGetProcessorIndexFromNumber();
KeGetProcessorNumberFromIndex();
KeInitializeAffinityEx();
KeInitializeEnumerationContext();
KeProcessorGroupAffinity();
KeQueryPerformanceCounter();
KeRemoveProcessorAffinityEx();
KeSaveStateForHibernate();
KeStallExecutionProcessor();
PicSpuriousService37();
PoSetFixedWakeSource();
PshedGetErrorSourceInfo();
PshedIsSystemWheaEnabled();
PshedRetrieveErrorInfo();
RtlMoveMemory();
RtlStringCbPrintfW();
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
XmCwdOp();
XmDaaOp();
XmDasOp();
XmDecOp();
XmDivOp();
XmEffectiveOffset();
XmEmulateStream();
XmEnterOp();
XmEvaluateAddressSpecifier();
XmEvaluateIndexSpecifier();
XmExecuteInt1a();
XmFlagsRegister();
XmGeneralBitOffset();
XmGeneralRegister();
XmGetCodeByte();
XmGetImmediateSourceValue();
XmGetLongImmediate();
XmGetOffsetAddress();
XmGetStringAddress();
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
XmInsOp();
XmInt1aFindPciClassCode();
XmInt1aFindPciDevice();
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
XmSetLogicalResult();
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
_GSHandlerCheck();
_GSHandlerCheckCommon();
_report_gsfailure();
_security_check_cookie();
_security_init_cookie();
atoi();
longjmp();
memcmp();
memcpy();
memmove();
memset();
setjmp();
stricmp();
strncmp();
strncpy_s();
strstr();
vsnwprintf();
wcsicmp();
wcstoul();
x86BiosAllocateBuffer();
x86BiosCall();
x86BiosExecuteInterruptShadowed();
x86BiosFreeBuffer();
x86BiosGetPciBusData();
x86BiosInitializeBiosEx();
x86BiosInitializeBiosShadowed();
x86BiosReadCmosPortByte();
x86BiosReadIoSpace();
x86BiosReadMemory();
x86BiosSetPciBusData();
x86BiosTranslateAddress();
x86BiosWriteCmosPortByte();
x86BiosWriteIoSpace();
x86BiosWriteMemory();
zzz_AsmCodeRange_Begin();
zzz_AsmCodeRange_End();
