struct LIST_ENTRY32;
struct LIST_ENTRY64;
struct PROCESSOR_IDLE_TIMES;
struct PROCESSOR_PERF_STATE;
struct _ACCESS_STATE;
struct _ACTIVATION_CONTEXT;
struct _ACTIVATION_CONTEXT_DATA;
struct _ACTIVATION_CONTEXT_STACK;
struct _ASSEMBLY_STORAGE_MAP;
struct _CLIENT_ID;
struct _CM_FULL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_LIST;
struct _CM_RESOURCE_LIST;
struct _COMPRESSED_DATA_INFO;
struct _CONTEXT;
struct _CURDIR;
struct _DESCRIPTOR;
struct _DEVICE_CAPABILITIES;
struct _DEVICE_MAP;
struct _DEVICE_OBJECT;
struct _DEVICE_OBJECT_POWER_EXTENSION;
struct _DEVOBJ_EXTENSION;
struct _DISPATCHER_HEADER;
struct _DPH_BLOCK_INFORMATION;
struct _DPH_HEAP_BLOCK;
struct _DPH_HEAP_ROOT;
struct _DRIVER_EXTENSION;
struct _DRIVER_OBJECT;
struct _EJOB;
struct _EPROCESS;
struct _EPROCESS_QUOTA_BLOCK;
struct _EPROCESS_QUOTA_ENTRY;
struct _ERESOURCE;
struct _ETHREAD;
struct _EXCEPTION_RECORD;
struct _EXCEPTION_REGISTRATION_RECORD;
struct _EX_FAST_REF;
struct _EX_PUSH_LOCK;
struct _EX_PUSH_LOCK_CACHE_AWARE;
struct _EX_PUSH_LOCK_WAIT_BLOCK;
struct _EX_RUNDOWN_REF;
struct _FAST_IO_DISPATCH;
struct _FAST_MUTEX;
struct _FILE_BASIC_INFORMATION;
struct _FILE_GET_QUOTA_INFORMATION;
struct _FILE_NETWORK_OPEN_INFORMATION;
struct _FILE_OBJECT;
struct _FILE_STANDARD_INFORMATION;
struct _FLOATING_SAVE_AREA;
struct _FNSAVE_FORMAT;
struct _FS_FILTER_CALLBACKS;
struct _FS_FILTER_CALLBACK_DATA;
struct _FXSAVE_FORMAT;
struct _FX_SAVE_AREA;
struct _GDI_TEB_BATCH;
struct _GENERAL_LOOKASIDE;
struct _GENERIC_MAPPING;
struct _GUID;
struct _HANDLE_TABLE;
struct _HANDLE_TRACE_DB_ENTRY;
struct _HANDLE_TRACE_DEBUG_INFO;
struct _HARDWARE_PTE_X86;
struct _HEAP;
struct _HEAP_ENTRY;
struct _HEAP_LOCK;
struct _HEAP_PSEUDO_TAG_ENTRY;
struct _HEAP_SEGMENT;
struct _HEAP_TAG_ENTRY;
struct _HEAP_UCR_SEGMENT;
struct _HEAP_UNCOMMMTTED_RANGE;
struct _IMAGE_DATA_DIRECTORY;
struct _IMAGE_FILE_HEADER;
struct _IMAGE_NT_HEADERS;
struct _IMAGE_OPTIONAL_HEADER;
struct _INITIAL_PRIVILEGE_SET;
struct _INTERFACE;
struct _IO_CLIENT_EXTENSION;
struct _IO_COMPLETION_CONTEXT;
struct _IO_COUNTERS;
struct _IO_RESOURCE_DESCRIPTOR;
struct _IO_RESOURCE_LIST;
struct _IO_RESOURCE_REQUIREMENTS_LIST;
struct _IO_SECURITY_CONTEXT;
struct _IO_STACK_LOCATION;
struct _IO_STATUS_BLOCK;
struct _IO_TIMER;
struct _IRP;
struct _KAPC;
struct _KAPC_STATE;
struct _KDEVICE_QUEUE;
struct _KDEVICE_QUEUE_ENTRY;
struct _KDPC;
struct _KDPC_DATA;
struct _KEVENT;
struct _KEXECUTE_OPTIONS;
struct _KGATE;
struct _KGDTENTRY;
struct _KGUARDED_MUTEX;
struct _KIDTENTRY;
struct _KNODE;
struct _KPCR;
struct _KPRCB;
struct _KPROCESS;
struct _KPROCESSOR_STATE;
struct _KQUEUE;
struct _KSEMAPHORE;
struct _KSPECIAL_REGISTERS;
struct _KSPIN_LOCK_QUEUE;
struct _KSYSTEM_TIME;
struct _KTHREAD;
struct _KTIMER;
struct _KTRAP_FRAME;
struct _KTSS;
struct _KUSER_SHARED_DATA;
struct _KWAIT_BLOCK;
struct _KiIoAccessMap;
struct _LDR_DATA_TABLE_ENTRY;
struct _LIST_ENTRY;
struct _LUID;
struct _LUID_AND_ATTRIBUTES;
struct _MAILSLOT_CREATE_PARAMETERS;
struct _MDL;
struct _MMADDRESS_NODE;
struct _MMSUPPORT;
struct _MMSUPPORT_FLAGS;
struct _MMWSL;
struct _MM_AVL_TABLE;
struct _NAMED_PIPE_CREATE_PARAMETERS;
struct _NPAGED_LOOKASIDE_LIST;
struct _NT_TIB;
struct _OBJECT_ATTRIBUTES;
struct _OBJECT_CREATE_INFORMATION;
struct _OBJECT_DIRECTORY;
struct _OBJECT_DIRECTORY_ENTRY;
struct _OBJECT_DUMP_CONTROL;
struct _OBJECT_HANDLE_COUNT_DATABASE;
struct _OBJECT_HANDLE_COUNT_ENTRY;
struct _OBJECT_HANDLE_INFORMATION;
struct _OBJECT_HEADER;
struct _OBJECT_HEADER_CREATOR_INFO;
struct _OBJECT_HEADER_HANDLE_INFO;
struct _OBJECT_HEADER_NAME_INFO;
struct _OBJECT_HEADER_QUOTA_INFO;
struct _OBJECT_NAME_INFORMATION;
struct _OBJECT_TYPE;
struct _OBJECT_TYPE_INITIALIZER;
struct _OWNER_ENTRY;
struct _PAGED_LOOKASIDE_LIST;
struct _PAGEFAULT_HISTORY;
struct _PEB;
struct _PEB_FREE_BLOCK;
struct _PEB_LDR_DATA;
struct _PERFINFO_GROUPMASK;
struct _POWER_SEQUENCE;
struct _PP_LOOKASIDE_LIST;
struct _PRIVILEGE_SET;
struct _PROCESSOR_POWER_STATE;
struct _PROCESS_WS_WATCH_INFORMATION;
struct _PS_IMPERSONATION_INFORMATION;
struct _PS_JOB_TOKEN_FILTER;
struct _QUAD;
struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME;
struct _RTL_AVL_TABLE;
struct _RTL_BALANCED_LINKS;
struct _RTL_CRITICAL_SECTION;
struct _RTL_CRITICAL_SECTION_DEBUG;
struct _RTL_DRIVE_LETTER_CURDIR;
struct _RTL_STACK_TRACE_ENTRY;
struct _RTL_TRACE_BLOCK;
struct _RTL_TRACE_DATABASE;
struct _RTL_TRACE_SEGMENT;
struct _RTL_USER_PROCESS_PARAMETERS;
struct _SCSI_REQUEST_BLOCK;
struct _SECTION_OBJECT_POINTERS;
struct _SECURITY_QUALITY_OF_SERVICE;
struct _SECURITY_SUBJECT_CONTEXT;
struct _SE_AUDIT_PROCESS_CREATION_INFO;
struct _SID;
struct _SID_AND_ATTRIBUTES;
struct _SID_IDENTIFIER_AUTHORITY;
struct _SINGLE_LIST_ENTRY;
struct _STACK_TRACE_DATABASE;
struct _STRING;
struct _TEB;
struct _TEB_ACTIVE_FRAME;
struct _TEB_ACTIVE_FRAME_CONTEXT;
struct _TERMINATION_PORT;
struct _UNICODE_STRING;
struct _VPB;
struct _WAIT_CONTEXT_BLOCK;
struct _flags;

union _FS_FILTER_PARAMETERS;
union _LARGE_INTEGER;
union _POWER_STATE;
union _SLIST_HEADER;
union _ULARGE_INTEGER;

enum BUS_QUERY_ID_TYPE;
enum DEVICE_TEXT_TYPE;
enum LSA_FOREST_TRUST_RECORD_TYPE;
enum POWER_ACTION;
enum ReplacesCorHdrNumericDefines;
enum _ALTERNATIVE_ARCHITECTURE_TYPE;
enum _DEVICE_POWER_STATE;
enum _DEVICE_RELATION_TYPE;
enum _DEVICE_USAGE_NOTIFICATION_TYPE;
enum _EXCEPTION_DISPOSITION;
enum _FILE_INFORMATION_CLASS;
enum _FSINFOCLASS;
enum _FS_FILTER_SECTION_SYNC_TYPE;
enum _INTERFACE_TYPE;
enum _IO_ALLOCATION_ACTION;
enum _KDPC_IMPORTANCE;
enum _KOBJECTS;
enum _KSPIN_LOCK_QUEUE_NUMBER;
enum _MEMORY_CACHING_TYPE_ORIG;
enum _MEMORY_TYPE;
enum _MMSYSTEM_PTE_POOL_TYPE;
enum _MODE;
enum _NT_PRODUCT_TYPE;
enum _OB_OPEN_REASON;
enum _PF_SCENARIO_TYPE;
enum _POOL_TYPE;
enum _POWER_STATE_TYPE;
enum _PP_NPAGED_LOOKASIDE_NUMBER;
enum _PS_QUOTA_TYPE;
enum _REG_NOTIFY_CLASS;
enum _RTL_GENERIC_COMPARE_RESULTS;
enum _SECURITY_IMPERSONATION_LEVEL;
enum _SECURITY_OPERATION_CODE;
enum _SYSTEM_POWER_STATE;

typedef struct LIST_ENTRY32 {
    ULONG Flink;
    ULONG Blink;
};

typedef struct LIST_ENTRY64 {
    ULONG64 Flink;
    ULONG64 Blink;
};

typedef struct PROCESSOR_IDLE_TIMES {
    ULONG64 StartTime;
    ULONG64 EndTime;
    ULONG IdleHandlerReserved[4];
};

typedef struct PROCESSOR_PERF_STATE {
    UCHAR PercentFrequency;
    UCHAR MinCapacity;
    USHORT Power;
    UCHAR IncreaseLevel;
    UCHAR DecreaseLevel;
    USHORT Flags;
    ULONG IncreaseTime;
    ULONG DecreaseTime;
    ULONG IncreaseCount;
    ULONG DecreaseCount;
    ULONG64 PerformanceTime;
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

typedef struct _ACTIVATION_CONTEXT {
};

typedef struct _ACTIVATION_CONTEXT_DATA {
};

typedef struct _ACTIVATION_CONTEXT_STACK {
    struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME *ActiveFrame;
    struct _LIST_ENTRY FrameListCache;
    ULONG Flags;
    ULONG NextCookieSequenceNumber;
    ULONG StackId;
};

typedef struct _ASSEMBLY_STORAGE_MAP {
};

typedef struct _CLIENT_ID {
    PVOID UniqueProcess;
    PVOID UniqueThread;
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

typedef struct _COMPRESSED_DATA_INFO {
    USHORT CompressionFormatAndEngine;
    UCHAR CompressionUnitShift;
    UCHAR ChunkShift;
    UCHAR ClusterShift;
    UCHAR Reserved;
    USHORT NumberOfChunks;
    ULONG CompressedChunkSizes[1];
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

typedef struct _CURDIR {
    struct _UNICODE_STRING DosPath;
    PVOID Handle;
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

typedef struct _DEVICE_MAP {
    struct _OBJECT_DIRECTORY *DosDevicesDirectory;
    struct _OBJECT_DIRECTORY *GlobalDosDevicesDirectory;
    ULONG ReferenceCount;
    ULONG DriveMap;
    UCHAR DriveType[32];
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
};

typedef struct _DISPATCHER_HEADER {
    UCHAR Type;
    UCHAR Absolute;
    UCHAR NpxIrql;
    UCHAR Size;
    UCHAR Hand;
    UCHAR Inserted;
    UCHAR DebugActive;
    LONG Lock;
    LONG SignalState;
    struct _LIST_ENTRY WaitListHead;
};

typedef struct _DPH_BLOCK_INFORMATION {
    ULONG StartStamp;
    PVOID Heap;
    ULONG RequestedSize;
    ULONG ActualSize;
    struct _LIST_ENTRY FreeQueue;
    struct _SINGLE_LIST_ENTRY FreePushList;
    USHORT TraceIndex;
    PVOID StackTrace;
    ULONG EndStamp;
};

typedef struct _DPH_HEAP_BLOCK {
    struct _DPH_HEAP_BLOCK *pNextAlloc;
    struct _LIST_ENTRY AvailableEntry;
    struct _RTL_BALANCED_LINKS TableLinks;
    PUCHAR pUserAllocation;
    PUCHAR pVirtualBlock;
    ULONG nVirtualBlockSize;
    ULONG nVirtualAccessSize;
    ULONG nUserRequestedSize;
    ULONG nUserActualSize;
    PVOID UserValue;
    ULONG UserFlags;
    struct _RTL_TRACE_BLOCK *StackTrace;
    struct _LIST_ENTRY AdjacencyEntry;
    PUCHAR pVirtualRegion;
};

typedef struct _DPH_HEAP_ROOT {
    ULONG Signature;
    ULONG HeapFlags;
    struct _RTL_CRITICAL_SECTION *HeapCritSect;
    ULONG nRemoteLockAcquired;
    struct _DPH_HEAP_BLOCK *pVirtualStorageListHead;
    struct _DPH_HEAP_BLOCK *pVirtualStorageListTail;
    ULONG nVirtualStorageRanges;
    ULONG nVirtualStorageBytes;
    struct _RTL_AVL_TABLE BusyNodesTable;
    struct _DPH_HEAP_BLOCK *NodeToAllocate;
    ULONG nBusyAllocations;
    ULONG nBusyAllocationBytesCommitted;
    struct _DPH_HEAP_BLOCK *pFreeAllocationListHead;
    struct _DPH_HEAP_BLOCK *pFreeAllocationListTail;
    ULONG nFreeAllocations;
    ULONG nFreeAllocationBytesCommitted;
    struct _LIST_ENTRY AvailableAllocationHead;
    ULONG nAvailableAllocations;
    ULONG nAvailableAllocationBytesCommitted;
    struct _DPH_HEAP_BLOCK *pUnusedNodeListHead;
    struct _DPH_HEAP_BLOCK *pUnusedNodeListTail;
    ULONG nUnusedNodes;
    ULONG nBusyAllocationBytesAccessible;
    struct _DPH_HEAP_BLOCK *pNodePoolListHead;
    struct _DPH_HEAP_BLOCK *pNodePoolListTail;
    ULONG nNodePools;
    ULONG nNodePoolBytes;
    struct _LIST_ENTRY NextHeap;
    ULONG ExtraFlags;
    ULONG Seed;
    PVOID NormalHeap;
    struct _RTL_TRACE_BLOCK *CreateStackTrace;
    PVOID FirstThread;
};

typedef struct _DRIVER_EXTENSION {
    struct _DRIVER_OBJECT *DriverObject;
    PLONG AddDevice;
    ULONG Count;
    struct _UNICODE_STRING ServiceKeyName;
    struct _IO_CLIENT_EXTENSION *ClientDriverExtension;
    struct _FS_FILTER_CALLBACKS *FsFilterCallbacks;
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

typedef struct _EJOB {
    struct _KEVENT Event;
    struct _LIST_ENTRY JobLinks;
    struct _LIST_ENTRY ProcessListHead;
    struct _ERESOURCE JobLock;
    union _LARGE_INTEGER TotalUserTime;
    union _LARGE_INTEGER TotalKernelTime;
    union _LARGE_INTEGER ThisPeriodTotalUserTime;
    union _LARGE_INTEGER ThisPeriodTotalKernelTime;
    ULONG TotalPageFaultCount;
    ULONG TotalProcesses;
    ULONG ActiveProcesses;
    ULONG TotalTerminatedProcesses;
    union _LARGE_INTEGER PerProcessUserTimeLimit;
    union _LARGE_INTEGER PerJobUserTimeLimit;
    ULONG LimitFlags;
    ULONG MinimumWorkingSetSize;
    ULONG MaximumWorkingSetSize;
    ULONG ActiveProcessLimit;
    ULONG Affinity;
    UCHAR PriorityClass;
    ULONG UIRestrictionsClass;
    ULONG SecurityLimitFlags;
    PVOID Token;
    struct _PS_JOB_TOKEN_FILTER *Filter;
    ULONG EndOfJobTimeAction;
    PVOID CompletionPort;
    PVOID CompletionKey;
    ULONG SessionId;
    ULONG SchedulingClass;
    ULONG64 ReadOperationCount;
    ULONG64 WriteOperationCount;
    ULONG64 OtherOperationCount;
    ULONG64 ReadTransferCount;
    ULONG64 WriteTransferCount;
    ULONG64 OtherTransferCount;
    struct _IO_COUNTERS IoInfo;
    ULONG ProcessMemoryLimit;
    ULONG JobMemoryLimit;
    ULONG PeakProcessMemoryUsed;
    ULONG PeakJobMemoryUsed;
    ULONG CurrentJobMemoryUsed;
    struct _KGUARDED_MUTEX MemoryLimitsLock;
    struct _LIST_ENTRY JobSetLinks;
    ULONG MemberLevel;
    ULONG JobFlags;
};

typedef struct _EPROCESS {
    struct _KPROCESS Pcb;
    struct _EX_PUSH_LOCK ProcessLock;
    union _LARGE_INTEGER CreateTime;
    union _LARGE_INTEGER ExitTime;
    struct _EX_RUNDOWN_REF RundownProtect;
    PVOID UniqueProcessId;
    struct _LIST_ENTRY ActiveProcessLinks;
    ULONG QuotaUsage[3];
    ULONG QuotaPeak[3];
    ULONG CommitCharge;
    ULONG PeakVirtualSize;
    ULONG VirtualSize;
    struct _LIST_ENTRY SessionProcessLinks;
    PVOID DebugPort;
    PVOID ExceptionPort;
    struct _HANDLE_TABLE *ObjectTable;
    struct _EX_FAST_REF Token;
    ULONG WorkingSetPage;
    struct _KGUARDED_MUTEX AddressCreationLock;
    ULONG HyperSpaceLock;
    struct _ETHREAD *ForkInProgress;
    ULONG HardwareTrigger;
    struct _MM_AVL_TABLE *PhysicalVadRoot;
    PVOID CloneRoot;
    ULONG NumberOfPrivatePages;
    ULONG NumberOfLockedPages;
    PVOID Win32Process;
    struct _EJOB *Job;
    PVOID SectionObject;
    PVOID SectionBaseAddress;
    struct _EPROCESS_QUOTA_BLOCK *QuotaBlock;
    struct _PAGEFAULT_HISTORY *WorkingSetWatch;
    PVOID Win32WindowStation;
    PVOID InheritedFromUniqueProcessId;
    PVOID LdtInformation;
    PVOID VadFreeHint;
    PVOID VdmObjects;
    PVOID DeviceMap;
    PVOID Spare0[3];
    struct _HARDWARE_PTE_X86 PageDirectoryPte;
    ULONG64 Filler;
    PVOID Session;
    UCHAR ImageFileName[16];
    struct _LIST_ENTRY JobLinks;
    PVOID LockedPagesList;
    struct _LIST_ENTRY ThreadListHead;
    PVOID SecurityPort;
    PVOID PaeTop;
    ULONG ActiveThreads;
    ULONG GrantedAccess;
    ULONG DefaultHardErrorProcessing;
    LONG LastThreadExitStatus;
    struct _PEB *Peb;
    struct _EX_FAST_REF PrefetchTrace;
    union _LARGE_INTEGER ReadOperationCount;
    union _LARGE_INTEGER WriteOperationCount;
    union _LARGE_INTEGER OtherOperationCount;
    union _LARGE_INTEGER ReadTransferCount;
    union _LARGE_INTEGER WriteTransferCount;
    union _LARGE_INTEGER OtherTransferCount;
    ULONG CommitChargeLimit;
    ULONG CommitChargePeak;
    PVOID AweInfo;
    struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;
    struct _MMSUPPORT Vm;
    struct _LIST_ENTRY MmProcessLinks;
    ULONG ModifiedPageCount;
    ULONG JobStatus;
    ULONG Flags;
    ULONG CreateReported : 1;
    ULONG NoDebugInherit : 1;
    ULONG ProcessExiting : 1;
    ULONG ProcessDelete : 1;
    ULONG Wow64SplitPages : 1;
    ULONG VmDeleted : 1;
    ULONG OutswapEnabled : 1;
    ULONG Outswapped : 1;
    ULONG ForkFailed : 1;
    ULONG Wow64VaSpace4Gb : 1;
    ULONG AddressSpaceInitialized : 2;
    ULONG SetTimerResolution : 1;
    ULONG BreakOnTermination : 1;
    ULONG SessionCreationUnderway : 1;
    ULONG WriteWatch : 1;
    ULONG ProcessInSession : 1;
    ULONG OverrideAddressSpace : 1;
    ULONG HasAddressSpace : 1;
    ULONG LaunchPrefetched : 1;
    ULONG InjectInpageErrors : 1;
    ULONG VmTopDown : 1;
    ULONG ImageNotifyDone : 1;
    ULONG PdeUpdateNeeded : 1;
    ULONG VdmAllowed : 1;
    ULONG SmapAllowed : 1;
    ULONG CreateFailed : 1;
    ULONG DefaultIoPriority : 3;
    ULONG Spare1 : 1;
    ULONG Spare2 : 1;
    LONG ExitStatus;
    USHORT NextPageColor;
    UCHAR SubSystemMinorVersion;
    UCHAR SubSystemMajorVersion;
    USHORT SubSystemVersion;
    UCHAR PriorityClass;
    struct _MM_AVL_TABLE VadRoot;
    ULONG Cookie;
};

typedef struct _EPROCESS_QUOTA_BLOCK {
    struct _EPROCESS_QUOTA_ENTRY QuotaEntry[3];
    struct _LIST_ENTRY QuotaList;
    ULONG ReferenceCount;
    ULONG ProcessCount;
};

typedef struct _EPROCESS_QUOTA_ENTRY {
    ULONG Usage;
    ULONG Limit;
    ULONG Peak;
    ULONG Return;
};

typedef struct _ERESOURCE {
    struct _LIST_ENTRY SystemResourcesList;
    struct _OWNER_ENTRY *OwnerTable;
    SHORT ActiveCount;
    USHORT Flag;
    struct _KSEMAPHORE *SharedWaiters;
    struct _KEVENT *ExclusiveWaiters;
    struct _OWNER_ENTRY OwnerThreads[2];
    ULONG ContentionCount;
    USHORT NumberOfSharedWaiters;
    USHORT NumberOfExclusiveWaiters;
    PVOID Address;
    ULONG CreatorBackTraceIndex;
    ULONG SpinLock;
};

typedef struct _ETHREAD {
    struct _KTHREAD Tcb;
    union _LARGE_INTEGER CreateTime;
    union _LARGE_INTEGER ExitTime;
    struct _LIST_ENTRY LpcReplyChain;
    struct _LIST_ENTRY KeyedWaitChain;
    LONG ExitStatus;
    PVOID OfsChain;
    struct _LIST_ENTRY PostBlockList;
    struct _TERMINATION_PORT *TerminationPort;
    struct _ETHREAD *ReaperLink;
    PVOID KeyedWaitValue;
    ULONG ActiveTimerListLock;
    struct _LIST_ENTRY ActiveTimerListHead;
    struct _CLIENT_ID Cid;
    struct _KSEMAPHORE LpcReplySemaphore;
    struct _KSEMAPHORE KeyedWaitSemaphore;
    PVOID LpcReplyMessage;
    PVOID LpcWaitingOnPort;
    struct _PS_IMPERSONATION_INFORMATION *ImpersonationInfo;
    struct _LIST_ENTRY IrpList;
    ULONG TopLevelIrp;
    struct _DEVICE_OBJECT *DeviceToVerify;
    struct _EPROCESS *ThreadsProcess;
    PVOID StartAddress;
    PVOID Win32StartAddress;
    ULONG LpcReceivedMessageId;
    struct _LIST_ENTRY ThreadListEntry;
    struct _EX_RUNDOWN_REF RundownProtect;
    struct _EX_PUSH_LOCK ThreadLock;
    ULONG LpcReplyMessageId;
    ULONG ReadClusterSize;
    ULONG GrantedAccess;
    ULONG CrossThreadFlags;
    ULONG Terminated : 1;
    ULONG DeadThread : 1;
    ULONG HideFromDebugger : 1;
    ULONG ActiveImpersonationInfo : 1;
    ULONG SystemThread : 1;
    ULONG HardErrorsAreDisabled : 1;
    ULONG BreakOnTermination : 1;
    ULONG SkipCreationMsg : 1;
    ULONG SkipTerminationMsg : 1;
    ULONG SameThreadPassiveFlags;
    ULONG ActiveExWorker : 1;
    ULONG ExWorkerCanWaitUser : 1;
    ULONG MemoryMaker : 1;
    ULONG KeyedEventInUse : 1;
    ULONG SameThreadApcFlags;
    UCHAR LpcReceivedMsgIdValid : 1;
    UCHAR LpcExitThreadCalled : 1;
    UCHAR AddressSpaceOwner : 1;
    UCHAR OwnsProcessWorkingSetExclusive : 1;
    UCHAR OwnsProcessWorkingSetShared : 1;
    UCHAR OwnsSystemWorkingSetExclusive : 1;
    UCHAR OwnsSystemWorkingSetShared : 1;
    UCHAR OwnsSessionWorkingSetExclusive : 1;
    UCHAR OwnsSessionWorkingSetShared : 1;
    UCHAR ApcNeeded : 1;
    UCHAR ForwardClusterOnly;
    UCHAR DisablePageFaultClustering;
    UCHAR ActiveFaultCount;
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

typedef struct _EX_FAST_REF {
    PVOID Object;
    ULONG RefCnt : 3;
    ULONG Value;
};

typedef struct _EX_PUSH_LOCK {
    ULONG Locked : 1;
    ULONG Waiting : 1;
    ULONG Waking : 1;
    ULONG MultipleShared : 1;
    ULONG Shared : 28;
    ULONG Value;
    PVOID Ptr;
};

typedef struct _EX_PUSH_LOCK_CACHE_AWARE {
    struct _EX_PUSH_LOCK *Locks[32];
};

typedef struct _EX_PUSH_LOCK_WAIT_BLOCK {
    struct _KGATE WakeGate;
    struct _KEVENT WakeEvent;
    struct _EX_PUSH_LOCK_WAIT_BLOCK *Next;
    struct _EX_PUSH_LOCK_WAIT_BLOCK *Last;
    struct _EX_PUSH_LOCK_WAIT_BLOCK *Previous;
    LONG ShareCount;
    LONG Flags;
};

typedef struct _EX_RUNDOWN_REF {
    ULONG Count;
    PVOID Ptr;
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
    ULONG NextEntryOffset;
    ULONG SidLength;
    struct _SID Sid;
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

typedef struct _FNSAVE_FORMAT {
    ULONG ControlWord;
    ULONG StatusWord;
    ULONG TagWord;
    ULONG ErrorOffset;
    ULONG ErrorSelector;
    ULONG DataOffset;
    ULONG DataSelector;
    UCHAR RegisterArea[80];
};

typedef struct _FS_FILTER_CALLBACKS {
    ULONG SizeOfFsFilterCallbacks;
    ULONG Reserved;
    PLONG PreAcquireForSectionSynchronization;
    PVOID PostAcquireForSectionSynchronization;
    PLONG PreReleaseForSectionSynchronization;
    PVOID PostReleaseForSectionSynchronization;
    PLONG PreAcquireForCcFlush;
    PVOID PostAcquireForCcFlush;
    PLONG PreReleaseForCcFlush;
    PVOID PostReleaseForCcFlush;
    PLONG PreAcquireForModifiedPageWriter;
    PVOID PostAcquireForModifiedPageWriter;
    PLONG PreReleaseForModifiedPageWriter;
    PVOID PostReleaseForModifiedPageWriter;
};

typedef struct _FS_FILTER_CALLBACK_DATA {
    ULONG SizeOfFsFilterCallbackData;
    UCHAR Operation;
    UCHAR Reserved;
    struct _DEVICE_OBJECT *DeviceObject;
    struct _FILE_OBJECT *FileObject;
    union _FS_FILTER_PARAMETERS Parameters;
};

typedef struct _FXSAVE_FORMAT {
    USHORT ControlWord;
    USHORT StatusWord;
    USHORT TagWord;
    USHORT ErrorOpcode;
    ULONG ErrorOffset;
    ULONG ErrorSelector;
    ULONG DataOffset;
    ULONG DataSelector;
    ULONG MXCsr;
    ULONG MXCsrMask;
    UCHAR RegisterArea[128];
    UCHAR Reserved3[128];
    UCHAR Reserved4[224];
    UCHAR Align16Byte[8];
};

typedef struct _FX_SAVE_AREA {
    union {
        struct _FNSAVE_FORMAT FnArea;
        struct _FXSAVE_FORMAT FxArea;
    } U;
    ULONG NpxSavedCpu;
    ULONG Cr0NpxState;
};

typedef struct _GDI_TEB_BATCH {
    ULONG Offset;
    ULONG HDC;
    ULONG Buffer[310];
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

typedef struct _GENERIC_MAPPING {
    ULONG GenericRead;
    ULONG GenericWrite;
    ULONG GenericExecute;
    ULONG GenericAll;
};

typedef struct _GUID {
    ULONG Data1;
    USHORT Data2;
    USHORT Data3;
    UCHAR Data4[8];
};

typedef struct _HANDLE_TABLE {
    ULONG TableCode;
    struct _EPROCESS *QuotaProcess;
    PVOID UniqueProcessId;
    struct _EX_PUSH_LOCK HandleTableLock[4];
    struct _LIST_ENTRY HandleTableList;
    struct _EX_PUSH_LOCK HandleContentionEvent;
    struct _HANDLE_TRACE_DEBUG_INFO *DebugInfo;
    LONG ExtraInfoPages;
    ULONG FirstFree;
    ULONG LastFree;
    ULONG NextHandleNeedingPool;
    LONG HandleCount;
    ULONG Flags;
    UCHAR StrictFIFO : 1;
};

typedef struct _HANDLE_TRACE_DB_ENTRY {
    struct _CLIENT_ID ClientId;
    PVOID Handle;
    ULONG Type;
    PVOID StackTrace[16];
};

typedef struct _HANDLE_TRACE_DEBUG_INFO {
    LONG RefCount;
    ULONG TableSize;
    ULONG BitMaskFlags;
    struct _FAST_MUTEX CloseCompactionLock;
    ULONG CurrentStackIndex;
    struct _HANDLE_TRACE_DB_ENTRY TraceDb[1];
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

typedef struct _HEAP {
    struct _HEAP_ENTRY Entry;
    ULONG Signature;
    ULONG Flags;
    ULONG ForceFlags;
    ULONG VirtualMemoryThreshold;
    ULONG SegmentReserve;
    ULONG SegmentCommit;
    ULONG DeCommitFreeBlockThreshold;
    ULONG DeCommitTotalFreeThreshold;
    ULONG TotalFreeSize;
    ULONG MaximumAllocationSize;
    USHORT ProcessHeapsListIndex;
    USHORT HeaderValidateLength;
    PVOID HeaderValidateCopy;
    USHORT NextAvailableTagIndex;
    USHORT MaximumTagIndex;
    struct _HEAP_TAG_ENTRY *TagEntries;
    struct _HEAP_UCR_SEGMENT *UCRSegments;
    struct _HEAP_UNCOMMMTTED_RANGE *UnusedUnCommittedRanges;
    ULONG AlignRound;
    ULONG AlignMask;
    struct _LIST_ENTRY VirtualAllocdBlocks;
    struct _HEAP_SEGMENT *Segments[64];
    union {
        ULONG FreeListsInUseUlong[4];
        UCHAR FreeListsInUseBytes[16];
    } u;
    union {
        USHORT FreeListsInUseTerminate;
        USHORT DecommitCount;
    } u2;
    USHORT AllocatorBackTraceIndex;
    ULONG NonDedicatedListLength;
    PVOID LargeBlocksIndex;
    struct _HEAP_PSEUDO_TAG_ENTRY *PseudoTagEntries;
    struct _LIST_ENTRY FreeLists[128];
    struct _HEAP_LOCK *LockVariable;
    PLONG CommitRoutine;
    PVOID FrontEndHeap;
    USHORT FrontHeapLockCount;
    UCHAR FrontEndHeapType;
    UCHAR LastSegmentIndex;
};

typedef struct _HEAP_ENTRY {
    USHORT Size;
    USHORT PreviousSize;
    PVOID SubSegmentCode;
    UCHAR SmallTagIndex;
    UCHAR Flags;
    UCHAR UnusedBytes;
    UCHAR SegmentIndex;
};

typedef struct _HEAP_LOCK {
    union {
        struct _RTL_CRITICAL_SECTION CriticalSection;
        struct _ERESOURCE Resource;
    } Lock;
};

typedef struct _HEAP_PSEUDO_TAG_ENTRY {
    ULONG Allocs;
    ULONG Frees;
    ULONG Size;
};

typedef struct _HEAP_SEGMENT {
    struct _HEAP_ENTRY Entry;
    ULONG Signature;
    ULONG Flags;
    struct _HEAP *Heap;
    ULONG LargestUnCommittedRange;
    PVOID BaseAddress;
    ULONG NumberOfPages;
    struct _HEAP_ENTRY *FirstEntry;
    struct _HEAP_ENTRY *LastValidEntry;
    ULONG NumberOfUnCommittedPages;
    ULONG NumberOfUnCommittedRanges;
    struct _HEAP_UNCOMMMTTED_RANGE *UnCommittedRanges;
    USHORT AllocatorBackTraceIndex;
    USHORT Reserved;
    struct _HEAP_ENTRY *LastEntryInSegment;
};

typedef struct _HEAP_TAG_ENTRY {
    ULONG Allocs;
    ULONG Frees;
    ULONG Size;
    USHORT TagIndex;
    USHORT CreatorBackTraceIndex;
    USHORT TagName[24];
};

typedef struct _HEAP_UCR_SEGMENT {
    struct _HEAP_UCR_SEGMENT *Next;
    ULONG ReservedSize;
    ULONG CommittedSize;
    ULONG filler;
};

typedef struct _HEAP_UNCOMMMTTED_RANGE {
    struct _HEAP_UNCOMMMTTED_RANGE *Next;
    ULONG Address;
    ULONG Size;
    ULONG filler;
};

typedef struct _IMAGE_DATA_DIRECTORY {
    ULONG VirtualAddress;
    ULONG Size;
};

typedef struct _IMAGE_FILE_HEADER {
    USHORT Machine;
    USHORT NumberOfSections;
    ULONG TimeDateStamp;
    ULONG PointerToSymbolTable;
    ULONG NumberOfSymbols;
    USHORT SizeOfOptionalHeader;
    USHORT Characteristics;
};

typedef struct _IMAGE_NT_HEADERS {
    ULONG Signature;
    struct _IMAGE_FILE_HEADER FileHeader;
    struct _IMAGE_OPTIONAL_HEADER OptionalHeader;
};

typedef struct _IMAGE_OPTIONAL_HEADER {
    USHORT Magic;
    UCHAR MajorLinkerVersion;
    UCHAR MinorLinkerVersion;
    ULONG SizeOfCode;
    ULONG SizeOfInitializedData;
    ULONG SizeOfUninitializedData;
    ULONG AddressOfEntryPoint;
    ULONG BaseOfCode;
    ULONG BaseOfData;
    ULONG ImageBase;
    ULONG SectionAlignment;
    ULONG FileAlignment;
    USHORT MajorOperatingSystemVersion;
    USHORT MinorOperatingSystemVersion;
    USHORT MajorImageVersion;
    USHORT MinorImageVersion;
    USHORT MajorSubsystemVersion;
    USHORT MinorSubsystemVersion;
    ULONG Win32VersionValue;
    ULONG SizeOfImage;
    ULONG SizeOfHeaders;
    ULONG CheckSum;
    USHORT Subsystem;
    USHORT DllCharacteristics;
    ULONG SizeOfStackReserve;
    ULONG SizeOfStackCommit;
    ULONG SizeOfHeapReserve;
    ULONG SizeOfHeapCommit;
    ULONG LoaderFlags;
    ULONG NumberOfRvaAndSizes;
    struct _IMAGE_DATA_DIRECTORY DataDirectory[16];
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

typedef struct _IO_CLIENT_EXTENSION {
    struct _IO_CLIENT_EXTENSION *NextExtension;
    PVOID ClientIdentificationAddress;
};

typedef struct _IO_COMPLETION_CONTEXT {
    PVOID Port;
    PVOID Key;
};

typedef struct _IO_COUNTERS {
    ULONG64 ReadOperationCount;
    ULONG64 WriteOperationCount;
    ULONG64 OtherOperationCount;
    ULONG64 ReadTransferCount;
    ULONG64 WriteTransferCount;
    ULONG64 OtherTransferCount;
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
    SHORT Type;
    SHORT TimerFlag;
    struct _LIST_ENTRY TimerList;
    PVOID TimerRoutine;
    PVOID Context;
    struct _DEVICE_OBJECT *DeviceObject;
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

typedef struct _KAPC_STATE {
    struct _LIST_ENTRY ApcListHead[2];
    struct _KPROCESS *Process;
    UCHAR KernelApcInProgress;
    UCHAR KernelApcPending;
    UCHAR UserApcPending;
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
    UCHAR Number;
    UCHAR Expedite;
    struct _LIST_ENTRY DpcListEntry;
    PVOID DeferredRoutine;
    PVOID DeferredContext;
    PVOID SystemArgument1;
    PVOID SystemArgument2;
    PVOID DpcData;
};

typedef struct _KDPC_DATA {
    struct _LIST_ENTRY DpcListHead;
    ULONG DpcLock;
    ULONG DpcQueueDepth;
    ULONG DpcCount;
};

typedef struct _KEVENT {
    struct _DISPATCHER_HEADER Header;
};

typedef struct _KEXECUTE_OPTIONS {
    UCHAR ExecuteDisable : 1;
    UCHAR ExecuteEnable : 1;
    UCHAR DisableThunkEmulation : 1;
    UCHAR Permanent : 1;
    UCHAR ExecuteDispatchEnable : 1;
    UCHAR ImageDispatchEnable : 1;
    UCHAR Spare : 2;
};

typedef struct _KGATE {
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

typedef struct _KGUARDED_MUTEX {
    LONG Count;
    struct _KTHREAD *Owner;
    ULONG Contention;
    struct _KGATE Gate;
    SHORT KernelApcDisable;
    SHORT SpecialApcDisable;
    ULONG CombinedApcDisable;
};

typedef struct _KIDTENTRY {
    USHORT Offset;
    USHORT Selector;
    USHORT Access;
    USHORT ExtendedOffset;
};

typedef struct _KNODE {
    union _SLIST_HEADER DeadStackList;
    union _SLIST_HEADER PfnDereferenceSListHead;
    ULONG ProcessorMask;
    UCHAR Color;
    UCHAR Seed;
    UCHAR NodeNumber;
    struct _flags Flags;
    ULONG MmShiftedColor;
    ULONG FreeCount[2];
    struct _SINGLE_LIST_ENTRY *PfnDeferredList;
};

typedef struct _KPCR {
    struct _NT_TIB NtTib;
    struct _EXCEPTION_REGISTRATION_RECORD *Used_ExceptionList;
    PVOID Used_StackBase;
    PVOID PerfGlobalGroupMask;
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
    ULONG InterruptMode;
    UCHAR Spare1;
    ULONG KernelReserved2[17];
    struct _KPRCB PrcbData;
};

typedef struct _KPRCB {
    USHORT MinorVersion;
    USHORT MajorVersion;
    struct _KTHREAD *CurrentThread;
    struct _KTHREAD *NextThread;
    struct _KTHREAD *IdleThread;
    CHAR Number;
    CHAR Reserved;
    USHORT BuildType;
    ULONG SetMember;
    CHAR CpuType;
    CHAR CpuID;
    USHORT CpuStep;
    struct _KPROCESSOR_STATE ProcessorState;
    ULONG KernelReserved[16];
    ULONG HalReserved[16];
    UCHAR PrcbPad0[92];
    struct _KSPIN_LOCK_QUEUE LockQueue[33];
    struct _KTHREAD *NpxThread;
    ULONG InterruptCount;
    ULONG KernelTime;
    ULONG UserTime;
    ULONG DpcTime;
    ULONG DebugDpcTime;
    ULONG InterruptTime;
    ULONG AdjustDpcThreshold;
    ULONG PageColor;
    UCHAR SkipTick;
    UCHAR DebuggerSavedIRQL;
    UCHAR NodeColor;
    UCHAR Spare1;
    ULONG NodeShiftedColor;
    struct _KNODE *ParentNode;
    ULONG MultiThreadProcessorSet;
    struct _KPRCB *MultiThreadSetMaster;
    ULONG SecondaryColorMask;
    LONG Sleeping;
    ULONG CcFastReadNoWait;
    ULONG CcFastReadWait;
    ULONG CcFastReadNotPossible;
    ULONG CcCopyReadNoWait;
    ULONG CcCopyReadWait;
    ULONG CcCopyReadNoWaitMiss;
    ULONG KeAlignmentFixupCount;
    ULONG SpareCounter0;
    ULONG KeDcacheFlushCount;
    ULONG KeExceptionDispatchCount;
    ULONG KeFirstLevelTbFills;
    ULONG KeFloatingEmulationCount;
    ULONG KeIcacheFlushCount;
    ULONG KeSecondLevelTbFills;
    ULONG KeSystemCalls;
    LONG IoReadOperationCount;
    LONG IoWriteOperationCount;
    LONG IoOtherOperationCount;
    union _LARGE_INTEGER IoReadTransferCount;
    union _LARGE_INTEGER IoWriteTransferCount;
    union _LARGE_INTEGER IoOtherTransferCount;
    ULONG SpareCounter1[8];
    struct _PP_LOOKASIDE_LIST PPLookasideList[16];
    struct _PP_LOOKASIDE_LIST PPNPagedLookasideList[32];
    struct _PP_LOOKASIDE_LIST PPPagedLookasideList[32];
    ULONG PacketBarrier;
    ULONG ReverseStall;
    PVOID IpiFrame;
    UCHAR PrcbPad2[52];
    PVOID CurrentPacket[3];
    ULONG TargetSet;
    PVOID WorkerRoutine;
    ULONG IpiFrozen;
    UCHAR PrcbPad3[40];
    ULONG RequestSummary;
    struct _KPRCB *SignalDone;
    UCHAR PrcbPad4[56];
    struct _KDPC_DATA DpcData[2];
    PVOID DpcStack;
    ULONG MaximumDpcQueueDepth;
    ULONG DpcRequestRate;
    ULONG MinimumDpcRate;
    UCHAR DpcInterruptRequested;
    UCHAR DpcThreadRequested;
    UCHAR DpcRoutineActive;
    UCHAR DpcThreadActive;
    ULONG PrcbLock;
    ULONG DpcLastCount;
    ULONG TimerHand;
    ULONG TimerRequest;
    PVOID DpcThread;
    struct _KEVENT DpcEvent;
    UCHAR ThreadDpcEnable;
    UCHAR QuantumEnd;
    UCHAR PrcbPad50;
    UCHAR IdleSchedule;
    LONG DpcSetEventRequest;
    UCHAR PrcbPad5[18];
    LONG TickOffset;
    struct _KDPC CallDpc;
    ULONG PrcbPad7[8];
    struct _LIST_ENTRY WaitListHead;
    ULONG ReadySummary;
    ULONG QueueIndex;
    struct _LIST_ENTRY DispatcherReadyListHead[32];
    struct _SINGLE_LIST_ENTRY DeferredReadyListHead;
    ULONG PrcbPad72[11];
    PVOID ChainedInterruptList;
    LONG LookasideIrpFloat;
    LONG MmPageFaultCount;
    LONG MmCopyOnWriteCount;
    LONG MmTransitionCount;
    LONG MmCacheTransitionCount;
    LONG MmDemandZeroCount;
    LONG MmPageReadCount;
    LONG MmPageReadIoCount;
    LONG MmCacheReadCount;
    LONG MmCacheIoCount;
    LONG MmDirtyPagesWriteCount;
    LONG MmDirtyWriteIoCount;
    LONG MmMappedPagesWriteCount;
    LONG MmMappedWriteIoCount;
    ULONG SpareFields0[1];
    UCHAR VendorString[13];
    UCHAR InitialApicId;
    UCHAR LogicalProcessorsPerPhysicalProcessor;
    ULONG MHz;
    ULONG FeatureBits;
    union _LARGE_INTEGER UpdateSignature;
    ULONG64 IsrTime;
    ULONG64 SpareField1;
    struct _FX_SAVE_AREA NpxSaveArea;
    struct _PROCESSOR_POWER_STATE PowerState;
};

typedef struct _KPROCESS {
    struct _DISPATCHER_HEADER Header;
    struct _LIST_ENTRY ProfileListHead;
    ULONG DirectoryTableBase[2];
    struct _KGDTENTRY LdtDescriptor;
    struct _KIDTENTRY Int21Descriptor;
    USHORT IopmOffset;
    UCHAR Iopl;
    UCHAR Unused;
    ULONG ActiveProcessors;
    ULONG KernelTime;
    ULONG UserTime;
    struct _LIST_ENTRY ReadyListHead;
    struct _SINGLE_LIST_ENTRY SwapListEntry;
    PVOID VdmTrapcHandler;
    struct _LIST_ENTRY ThreadListHead;
    ULONG ProcessLock;
    ULONG Affinity;
    LONG AutoAlignment : 1;
    LONG DisableBoost : 1;
    LONG DisableQuantum : 1;
    LONG ReservedFlags : 29;
    LONG ProcessFlags;
    CHAR BasePriority;
    CHAR QuantumReset;
    UCHAR State;
    UCHAR ThreadSeed;
    UCHAR PowerState;
    UCHAR IdealNode;
    UCHAR Visited;
    struct _KEXECUTE_OPTIONS Flags;
    UCHAR ExecuteOptions;
    ULONG StackCount;
    struct _LIST_ENTRY ProcessListEntry;
};

typedef struct _KPROCESSOR_STATE {
    struct _CONTEXT ContextFrame;
    struct _KSPECIAL_REGISTERS SpecialRegisters;
};

typedef struct _KQUEUE {
    struct _DISPATCHER_HEADER Header;
    struct _LIST_ENTRY EntryListHead;
    ULONG CurrentCount;
    ULONG MaximumCount;
    struct _LIST_ENTRY ThreadListHead;
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
    struct _DISPATCHER_HEADER Header;
    struct _LIST_ENTRY MutantListHead;
    PVOID InitialStack;
    PVOID StackLimit;
    PVOID KernelStack;
    ULONG ThreadLock;
    struct _KAPC_STATE ApcState;
    UCHAR ApcStateFill[23];
    UCHAR ApcQueueable;
    UCHAR NextProcessor;
    UCHAR DeferredProcessor;
    UCHAR AdjustReason;
    CHAR AdjustIncrement;
    ULONG ApcQueueLock;
    ULONG ContextSwitches;
    UCHAR State;
    UCHAR NpxState;
    UCHAR WaitIrql;
    CHAR WaitMode;
    LONG WaitStatus;
    struct _KWAIT_BLOCK *WaitBlockList;
    struct _KGATE *GateObject;
    UCHAR Alertable;
    UCHAR WaitNext;
    UCHAR WaitReason;
    CHAR Priority;
    UCHAR EnableStackSwap;
    UCHAR SwapBusy;
    UCHAR Alerted[2];
    struct _LIST_ENTRY WaitListEntry;
    struct _SINGLE_LIST_ENTRY SwapListEntry;
    struct _KQUEUE *Queue;
    ULONG WaitTime;
    SHORT KernelApcDisable;
    SHORT SpecialApcDisable;
    ULONG CombinedApcDisable;
    PVOID Teb;
    struct _KTIMER Timer;
    UCHAR TimerFill[40];
    LONG AutoAlignment : 1;
    LONG DisableBoost : 1;
    LONG ReservedFlags : 30;
    LONG ThreadFlags;
    struct _KWAIT_BLOCK WaitBlock[4];
    UCHAR WaitBlockFill0[23];
    UCHAR SystemAffinityActive;
    UCHAR WaitBlockFill1[47];
    CHAR PreviousMode;
    UCHAR WaitBlockFill2[71];
    UCHAR ResourceIndex;
    UCHAR WaitBlockFill3[95];
    UCHAR LargeStack;
    struct _LIST_ENTRY QueueListEntry;
    struct _KTRAP_FRAME *TrapFrame;
    PVOID CallbackStack;
    PVOID ServiceTable;
    UCHAR ApcStateIndex;
    UCHAR IdealProcessor;
    UCHAR Preempted;
    UCHAR ProcessReadyQueue;
    UCHAR KernelStackResident;
    CHAR BasePriority;
    CHAR PriorityDecrement;
    CHAR Saturation;
    ULONG UserAffinity;
    struct _KPROCESS *Process;
    ULONG Affinity;
    struct _KAPC_STATE *ApcStatePointer[2];
    struct _KAPC_STATE SavedApcState;
    UCHAR SavedApcStateFill[23];
    CHAR FreezeCount;
    CHAR SuspendCount;
    UCHAR UserIdealProcessor;
    UCHAR CalloutActive;
    UCHAR Iopl;
    PVOID Win32Thread;
    PVOID StackBase;
    struct _KAPC SuspendApc;
    UCHAR SuspendApcFill0[1];
    CHAR Quantum;
    UCHAR SuspendApcFill1[3];
    UCHAR QuantumReset;
    UCHAR SuspendApcFill2[4];
    ULONG KernelTime;
    UCHAR SuspendApcFill3[36];
    PVOID TlsArray;
    UCHAR SuspendApcFill4[40];
    PVOID LegoData;
    UCHAR SuspendApcFill5[47];
    UCHAR PowerState;
    ULONG UserTime;
    struct _KSEMAPHORE SuspendSemaphore;
    UCHAR SuspendSemaphorefill[20];
    ULONG SListFaultCount;
    struct _LIST_ENTRY ThreadListEntry;
    PVOID SListFaultAddress;
};

typedef struct _KTIMER {
    struct _DISPATCHER_HEADER Header;
    union _ULARGE_INTEGER DueTime;
    struct _LIST_ENTRY TimerListEntry;
    struct _KDPC *Dpc;
    LONG Period;
};

typedef struct _KTRAP_FRAME {
    ULONG DbgEbp;
    ULONG DbgEip;
    ULONG DbgArgMark;
    ULONG DbgArgPointer;
    ULONG TempSegCs;
    ULONG TempEsp;
    ULONG Dr0;
    ULONG Dr1;
    ULONG Dr2;
    ULONG Dr3;
    ULONG Dr6;
    ULONG Dr7;
    ULONG SegGs;
    ULONG SegEs;
    ULONG SegDs;
    ULONG Edx;
    ULONG Ecx;
    ULONG Eax;
    ULONG PreviousPreviousMode;
    struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList;
    ULONG SegFs;
    ULONG Edi;
    ULONG Esi;
    ULONG Ebx;
    ULONG Ebp;
    ULONG ErrCode;
    ULONG Eip;
    ULONG SegCs;
    ULONG EFlags;
    ULONG HardwareEsp;
    ULONG HardwareSegSs;
    ULONG V86Es;
    ULONG V86Ds;
    ULONG V86Fs;
    ULONG V86Gs;
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
    USHORT NtSystemRoot[260];
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
    ULONG TraceLogging;
    ULONG64 TestRetInstruction;
    ULONG SystemCall;
    ULONG SystemCallReturn;
    ULONG64 SystemCallPad[3];
    struct _KSYSTEM_TIME TickCount;
    ULONG64 TickCountQuad;
    ULONG Cookie;
    ULONG Wow64SharedInformation[16];
};

typedef struct _KWAIT_BLOCK {
    struct _LIST_ENTRY WaitListEntry;
    struct _KTHREAD *Thread;
    PVOID Object;
    struct _KWAIT_BLOCK *NextWaitBlock;
    USHORT WaitKey;
    UCHAR WaitType;
    UCHAR SpareByte;
};

typedef struct _KiIoAccessMap {
    UCHAR DirectionMap[32];
    UCHAR IoMap[8196];
};

typedef struct _LDR_DATA_TABLE_ENTRY {
    struct _LIST_ENTRY InLoadOrderLinks;
    struct _LIST_ENTRY InMemoryOrderLinks;
    struct _LIST_ENTRY InInitializationOrderLinks;
    PVOID DllBase;
    PVOID EntryPoint;
    ULONG SizeOfImage;
    struct _UNICODE_STRING FullDllName;
    struct _UNICODE_STRING BaseDllName;
    ULONG Flags;
    USHORT LoadCount;
    USHORT TlsIndex;
    struct _LIST_ENTRY HashLinks;
    PVOID SectionPointer;
    ULONG CheckSum;
    ULONG TimeDateStamp;
    PVOID LoadedImports;
    struct _ACTIVATION_CONTEXT *EntryPointActivationContext;
    PVOID PatchInformation;
};

typedef struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
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

typedef struct _MMADDRESS_NODE {
    union {
        LONG Balance : 2;
        struct _MMADDRESS_NODE *Parent;
    } u1;
    struct _MMADDRESS_NODE *LeftChild;
    struct _MMADDRESS_NODE *RightChild;
    ULONG StartingVpn;
    ULONG EndingVpn;
};

typedef struct _MMSUPPORT {
    struct _LIST_ENTRY WorkingSetExpansionLinks;
    union _LARGE_INTEGER LastTrimTime;
    struct _MMSUPPORT_FLAGS Flags;
    ULONG PageFaultCount;
    ULONG PeakWorkingSetSize;
    ULONG GrowthSinceLastEstimate;
    ULONG MinimumWorkingSetSize;
    ULONG MaximumWorkingSetSize;
    struct _MMWSL *VmWorkingSetList;
    ULONG Claim;
    ULONG NextEstimationSlot;
    ULONG NextAgingSlot;
    ULONG EstimatedAvailable;
    ULONG WorkingSetSize;
    struct _EX_PUSH_LOCK WorkingSetMutex;
};

typedef struct _MMSUPPORT_FLAGS {
    UCHAR SessionSpace : 1;
    UCHAR BeingTrimmed : 1;
    UCHAR SessionLeader : 1;
    UCHAR TrimHard : 1;
    UCHAR MaximumWorkingSetHard : 1;
    UCHAR ForceTrim : 1;
    UCHAR MinimumWorkingSetHard : 1;
    UCHAR Available0 : 1;
    UCHAR MemoryPriority : 8;
    USHORT GrowWsleHash : 1;
    USHORT AcquiredUnsafe : 1;
    USHORT Available : 14;
};

typedef struct _MMWSL {
};

typedef struct _MM_AVL_TABLE {
    struct _MMADDRESS_NODE BalancedRoot;
    ULONG DepthOfTree : 5;
    ULONG Unused : 3;
    ULONG NumberGenericTableElements : 24;
    PVOID NodeHint;
    PVOID NodeFreeHint;
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

typedef struct _OBJECT_CREATE_INFORMATION {
    ULONG Attributes;
    PVOID RootDirectory;
    PVOID ParseContext;
    CHAR ProbeMode;
    ULONG PagedPoolCharge;
    ULONG NonPagedPoolCharge;
    ULONG SecurityDescriptorCharge;
    PVOID SecurityDescriptor;
    struct _SECURITY_QUALITY_OF_SERVICE *SecurityQos;
    struct _SECURITY_QUALITY_OF_SERVICE SecurityQualityOfService;
};

typedef struct _OBJECT_DIRECTORY {
    struct _OBJECT_DIRECTORY_ENTRY *HashBuckets[37];
    struct _EX_PUSH_LOCK Lock;
    struct _DEVICE_MAP *DeviceMap;
    ULONG SessionId;
};

typedef struct _OBJECT_DIRECTORY_ENTRY {
    struct _OBJECT_DIRECTORY_ENTRY *ChainLink;
    PVOID Object;
    ULONG HashValue;
};

typedef struct _OBJECT_DUMP_CONTROL {
    PVOID Stream;
    ULONG Detail;
};

typedef struct _OBJECT_HANDLE_COUNT_DATABASE {
    ULONG CountEntries;
    struct _OBJECT_HANDLE_COUNT_ENTRY HandleCountEntries[1];
};

typedef struct _OBJECT_HANDLE_COUNT_ENTRY {
    struct _EPROCESS *Process;
    ULONG HandleCount;
};

typedef struct _OBJECT_HANDLE_INFORMATION {
    ULONG HandleAttributes;
    ULONG GrantedAccess;
};

typedef struct _OBJECT_HEADER {
    LONG PointerCount;
    LONG HandleCount;
    PVOID NextToFree;
    struct _OBJECT_TYPE *Type;
    UCHAR NameInfoOffset;
    UCHAR HandleInfoOffset;
    UCHAR QuotaInfoOffset;
    UCHAR Flags;
    struct _OBJECT_CREATE_INFORMATION *ObjectCreateInfo;
    PVOID QuotaBlockCharged;
    PVOID SecurityDescriptor;
    struct _QUAD Body;
};

typedef struct _OBJECT_HEADER_CREATOR_INFO {
    struct _LIST_ENTRY TypeList;
    PVOID CreatorUniqueProcess;
    USHORT CreatorBackTraceIndex;
    USHORT Reserved;
};

typedef struct _OBJECT_HEADER_HANDLE_INFO {
    struct _OBJECT_HANDLE_COUNT_DATABASE *HandleCountDataBase;
    struct _OBJECT_HANDLE_COUNT_ENTRY SingleEntry;
};

typedef struct _OBJECT_HEADER_NAME_INFO {
    struct _OBJECT_DIRECTORY *Directory;
    struct _UNICODE_STRING Name;
    ULONG QueryReferences;
};

typedef struct _OBJECT_HEADER_QUOTA_INFO {
    ULONG PagedPoolCharge;
    ULONG NonPagedPoolCharge;
    ULONG SecurityDescriptorCharge;
    struct _EPROCESS *ExclusiveProcess;
};

typedef struct _OBJECT_NAME_INFORMATION {
    struct _UNICODE_STRING Name;
};

typedef struct _OBJECT_TYPE {
    struct _ERESOURCE Mutex;
    struct _LIST_ENTRY TypeList;
    struct _UNICODE_STRING Name;
    PVOID DefaultObject;
    ULONG Index;
    ULONG TotalNumberOfObjects;
    ULONG TotalNumberOfHandles;
    ULONG HighWaterNumberOfObjects;
    ULONG HighWaterNumberOfHandles;
    struct _OBJECT_TYPE_INITIALIZER TypeInfo;
    ULONG Key;
    struct _ERESOURCE ObjectLocks[4];
};

typedef struct _OBJECT_TYPE_INITIALIZER {
    USHORT Length;
    UCHAR UseDefaultObject;
    UCHAR CaseInsensitive;
    ULONG InvalidAttributes;
    struct _GENERIC_MAPPING GenericMapping;
    ULONG ValidAccessMask;
    UCHAR SecurityRequired;
    UCHAR MaintainHandleCount;
    UCHAR MaintainTypeList;
    enum _POOL_TYPE PoolType;
    ULONG DefaultPagedPoolCharge;
    ULONG DefaultNonPagedPoolCharge;
    PVOID DumpProcedure;
    PLONG OpenProcedure;
    PVOID CloseProcedure;
    PVOID DeleteProcedure;
    PLONG ParseProcedure;
    PLONG SecurityProcedure;
    PLONG QueryNameProcedure;
    PUCHAR OkayToCloseProcedure;
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

typedef struct _PAGEFAULT_HISTORY {
    ULONG CurrentIndex;
    ULONG MaxIndex;
    ULONG SpinLock;
    PVOID Reserved;
    struct _PROCESS_WS_WATCH_INFORMATION WatchInfo[1];
};

typedef struct _PEB {
    UCHAR InheritedAddressSpace;
    UCHAR ReadImageFileExecOptions;
    UCHAR BeingDebugged;
    UCHAR BitField;
    UCHAR ImageUsesLargePages : 1;
    UCHAR SpareBits : 7;
    PVOID Mutant;
    PVOID ImageBaseAddress;
    struct _PEB_LDR_DATA *Ldr;
    struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters;
    PVOID SubSystemData;
    PVOID ProcessHeap;
    struct _RTL_CRITICAL_SECTION *FastPebLock;
    PVOID AtlThunkSListPtr;
    PVOID SparePtr2;
    ULONG EnvironmentUpdateCount;
    PVOID KernelCallbackTable;
    ULONG SystemReserved[1];
    ULONG SpareUlong;
    struct _PEB_FREE_BLOCK *FreeList;
    ULONG TlsExpansionCounter;
    PVOID TlsBitmap;
    ULONG TlsBitmapBits[2];
    PVOID ReadOnlySharedMemoryBase;
    PVOID ReadOnlySharedMemoryHeap;
    PVOID *ReadOnlyStaticServerData;
    PVOID AnsiCodePageData;
    PVOID OemCodePageData;
    PVOID UnicodeCaseTableData;
    ULONG NumberOfProcessors;
    ULONG NtGlobalFlag;
    union _LARGE_INTEGER CriticalSectionTimeout;
    ULONG HeapSegmentReserve;
    ULONG HeapSegmentCommit;
    ULONG HeapDeCommitTotalFreeThreshold;
    ULONG HeapDeCommitFreeBlockThreshold;
    ULONG NumberOfHeaps;
    ULONG MaximumNumberOfHeaps;
    PVOID *ProcessHeaps;
    PVOID GdiSharedHandleTable;
    PVOID ProcessStarterHelper;
    ULONG GdiDCAttributeList;
    struct _RTL_CRITICAL_SECTION *LoaderLock;
    ULONG OSMajorVersion;
    ULONG OSMinorVersion;
    USHORT OSBuildNumber;
    USHORT OSCSDVersion;
    ULONG OSPlatformId;
    ULONG ImageSubsystem;
    ULONG ImageSubsystemMajorVersion;
    ULONG ImageSubsystemMinorVersion;
    ULONG ImageProcessAffinityMask;
    ULONG GdiHandleBuffer[34];
    PVOID PostProcessInitRoutine;
    PVOID TlsExpansionBitmap;
    ULONG TlsExpansionBitmapBits[32];
    ULONG SessionId;
    union _ULARGE_INTEGER AppCompatFlags;
    union _ULARGE_INTEGER AppCompatFlagsUser;
    PVOID pShimData;
    PVOID AppCompatInfo;
    struct _UNICODE_STRING CSDVersion;
    struct _ACTIVATION_CONTEXT_DATA *ActivationContextData;
    struct _ASSEMBLY_STORAGE_MAP *ProcessAssemblyStorageMap;
    struct _ACTIVATION_CONTEXT_DATA *SystemDefaultActivationContextData;
    struct _ASSEMBLY_STORAGE_MAP *SystemAssemblyStorageMap;
    ULONG MinimumStackCommit;
    PVOID *FlsCallback;
    struct _LIST_ENTRY FlsListHead;
    PVOID FlsBitmap;
    ULONG FlsBitmapBits[4];
    ULONG FlsHighIndex;
};

typedef struct _PEB_FREE_BLOCK {
    struct _PEB_FREE_BLOCK *Next;
    ULONG Size;
};

typedef struct _PEB_LDR_DATA {
    ULONG Length;
    UCHAR Initialized;
    PVOID SsHandle;
    struct _LIST_ENTRY InLoadOrderModuleList;
    struct _LIST_ENTRY InMemoryOrderModuleList;
    struct _LIST_ENTRY InInitializationOrderModuleList;
    PVOID EntryInProgress;
};

typedef struct _PERFINFO_GROUPMASK {
    ULONG Masks[8];
};

typedef struct _POWER_SEQUENCE {
    ULONG SequenceD1;
    ULONG SequenceD2;
    ULONG SequenceD3;
};

typedef struct _PP_LOOKASIDE_LIST {
    struct _GENERAL_LOOKASIDE *P;
    struct _GENERAL_LOOKASIDE *L;
};

typedef struct _PRIVILEGE_SET {
    ULONG PrivilegeCount;
    ULONG Control;
    struct _LUID_AND_ATTRIBUTES Privilege[1];
};

typedef struct _PROCESSOR_POWER_STATE {
    PVOID IdleFunction;
    ULONG Idle0KernelTimeLimit;
    ULONG Idle0LastTime;
    PVOID IdleHandlers;
    PVOID IdleState;
    ULONG IdleHandlersCount;
    ULONG64 LastCheck;
    struct PROCESSOR_IDLE_TIMES IdleTimes;
    ULONG IdleTime1;
    ULONG PromotionCheck;
    ULONG IdleTime2;
    UCHAR CurrentThrottle;
    UCHAR ThermalThrottleLimit;
    UCHAR CurrentThrottleIndex;
    UCHAR ThermalThrottleIndex;
    ULONG LastKernelUserTime;
    ULONG PerfIdleTime;
    ULONG64 DebugDelta;
    ULONG DebugCount;
    ULONG LastSysTime;
    ULONG64 TotalIdleStateTime[3];
    ULONG TotalIdleTransitions[3];
    ULONG64 PreviousC3StateTime;
    UCHAR KneeThrottleIndex;
    UCHAR ThrottleLimitIndex;
    UCHAR PerfStatesCount;
    UCHAR ProcessorMinThrottle;
    UCHAR ProcessorMaxThrottle;
    UCHAR LastBusyPercentage;
    UCHAR LastC3Percentage;
    UCHAR LastAdjustedBusyPercentage;
    ULONG PromotionCount;
    ULONG DemotionCount;
    ULONG ErrorCount;
    ULONG RetryCount;
    ULONG Flags;
    union _LARGE_INTEGER PerfCounterFrequency;
    ULONG PerfTickCount;
    struct _KTIMER PerfTimer;
    struct _KDPC PerfDpc;
    struct PROCESSOR_PERF_STATE *PerfStates;
    PLONG PerfSetThrottle;
    ULONG LastC3KernelUserTime;
    ULONG Spare1[1];
};

typedef struct _PROCESS_WS_WATCH_INFORMATION {
    PVOID FaultingPc;
    PVOID FaultingVa;
};

typedef struct _PS_IMPERSONATION_INFORMATION {
    PVOID Token;
    UCHAR CopyOnOpen;
    UCHAR EffectiveOnly;
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
};

typedef struct _PS_JOB_TOKEN_FILTER {
    ULONG CapturedSidCount;
    struct _SID_AND_ATTRIBUTES *CapturedSids;
    ULONG CapturedSidsLength;
    ULONG CapturedGroupCount;
    struct _SID_AND_ATTRIBUTES *CapturedGroups;
    ULONG CapturedGroupsLength;
    ULONG CapturedPrivilegeCount;
    struct _LUID_AND_ATTRIBUTES *CapturedPrivileges;
    ULONG CapturedPrivilegesLength;
};

typedef struct _QUAD {
    LONG64 UseThisFieldToCopy;
    DOUBLE DoNotUseThisField;
};

typedef struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME {
    struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME *Previous;
    struct _ACTIVATION_CONTEXT *ActivationContext;
    ULONG Flags;
};

typedef struct _RTL_AVL_TABLE {
    struct _RTL_BALANCED_LINKS BalancedRoot;
    PVOID OrderedPointer;
    ULONG WhichOrderedElement;
    ULONG NumberGenericTableElements;
    ULONG DepthOfTree;
    struct _RTL_BALANCED_LINKS *RestartKey;
    ULONG DeleteCount;
    enum _RTL_GENERIC_COMPARE_RESULTS *CompareRoutine;
    PVOID *AllocateRoutine;
    PVOID FreeRoutine;
    PVOID TableContext;
};

typedef struct _RTL_BALANCED_LINKS {
    struct _RTL_BALANCED_LINKS *Parent;
    struct _RTL_BALANCED_LINKS *LeftChild;
    struct _RTL_BALANCED_LINKS *RightChild;
    CHAR Balance;
    UCHAR Reserved[3];
};

typedef struct _RTL_CRITICAL_SECTION {
    struct _RTL_CRITICAL_SECTION_DEBUG *DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    PVOID OwningThread;
    PVOID LockSemaphore;
    ULONG SpinCount;
};

typedef struct _RTL_CRITICAL_SECTION_DEBUG {
    USHORT Type;
    USHORT CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    struct _LIST_ENTRY ProcessLocksList;
    ULONG EntryCount;
    ULONG ContentionCount;
    ULONG Spare[2];
};

typedef struct _RTL_DRIVE_LETTER_CURDIR {
    USHORT Flags;
    USHORT Length;
    ULONG TimeStamp;
    struct _STRING DosPath;
};

typedef struct _RTL_STACK_TRACE_ENTRY {
    struct _RTL_STACK_TRACE_ENTRY *HashChain;
    ULONG TraceCount;
    USHORT Index;
    USHORT Depth;
    PVOID BackTrace[32];
};

typedef struct _RTL_TRACE_BLOCK {
    ULONG Magic;
    ULONG Count;
    ULONG Size;
    ULONG UserCount;
    ULONG UserSize;
    PVOID UserContext;
    struct _RTL_TRACE_BLOCK *Next;
    PVOID *Trace;
};

typedef struct _RTL_TRACE_DATABASE {
    ULONG Magic;
    ULONG Flags;
    ULONG Tag;
    struct _RTL_TRACE_SEGMENT *SegmentList;
    ULONG MaximumSize;
    ULONG CurrentSize;
    PVOID Owner;
    struct _RTL_CRITICAL_SECTION Lock;
    ULONG NoOfBuckets;
    struct _RTL_TRACE_BLOCK **Buckets;
    PULONG HashFunction;
    ULONG NoOfTraces;
    ULONG NoOfHits;
    ULONG HashCounter[16];
};

typedef struct _RTL_TRACE_SEGMENT {
    ULONG Magic;
    struct _RTL_TRACE_DATABASE *Database;
    struct _RTL_TRACE_SEGMENT *NextSegment;
    ULONG TotalSize;
    PCHAR SegmentStart;
    PCHAR SegmentEnd;
    PCHAR SegmentFree;
};

typedef struct _RTL_USER_PROCESS_PARAMETERS {
    ULONG MaximumLength;
    ULONG Length;
    ULONG Flags;
    ULONG DebugFlags;
    PVOID ConsoleHandle;
    ULONG ConsoleFlags;
    PVOID StandardInput;
    PVOID StandardOutput;
    PVOID StandardError;
    struct _CURDIR CurrentDirectory;
    struct _UNICODE_STRING DllPath;
    struct _UNICODE_STRING ImagePathName;
    struct _UNICODE_STRING CommandLine;
    PVOID Environment;
    ULONG StartingX;
    ULONG StartingY;
    ULONG CountX;
    ULONG CountY;
    ULONG CountCharsX;
    ULONG CountCharsY;
    ULONG FillAttribute;
    ULONG WindowFlags;
    ULONG ShowWindowFlags;
    struct _UNICODE_STRING WindowTitle;
    struct _UNICODE_STRING DesktopInfo;
    struct _UNICODE_STRING ShellInfo;
    struct _UNICODE_STRING RuntimeData;
    struct _RTL_DRIVE_LETTER_CURDIR CurrentDirectores[32];
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

typedef struct _SE_AUDIT_PROCESS_CREATION_INFO {
    struct _OBJECT_NAME_INFORMATION *ImageFileName;
};

typedef struct _SID {
    UCHAR Revision;
    UCHAR SubAuthorityCount;
    struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
    ULONG SubAuthority[1];
};

typedef struct _SID_AND_ATTRIBUTES {
    PVOID Sid;
    ULONG Attributes;
};

typedef struct _SID_IDENTIFIER_AUTHORITY {
    UCHAR Value[6];
};

typedef struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY *Next;
};

typedef struct _STACK_TRACE_DATABASE {
    struct _RTL_CRITICAL_SECTION CriticalSection;
    struct _ERESOURCE Resource;
    PVOID Lock;
    PVOID Reserved[3];
    UCHAR PreCommitted;
    UCHAR DumpInProgress;
    PVOID CommitBase;
    PVOID CurrentLowerCommitLimit;
    PVOID CurrentUpperCommitLimit;
    PCHAR NextFreeLowerMemory;
    PCHAR NextFreeUpperMemory;
    ULONG NumberOfEntriesLookedUp;
    ULONG NumberOfEntriesAdded;
    struct _RTL_STACK_TRACE_ENTRY **EntryIndexArray;
    ULONG NumberOfBuckets;
    struct _RTL_STACK_TRACE_ENTRY *Buckets[1];
};

typedef struct _STRING {
    USHORT Length;
    USHORT MaximumLength;
    PCHAR Buffer;
};

typedef struct _TEB {
    struct _NT_TIB NtTib;
    PVOID EnvironmentPointer;
    struct _CLIENT_ID ClientId;
    PVOID ActiveRpcHandle;
    PVOID ThreadLocalStoragePointer;
    struct _PEB *ProcessEnvironmentBlock;
    ULONG LastErrorValue;
    ULONG CountOfOwnedCriticalSections;
    PVOID CsrClientThread;
    PVOID Win32ThreadInfo;
    ULONG User32Reserved[26];
    ULONG UserReserved[5];
    PVOID WOW32Reserved;
    ULONG CurrentLocale;
    ULONG FpSoftwareStatusRegister;
    PVOID SystemReserved1[54];
    LONG ExceptionCode;
    struct _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer;
    UCHAR SpareBytes1[40];
    struct _GDI_TEB_BATCH GdiTebBatch;
    struct _CLIENT_ID RealClientId;
    PVOID GdiCachedProcessHandle;
    ULONG GdiClientPID;
    ULONG GdiClientTID;
    PVOID GdiThreadLocalInfo;
    ULONG Win32ClientInfo[62];
    PVOID glDispatchTable[233];
    ULONG glReserved1[29];
    PVOID glReserved2;
    PVOID glSectionInfo;
    PVOID glSection;
    PVOID glTable;
    PVOID glCurrentRC;
    PVOID glContext;
    ULONG LastStatusValue;
    struct _UNICODE_STRING StaticUnicodeString;
    USHORT StaticUnicodeBuffer[261];
    PVOID DeallocationStack;
    PVOID TlsSlots[64];
    struct _LIST_ENTRY TlsLinks;
    PVOID Vdm;
    PVOID ReservedForNtRpc;
    PVOID DbgSsReserved[2];
    ULONG HardErrorMode;
    PVOID Instrumentation[14];
    PVOID SubProcessTag;
    PVOID EtwTraceData;
    PVOID WinSockData;
    ULONG GdiBatchCount;
    UCHAR InDbgPrint;
    UCHAR FreeStackOnTermination;
    UCHAR HasFiberData;
    UCHAR IdealProcessor;
    ULONG GuaranteedStackBytes;
    PVOID ReservedForPerf;
    PVOID ReservedForOle;
    ULONG WaitingOnLoaderLock;
    ULONG SparePointer1;
    ULONG SoftPatchPtr1;
    ULONG SoftPatchPtr2;
    PVOID *TlsExpansionSlots;
    ULONG ImpersonationLocale;
    ULONG IsImpersonating;
    PVOID NlsCache;
    PVOID pShimData;
    ULONG HeapVirtualAffinity;
    PVOID CurrentTransactionHandle;
    struct _TEB_ACTIVE_FRAME *ActiveFrame;
    PVOID FlsData;
    UCHAR SafeThunkCall;
    UCHAR BooleanSpare[3];
};

typedef struct _TEB_ACTIVE_FRAME {
    ULONG Flags;
    struct _TEB_ACTIVE_FRAME *Previous;
    struct _TEB_ACTIVE_FRAME_CONTEXT *Context;
};

typedef struct _TEB_ACTIVE_FRAME_CONTEXT {
    ULONG Flags;
    PCHAR FrameName;
};

typedef struct _TERMINATION_PORT {
    struct _TERMINATION_PORT *Next;
    PVOID Port;
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

typedef struct _flags {
    UCHAR Removable : 1;
    UCHAR Fill : 7;
};

typedef union _FS_FILTER_PARAMETERS {
    struct {
        union _LARGE_INTEGER *EndingOffset;
        struct _ERESOURCE **ResourceToRelease;
    } AcquireForModifiedPageWriter;
    struct {
        struct _ERESOURCE *ResourceToRelease;
    } ReleaseForModifiedPageWriter;
    struct {
        enum _FS_FILTER_SECTION_SYNC_TYPE SyncType;
        ULONG PageProtection;
    } AcquireForSectionSynchronization;
    struct {
        PVOID Argument1;
        PVOID Argument2;
        PVOID Argument3;
        PVOID Argument4;
        PVOID Argument5;
    } Others;
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

typedef enum LSA_FOREST_TRUST_RECORD_TYPE {
    ForestTrustTopLevelName = 0,
    ForestTrustTopLevelNameEx = 1,
    ForestTrustDomainInfo = 2,
    ForestTrustRecordTypeLast = 2
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

typedef enum ReplacesCorHdrNumericDefines {
    COMIMAGE_FLAGS_ILONLY = 1,
    COMIMAGE_FLAGS_32BITREQUIRED = 2,
    COMIMAGE_FLAGS_IL_LIBRARY = 4,
    COMIMAGE_FLAGS_STRONGNAMESIGNED = 8,
    COMIMAGE_FLAGS_TRACKDEBUGDATA = 0x10000,
    COR_VERSION_MAJOR_V2 = 2,
    COR_VERSION_MAJOR = 2,
    COR_VERSION_MINOR = 0,
    COR_DELETED_NAME_LENGTH = 8,
    COR_VTABLEGAP_NAME_LENGTH = 8,
    NATIVE_TYPE_MAX_CB = 1,
    COR_ILMETHOD_SECT_SMALL_MAX_DATASIZE = 255,
    IMAGE_COR_MIH_METHODRVA = 1,
    IMAGE_COR_MIH_EHRVA = 2,
    IMAGE_COR_MIH_BASICBLOCK = 8,
    COR_VTABLE_32BIT = 1,
    COR_VTABLE_64BIT = 2,
    COR_VTABLE_FROM_UNMANAGED = 4,
    COR_VTABLE_CALL_MOST_DERIVED = 16,
    IMAGE_COR_EATJ_THUNK_SIZE = 32,
    MAX_CLASS_NAME = 1024,
    MAX_PACKAGE_NAME = 1024
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
    SingleBusRelations = 5
};

typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE {
    DeviceUsageTypeUndefined = 0,
    DeviceUsageTypePaging = 1,
    DeviceUsageTypeHibernation = 2,
    DeviceUsageTypeDumpFile = 3
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

typedef enum _FS_FILTER_SECTION_SYNC_TYPE {
    SyncTypeOther = 0,
    SyncTypeCreateSection = 1
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

typedef enum _KDPC_IMPORTANCE {
    LowImportance = 0,
    MediumImportance = 1,
    HighImportance = 2
};

typedef enum _KOBJECTS {
    EventNotificationObject = 0,
    EventSynchronizationObject = 1,
    MutantObject = 2,
    ProcessObject = 3,
    QueueObject = 4,
    SemaphoreObject = 5,
    ThreadObject = 6,
    GateObject = 7,
    TimerNotificationObject = 8,
    TimerSynchronizationObject = 9,
    Spare2Object = 10,
    Spare3Object = 11,
    Spare4Object = 12,
    Spare5Object = 13,
    Spare6Object = 14,
    Spare7Object = 15,
    Spare8Object = 16,
    Spare9Object = 17,
    ApcObject = 18,
    DpcObject = 19,
    DeviceQueueObject = 20,
    EventPairObject = 21,
    InterruptObject = 22,
    ProfileObject = 23,
    ThreadedDpcObject = 24,
    MaximumKernelObject = 25
};

typedef enum _KSPIN_LOCK_QUEUE_NUMBER {
    LockQueueDispatcherLock = 0,
    LockQueueUnusedSpare1 = 1,
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

typedef enum _MMSYSTEM_PTE_POOL_TYPE {
    SystemPteSpace = 0,
    NonPagedPoolExpansion = 1,
    MaximumPtePoolTypes = 2
};

typedef enum _MODE {
    KernelMode = 0,
    UserMode = 1,
    MaximumMode = 2
};

typedef enum _NT_PRODUCT_TYPE {
    NtProductWinNt = 1,
    NtProductLanManNt = 2,
    NtProductServer = 3
};

typedef enum _OB_OPEN_REASON {
    ObCreateHandle = 0,
    ObOpenHandle = 1,
    ObDuplicateHandle = 2,
    ObInheritHandle = 3,
    ObMaxOpenReason = 4
};

typedef enum _PF_SCENARIO_TYPE {
    PfApplicationLaunchScenarioType = 0,
    PfSystemBootScenarioType = 1,
    PfMaxScenarioType = 2
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

typedef enum _PP_NPAGED_LOOKASIDE_NUMBER {
    LookasideSmallIrpList = 0,
    LookasideLargeIrpList = 1,
    LookasideMdlList = 2,
    LookasideCreateInfoList = 3,
    LookasideNameBufferList = 4,
    LookasideTwilightList = 5,
    LookasideCompletionList = 6,
    LookasideMaximumList = 7
};

typedef enum _PS_QUOTA_TYPE {
    PsNonPagedPool = 0,
    PsPagedPool = 1,
    PsPageFile = 2,
    PsQuotaTypes = 3
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
    RegNtPostOpenKeyEx = 29
};

typedef enum _RTL_GENERIC_COMPARE_RESULTS {
    GenericLessThan = 0,
    GenericGreaterThan = 1,
    GenericEqual = 2
};

typedef enum _SECURITY_IMPERSONATION_LEVEL {
    SecurityAnonymous = 0,
    SecurityIdentification = 1,
    SecurityImpersonation = 2,
    SecurityDelegation = 3
};

typedef enum _SECURITY_OPERATION_CODE {
    SetSecurityDescriptor = 0,
    QuerySecurityDescriptor = 1,
    DeleteSecurityDescriptor = 2,
    AssignSecurityDescriptor = 3
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

$$VProc_ImageExportDirectory;
AVrfpDebug;
AVrfpDphKernel32Snapped;
AVrfpDphMsvcrtHeap;
AVrfpDphMsvcrtSnapped;
AVrfpDphSnapNamesForKernel32;
AVrfpDphSnapNamesForMsvcrt;
AVrfpDphSnapRoutines;
AVrfpEnabled;
AVrfpEnabledSystemWide;
AVrfpHandleTraces;
AVrfpPageHeapPreviousStopData;
AVrfpPageHeapStopData;
AVrfpVerifierDllsString;
AVrfpVerifierFlags;
AVrfpVerifierLock;
AVrfpVerifierProvidersList;
AVrfpVerifierStopMessageFunction;
AVrfpVirtualProtectFailures;
AltResMemBlockCount;
AlternateResourceModuleCount;
AlternateResourceModules;
BaseDllTag;
BaseNamedObjectDirectory;
CallbackFn1;
CallbackFn2;
CheckHeapFillPattern;
CompletedTimerInitialization;
CompletedWaitInitialization;
CompletedWorkerInitialization;
Context1;
Context2;
Cor20DllHandle;
CorExeMain;
CorImageCount;
CorImageUnloading;
CorValidateImage;
CritSecGuid;
CsrHeap;
CsrInitOnceDone;
CsrNtSysInfo;
CsrPortBaseTag;
CsrPortHandle;
CsrPortHeap;
CsrPortMemoryRemoteDelta;
CsrPortName;
CsrProcessId;
CsrServerApiRoutine;
CsrServerProcess;
DefaultExtension;
DllExtension;
EtwLocksInitialized;
EtwpCBInProgressEvent;
EtwpDeviceHandle;
EtwpDumpHardwareConfig;
EtwpEventBuffer1;
EtwpEventBuffer2;
EtwpEventBufferSize1;
EtwpEventBufferSize2;
EtwpEventDeviceHandle;
EtwpEventNotificationWait;
EtwpGNHead;
EtwpGlobalSequence;
EtwpIsBBTOn;
EtwpKMHandle;
EtwpLoggerContext;
EtwpLoggerCount;
EtwpMyProcessHandle;
EtwpNewPumpThreadPending;
EtwpOverlapped1;
EtwpOverlapped2;
EtwpProcessHeap;
EtwpPumpCommandEvent;
EtwpPumpState;
EtwpWin32Event;
EventCache;
FastPebLock;
Firing64BitTickCount;
FlsBitMap;
FormatMaxDisplacement;
FormatMaxLength;
GUID_MOF_RESOURCE_ADDED_NOTIFICATION;
GUID_MOF_RESOURCE_REMOVED_NOTIFICATION;
GUID_NULL;
GlobalCounter;
GlobalKeyedEventHandle;
GuidFormat;
HeapGuid;
IID_ISequentialStream;
IID_IStream;
IID_IUnknown;
IOWorkerThreads;
ImpersonateLangId;
InstallLangId;
Kernel32BaseQueryModuleData;
Kernel32ProcessInitPostImportFunction;
Kernel32String;
KernelWow64;
Last64BitTickCount;
LastThreadCreationTickCount;
LdrApiDefaultExtension;
LdrpActiveUnloadCount;
LdrpAppCompatDllRedirectionCallbackData;
LdrpAppCompatDllRedirectionCallbackFunction;
LdrpBreakOnExceptions;
LdrpBreakOnRecursiveDllLoads;
LdrpCurrentDllInitializer;
LdrpDefaultPath;
LdrpDllNotificationList;
LdrpDllTagProcedures;
LdrpDllTags;
LdrpDllTagsInitialized;
LdrpFatalHardErrorCount;
LdrpGetModuleHandleCache;
LdrpHashTable;
LdrpHeap;
LdrpHotPatchList;
LdrpHotpatchCount;
LdrpImageEntry;
LdrpImageHasTls;
LdrpInLdrInit;
LdrpKnownDllObjectDirectory;
LdrpKnownDllPath;
LdrpKnownDllPathBuffer;
LdrpLargePageDLLKey;
LdrpLdrDatabaseIsSetup;
LdrpLoadedDllHandleCache;
LdrpLoaderLock;
LdrpLoaderLockAcquisitionCount;
LdrpManifestProberRoutine;
LdrpNtDllDataTableEntry;
LdrpNumberOfDllTags;
LdrpNumberOfProcessors;
LdrpNumberOfTlsEntries;
LdrpProcessInitialized;
LdrpShouldCreateStackTraceDb;
LdrpShowInitRoutines;
LdrpShowRecursiveDllLoads;
LdrpShutdownInProgress;
LdrpShutdownThreadId;
LdrpTlsList;
LdrpTopLevelDllBeingLoaded;
LdrpTopLevelDllBeingLoadedTeb;
LdrpUnloadHead;
LdrpUnloadIndex;
LdrpVerifyDlls;
LeapYearDayToMonth;
LeapYearDaysPrecedingMonth;
LoaderLockDebug;
LoaderLockInitialized;
Magic10000;
Magic10000000;
Magic86400000;
MaxThreads;
MscoreeDllString;
NextTimerDbgId;
NextWaitDbgId;
Nls844UnicodeLowercaseTable;
Nls844UnicodeUpcaseTable;
NlsAnsiCodePage;
NlsAnsiToUnicodeData;
NlsLeadByteInfo;
NlsLeadByteInfoTable;
NlsMbAnsiCodePageTables;
NlsMbCodePageTag;
NlsMbOemCodePageTables;
NlsMbOemCodePageTag;
NlsOemCodePage;
NlsOemLeadByteInfo;
NlsOemLeadByteInfoTable;
NlsOemToUnicodeData;
NlsUnicodeToAnsiData;
NlsUnicodeToMbAnsiData;
NlsUnicodeToMbOemData;
NlsUnicodeToOemData;
NormalYearDayToMonth;
NormalYearDaysPrecedingMonth;
NtBuildNumber;
NtDllBase;
NtDllName;
NtdllBaseTag;
NtdllLoggerLock;
NtdllTraceGuid;
NtdllTraceHandles;
NtdllTraceInitializeLock;
NullString;
NumExecutingWorkerThreads;
NumFutureIOWorkItems;
NumFutureWorkItems;
NumIOWorkRequests;
NumIOWorkerThreads;
NumLongIOWorkRequests;
NumLongWorkRequests;
NumMinWorkerThreads;
NumQueuedWorkRequests;
NumTimerQueues;
NumWorkRequests;
NumWorkerThreads;
OemDefaultChar;
OemTransUniDefaultChar;
OldTotalExecutedWorkRequests;
OneSecond;
PMCritSect;
PebLdr;
PersistentIOTCB;
RegisterReservedGuid;
Resync64BitTickCount;
RtlAllocateStringRoutine;
RtlBaseAceType;
RtlCompressBufferProcs;
RtlCrc32Table;
RtlCriticalSectionDebugSList;
RtlCriticalSectionList;
RtlCriticalSectionLock;
RtlDecompressBufferProcs;
RtlDecompressFragmentProcs;
RtlDosPathSeperatorsString;
RtlFailedCriticalDebugAllocations;
RtlFatIllegalTable;
RtlFreeStringRoutine;
RtlIsSystemAceType;
RtlNtPathSeperatorString;
RtlSecureMemoryCacheCallback;
RtlSecureMemorySystemRangeStart;
RtlWorkSpaceProcs;
RtlpAffinityState;
RtlpAtomAllocateTag;
RtlpBitsClearAnywhere;
RtlpBitsClearHigh;
RtlpBitsClearLow;
RtlpBitsClearTotal;
RtlpBreakAtAddress;
RtlpBucketBlockSizes;
RtlpBusyList;
RtlpCallbackEntryList;
RtlpCalloutEntryList;
RtlpCalloutEntryLock;
RtlpCaptureActivationContextActivationStacks;
RtlpCriticalSectionVerifier;
RtlpCrtHeapAddress;
RtlpCsVerifyDoNotBreak;
RtlpCurDirRef;
RtlpDebugPageHeap;
RtlpDisableHeapLookaside;
RtlpDosAUXDevice;
RtlpDosCOMDevice;
RtlpDosCONDevice;
RtlpDosDevicesPrefix;
RtlpDosDevicesUncPrefix;
RtlpDosLPTDevice;
RtlpDosNULDevice;
RtlpDosPRNDevice;
RtlpDosSlashCONDevice;
RtlpDphBlockDistribution;
RtlpDphBreakOptions;
RtlpDphCounter;
RtlpDphCurrentValidationStack;
RtlpDphDebugOptions;
RtlpDphDelayedFreeCacheSize;
RtlpDphDelayedFreeQueue;
RtlpDphDelayedFreeQueueLock;
RtlpDphDelayedQueueTrims;
RtlpDphDelayedTemporaryPushList;
RtlpDphDisableFaults;
RtlpDphDllRangeEnd;
RtlpDphDllRangeStart;
RtlpDphException;
RtlpDphFaultCurrentTime;
RtlpDphFaultFailureRate;
RtlpDphFaultInjectionDisabled;
RtlpDphFaultProbability;
RtlpDphFaultProcessEnoughStarted;
RtlpDphFaultSeed;
RtlpDphFaultSeedInitialized;
RtlpDphFaultStacks;
RtlpDphFaultStacksIndex;
RtlpDphFaultStartTime;
RtlpDphFaultSuccessRate;
RtlpDphFaultTimeOut;
RtlpDphGlobalFlags;
RtlpDphLastValidationStack;
RtlpDphMemoryUsedByDelayedFreeBlocks;
RtlpDphNumberOfDelayedFreeBlocks;
RtlpDphPageHeapList;
RtlpDphPageHeapListInitialized;
RtlpDphPageHeapListLength;
RtlpDphPageHeapListLock;
RtlpDphPreviousBlock;
RtlpDphRandomProbability;
RtlpDphSizeRangeEnd;
RtlpDphSizeRangeStart;
RtlpDphTargetDlls;
RtlpDphTargetDllsInitialized;
RtlpDphTargetDllsList;
RtlpDphTargetDllsLock;
RtlpDphTargetDllsUnicode;
RtlpDphVmLimitHits;
RtlpDphVmLimitNoPageHeap;
RtlpEmptyString;
RtlpEnvironCacheName;
RtlpEnvironCacheValid;
RtlpEnvironCacheValue;
RtlpExitThreadFunc;
RtlpFuzzyStackTracesEnabled;
RtlpGlobalTagHeap;
RtlpHeapHeaderFieldOffsets;
RtlpHeapInvalidBadAddress;
RtlpHeapInvalidBreakPoint;
RtlpHeapMaxAffinity;
RtlpHeapStopOn;
RtlpIntegerChars;
RtlpIntegerWChars;
RtlpLDCrtPage;
RtlpLDNumBlocks;
RtlpLDPreviousPage;
RtlpLFHInitialized;
RtlpLFHKey;
RtlpLargeListDepthLimit;
RtlpLeakHeap;
RtlpLeakHeapAddress;
RtlpLeakList;
RtlpLeaksCount;
RtlpPreviousStartAddress;
RtlpProcessHeapsListBuffer;
RtlpProcessHeapsListLock;
RtlpProcessMemoryMap;
RtlpRandomConstantVector;
RtlpRandomExAuxVarY;
RtlpRandomExConstantVector;
RtlpRegistryPaths;
RtlpRunTable;
RtlpSavedDismountCount;
RtlpSequenceNumberTest;
RtlpShutdownProcessFlags;
RtlpSlashSlashDot;
RtlpStackTraceDataBase;
RtlpStackTraceDataBaseLock;
RtlpStartThreadFunc;
RtlpStaticDebugInfo;
RtlpStaticDebugInfoEnd;
RtlpStatusTable;
RtlpStkDllRanges;
RtlpStkNtdllEnd;
RtlpStkNtdllStart;
RtlpTempBlocks;
RtlpTheEmptyActivationContextData;
RtlpTheEmptyActivationContextWrapped;
RtlpTimeout;
RtlpTimoutDisable;
RtlpUnhandledExceptionFilter;
RtlpUnloadEventTrace;
RtlpValidateHeapHdrsEnable;
RtlpValidateHeapTagsEnable;
RtlpWin32NtRoot;
RtlpWin32NtRootSlash;
RtlpWin32NtUncRoot;
RtlpWin32NtUncRootSlash;
SecondsToStartOf1970;
SecondsToStartOf1980;
SecurityCookieInitCount;
SecurityCookieInitialized;
ShowErrors;
ShowSnaps;
SlashSystem32SlashMscoreeDllString;
SlashSystem32SlashMscoreeDllWCharArray;
SlashSystem32SlashString;
StartedTimerInitialization;
StartedWaitInitialization;
StartedWorkerInitialization;
SystemTraceControlGuid;
TimerCriticalSection;
TimerHandle;
TimerQueues;
TimerThreadHandle;
TimerThreadId;
TimerThreadStartedEvent;
TlsBitMap;
TlsExpansionBitMap;
TotalExecutedWorkRequests;
TraceLevel;
UILangId;
UMLogCritSect;
UnicodeDefaultChar;
User32String;
UuidCachedValues;
VerifierDllString;
VerifierDllWCharArray;
WaitCriticalSection;
WaitThreadHandle;
WaitThreadStartedEvent;
WaitThreadTimer;
WaitThreads;
WmiEventLoggerGuid;
WmiTraceAlignment;
WorkerCompletionPort;
WorkerCriticalSection;
WorkerThreadTimer;
WorkerThreadTimerQueue;
WorkerTimerCriticalSection;
_DEFAULT_CW_in_mem;
_NLG_Destination;
__decimal_point;
__fastflag;
__lookuptable;
__mb_cur_max;
__newctype;
__nullstring;
__security_cookie;
__security_cookie_complement;
__wnullstring;
_cfltcvt_tab;
_d_ind;
_d_inf;
_d_max;
_d_mzero;
_fltused;
_half;
_indefinite;
_infinity;
_load_config_used;
_matherr_flag;
_minfinity;
_pctype;
_pi_by_2_to_61;
_piby2;
_pmatherr;
_pwctype;
_real;
_wctype;
bNtdllTrace;
errno;
gSystemInstallLang;
g_LdrBreakOnLdrpInitializeProcessFailure;
g_ShimsEnabled;
g_SxsCurrentDeadActivationContexts;
g_SxsFreeActivationContexts;
g_SxsKeepActivationContextsAlive;
g_SxsLiveActivationContexts;
g_SxsMaxDeadActivationContexts;
g_SxsTrackReleaseStacks;
g_pShimEngineModule;
g_pfnSE_DllLoaded;
g_pfnSE_DllUnloaded;
g_pfnSE_InstallAfterInit;
g_pfnSE_InstallBeforeInit;
g_pfnSE_ProcessDying;
szBias;
szDaylightBias;
szDaylightName;
szDaylightStart;
szStandardBias;
szStandardName;
szStandardStart;

ARRAY_FITS();
AVrfDllLoadNotification();
AVrfDllUnloadNotification();
AVrfInitializeVerifier();
AVrfInternalHeapFreeNotification();
AVrfPageHeapDllNotification();
AVrfpChainDuplicateVerificationLayers();
AVrfpDetectVerifiedExports();
AVrfpDllLoadNotificationInternal();
AVrfpDphDetectSnapRoutines();
AVrfpDphDllDelete();
AVrfpDphDllDeleteArray();
AVrfpDphDllGlobalAlloc();
AVrfpDphDllGlobalFree();
AVrfpDphDllGlobalReAlloc();
AVrfpDphDllHeapAlloc();
AVrfpDphDllHeapCreate();
AVrfpDphDllHeapFree();
AVrfpDphDllHeapReAlloc();
AVrfpDphDllLocalAlloc();
AVrfpDphDllLocalFree();
AVrfpDphDllLocalReAlloc();
AVrfpDphDllNew();
AVrfpDphDllNewArray();
AVrfpDphDllcalloc();
AVrfpDphDllfree();
AVrfpDphDllmalloc();
AVrfpDphDllrealloc();
AVrfpDphSnapImports();
AVrfpDumpProviderList();
AVrfpEnableHandleVerifier();
AVrfpEnableHeapVerifier();
AVrfpEnableStackVerifier();
AVrfpEnableVerifierOptions();
AVrfpFindClosestThunkDuplicate();
AVrfpIsDebuggerPresent();
AVrfpIsVerifierProviderDll();
AVrfpLoadAndInitializeProvider();
AVrfpMoveProviderToEndOfInitializationList();
AVrfpParseVerifierDllsString();
AVrfpSnapAlreadyLoadedDlls();
AVrfpSnapDllImports();
AVrfpVerifierStopInitialize();
AcquireBufferLocation();
AllocateMemoryForThreadLocalData();
ChkSum();
CleanOnThreadExit();
CleanUpAllThreadBuffers();
CompareNamesCaseSensitive();
ComputeNameLength();
CsrAllocateCaptureBuffer();
CsrAllocateMessagePointer();
CsrCaptureMessageBuffer();
CsrCaptureMessageMultiUnicodeStringsInPlace();
CsrCaptureMessageString();
CsrCaptureMessageUnicodeStringInPlace();
CsrCaptureTimeout();
CsrClientCallServer();
CsrClientConnectToServer();
CsrFreeCaptureBuffer();
CsrGetProcessId();
CsrIdentifyAlertableThread();
CsrNewThread();
CsrOneTimeInitialize();
CsrProbeForRead();
CsrProbeForWrite();
CsrSetPriorityClass();
CsrpConnectToServer();
DaysAndFractionToTime();
DbgBreakPoint();
DbgBreakPointWithStatus();
DbgPrint();
DbgPrintEx();
DbgPrintReturnControlC();
DbgPrompt();
DbgQueryDebugFilterState();
DbgSetDebugFilterState();
DbgUiConnectToDbg();
DbgUiContinue();
DbgUiConvertStateChangeStructure();
DbgUiDebugActiveProcess();
DbgUiGetThreadDebugObject();
DbgUiIssueRemoteBreakin();
DbgUiRemoteBreakin();
DbgUiSetThreadDebugObject();
DbgUiStopDebugging();
DbgUiWaitStateChange();
DbgUserBreakPoint();
DebugPrint();
DebugPrompt();
DebugService();
DeleteNodeFromTree();
DumpHeapSnapShot();
ElapsedDaysToYears();
EnumUILanguageCallback();
EtwControlTraceA();
EtwControlTraceW();
EtwCreateTraceInstanceId();
EtwEnableTrace();
EtwEnumerateTraceGuids();
EtwFlushTraceA();
EtwFlushTraceW();
EtwGetTraceEnableFlags();
EtwGetTraceEnableLevel();
EtwGetTraceLoggerHandle();
EtwNotificationRegistrationA();
EtwNotificationRegistrationW();
EtwQueryAllTracesA();
EtwQueryAllTracesW();
EtwQueryTraceA();
EtwQueryTraceW();
EtwReceiveNotificationsA();
EtwReceiveNotificationsW();
EtwRegisterTraceGuidsA();
EtwRegisterTraceGuidsW();
EtwStartTraceA();
EtwStartTraceW();
EtwStopTraceA();
EtwStopTraceW();
EtwTraceEvent();
EtwTraceEventInstance();
EtwTraceMessage();
EtwTraceMessageVa();
EtwUnregisterTraceGuids();
EtwUpdateTraceA();
EtwUpdateTraceW();
EtwpAddHandleToEventPump();
EtwpAddInstanceIdToNames();
EtwpAddLogHeaderToLogFile();
EtwpAddToGNList();
EtwpAllocDontFail();
EtwpAllocEvent();
EtwpAllocateGuidMaps();
EtwpAllocateTraceBuffers();
EtwpAnsiToUnicode();
EtwpBaseFindFirstDevice();
EtwpBaseFormatObjectAttributes();
EtwpBaseFormatTimeOut();
EtwpBaseGetNamedObjectDirectory();
EtwpBasep8BitStringToDynamicUnicodeString();
EtwpBasepInitializeFindFileHandle();
EtwpBuildGuidObjectAttributes();
EtwpBuildMUIPath();
EtwpBuildMofAddRemoveEvent();
EtwpBuildReceiveNotification();
EtwpCancelIo();
EtwpCheckForEnoughFreeSpace();
EtwpCheckGuidAccess();
EtwpCloseHandle();
EtwpCloseNotifyee();
EtwpClosePendingHandles();
EtwpConvertEventToAnsi();
EtwpConvertWADToAnsi();
EtwpCopyCountedString();
EtwpCopyInfoToProperties();
EtwpCopyMRString();
EtwpCopyPropertiesToInfo();
EtwpCopyStringToCountedUnicode();
EtwpCountedUnicodeToCountedAnsi();
EtwpCreateEventW();
EtwpCreateFileW();
EtwpCreateHeap();
EtwpCreateThread();
EtwpDeinitializeDll();
EtwpDeleteFileW();
EtwpDeliverAllEvents();
EtwpDereferenceGNEntry();
EtwpDeviceIoControl();
EtwpDisableTraceProvider();
EtwpDumpHWConfig();
EtwpDuplicateHandle();
EtwpEnableDisableGuid();
EtwpEnableDisableKernelTrace();
EtwpEnumRegGuids();
EtwpEnumUILanguages();
EtwpEstablishEventPump();
EtwpEventPump();
EtwpEventPumpFromKernel();
EtwpExpandEnvironmentStringsW();
EtwpExternalNotification();
EtwpFileExists();
EtwpFinalizeLogFileHeader();
EtwpFindAndLockGuidNotification();
EtwpFindClose();
EtwpFindFirstFileExW();
EtwpFindFirstFileW();
EtwpFixLogFileHeaderForWow64();
EtwpFixupLoggerStrings();
EtwpFlushAllBuffers();
EtwpFlushBuffer();
EtwpFlushLogger();
EtwpFlushUmLogger();
EtwpFreeEvent();
EtwpFreeLoggerContext();
EtwpGetCpuSpeed();
EtwpGetDiskFreeSpaceExW();
EtwpGetFileAttributesExW();
EtwpGetFreeBuffer();
EtwpGetFullFreeBuffer();
EtwpGetFullPathNameA();
EtwpGetFullPathNameW();
EtwpGetLanguageList();
EtwpGetMofResourceList();
EtwpGetOverlappedResult();
EtwpGetSystemDefaultUILanguage();
EtwpGetSystemDirectoryW();
EtwpGetSystemTime();
EtwpGetSystemWindowsDirectoryW();
EtwpGetTimeZoneInformation();
EtwpGetTraceBuffer();
EtwpGetWindowsDirectory();
EtwpInitLoggerContext();
EtwpInitString();
EtwpInitializeDll();
EtwpInternalNotification();
EtwpInternal_EnumUILanguages();
EtwpIsPrivateLoggerOn();
EtwpLogImageLoadEvent();
EtwpLogger();
EtwpMakeCallbacks();
EtwpMakeEventCallbacks();
EtwpMarkPendingCloseNotifyee();
EtwpMemCommit();
EtwpMemFree();
EtwpMemReserve();
EtwpNlsConvertIntegerToString();
EtwpNlsStrCpyW();
EtwpNotificationRegistration();
EtwpOpenKernelGuid();
EtwpProcessEventBuffer();
EtwpProcessExternalEvent();
EtwpProcessLanguageAddRemoveEvent();
EtwpProcessModuleRunDown();
EtwpProcessMofAddRemoveEvent();
EtwpProcessRunDown();
EtwpProcessUMRequest();
EtwpQueryAllTraces();
EtwpQueryAllUmTraceW();
EtwpQueryLogger();
EtwpQueryUmLogger();
EtwpReadFile();
EtwpReceiveNotifications();
EtwpReceiveReply();
EtwpRegOpenKey();
EtwpRegQueryValueKey();
EtwpRegisterGuids();
EtwpRegistryToImagePath();
EtwpReleaseFullBuffer();
EtwpReleaseTraceBuffer();
EtwpRelogEvent();
EtwpRelogHeaderToLogFile();
EtwpRemoveFromGNList();
EtwpReserveTraceBuffer();
EtwpSendRegisterKMRequest();
EtwpSendUmLogRequest();
EtwpSendWmiKMRequest();
EtwpSetDosError();
EtwpSetEvent();
EtwpSetFilePointer();
EtwpSetHWConfigFunction();
EtwpSetThreadPriority();
EtwpSleep();
EtwpSleepEx();
EtwpStartLogger();
EtwpStartUmLogger();
EtwpStopLogger();
EtwpStopLoggerInstance();
EtwpStopUmLogger();
EtwpSwitchBuffer();
EtwpSwitchFullBuffer();
EtwpSysModuleRunDown();
EtwpThreadRunDown();
EtwpTlsAlloc();
EtwpTlsFree();
EtwpTlsGetValue();
EtwpTlsSetValue();
EtwpTraceEvent();
EtwpTraceMessage();
EtwpTraceUmEvent();
EtwpTraceUmMessage();
EtwpUnicodeToAnsi();
EtwpUpdateUmLogger();
EtwpUuidCreate();
EtwpUuidCreateSequential();
EtwpUuidGetValues();
EtwpValidateLogFileMode();
EtwpValidateLoggerInfo();
EtwpWaitForMultipleObjectsEx();
EtwpWaitForSingleObject();
EtwpWaitForSingleObjectEx();
ExInterlockedFlushSList();
ExInterlockedPopEntrySList();
ExInterlockedPushEntrySList();
ExecuteHandler();
ExecuteHandler2();
ExpInterlockedPopEntrySListEnd();
ExpInterlockedPopEntrySListFault();
ExpInterlockedPopEntrySListResume();
FindNodeOrParent();
FirstEntrySList();
GetLoggerInfo();
GetNextCommaValue();
GetNextWchar();
GetPidInfo();
GetUCBytes();
ImportTablepFreeFunctionSorted();
ImportTablepFreeModuleSorted();
ImportTablepHashCanonicalLists();
ImportTablepInsertFunctionSorted();
ImportTablepInsertModuleSorted();
InitSecurityCookie();
InitializeAndRegisterNtdllTraceEvents();
InitializeEtwHandles();
InsertModuleFunctions<_IMAGE_THUNK_DATA32,unsigned long>();
InsertModuleFunctions<_IMAGE_THUNK_DATA64,unsigned __int64>();
InterlockedCompareExchange64();
InterlockedPopEntrySList();
InterlockedPushEntrySList();
InterlockedPushListSList();
KiFastSystemCall();
KiFastSystemCallRet();
KiIntSystemCall();
KiRaiseUserExceptionDispatcher();
KiUserApcDispatcher();
KiUserApcExceptionHandler();
KiUserCallbackDispatcher();
KiUserCallbackExceptionHandler();
KiUserExceptionDispatcher();
LZNT1CompressChunk();
LZNT1DecompressChunk();
LZNT1FindMatchMaximum();
LZNT1FindMatchStandard();
LdrAccessOutOfProcessResource();
LdrAccessResource();
LdrAddRefDll();
LdrAlternateResourcesEnabled();
LdrCreateOutOfProcessImage();
LdrDestroyOutOfProcessImage();
LdrDisableThreadCalloutsForDll();
LdrEnumResources();
LdrEnumerateLoadedModules();
LdrFindAppCompatVariableInfo();
LdrFindCreateProcessManifest();
LdrFindEntryForAddress();
LdrFindResourceDirectory_U();
LdrFindResourceEx_U();
LdrFindResource_U();
LdrFlushAlternateResourceModules();
LdrGetDllHandle();
LdrGetDllHandleEx();
LdrGetModuleName();
LdrGetProcedureAddress();
LdrHotPatchRoutine();
LdrInitShimEngineDynamic();
LdrInitializeThunk();
LdrLoadAlternateResourceModule();
LdrLoadDll();
LdrLockLoaderLock();
LdrOpenImageFileOptionsKey();
LdrProcessRelocationBlock();
LdrProcessRelocationBlockLongLong();
LdrQueryApplicationCompatibilityGoo();
LdrQueryImageFileExecutionOptions();
LdrQueryImageFileExecutionOptionsEx();
LdrQueryImageFileKeyOption();
LdrQueryInLoadOrderModuleList();
LdrQueryModuleInfoFromLdrEntry();
LdrQueryModuleInfoLocalLoaderLock();
LdrQueryModuleInfoLocalLoaderUnlock();
LdrQueryNextListEntry();
LdrQueryProcessModuleInformation();
LdrQueryProcessModuleInformationEx();
LdrReadMemory();
LdrRelocateImage();
LdrRelocateImageWithBias();
LdrSetAppCompatDllRedirectionCallback();
LdrSetDllManifestProber();
LdrShutdownProcess();
LdrShutdownThread();
LdrUnloadAlternateResourceModule();
LdrUnloadDll();
LdrUnlockLoaderLock();
LdrVerifyImageMatchesChecksum();
LdrVerifyMappedImageMatchesChecksum();
LdrpAccessResourceData();
LdrpAccessResourceDataNoMultipleLanguage();
LdrpAllocateDataTableEntry();
LdrpAllocateTls();
LdrpAllocateUnicodeString();
LdrpApplyHotPatch();
LdrpCalcResourceChecksum();
LdrpCallInitRoutine();
LdrpCallTlsInitializers();
LdrpCheckAppDatabase();
LdrpCheckCorImage();
LdrpCheckForKnownDll();
LdrpCheckForLoadedDll();
LdrpCheckForLoadedDllHandle();
LdrpCheckForNXEntryAddress();
LdrpCheckForSafeDiscImage();
LdrpCheckForSecuROMImage();
LdrpCheckNXCompatibility();
LdrpCheckNxIncompatibleDllSection();
LdrpCheckSafeDiscDll();
LdrpClearLoadInProgress();
LdrpCodeAuthzCheckDllAllowed();
LdrpCompareResourceChecksum();
LdrpCompareResourceNames_U();
LdrpConvertVersionString();
LdrpCopyUnicodeString();
LdrpCorReplaceStartContext();
LdrpCorUnloadImage();
LdrpCorValidateImage();
LdrpCreateDllSection();
LdrpCreateKey();
LdrpDefineDllTag();
LdrpEnsureLoaderLockIsHeld();
LdrpFetchAddressOfEntryPoint();
LdrpFetchAddressOfSecurityCookie();
LdrpFinalizeAndDeallocateDataTableEntry();
LdrpFixSectionProtection();
LdrpForkProcess();
LdrpFreeTls();
LdrpFreeUnicodeString();
LdrpGenericExceptionFilter();
LdrpGetAlternateResourceModuleHandle();
LdrpGetFileVersion();
LdrpGetProcedureAddress();
LdrpGetRegValueKey();
LdrpGetResourceChecksum();
LdrpGetShimEngineInterface();
LdrpHandleNewFormatImportDescriptors();
LdrpHandleOldFormatImportDescriptors();
LdrpHandleOneNewFormatImportDescriptor();
LdrpHandleOneOldFormatImportDescriptor();
LdrpInitSecurityCookie();
LdrpInitializationFailure();
LdrpInitialize();
LdrpInitializeApplicationVerifierPackage();
LdrpInitializeExecutionOptions();
LdrpInitializeProcess();
LdrpInitializeProcessWrapperFilter();
LdrpInitializeThread();
LdrpInitializeTls();
LdrpInsertMemoryTableEntry();
LdrpLoadDll();
LdrpLoadImportModule();
LdrpLoadShimEngine();
LdrpMapDll();
LdrpMapViewOfDllSection();
LdrpMungHeapImportsForTagging();
LdrpNameToOrdinal();
LdrpOpenFileVersionKey();
LdrpOpenKey();
LdrpProcessImageProtectionParameter();
LdrpQueryDllExecuteOptions();
LdrpRecordUnloadEvent();
LdrpRelocateStartContext();
LdrpResolveDllName();
LdrpResolveDllNameForAppPrivateRedirection();
LdrpResolveFullName();
LdrpRunInitializeRoutines();
LdrpRunShimEngineInitRoutine();
LdrpRundownHotpatchList();
LdrpSearchPath();
LdrpSearchResourceSection_U();
LdrpSendDllNotifications();
LdrpSetAlternateResourceModuleHandle();
LdrpSetHotpatchProtection();
LdrpSetProtection();
LdrpSetupHotpatch();
LdrpSnapIAT();
LdrpSnapThunk();
LdrpTagAllocateHeap();
LdrpTagAllocateHeap0();
LdrpTagAllocateHeap1();
LdrpTagAllocateHeap10();
LdrpTagAllocateHeap11();
LdrpTagAllocateHeap12();
LdrpTagAllocateHeap13();
LdrpTagAllocateHeap14();
LdrpTagAllocateHeap15();
LdrpTagAllocateHeap16();
LdrpTagAllocateHeap17();
LdrpTagAllocateHeap18();
LdrpTagAllocateHeap19();
LdrpTagAllocateHeap2();
LdrpTagAllocateHeap20();
LdrpTagAllocateHeap21();
LdrpTagAllocateHeap22();
LdrpTagAllocateHeap23();
LdrpTagAllocateHeap24();
LdrpTagAllocateHeap25();
LdrpTagAllocateHeap26();
LdrpTagAllocateHeap27();
LdrpTagAllocateHeap28();
LdrpTagAllocateHeap29();
LdrpTagAllocateHeap3();
LdrpTagAllocateHeap30();
LdrpTagAllocateHeap31();
LdrpTagAllocateHeap32();
LdrpTagAllocateHeap33();
LdrpTagAllocateHeap34();
LdrpTagAllocateHeap35();
LdrpTagAllocateHeap36();
LdrpTagAllocateHeap37();
LdrpTagAllocateHeap38();
LdrpTagAllocateHeap39();
LdrpTagAllocateHeap4();
LdrpTagAllocateHeap40();
LdrpTagAllocateHeap41();
LdrpTagAllocateHeap42();
LdrpTagAllocateHeap43();
LdrpTagAllocateHeap44();
LdrpTagAllocateHeap45();
LdrpTagAllocateHeap46();
LdrpTagAllocateHeap47();
LdrpTagAllocateHeap48();
LdrpTagAllocateHeap49();
LdrpTagAllocateHeap5();
LdrpTagAllocateHeap50();
LdrpTagAllocateHeap51();
LdrpTagAllocateHeap52();
LdrpTagAllocateHeap53();
LdrpTagAllocateHeap54();
LdrpTagAllocateHeap55();
LdrpTagAllocateHeap56();
LdrpTagAllocateHeap57();
LdrpTagAllocateHeap58();
LdrpTagAllocateHeap59();
LdrpTagAllocateHeap6();
LdrpTagAllocateHeap60();
LdrpTagAllocateHeap61();
LdrpTagAllocateHeap62();
LdrpTagAllocateHeap63();
LdrpTagAllocateHeap7();
LdrpTagAllocateHeap8();
LdrpTagAllocateHeap9();
LdrpTouchThreadStack();
LdrpUnloadShimEngine();
LdrpUpdateLoadCount2();
LdrpUpdateLoadCount3();
LdrpValidateImageForMp();
LdrpVerifyAlternateResourceModule();
LdrpWalkImportDescriptor();
LoadOle32Export();
MD5Final();
MD5Init();
MD5Update();
MatchAll();
NtAcceptConnectPort();
NtAccessCheck();
NtAccessCheckAndAuditAlarm();
NtAccessCheckByType();
NtAccessCheckByTypeAndAuditAlarm();
NtAccessCheckByTypeResultList();
NtAccessCheckByTypeResultListAndAuditAlarm();
NtAccessCheckByTypeResultListAndAuditAlarmByHandle();
NtAddAtom();
NtAddBootEntry();
NtAddDriverEntry();
NtAdjustGroupsToken();
NtAdjustPrivilegesToken();
NtAlertResumeThread();
NtAlertThread();
NtAllocateLocallyUniqueId();
NtAllocateUserPhysicalPages();
NtAllocateUuids();
NtAllocateVirtualMemory();
NtApphelpCacheControl();
NtAreMappedFilesTheSame();
NtAssignProcessToJobObject();
NtCallbackReturn();
NtCancelDeviceWakeupRequest();
NtCancelIoFile();
NtCancelTimer();
NtClearEvent();
NtClose();
NtCloseObjectAuditAlarm();
NtCompactKeys();
NtCompareTokens();
NtCompleteConnectPort();
NtCompressKey();
NtConnectPort();
NtContinue();
NtCreateDebugObject();
NtCreateDirectoryObject();
NtCreateEvent();
NtCreateEventPair();
NtCreateFile();
NtCreateIoCompletion();
NtCreateJobObject();
NtCreateJobSet();
NtCreateKey();
NtCreateKeyedEvent();
NtCreateMailslotFile();
NtCreateMutant();
NtCreateNamedPipeFile();
NtCreatePagingFile();
NtCreatePort();
NtCreateProcess();
NtCreateProcessEx();
NtCreateProfile();
NtCreateSection();
NtCreateSemaphore();
NtCreateSymbolicLinkObject();
NtCreateThread();
NtCreateTimer();
NtCreateToken();
NtCreateWaitablePort();
NtDebugActiveProcess();
NtDebugContinue();
NtDelayExecution();
NtDeleteAtom();
NtDeleteBootEntry();
NtDeleteDriverEntry();
NtDeleteFile();
NtDeleteKey();
NtDeleteObjectAuditAlarm();
NtDeleteValueKey();
NtDeviceIoControlFile();
NtDisplayString();
NtDuplicateObject();
NtDuplicateToken();
NtEnumerateBootEntries();
NtEnumerateDriverEntries();
NtEnumerateKey();
NtEnumerateSystemEnvironmentValuesEx();
NtEnumerateValueKey();
NtExtendSection();
NtFilterToken();
NtFindAtom();
NtFlushBuffersFile();
NtFlushInstructionCache();
NtFlushKey();
NtFlushVirtualMemory();
NtFlushWriteBuffer();
NtFreeUserPhysicalPages();
NtFreeVirtualMemory();
NtFsControlFile();
NtGetContextThread();
NtGetCurrentProcessorNumber();
NtGetDevicePowerState();
NtGetPlugPlayEvent();
NtGetWriteWatch();
NtImpersonateAnonymousToken();
NtImpersonateClientOfPort();
NtImpersonateThread();
NtInitializeRegistry();
NtInitiatePowerAction();
NtIsProcessInJob();
NtIsSystemResumeAutomatic();
NtListenPort();
NtLoadDriver();
NtLoadKey();
NtLoadKey2();
NtLoadKeyEx();
NtLockFile();
NtLockProductActivationKeys();
NtLockRegistryKey();
NtLockVirtualMemory();
NtMakePermanentObject();
NtMakeTemporaryObject();
NtMapUserPhysicalPages();
NtMapUserPhysicalPagesScatter();
NtMapViewOfSection();
NtModifyBootEntry();
NtModifyDriverEntry();
NtNotifyChangeDirectoryFile();
NtNotifyChangeKey();
NtNotifyChangeMultipleKeys();
NtOpenDirectoryObject();
NtOpenEvent();
NtOpenEventPair();
NtOpenFile();
NtOpenIoCompletion();
NtOpenJobObject();
NtOpenKey();
NtOpenKeyedEvent();
NtOpenMutant();
NtOpenObjectAuditAlarm();
NtOpenProcess();
NtOpenProcessToken();
NtOpenProcessTokenEx();
NtOpenSection();
NtOpenSemaphore();
NtOpenSymbolicLinkObject();
NtOpenThread();
NtOpenThreadToken();
NtOpenThreadTokenEx();
NtOpenTimer();
NtPlugPlayControl();
NtPowerInformation();
NtPrivilegeCheck();
NtPrivilegeObjectAuditAlarm();
NtPrivilegedServiceAuditAlarm();
NtProtectVirtualMemory();
NtPulseEvent();
NtQueryAttributesFile();
NtQueryBootEntryOrder();
NtQueryBootOptions();
NtQueryDebugFilterState();
NtQueryDefaultLocale();
NtQueryDefaultUILanguage();
NtQueryDirectoryFile();
NtQueryDirectoryObject();
NtQueryDriverEntryOrder();
NtQueryEaFile();
NtQueryEvent();
NtQueryFullAttributesFile();
NtQueryInformationAtom();
NtQueryInformationFile();
NtQueryInformationJobObject();
NtQueryInformationPort();
NtQueryInformationProcess();
NtQueryInformationThread();
NtQueryInformationToken();
NtQueryInstallUILanguage();
NtQueryIntervalProfile();
NtQueryIoCompletion();
NtQueryKey();
NtQueryMultipleValueKey();
NtQueryMutant();
NtQueryObject();
NtQueryOpenSubKeys();
NtQueryOpenSubKeysEx();
NtQueryPerformanceCounter();
NtQueryPortInformationProcess();
NtQueryQuotaInformationFile();
NtQuerySection();
NtQuerySecurityObject();
NtQuerySemaphore();
NtQuerySymbolicLinkObject();
NtQuerySystemEnvironmentValue();
NtQuerySystemEnvironmentValueEx();
NtQuerySystemInformation();
NtQuerySystemTime();
NtQueryTimer();
NtQueryTimerResolution();
NtQueryValueKey();
NtQueryVirtualMemory();
NtQueryVolumeInformationFile();
NtQueueApcThread();
NtRaiseException();
NtRaiseHardError();
NtReadFile();
NtReadFileScatter();
NtReadRequestData();
NtReadVirtualMemory();
NtRegisterThreadTerminatePort();
NtReleaseKeyedEvent();
NtReleaseMutant();
NtReleaseSemaphore();
NtRemoveIoCompletion();
NtRemoveProcessDebug();
NtRenameKey();
NtReplaceKey();
NtReplyPort();
NtReplyWaitReceivePort();
NtReplyWaitReceivePortEx();
NtReplyWaitReplyPort();
NtRequestDeviceWakeup();
NtRequestPort();
NtRequestWaitReplyPort();
NtRequestWakeupLatency();
NtResetEvent();
NtResetWriteWatch();
NtRestoreKey();
NtResumeProcess();
NtResumeThread();
NtSaveKey();
NtSaveKeyEx();
NtSaveMergedKeys();
NtSecureConnectPort();
NtSetBootEntryOrder();
NtSetBootOptions();
NtSetContextThread();
NtSetDebugFilterState();
NtSetDefaultHardErrorPort();
NtSetDefaultLocale();
NtSetDefaultUILanguage();
NtSetDriverEntryOrder();
NtSetEaFile();
NtSetEvent();
NtSetEventBoostPriority();
NtSetHighEventPair();
NtSetHighWaitLowEventPair();
NtSetInformationDebugObject();
NtSetInformationFile();
NtSetInformationJobObject();
NtSetInformationKey();
NtSetInformationObject();
NtSetInformationProcess();
NtSetInformationThread();
NtSetInformationToken();
NtSetIntervalProfile();
NtSetIoCompletion();
NtSetLdtEntries();
NtSetLowEventPair();
NtSetLowWaitHighEventPair();
NtSetQuotaInformationFile();
NtSetSecurityObject();
NtSetSystemEnvironmentValue();
NtSetSystemEnvironmentValueEx();
NtSetSystemInformation();
NtSetSystemPowerState();
NtSetSystemTime();
NtSetThreadExecutionState();
NtSetTimer();
NtSetTimerResolution();
NtSetUuidSeed();
NtSetValueKey();
NtSetVolumeInformationFile();
NtShutdownSystem();
NtSignalAndWaitForSingleObject();
NtStartProfile();
NtStopProfile();
NtSuspendProcess();
NtSuspendThread();
NtSystemDebugControl();
NtTerminateJobObject();
NtTerminateProcess();
NtTerminateThread();
NtTestAlert();
NtTraceEvent();
NtTranslateFilePath();
NtUnloadDriver();
NtUnloadKey();
NtUnloadKey2();
NtUnloadKeyEx();
NtUnlockFile();
NtUnlockVirtualMemory();
NtUnmapViewOfSection();
NtVdmControl();
NtWaitForDebugEvent();
NtWaitForKeyedEvent();
NtWaitForMultipleObjects();
NtWaitForMultipleObjects32();
NtWaitForSingleObject();
NtWaitHighEventPair();
NtWaitLowEventPair();
NtWriteFile();
NtWriteFileGather();
NtWriteRequestData();
NtWriteVirtualMemory();
NtYieldExecution();
NtdllCtrlCallback();
NtdllpAllocateStringRoutine();
NtdllpFreeStringRoutine();
PfxFindPrefix();
PfxInitialize();
PfxInsertPrefix();
PfxRemovePrefix();
PromoteNode();
PropertyLengthAsVariant();
RXactInitializeContext();
RXactpCommit();
RXactpOpenTargetKey();
RaiseException();
RealPredecessor();
RealSuccessor();
RebalanceNode();
RegisterNtdllTraceEvents();
ReleaseBufferLocation();
ReserveBufferSpace();
RtlAbortRXact();
RtlAbsoluteToSelfRelativeSD();
RtlAcquirePebLock();
RtlAcquirePrivilege();
RtlAcquireResourceExclusive();
RtlAcquireResourceShared();
RtlActivateActivationContext();
RtlActivateActivationContextEx();
RtlActivateActivationContextUnsafeFast();
RtlAddAccessAllowedAce();
RtlAddAccessAllowedAceEx();
RtlAddAccessAllowedObjectAce();
RtlAddAccessDeniedAce();
RtlAddAccessDeniedAceEx();
RtlAddAccessDeniedObjectAce();
RtlAddAce();
RtlAddActionToRXact();
RtlAddAtomToAtomTable();
RtlAddAttributeActionToRXact();
RtlAddAuditAccessAce();
RtlAddAuditAccessAceEx();
RtlAddAuditAccessObjectAce();
RtlAddCompoundAce();
RtlAddRefActivationContext();
RtlAddRefMemoryStream();
RtlAddVectoredContinueHandler();
RtlAddVectoredExceptionHandler();
RtlAddressInSectionTable();
RtlAdjustPrivilege();
RtlAllocateActivationContextStack();
RtlAllocateAndInitializeSid();
RtlAllocateHandle();
RtlAllocateHeap();
RtlAllocateHeapSlowly();
RtlAnsiCharToUnicodeChar();
RtlAnsiStringToUnicodeString();
RtlAppendAsciizToString();
RtlAppendPathElement();
RtlAppendStringToString();
RtlAppendUnicodeStringToString();
RtlAppendUnicodeToString();
RtlApplicationVerifierStop();
RtlApplyRXact();
RtlApplyRXactNoFlush();
RtlAreAllAccessesGranted();
RtlAreAnyAccessesGranted();
RtlAreBitsClear();
RtlAreBitsSet();
RtlAssert();
RtlCallKernel32UnhandledExceptionFilter();
RtlCallVectoredContinueHandlers();
RtlCallVectoredExceptionHandlers();
RtlCancelTimer();
RtlCaptureContext();
RtlCaptureImageExceptionValues();
RtlCaptureStackBackTrace();
RtlCaptureStackContext();
RtlCharToInteger();
RtlCheckForOrphanedCriticalSections();
RtlCheckHeldCriticalSections();
RtlCheckProcessParameters();
RtlCheckRegistryKey();
RtlClearAllBits();
RtlClearBits();
RtlCloneMemoryStream();
RtlCommitMemoryStream();
RtlCompactHeap();
RtlCompareMemory();
RtlCompareMemoryUlong();
RtlCompareString();
RtlCompareUnicodeString();
RtlCompressBuffer();
RtlCompressBufferLZNT1();
RtlCompressBufferNS();
RtlCompressWorkSpaceSizeLZNT1();
RtlCompressWorkSpaceSizeNS();
RtlComputeCrc32();
RtlComputeImportTableHash();
RtlComputeLfnChecksum();
RtlComputePrivatizedDllName_U();
RtlConsoleMultiByteToUnicodeN();
RtlConvertExclusiveToShared();
RtlConvertPropertyToVariant();
RtlConvertSharedToExclusive();
RtlConvertSidToUnicodeString();
RtlConvertToAutoInheritSecurityObject();
RtlConvertUiListToApiList();
RtlConvertVariantToProperty();
RtlCopyLuid();
RtlCopyLuidAndAttributesArray();
RtlCopyMappedMemory();
RtlCopyMemoryNonTemporal();
RtlCopyMemoryStreamTo();
RtlCopyOutOfProcessMemoryStreamTo();
RtlCopySecurityDescriptor();
RtlCopySid();
RtlCopySidAndAttributesArray();
RtlCopyString();
RtlCopyUnicodeString();
RtlCreateAcl();
RtlCreateActivationContext();
RtlCreateAndSetSD();
RtlCreateAtomTable();
RtlCreateBootStatusDataFile();
RtlCreateEnvironment();
RtlCreateHeap();
RtlCreateHotPatch();
RtlCreateProcessParameters();
RtlCreateQueryDebugBuffer();
RtlCreateRegistryKey();
RtlCreateSecurityDescriptor();
RtlCreateSecurityDescriptorRelative();
RtlCreateSystemVolumeInformationFolder();
RtlCreateTagHeap();
RtlCreateTimer();
RtlCreateTimerQueue();
RtlCreateUnicodeString();
RtlCreateUnicodeStringFromAsciiz();
RtlCreateUserProcess();
RtlCreateUserSecurityObject();
RtlCreateUserThread();
RtlCustomCPToUnicodeN();
RtlCutoverTimeToSystemTime();
RtlDeNormalizeProcessParams();
RtlDeactivateActivationContext();
RtlDeactivateActivationContextUnsafeFast();
RtlDebugAllocateHeap();
RtlDebugCompactHeap();
RtlDebugCreateHeap();
RtlDebugCreateTagHeap();
RtlDebugDestroyHeap();
RtlDebugFreeHeap();
RtlDebugGetUserInfoHeap();
RtlDebugPrintTimes();
RtlDebugQueryTagHeap();
RtlDebugReAllocateHeap();
RtlDebugSetUserFlagsHeap();
RtlDebugSetUserValueHeap();
RtlDebugSizeHeap();
RtlDebugUsageHeap();
RtlDebugWalkHeap();
RtlDebugZeroHeap();
RtlDecodePointer();
RtlDecodeSystemPointer();
RtlDecompressBuffer();
RtlDecompressBufferLZNT1();
RtlDecompressBufferNS();
RtlDecompressFragment();
RtlDecompressFragmentLZNT1();
RtlDecompressFragmentNS();
RtlDefaultNpAcl();
RtlDelete();
RtlDeleteAce();
RtlDeleteAtomFromAtomTable();
RtlDeleteCriticalSection();
RtlDeleteElementGenericTable();
RtlDeleteElementGenericTableAvl();
RtlDeleteNoSplay();
RtlDeleteRegistryValue();
RtlDeleteResource();
RtlDeleteSecurityObject();
RtlDeleteTimer();
RtlDeleteTimerQueue();
RtlDeleteTimerQueueEx();
RtlDeregisterWait();
RtlDeregisterWaitEx();
RtlDestroyAtomTable();
RtlDestroyEnvironment();
RtlDestroyHandleTable();
RtlDestroyHeap();
RtlDestroyProcessParameters();
RtlDestroyQueryDebugBuffer();
RtlDetectHeapLeaks();
RtlDetermineDosPathNameType_U();
RtlDetermineDosPathNameType_Ustr();
RtlDispatchException();
RtlDllShutdownInProgress();
RtlDnsHostNameToComputerName();
RtlDoesFileExists_U();
RtlDoesFileExists_UEx();
RtlDoesFileExists_UStr();
RtlDoesFileExists_UstrEx();
RtlDosApplyFileIsolationRedirection_Ustr();
RtlDosPathNameToNtPathName_U();
RtlDosPathNameToNtPathName_U_WithStatus();
RtlDosPathNameToRelativeNtPathName_U();
RtlDosPathNameToRelativeNtPathName_U_WithStatus();
RtlDosPathNameToRelativeNtPathName_Ustr();
RtlDosSearchPath_U();
RtlDosSearchPath_Ustr();
RtlDowncaseUnicodeChar();
RtlDowncaseUnicodeString();
RtlDumpResource();
RtlDuplicateUnicodeString();
RtlEmptyAtomTable();
RtlEnableEarlyCriticalSectionEventCreation();
RtlEncodePointer();
RtlEncodeSystemPointer();
RtlEnterCriticalSection();
RtlEnumProcessHeaps();
RtlEnumerateGenericTable();
RtlEnumerateGenericTableAvl();
RtlEnumerateGenericTableLikeADirectory();
RtlEnumerateGenericTableWithoutSplaying();
RtlEnumerateGenericTableWithoutSplayingAvl();
RtlEqualComputerName();
RtlEqualDomainName();
RtlEqualLuid();
RtlEqualPrefixSid();
RtlEqualSid();
RtlEqualString();
RtlEqualUnicodeString();
RtlEraseUnicodeString();
RtlExitUserThread();
RtlExpandEnvironmentStrings_U();
RtlExtendHeap();
RtlExtendedIntegerMultiply();
RtlExtendedLargeIntegerDivide();
RtlExtendedMagicDivide();
RtlFillMemory();
RtlFillMemoryUlong();
RtlFillMemoryUlonglong();
RtlFinalReleaseOutOfProcessMemoryStream();
RtlFindActivationContextSectionGuid();
RtlFindActivationContextSectionString();
RtlFindCharInUnicodeString();
RtlFindClearBits();
RtlFindClearBitsAndSet();
RtlFindClearRuns();
RtlFindLastBackwardRunClear();
RtlFindLeastSignificantBit();
RtlFindLongestRunClear();
RtlFindMessage();
RtlFindMostSignificantBit();
RtlFindNextActivationContextSection();
RtlFindNextForwardRunClear();
RtlFindRtlPatchHeader();
RtlFindSetBits();
RtlFindSetBitsAndClear();
RtlFirstFreeAce();
RtlFlushSecureMemoryCache();
RtlFormatCurrentUserKeyPath();
RtlFormatMessage();
RtlFormatMessageEx();
RtlFreeActivationContextStack();
RtlFreeAnsiString();
RtlFreeHandle();
RtlFreeHeap();
RtlFreeHeapSlowly();
RtlFreeHotPatchData();
RtlFreeOemString();
RtlFreeSid();
RtlFreeThreadActivationContextStack();
RtlFreeUnicodeString();
RtlFreeUserThreadStack();
RtlGUIDFromString();
RtlGenerate8dot3Name();
RtlGetAce();
RtlGetActiveActivationContext();
RtlGetAssemblyStorageRoot();
RtlGetCallersAddress();
RtlGetCompressionWorkSpaceSize();
RtlGetControlSecurityDescriptor();
RtlGetCriticalSectionRecursionCount();
RtlGetCurrentDirectory_U();
RtlGetCurrentPeb();
RtlGetCurrentProcessorNumber();
RtlGetDaclSecurityDescriptor();
RtlGetElementGenericTable();
RtlGetElementGenericTableAvl();
RtlGetFrame();
RtlGetFullPathName_U();
RtlGetFullPathName_Ustr();
RtlGetFullPathName_UstrEx();
RtlGetGroupSecurityDescriptor();
RtlGetHotpatchHeader();
RtlGetLastNtStatus();
RtlGetLastWin32Error();
RtlGetLengthWithoutLastFullDosOrNtPathElement();
RtlGetLengthWithoutTrailingPathSeperators();
RtlGetLongestNtPathLength();
RtlGetNtGlobalFlags();
RtlGetNtProductType();
RtlGetNtVersionNumbers();
RtlGetOwnerSecurityDescriptor();
RtlGetProcessHeaps();
RtlGetSaclSecurityDescriptor();
RtlGetSecurityDescriptorRMControl();
RtlGetSetBootStatusData();
RtlGetThreadErrorMode();
RtlGetTickCount();
RtlGetUnloadEventTrace();
RtlGetUserInfoHeap();
RtlGetVersion();
RtlHashUnicodeString();
RtlIdentifierAuthoritySid();
RtlImageDirectoryEntryToData();
RtlImageNtHeader();
RtlImageNtHeaderEx();
RtlImageRvaToSection();
RtlImageRvaToVa();
RtlImpersonateSelf();
RtlInitAnsiString();
RtlInitAnsiStringEx();
RtlInitCodePageTable();
RtlInitMemoryStream();
RtlInitNlsTables();
RtlInitOutOfProcessMemoryStream();
RtlInitString();
RtlInitUnicodeString();
RtlInitUnicodeStringEx();
RtlInitializeAtomPackage();
RtlInitializeBitMap();
RtlInitializeContext();
RtlInitializeCriticalSection();
RtlInitializeCriticalSectionAndSpinCount();
RtlInitializeGenericTable();
RtlInitializeGenericTableAvl();
RtlInitializeHandleTable();
RtlInitializeHeapManager();
RtlInitializeHotPatch();
RtlInitializeRXact();
RtlInitializeResource();
RtlInitializeSListHead();
RtlInitializeSid();
RtlInitializeStackTraceDataBase();
RtlInsertElementGenericTable();
RtlInsertElementGenericTableAvl();
RtlInsertElementGenericTableFull();
RtlInsertElementGenericTableFullAvl();
RtlInt64ToUnicodeString();
RtlIntegerToChar();
RtlIntegerToUnicode();
RtlIntegerToUnicodeString();
RtlInterlockedCompareExchange64();
RtlInterlockedFlushSList();
RtlInterlockedPopEntrySList();
RtlInterlockedPushEntrySList();
RtlInterlockedSetClearBits();
RtlInvalidHandlerDetected();
RtlIpv4AddressToStringA();
RtlIpv4AddressToStringExA();
RtlIpv4AddressToStringExW();
RtlIpv4AddressToStringW();
RtlIpv4StringToAddressA();
RtlIpv4StringToAddressExA();
RtlIpv4StringToAddressExW();
RtlIpv4StringToAddressW();
RtlIpv6AddressToStringA();
RtlIpv6AddressToStringExA();
RtlIpv6AddressToStringExW();
RtlIpv6AddressToStringW();
RtlIpv6StringToAddressA();
RtlIpv6StringToAddressExA();
RtlIpv6StringToAddressExW();
RtlIpv6StringToAddressW();
RtlIsActivationContextActive();
RtlIsCriticalSectionLocked();
RtlIsCriticalSectionLockedByThread();
RtlIsDosDeviceName_U();
RtlIsDosDeviceName_Ustr();
RtlIsGenericTableEmpty();
RtlIsGenericTableEmptyAvl();
RtlIsNameLegalDOS8Dot3();
RtlIsTextUnicode();
RtlIsThreadWithinLoaderCallout();
RtlIsValidHandle();
RtlIsValidHandler();
RtlIsValidIndexHandle();
RtlIsValidOemCharacter();
RtlLargeIntegerAdd();
RtlLargeIntegerArithmeticShift();
RtlLargeIntegerDivide();
RtlLargeIntegerNegate();
RtlLargeIntegerShiftLeft();
RtlLargeIntegerShiftRight();
RtlLargeIntegerSubtract();
RtlLargeIntegerToChar();
RtlLargeIntegerToUnicode();
RtlLeaveCriticalSection();
RtlLengthRequiredSid();
RtlLengthSecurityDescriptor();
RtlLengthSid();
RtlLengthSidAsUnicodeString();
RtlLocalTimeToSystemTime();
RtlLockBootStatusData();
RtlLockHeap();
RtlLockMemoryStreamRegion();
RtlLogStackBackTrace();
RtlLookupAtomInAtomTable();
RtlLookupElementGenericTable();
RtlLookupElementGenericTableAvl();
RtlLookupElementGenericTableFull();
RtlLookupElementGenericTableFullAvl();
RtlLookupFunctionTable();
RtlMakeSelfRelativeSD();
RtlMapGenericMask();
RtlMapSecurityErrorToNtStatus();
RtlMoveMemory();
RtlMultiAppendUnicodeStringBuffer();
RtlMultiByteToUnicodeN();
RtlMultiByteToUnicodeSize();
RtlMultipleAllocateHeap();
RtlMultipleFreeHeap();
RtlNewInstanceSecurityObject();
RtlNewSecurityGrantedAccess();
RtlNewSecurityObject();
RtlNewSecurityObjectEx();
RtlNewSecurityObjectWithMultipleInheritance();
RtlNormalizeProcessParams();
RtlNtPathNameToDosPathName();
RtlNtStatusToDosError();
RtlNtStatusToDosErrorNoTeb();
RtlNumberGenericTableElements();
RtlNumberGenericTableElementsAvl();
RtlNumberOfClearBits();
RtlNumberOfSetBits();
RtlOemStringToUnicodeString();
RtlOemToUnicodeN();
RtlOpenCurrentUser();
RtlPcToFileHeader();
RtlPinAtomInAtomTable();
RtlPopFrame();
RtlPrefixString();
RtlPrefixUnicodeString();
RtlProtectHeap();
RtlPushFrame();
RtlQueryAtomInAtomTable();
RtlQueryDepthSList();
RtlQueryEnvironmentVariable_U();
RtlQueryHeapInformation();
RtlQueryInformationAcl();
RtlQueryInformationActivationContext();
RtlQueryInformationActiveActivationContext();
RtlQueryInterfaceMemoryStream();
RtlQueryProcessBackTraceInformation();
RtlQueryProcessDebugInformation();
RtlQueryProcessHeapInformation();
RtlQueryProcessLockInformation();
RtlQueryProcessModuleInformation();
RtlQueryRegistryValues();
RtlQuerySecurityObject();
RtlQueryTagHeap();
RtlQueryTimeZoneInformation();
RtlQueueApcWow64Thread();
RtlQueueWorkItem();
RtlRaiseException();
RtlRaiseStatus();
RtlRandom();
RtlRandomEx();
RtlReAllocateHeap();
RtlReadHookInformation();
RtlReadMemoryStream();
RtlReadOutOfProcessMemoryStream();
RtlReadSingleHookValidation();
RtlRealPredecessor();
RtlRealSuccessor();
RtlRegisterSecureMemoryCacheCallback();
RtlRegisterWait();
RtlReleaseActivationContext();
RtlReleaseMemoryStream();
RtlReleasePebLock();
RtlReleasePrivilege();
RtlReleaseRelativeName();
RtlReleaseResource();
RtlRemoteCall();
RtlRemoveVectoredContinueHandler();
RtlRemoveVectoredExceptionHandler();
RtlResetRtlTranslations();
RtlRestoreLastWin32Error();
RtlRevertMemoryStream();
RtlRunDecodeUnicodeString();
RtlRunEncodeUnicodeString();
RtlSecondsSince1970ToTime();
RtlSecondsSince1980ToTime();
RtlSectionTableFromVirtualAddress();
RtlSeekMemoryStream();
RtlSelfRelativeToAbsoluteSD();
RtlSelfRelativeToAbsoluteSD2();
RtlSetAllBits();
RtlSetAttributesSecurityDescriptor();
RtlSetBit();
RtlSetBits();
RtlSetControlSecurityDescriptor();
RtlSetCriticalSectionSpinCount();
RtlSetCurrentDirectory_U();
RtlSetCurrentEnvironment();
RtlSetDaclSecurityDescriptor();
RtlSetEnvironmentStrings();
RtlSetEnvironmentVariable();
RtlSetGroupSecurityDescriptor();
RtlSetHeapInformation();
RtlSetInformationAcl();
RtlSetIoCompletionCallback();
RtlSetLastWin32Error();
RtlSetLastWin32ErrorAndNtStatusFromNtStatus();
RtlSetMemoryStreamSize();
RtlSetOwnerSecurityDescriptor();
RtlSetProcessIsCritical();
RtlSetSaclSecurityDescriptor();
RtlSetSecurityDescriptorRMControl();
RtlSetSecurityObject();
RtlSetSecurityObjectEx();
RtlSetThreadErrorMode();
RtlSetThreadIsCritical();
RtlSetThreadPoolStartFunc();
RtlSetTimeZoneInformation();
RtlSetTimer();
RtlSetUnhandledExceptionFilter();
RtlSetUnicodeCallouts();
RtlSetUserFlagsHeap();
RtlSetUserValueHeap();
RtlSizeHeap();
RtlSplay();
RtlStartRXact();
RtlStatMemoryStream();
RtlStringCbCopyExW();
RtlStringCopyExWorkerW();
RtlStringFromGUID();
RtlSubAuthorityCountSid();
RtlSubAuthoritySid();
RtlSubtreePredecessor();
RtlSubtreeSuccessor();
RtlSystemTimeToLocalTime();
RtlTimeFieldsToTime();
RtlTimeToElapsedTimeFields();
RtlTimeToSecondsSince1970();
RtlTimeToSecondsSince1980();
RtlTimeToTimeFields();
RtlTraceDatabaseAdd();
RtlTraceDatabaseCreate();
RtlTraceDatabaseDestroy();
RtlTraceDatabaseEnumerate();
RtlTraceDatabaseFind();
RtlTraceDatabaseLock();
RtlTraceDatabaseUnlock();
RtlTraceDatabaseValidate();
RtlTryEnterCriticalSection();
RtlULongLongToULong();
RtlUlongByteSwap();
RtlUlonglongByteSwap();
RtlUnhandledExceptionFilter();
RtlUnhandledExceptionFilter2();
RtlUnicodeStringToAnsiString();
RtlUnicodeStringToCountedOemString();
RtlUnicodeStringToInteger();
RtlUnicodeStringToOemString();
RtlUnicodeToCustomCPN();
RtlUnicodeToMultiByteN();
RtlUnicodeToMultiByteSize();
RtlUnicodeToOemN();
RtlUniform();
RtlUnlockBootStatusData();
RtlUnlockHeap();
RtlUnlockMemoryStreamRegion();
RtlUnwind();
RtlUpcaseUnicodeChar();
RtlUpcaseUnicodeString();
RtlUpcaseUnicodeStringToAnsiString();
RtlUpcaseUnicodeStringToCountedOemString();
RtlUpcaseUnicodeStringToOemString();
RtlUpcaseUnicodeToCustomCPN();
RtlUpcaseUnicodeToMultiByteN();
RtlUpcaseUnicodeToOemN();
RtlUpdateTimer();
RtlUpperChar();
RtlUpperString();
RtlUsageHeap();
RtlUshortByteSwap();
RtlValidAcl();
RtlValidRelativeSecurityDescriptor();
RtlValidSecurityDescriptor();
RtlValidSid();
RtlValidateHeap();
RtlValidateProcessHeaps();
RtlValidateUnicodeString();
RtlVerifyVersionInfo();
RtlWalkFrameChain();
RtlWalkHeap();
RtlWriteMemoryStream();
RtlWriteRegistryValue();
RtlZeroHeap();
RtlZeroMemory();
RtlZombifyActivationContext();
RtlpAcquireHeapListLock();
RtlpAcquireStackTraceDataBase();
RtlpAcquireWorker();
RtlpActivateLowFragmentationHeap();
RtlpAddData();
RtlpAddHeapToProcessList();
RtlpAddKnownAce();
RtlpAddKnownObjectAce();
RtlpAddTimer();
RtlpAddVectoredHandler();
RtlpAddWait();
RtlpAdjustHeapLookasideDepth();
RtlpAllocDeallocQueryBuffer();
RtlpAllocateActivationContextStackFrame();
RtlpAllocateAffinityIndex();
RtlpAllocateAtom();
RtlpAllocateFromHeapLookaside();
RtlpAllocateHeapUsageEntry();
RtlpAllocateHotpatchMemory();
RtlpAllocateTags();
RtlpAllocateUserBlock();
RtlpApcCallout();
RtlpApplyAclToObject();
RtlpApplyLengthFunction();
RtlpApplyRelocationFixups();
RtlpAssemblyStorageMapResolutionDefaultCallback();
RtlpAsyncTimerCallbackCompletion();
RtlpAsyncWaitCallbackCompletion();
RtlpAtomMapAtomToHandleEntry();
RtlpBreakPointHeap();
RtlpBreakWithStatusInstruction();
RtlpCallQueryRegistryRoutine();
RtlpCallVectoredHandlers();
RtlpCancelTimer();
RtlpCancelTimerEx();
RtlpCaptureContext();
RtlpCaptureImpersonation();
RtlpCaptureStackLimits();
RtlpCaptureStackTraceForLogging();
RtlpChangeQueryDebugBufferTarget();
RtlpCheckBusyBlockTail();
RtlpCheckDeviceName();
RtlpCheckHeapSignature();
RtlpCheckRelativeDrive();
RtlpCoalesceFreeBlocks();
RtlpCoalesceHeap();
RtlpCommitQueryDebugInfo();
RtlpCompareAces();
RtlpCompareActivationContextDataTOCEntryById();
RtlpCompareActivationContextGuidSectionEntryByGuid();
RtlpCompareActivationContextStringSectionEntryByPseudoKey();
RtlpCompareKnownAces();
RtlpCompareKnownObjectAces();
RtlpComputeBackupIndex();
RtlpComputeMergedAcl();
RtlpComputeMergedAcl2();
RtlpConvertAclToAutoInherit();
RtlpConvertToAutoInheritSecurityObject();
RtlpCopyAces();
RtlpCopyAndNormalizePeHeaderForHash();
RtlpCopyEffectiveAce();
RtlpCopyMappedMemoryEx();
RtlpCopyMappedMemoryEx_ExceptionFilter();
RtlpCopyProcString();
RtlpCrackActivationContextStringSectionHeader();
RtlpCreateCriticalSectionSem();
RtlpCreateHandleForAtom();
RtlpCreateLowFragHeap();
RtlpCreateServerAcl();
RtlpCreateStack();
RtlpCreateUnCommittedRange();
RtlpDeCommitFreeBlock();
RtlpDeCommitQueryDebugInfo();
RtlpDeactivateTimer();
RtlpDeactivateWait();
RtlpDeactivateWaitWithIndex();
RtlpDebugPageHeapAllocate();
RtlpDebugPageHeapCompact();
RtlpDebugPageHeapCreate();
RtlpDebugPageHeapDestroy();
RtlpDebugPageHeapExtend();
RtlpDebugPageHeapFree();
RtlpDebugPageHeapGetProcessHeaps();
RtlpDebugPageHeapGetUserInfo();
RtlpDebugPageHeapIsLocked();
RtlpDebugPageHeapLock();
RtlpDebugPageHeapReAllocate();
RtlpDebugPageHeapSerialize();
RtlpDebugPageHeapSetUserFlags();
RtlpDebugPageHeapSetUserValue();
RtlpDebugPageHeapSize();
RtlpDebugPageHeapUnlock();
RtlpDebugPageHeapUsage();
RtlpDebugPageHeapValidate();
RtlpDebugPageHeapWalk();
RtlpDebugPageHeapZero();
RtlpDeleteData();
RtlpDeleteTimer();
RtlpDeleteTimerQueue();
RtlpDeleteTimerQueueComplete();
RtlpDeleteWait();
RtlpDeregisterWait();
RtlpDestroyHandleTableForAtomTable();
RtlpDestroyHeapSegment();
RtlpDestroyLockAtomTable();
RtlpDestroyLowFragHeap();
RtlpDestroyTags();
RtlpDestroyUnCommittedRange();
RtlpDetermineDosPathNameType4();
RtlpDidUnicodeToOemWork();
RtlpDosPathNameToRelativeNtPathName_U();
RtlpDosPathNameToRelativeNtPathName_Ustr();
RtlpDphAddNewPool();
RtlpDphAddToDelayedFreeQueue();
RtlpDphAllocateNode();
RtlpDphAllocateNodeForTable();
RtlpDphAllocateVm();
RtlpDphCheckFillPattern();
RtlpDphCoalesceFreeIntoAvailable();
RtlpDphCoalesceNodeIntoAvailable();
RtlpDphCompareNodeForTable();
RtlpDphDisableFaultInjection();
RtlpDphEnableFaultInjection();
RtlpDphEnterCriticalSection();
RtlpDphFindAvailableMemory();
RtlpDphFindBusyMemory();
RtlpDphFreeDelayedBlocksFromHeap();
RtlpDphFreeNodeForTable();
RtlpDphFreeVm();
RtlpDphGetBlockSizeFromCorruptedBlock();
RtlpDphGrowVirtual();
RtlpDphInitializeDelayedFreeQueue();
RtlpDphInternalValidatePageHeap();
RtlpDphIsDllTargeted();
RtlpDphIsNormalFreeHeapBlock();
RtlpDphIsNormalHeapBlock();
RtlpDphIsPageHeapBlock();
RtlpDphLeaveCriticalSection();
RtlpDphLogStackTrace();
RtlpDphNormalHeapAllocate();
RtlpDphNormalHeapFree();
RtlpDphNormalHeapGetUserInfo();
RtlpDphNormalHeapReAllocate();
RtlpDphNormalHeapSetUserFlags();
RtlpDphNormalHeapSetUserValue();
RtlpDphNormalHeapSize();
RtlpDphNormalHeapValidate();
RtlpDphPlaceOnAvailableList();
RtlpDphPlaceOnBusyList();
RtlpDphPlaceOnFreeList();
RtlpDphPlaceOnPoolList();
RtlpDphPlaceOnVirtualList();
RtlpDphPointerFromHandle();
RtlpDphPostProcessing();
RtlpDphPreProcessing();
RtlpDphProcessStartupInitialization();
RtlpDphProtectVm();
RtlpDphRaiseException();
RtlpDphRemoveFromAvailableList();
RtlpDphRemoveFromBusyList();
RtlpDphRemoveFromFreeList();
RtlpDphReportCorruptedBlock();
RtlpDphReturnNodeToUnusedList();
RtlpDphSearchAvailableMemoryListForBestFit();
RtlpDphSearchBlockInList();
RtlpDphSearchBlockInList2();
RtlpDphSearchBlockInTree();
RtlpDphSetProtectionsAfterUse();
RtlpDphSetProtectionsBeforeUse();
RtlpDphShouldAllocateInPageHeap();
RtlpDphShouldFaultInject();
RtlpDphTakeNodeFromUnusedList();
RtlpDphTargetDllsLogicInitialize();
RtlpDphUnexpectedExceptionFilter();
RtlpDphValidateInternalLists();
RtlpDphVerifyIntegrity();
RtlpDphVerifyList();
RtlpDphVerifyList2();
RtlpDphVerifyTree();
RtlpDphVmLimitCanUsePageHeap();
RtlpDphWriteNormalHeapBlockInformation();
RtlpDphWritePageHeapBlockInformation();
RtlpDumpEntryFlagDescription();
RtlpDumpEntryHeader();
RtlpDumpEntryInfo();
RtlpEnsureBufferSize();
RtlpEnsureLiveDeadListsInitialized();
RtlpExecuteHandlerForException();
RtlpExecuteHandlerForUnwind();
RtlpExecuteIOWorkItem();
RtlpExecuteLongIOWorkItem();
RtlpExecuteWorkerRequest();
RtlpExitThread();
RtlpExtendHeap();
RtlpExtendStackTraceDataBase();
RtlpFindActivationContextSection_CheckParameters();
RtlpFindActivationContextSection_FillOutReturnedData();
RtlpFindAndCommitPages();
RtlpFindEntry();
RtlpFindFirstActivationContextSection();
RtlpFindGuidInSection();
RtlpFindNextActivationContextSection();
RtlpFindSectionHeader();
RtlpFindUnicodeStringInSection();
RtlpFindWaitThread();
RtlpFireTimers();
RtlpFireTimersAndReorder();
RtlpFlushCacheContents();
RtlpFlushLargestCacheBlock();
RtlpFreeActivationContext();
RtlpFreeActivationContextStackFrame();
RtlpFreeAtom();
RtlpFreeDebugInfo();
RtlpFreeHandleForAtom();
RtlpFreeHeapUsageEntry();
RtlpFreeHotpatchMemory();
RtlpFreeStack();
RtlpFreeToHeapLookaside();
RtlpFreeUserBlock();
RtlpFreeWaitEvent();
RtlpGenerateInheritAcl();
RtlpGenerateInheritedAce();
RtlpGet64BitTickCount();
RtlpGetActivationContextData();
RtlpGetActivationContextDataStorageMapAndRosterHeader();
RtlpGetAssemblyStorageMapRootLocation();
RtlpGetBlockInfo();
RtlpGetColdpatchDebugSignature();
RtlpGetDefaultsSubjectContext();
RtlpGetExtraStuffPointer();
RtlpGetHeapBlock();
RtlpGetIntegerAtom();
RtlpGetLengthWithoutLastPathElement();
RtlpGetMemoryFlag();
RtlpGetQueueRelativeTime();
RtlpGetRegistrationHead();
RtlpGetRegistryHandle();
RtlpGetSizeOfBigBlock();
RtlpGetStackLimits();
RtlpGetStackTraceAddress();
RtlpGetTagName();
RtlpGetTimeRemaining();
RtlpGetTimeZoneInfoHandle();
RtlpGetWaitEvent();
RtlpGrowBlockInPlace();
RtlpGuidPresentInGuidList();
RtlpHashStringToAtom();
RtlpHeapExceptionFilter();
RtlpHeapIsLocked();
RtlpHeapReportCorruption();
RtlpIOWorkerThread();
RtlpImageDirectoryEntryToData32();
RtlpImageDirectoryEntryToData64();
RtlpImageNtHeader();
RtlpImpersonateSelfEx();
RtlpInheritAcl();
RtlpInheritAcl2();
RtlpInitDeferredCriticalSection();
RtlpInitUpcaseTable();
RtlpInitializeAffinityManager();
RtlpInitializeAllowedAce();
RtlpInitializeAssemblyStorageMap();
RtlpInitializeAuditAce();
RtlpInitializeDeniedAce();
RtlpInitializeHandleTableForAtomTable();
RtlpInitializeHeapSegment();
RtlpInitializeLeakDetection();
RtlpInitializeListIndex();
RtlpInitializeLockAtomTable();
RtlpInitializeLowFragHeapManager();
RtlpInitializeMap();
RtlpInitializeSListHead();
RtlpInitializeTimerThreadPool();
RtlpInitializeWaitThreadPool();
RtlpInitializeWorkerThreadPool();
RtlpInsertAssemblyStorageMapEntry();
RtlpInsertFreeBlock();
RtlpInsertInDeltaList();
RtlpInsertTimersIntoDeltaList();
RtlpInsertUnCommittedPages();
RtlpInterlockedFlushSList();
RtlpInterlockedPopEntrySList();
RtlpInterlockedPushEntrySList();
RtlpIsDuplicateAce();
RtlpIsLFHZoneAllocation();
RtlpIsSameImage();
RtlpLocateActivationContextSection();
RtlpLocateActivationContextSectionForQuery();
RtlpLockAtomTable();
RtlpLogCapturedStackTrace();
RtlpLogStackBackTraceEx();
RtlpLowFragHeapAlloc();
RtlpLowFragHeapAllocateFromZone();
RtlpLowFragHeapFree();
RtlpLowFragHeapMultipleAlloc();
RtlpLowFragHeapMultipleFree();
RtlpLowFragUpdateFreeCounter();
RtlpMapSpecialValuesToBuiltInActivationContexts();
RtlpMoveActCtxToFreeList();
RtlpNewSecurityObject();
RtlpNonNegativeDecrement();
RtlpNormalizePeHeaderForIdHash();
RtlpNotOwnerCriticalSection();
RtlpNtCreateKey();
RtlpNtEnumerateSubKey();
RtlpNtMakeTemporaryKey();
RtlpNtOpenKey();
RtlpNtQueryValueKey();
RtlpNtSetValueKey();
RtlpOpenImageFile();
RtlpOpenThreadToken();
RtlpPageHeapStop();
RtlpPeHeaderHash2();
RtlpPlaceActivationContextOnLiveList();
RtlpPossibleDeadlock();
RtlpProbeAssemblyStorageRootForAssembly();
RtlpProcessTimeouts();
RtlpProcessWaitCompletion();
RtlpPushPageDescriptor();
RtlpQueryAssemblyInformationActivationContextDetailedInformation();
RtlpQueryDepthSList();
RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation();
RtlpQueryInformationActivationContextBasicInformation();
RtlpQueryInformationActivationContextDetailedInformation();
RtlpQueryProcessDebugInformationRemote();
RtlpQueryProcessEnumHeapsRoutine();
RtlpQueryRegistryDirect();
RtlpQuerySecurityDescriptor();
RtlpQueueIOWorkerRequest();
RtlpQueueWorkerRequest();
RtlpReOrderDeltaList();
RtlpReadHeapData();
RtlpReadHeapSegment();
RtlpReadProcessHeaps();
RtlpReadSingleHookInformation();
RtlpRegisterHeapBlocks();
RtlpReleaseHeapListLock();
RtlpReleaseStackTraceDataBase();
RtlpReleaseWorker();
RtlpRemoveFromDeltaList();
RtlpRemoveHeapFromProcessList();
RtlpRemoveVectoredHandler();
RtlpResetDriveEnvironment();
RtlpResetTimer();
RtlpResolveAssemblyStorageMapEntry();
RtlpRestartImpersonation();
RtlpResync64BitTickCount();
RtlpScanHeapAllocBlocks();
RtlpScanProcessVirtualMemory();
RtlpSearchValidationCode();
RtlpSecMemFreeVirtualMemory();
RtlpSerializeHeap();
RtlpServiceTimer();
RtlpSetBlockInfo();
RtlpSetSecurityObject();
RtlpSingleRangeValidate();
RtlpStartIOWorkerThread();
RtlpStartThread();
RtlpStartThreadpoolThread();
RtlpStartWaitThread();
RtlpStartWorkerThread();
RtlpStkIsPointerInDllRange();
RtlpStkMarkDllRange();
RtlpSubSegmentAllocateAll();
RtlpSubSegmentFreeAll();
RtlpSubSegmentInitialize();
RtlpSysVolAdminSid();
RtlpSysVolAllocate();
RtlpSysVolCheckOwnerAndSecurity();
RtlpSysVolCreateSecurityDescriptor();
RtlpSysVolFree();
RtlpSysVolSystemSid();
RtlpSysVolTakeOwnership();
RtlpThreadPoolGetActiveActivationContext();
RtlpTimerReleaseWorker();
RtlpTimerThread();
RtlpTraceDatabaseAcquireLock();
RtlpTraceDatabaseAllocate();
RtlpTraceDatabaseFree();
RtlpTraceDatabaseInitializeLock();
RtlpTraceDatabaseInternalAdd();
RtlpTraceDatabaseInternalFind();
RtlpTraceDatabaseReleaseLock();
RtlpTraceDatabaseUninitializeLock();
RtlpTraceStandardHashFunction();
RtlpUnWaitCriticalSection();
RtlpUninitializeAssemblyStorageMap();
RtlpUnlinkHandler();
RtlpUnlockAtomTable();
RtlpUpdateHeapListIndex();
RtlpUpdateIndexInsertBlock();
RtlpUpdateIndexRemoveBlock();
RtlpUpdateTagEntry();
RtlpUpdateTimer();
RtlpValidOwnerSubjectContext();
RtlpValidateActivationContextData();
RtlpValidateCurrentDirectory();
RtlpValidateHeap();
RtlpValidateHeapEntry();
RtlpValidateHeapHeaders();
RtlpValidateHeapSegment();
RtlpValidatePeChecksum();
RtlpValidatePeHeaderHash2();
RtlpValidateSDOffsetAndSize();
RtlpValidateTargetModule();
RtlpValidateTargetRanges();
RtlpVerCompare();
RtlpVerGetConditionMask();
RtlpWaitForCriticalSection();
RtlpWaitForEvent();
RtlpWaitOnCriticalSection();
RtlpWaitOrTimerCallout();
RtlpWaitReleaseWorker();
RtlpWaitThread();
RtlpWalkFrameChainExceptionFilter();
RtlpWalkFrameChainFuzzy();
RtlpWalkLFHBlock();
RtlpWin32NTNameToNtPathName_U();
RtlpWorkerCallout();
RtlpWorkerThread();
RtlpWorkerThreadCancelTimer();
RtlpWorkerThreadSetTimer();
RtlpWorkerThreadTimerCallback();
RtlpWow64EnableFsRedirection();
RtlpWow64EnableFsRedirectionEx();
RtlxAnsiStringToUnicodeSize();
RtlxOemStringToUnicodeSize();
RtlxUnicodeStringToAnsiSize();
RtlxUnicodeStringToOemSize();
ShutDownEtwHandles();
StringCatWorkerW();
StringCbCopyW();
StringCbPrintfW();
StringCchCopyA();
StringCchCopyW();
StringCchPrintfW();
StringCopyWorkerA();
StringCopyWorkerW();
StringLengthWorkerW();
StringVPrintfWorkerW();
SwapSplayLinks();
TransformMD5();
ULongAdd();
ULongLongToULong();
VerSetConditionMask();
WmiUnregisterGuids();
ZwAcceptConnectPort();
ZwAccessCheck();
ZwAccessCheckAndAuditAlarm();
ZwAccessCheckByType();
ZwAccessCheckByTypeAndAuditAlarm();
ZwAccessCheckByTypeResultList();
ZwAccessCheckByTypeResultListAndAuditAlarm();
ZwAccessCheckByTypeResultListAndAuditAlarmByHandle();
ZwAddAtom();
ZwAddBootEntry();
ZwAddDriverEntry();
ZwAdjustGroupsToken();
ZwAdjustPrivilegesToken();
ZwAlertResumeThread();
ZwAlertThread();
ZwAllocateLocallyUniqueId();
ZwAllocateUserPhysicalPages();
ZwAllocateUuids();
ZwAllocateVirtualMemory();
ZwApphelpCacheControl();
ZwAreMappedFilesTheSame();
ZwAssignProcessToJobObject();
ZwCallbackReturn();
ZwCancelDeviceWakeupRequest();
ZwCancelIoFile();
ZwCancelTimer();
ZwClearEvent();
ZwClose();
ZwCloseObjectAuditAlarm();
ZwCompactKeys();
ZwCompareTokens();
ZwCompleteConnectPort();
ZwCompressKey();
ZwConnectPort();
ZwContinue();
ZwCreateDebugObject();
ZwCreateDirectoryObject();
ZwCreateEvent();
ZwCreateEventPair();
ZwCreateFile();
ZwCreateIoCompletion();
ZwCreateJobObject();
ZwCreateJobSet();
ZwCreateKey();
ZwCreateKeyedEvent();
ZwCreateMailslotFile();
ZwCreateMutant();
ZwCreateNamedPipeFile();
ZwCreatePagingFile();
ZwCreatePort();
ZwCreateProcess();
ZwCreateProcessEx();
ZwCreateProfile();
ZwCreateSection();
ZwCreateSemaphore();
ZwCreateSymbolicLinkObject();
ZwCreateThread();
ZwCreateTimer();
ZwCreateToken();
ZwCreateWaitablePort();
ZwDebugActiveProcess();
ZwDebugContinue();
ZwDelayExecution();
ZwDeleteAtom();
ZwDeleteBootEntry();
ZwDeleteDriverEntry();
ZwDeleteFile();
ZwDeleteKey();
ZwDeleteObjectAuditAlarm();
ZwDeleteValueKey();
ZwDeviceIoControlFile();
ZwDisplayString();
ZwDuplicateObject();
ZwDuplicateToken();
ZwEnumerateBootEntries();
ZwEnumerateDriverEntries();
ZwEnumerateKey();
ZwEnumerateSystemEnvironmentValuesEx();
ZwEnumerateValueKey();
ZwExtendSection();
ZwFilterToken();
ZwFindAtom();
ZwFlushBuffersFile();
ZwFlushInstructionCache();
ZwFlushKey();
ZwFlushVirtualMemory();
ZwFlushWriteBuffer();
ZwFreeUserPhysicalPages();
ZwFreeVirtualMemory();
ZwFsControlFile();
ZwGetContextThread();
ZwGetCurrentProcessorNumber();
ZwGetDevicePowerState();
ZwGetPlugPlayEvent();
ZwGetWriteWatch();
ZwImpersonateAnonymousToken();
ZwImpersonateClientOfPort();
ZwImpersonateThread();
ZwInitializeRegistry();
ZwInitiatePowerAction();
ZwIsProcessInJob();
ZwIsSystemResumeAutomatic();
ZwListenPort();
ZwLoadDriver();
ZwLoadKey();
ZwLoadKey2();
ZwLoadKeyEx();
ZwLockFile();
ZwLockProductActivationKeys();
ZwLockRegistryKey();
ZwLockVirtualMemory();
ZwMakePermanentObject();
ZwMakeTemporaryObject();
ZwMapUserPhysicalPages();
ZwMapUserPhysicalPagesScatter();
ZwMapViewOfSection();
ZwModifyBootEntry();
ZwModifyDriverEntry();
ZwNotifyChangeDirectoryFile();
ZwNotifyChangeKey();
ZwNotifyChangeMultipleKeys();
ZwOpenDirectoryObject();
ZwOpenEvent();
ZwOpenEventPair();
ZwOpenFile();
ZwOpenIoCompletion();
ZwOpenJobObject();
ZwOpenKey();
ZwOpenKeyedEvent();
ZwOpenMutant();
ZwOpenObjectAuditAlarm();
ZwOpenProcess();
ZwOpenProcessToken();
ZwOpenProcessTokenEx();
ZwOpenSection();
ZwOpenSemaphore();
ZwOpenSymbolicLinkObject();
ZwOpenThread();
ZwOpenThreadToken();
ZwOpenThreadTokenEx();
ZwOpenTimer();
ZwPlugPlayControl();
ZwPowerInformation();
ZwPrivilegeCheck();
ZwPrivilegeObjectAuditAlarm();
ZwPrivilegedServiceAuditAlarm();
ZwProtectVirtualMemory();
ZwPulseEvent();
ZwQueryAttributesFile();
ZwQueryBootEntryOrder();
ZwQueryBootOptions();
ZwQueryDebugFilterState();
ZwQueryDefaultLocale();
ZwQueryDefaultUILanguage();
ZwQueryDirectoryFile();
ZwQueryDirectoryObject();
ZwQueryDriverEntryOrder();
ZwQueryEaFile();
ZwQueryEvent();
ZwQueryFullAttributesFile();
ZwQueryInformationAtom();
ZwQueryInformationFile();
ZwQueryInformationJobObject();
ZwQueryInformationPort();
ZwQueryInformationProcess();
ZwQueryInformationThread();
ZwQueryInformationToken();
ZwQueryInstallUILanguage();
ZwQueryIntervalProfile();
ZwQueryIoCompletion();
ZwQueryKey();
ZwQueryMultipleValueKey();
ZwQueryMutant();
ZwQueryObject();
ZwQueryOpenSubKeys();
ZwQueryOpenSubKeysEx();
ZwQueryPerformanceCounter();
ZwQueryPortInformationProcess();
ZwQueryQuotaInformationFile();
ZwQuerySection();
ZwQuerySecurityObject();
ZwQuerySemaphore();
ZwQuerySymbolicLinkObject();
ZwQuerySystemEnvironmentValue();
ZwQuerySystemEnvironmentValueEx();
ZwQuerySystemInformation();
ZwQuerySystemTime();
ZwQueryTimer();
ZwQueryTimerResolution();
ZwQueryValueKey();
ZwQueryVirtualMemory();
ZwQueryVolumeInformationFile();
ZwQueueApcThread();
ZwRaiseException();
ZwRaiseHardError();
ZwReadFile();
ZwReadFileScatter();
ZwReadRequestData();
ZwReadVirtualMemory();
ZwRegisterThreadTerminatePort();
ZwReleaseKeyedEvent();
ZwReleaseMutant();
ZwReleaseSemaphore();
ZwRemoveIoCompletion();
ZwRemoveProcessDebug();
ZwRenameKey();
ZwReplaceKey();
ZwReplyPort();
ZwReplyWaitReceivePort();
ZwReplyWaitReceivePortEx();
ZwReplyWaitReplyPort();
ZwRequestDeviceWakeup();
ZwRequestPort();
ZwRequestWaitReplyPort();
ZwRequestWakeupLatency();
ZwResetEvent();
ZwResetWriteWatch();
ZwRestoreKey();
ZwResumeProcess();
ZwResumeThread();
ZwSaveKey();
ZwSaveKeyEx();
ZwSaveMergedKeys();
ZwSecureConnectPort();
ZwSetBootEntryOrder();
ZwSetBootOptions();
ZwSetContextThread();
ZwSetDebugFilterState();
ZwSetDefaultHardErrorPort();
ZwSetDefaultLocale();
ZwSetDefaultUILanguage();
ZwSetDriverEntryOrder();
ZwSetEaFile();
ZwSetEvent();
ZwSetEventBoostPriority();
ZwSetHighEventPair();
ZwSetHighWaitLowEventPair();
ZwSetInformationDebugObject();
ZwSetInformationFile();
ZwSetInformationJobObject();
ZwSetInformationKey();
ZwSetInformationObject();
ZwSetInformationProcess();
ZwSetInformationThread();
ZwSetInformationToken();
ZwSetIntervalProfile();
ZwSetIoCompletion();
ZwSetLdtEntries();
ZwSetLowEventPair();
ZwSetLowWaitHighEventPair();
ZwSetQuotaInformationFile();
ZwSetSecurityObject();
ZwSetSystemEnvironmentValue();
ZwSetSystemEnvironmentValueEx();
ZwSetSystemInformation();
ZwSetSystemPowerState();
ZwSetSystemTime();
ZwSetThreadExecutionState();
ZwSetTimer();
ZwSetTimerResolution();
ZwSetUuidSeed();
ZwSetValueKey();
ZwSetVolumeInformationFile();
ZwShutdownSystem();
ZwSignalAndWaitForSingleObject();
ZwStartProfile();
ZwStopProfile();
ZwSuspendProcess();
ZwSuspendThread();
ZwSystemDebugControl();
ZwTerminateJobObject();
ZwTerminateProcess();
ZwTerminateThread();
ZwTestAlert();
ZwTraceEvent();
ZwTranslateFilePath();
ZwUnloadDriver();
ZwUnloadKey();
ZwUnloadKey2();
ZwUnloadKeyEx();
ZwUnlockFile();
ZwUnlockVirtualMemory();
ZwUnmapViewOfSection();
ZwVdmControl();
ZwWaitForDebugEvent();
ZwWaitForKeyedEvent();
ZwWaitForMultipleObjects();
ZwWaitForMultipleObjects32();
ZwWaitForSingleObject();
ZwWaitHighEventPair();
ZwWaitLowEventPair();
ZwWriteFile();
ZwWriteFileGather();
ZwWriteRequestData();
ZwWriteVirtualMemory();
ZwYieldExecution();
_87except();
_CIatan_default();
_CIcos();
_CIlog();
_CIlog_default();
_CIpow();
_CIpow_default();
_CIsin();
_CIsqrt();
_CItan();
_LdrpInitialize();
_NLG_Dispatch();
_NLG_Dispatch2();
_NLG_Notify();
_NLG_Notify1();
_NLG_Return2();
_RtlEnlargedIntegerMultiply();
_RtlEnlargedUnsignedDivide();
_RtlEnlargedUnsignedMultiply();
_SEH_epilog();
_SEH_prolog();
_ValidateEH3RN();
__NtCurrentTeb();
__RtlConvertLongToLargeInteger();
__RtlConvertUlongToLargeInteger();
__ascii_memicmp();
__ascii_stricmp();
__ascii_strnicmp();
__from_strstr_to_strchr();
__isascii();
__iscsym();
__iscsymf();
__libm_error_support();
__report_gsfailure();
__security_check_cookie();
__security_init_cookie();
__security_init_cookie_ex();
__toascii();
_abnormal_termination();
_alldiv();
_alldvrm();
_allmul();
_alloca_probe();
_allrem();
_allshl();
_allshr();
_amsg_exit();
_atan_default();
_atoi64();
_aulldiv();
_aulldvrm();
_aullrem();
_aullshr();
_ceil_default();
_ceil_pentium4();
_checkTOS_withFB();
_check_overflow_exit();
_check_range_exit();
_chkstk();
_clrfp();
_convertTOStoQNaN();
_ctrlfp();
_d_inttype();
_decomp();
_errcode();
_except1();
_except_handler3();
_fFEXP();
_fFLN();
_fast_exit();
_ffexpm1();
_filbuf();
_fload_withFB();
_floor_default();
_floor_pentium4();
_flsbuf();
_flswbuf();
_fpclass();
_fptrap();
_frnd();
_ftol();
_ftol2();
_getbuf();
_global_unwind2();
_handle_exc();
_handle_qnan1();
_i64toa();
_i64tow();
_input();
_isctype();
_itoa();
_itow();
_lfind();
_load_CW();
_local_unwind2();
_log_default();
_ltoa();
_ltow();
_math_exit();
_matherr();
_mbstrlen();
_memccpy();
_memicmp();
_nan2();
_nosnan2();
_output();
_pow_default();
_powhlp();
_raise_exc();
_raise_exc_ex();
_rtchsifneg();
_rtindfnpop();
_rtindfpop();
_rtinfnpop();
_rtinfnpopse();
_rtinfpop();
_rtinfpopse();
_rtnospop();
_rtnospopde();
_rtonenpop();
_rtonepop();
_rttosnpop();
_rttosnpopde();
_rttospop();
_rttospopde();
_rtzeronpop();
_rtzeropop();
_seh_longjmp_unwind();
_set_errno();
_set_exp();
_set_statfp();
_snprintf();
_snwprintf();
_splitpath();
_sptype();
_startOneArgErrorHandling();
_startTwoArgErrorHandling();
_statfp();
_stricmp();
_strlwr();
_strnicmp();
_strupr();
_tolower();
_tosnan1();
_tosnan2();
_toupper();
_trandisp1();
_trandisp2();
_twoToTOS();
_ui64toa();
_ui64tow();
_ultoa();
_ultow();
_umatherr();
_vscwprintf();
_vsnprintf();
_vsnwprintf();
_wchartodigit();
_wcsicmp();
_wcslwr();
_wcsnicmp();
_wcstoui64();
_wcsupr();
_woutput();
_wtoi();
_wtoi64();
_wtol();
abs();
atan();
atoi();
atol();
bsearch();
ceil();
cos();
fabs();
floor();
fputwc();
isalnum();
isalpha();
iscntrl();
isdigit();
isgraph();
islower();
isprint();
ispunct();
isspace();
isupper();
iswalpha();
iswctype();
iswdigit();
iswlower();
iswspace();
iswxdigit();
isxdigit();
labs();
log();
mbstowcs();
mbtowc();
memchr();
memcmp();
memcpy();
memmove();
memset();
pow();
qsort();
sin();
sprintf();
sqrt();
sscanf();
strcat();
strchr();
strcmp();
strcpy();
strcspn();
strlen();
strncat();
strncmp();
strncpy();
strpbrk();
strrchr();
strspn();
strstr();
strtol();
strtoul();
swprintf();
tan();
tolower();
toupper();
towlower();
towupper();
ungetc();
vDbgPrintEx();
vDbgPrintExWithPrefix();
vDbgPrintExWithPrefixInternal();
vsprintf();
wcscat();
wcschr();
wcscmp();
wcscpy();
wcscspn();
wcslen();
wcsncat();
wcsncmp();
wcsncpy();
wcspbrk();
wcsrchr();
wcsspn();
wcsstr();
wcstol();
wcstombs();
wcstoul();
wctomb();
