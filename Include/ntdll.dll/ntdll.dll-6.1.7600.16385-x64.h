struct LIST_ENTRY32;
struct LIST_ENTRY64;
struct _ACCESS_REASONS;
struct _ACCESS_STATE;
struct _ACL;
struct _ACTIVATION_CONTEXT;
struct _ACTIVATION_CONTEXT_DATA;
struct _ACTIVATION_CONTEXT_STACK;
struct _ALPC_PROCESS_CONTEXT;
struct _ASSEMBLY_STORAGE_MAP;
struct _AUX_ACCESS_DATA;
struct _CACHED_KSTACK_LIST;
struct _CACHE_DESCRIPTOR;
struct _CLIENT_ID;
struct _CM_FULL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_LIST;
struct _CM_RESOURCE_LIST;
struct _COMPRESSED_DATA_INFO;
struct _CONTEXT;
struct _COUNTER_READING;
struct _CURDIR;
struct _DEVICE_CAPABILITIES;
struct _DEVICE_OBJECT;
struct _DEVICE_OBJECT_POWER_EXTENSION;
struct _DEVOBJ_EXTENSION;
struct _DISPATCHER_HEADER;
struct _DPH_BLOCK_INFORMATION;
struct _DPH_HEAP_BLOCK;
struct _DPH_HEAP_ROOT;
struct _DRIVER_EXTENSION;
struct _DRIVER_OBJECT;
struct _ECP_LIST;
struct _EJOB;
struct _EPROCESS;
struct _EPROCESS_QUOTA_BLOCK;
struct _ERESOURCE;
struct _ETHREAD;
struct _EVENT_DATA_DESCRIPTOR;
struct _EVENT_DESCRIPTOR;
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
struct _FLS_CALLBACK_INFO;
struct _FS_FILTER_CALLBACKS;
struct _FS_FILTER_CALLBACK_DATA;
struct _GDI_TEB_BATCH;
struct _GENERAL_LOOKASIDE;
struct _GENERAL_LOOKASIDE_POOL;
struct _GENERIC_MAPPING;
struct _GROUP_AFFINITY;
struct _GUID;
struct _HANDLE_TABLE;
struct _HANDLE_TABLE_ENTRY;
struct _HANDLE_TABLE_ENTRY_INFO;
struct _HANDLE_TRACE_DB_ENTRY;
struct _HANDLE_TRACE_DEBUG_INFO;
struct _HARDWARE_PTE;
struct _HEAP;
struct _HEAP_BUCKET;
struct _HEAP_COUNTERS;
struct _HEAP_DEBUGGING_INFORMATION;
struct _HEAP_ENTRY;
struct _HEAP_ENTRY_EXTRA;
struct _HEAP_FAILURE_INFORMATION;
struct _HEAP_FREE_ENTRY;
struct _HEAP_LIST_LOOKUP;
struct _HEAP_LOCAL_DATA;
struct _HEAP_LOCAL_SEGMENT_INFO;
struct _HEAP_LOCK;
struct _HEAP_PSEUDO_TAG_ENTRY;
struct _HEAP_SEGMENT;
struct _HEAP_SUBSEGMENT;
struct _HEAP_TAG_ENTRY;
struct _HEAP_TUNING_PARAMETERS;
struct _HEAP_UCR_DESCRIPTOR;
struct _HEAP_USERDATA_HEADER;
struct _IMAGE_DATA_DIRECTORY;
struct _IMAGE_DOS_HEADER;
struct _IMAGE_FILE_HEADER;
struct _IMAGE_NT_HEADERS64;
struct _IMAGE_OPTIONAL_HEADER64;
struct _INITIAL_PRIVILEGE_SET;
struct _INTERFACE;
struct _INTERLOCK_SEQ;
struct _IO_CLIENT_EXTENSION;
struct _IO_COMPLETION_CONTEXT;
struct _IO_DRIVER_CREATE_CONTEXT;
struct _IO_PRIORITY_INFO;
struct _IO_RESOURCE_DESCRIPTOR;
struct _IO_RESOURCE_LIST;
struct _IO_RESOURCE_REQUIREMENTS_LIST;
struct _IO_SECURITY_CONTEXT;
struct _IO_STACK_LOCATION;
struct _IO_STATUS_BLOCK;
struct _IO_STATUS_BLOCK32;
struct _IO_TIMER;
struct _IRP;
struct _JOB_ACCESS_STATE;
struct _KAFFINITY_EX;
struct _KAPC;
struct _KAPC_STATE;
struct _KDESCRIPTOR;
struct _KDEVICE_QUEUE;
struct _KDEVICE_QUEUE_ENTRY;
struct _KDPC;
struct _KDPC_DATA;
struct _KERNEL_STACK_CONTROL;
struct _KERNEL_STACK_SEGMENT;
struct _KEVENT;
struct _KGATE;
struct _KGUARDED_MUTEX;
struct _KNODE;
struct _KPCR;
struct _KPRCB;
struct _KPROCESS;
struct _KPROCESSOR_STATE;
struct _KQUEUE;
struct _KREQUEST_PACKET;
struct _KSEMAPHORE;
struct _KSPECIAL_REGISTERS;
struct _KSPIN_LOCK_QUEUE;
struct _KSTACK_AREA;
struct _KSYSTEM_TIME;
struct _KTHREAD;
struct _KTHREAD_COUNTERS;
struct _KTIMER;
struct _KTIMER_TABLE;
struct _KTIMER_TABLE_ENTRY;
struct _KTRAP_FRAME;
struct _KTSS64;
struct _KUSER_SHARED_DATA;
struct _KWAIT_BLOCK;
struct _LDR_DATA_TABLE_ENTRY;
struct _LFH_BLOCK_ZONE;
struct _LFH_HEAP;
struct _LIST_ENTRY;
struct _LOOKASIDE_LIST_EX;
struct _LUID;
struct _LUID_AND_ATTRIBUTES;
struct _M128A;
struct _MAILSLOT_CREATE_PARAMETERS;
struct _MCA_EXCEPTION;
struct _MDL;
struct _MMADDRESS_NODE;
struct _MMSUPPORT;
struct _MMSUPPORT_FLAGS;
struct _MMWSL;
struct _MM_AVL_TABLE;
struct _MM_DRIVER_VERIFIER_DATA;
struct _MM_PAGE_ACCESS_INFO;
struct _MM_PAGE_ACCESS_INFO_HEADER;
struct _NAMED_PIPE_CREATE_PARAMETERS;
struct _NPAGED_LOOKASIDE_LIST;
struct _NT_TIB;
struct _OBJECT_ATTRIBUTES;
struct _OBJECT_DUMP_CONTROL;
struct _OBJECT_HANDLE_INFORMATION;
struct _OBJECT_NAME_INFORMATION;
struct _OBJECT_TYPE;
struct _OBJECT_TYPE_INITIALIZER;
struct _OWNER_ENTRY;
struct _PAGED_LOOKASIDE_LIST;
struct _PAGEFAULT_HISTORY;
struct _PEB;
struct _PEB_LDR_DATA;
struct _PERFINFO_GROUPMASK;
struct _PF_KERNEL_GLOBALS;
struct _POWER_SEQUENCE;
struct _PO_DIAG_STACK_RECORD;
struct _PPM_FFH_THROTTLE_STATE_INFO;
struct _PPM_IDLE_STATE;
struct _PPM_IDLE_STATES;
struct _PP_LOOKASIDE_LIST;
struct _PRIVILEGE_SET;
struct _PROCESSOR_NUMBER;
struct _PROCESSOR_POWER_STATE;
struct _PROC_HISTORY_ENTRY;
struct _PROC_IDLE_ACCOUNTING;
struct _PROC_IDLE_SNAP;
struct _PROC_IDLE_STATE_ACCOUNTING;
struct _PROC_IDLE_STATE_BUCKET;
struct _PROC_PERF_CONSTRAINT;
struct _PROC_PERF_DOMAIN;
struct _PROC_PERF_LOAD;
struct _PS_CPU_QUOTA_BLOCK;
struct _PS_PER_CPU_QUOTA_CACHE_AWARE;
struct _QUAD;
struct _REQUEST_MAILBOX;
struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME;
struct _RTL_AVL_TABLE;
struct _RTL_BALANCED_LINKS;
struct _RTL_BITMAP;
struct _RTL_CRITICAL_SECTION;
struct _RTL_CRITICAL_SECTION_DEBUG;
struct _RTL_DRIVE_LETTER_CURDIR;
struct _RTL_DYNAMIC_HASH_TABLE;
struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT;
struct _RTL_DYNAMIC_HASH_TABLE_ENTRY;
struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR;
struct _RTL_SRWLOCK;
struct _RTL_STACK_DATABASE_LOCK;
struct _RTL_STACK_TRACE_ENTRY;
struct _RTL_STD_LIST_ENTRY;
struct _RTL_STD_LIST_HEAD;
struct _RTL_TRACE_BLOCK;
struct _RTL_TRACE_DATABASE;
struct _RTL_TRACE_SEGMENT;
struct _RTL_USER_PROCESS_PARAMETERS;
struct _SCSI_REQUEST_BLOCK;
struct _SECTION_OBJECT_POINTERS;
struct _SECURITY_DESCRIPTOR;
struct _SECURITY_QUALITY_OF_SERVICE;
struct _SECURITY_SUBJECT_CONTEXT;
struct _SE_AUDIT_PROCESS_CREATION_INFO;
struct _SID;
struct _SID_IDENTIFIER_AUTHORITY;
struct _SINGLE_LIST_ENTRY;
struct _SINGLE_LIST_ENTRY32;
struct _SLIST_ENTRY;
struct _STACK_TRACE_DATABASE;
struct _STRING;
struct _SYSTEM_POWER_STATE_CONTEXT;
struct _TEB;
struct _TEB_ACTIVE_FRAME;
struct _TEB_ACTIVE_FRAME_CONTEXT;
struct _TERMINATION_PORT;
struct _THREAD_PERFORMANCE_DATA;
struct _TP_CALLBACK_ENVIRON_V3;
struct _TP_CALLBACK_INSTANCE;
struct _TP_CLEANUP_GROUP;
struct _TP_DIRECT;
struct _TP_NBQ_GUARD;
struct _TP_POOL;
struct _TP_TASK;
struct _TP_TASK_CALLBACKS;
struct _TXN_PARAMETER_BLOCK;
struct _UMS_CONTROL_BLOCK;
struct _UNICODE_STRING;
struct _USER_MEMORY_CACHE_ENTRY;
struct _VPB;
struct _WAIT_CONTEXT_BLOCK;
struct _WHEA_ERROR_PACKET_V2;
struct _WHEA_ERROR_RECORD;
struct _WHEA_ERROR_RECORD_HEADER;
struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR;
struct _XSAVE_AREA;
struct _XSAVE_AREA_HEADER;
struct _XSAVE_FORMAT;
struct _XSTATE_CONFIGURATION;
struct _XSTATE_CONTEXT;
struct _XSTATE_FEATURE;
struct _XSTATE_SAVE;
struct _flags;

union _FS_FILTER_PARAMETERS;
union _HEAP_BUCKET_COUNTERS;
union _HEAP_BUCKET_RUN_INFO;
union _KEXECUTE_OPTIONS;
union _KGDTENTRY64;
union _KIDTENTRY64;
union _KSTACK_COUNT;
union _KWAIT_STATUS_REGISTER;
union _LARGE_INTEGER;
union _MCI_ADDR;
union _MCI_STATS;
union _MM_PAGE_ACCESS_INFO_FLAGS;
union _POWER_STATE;
union _PSP_CPU_QUOTA_APC;
union _PSP_CPU_SHARE_CAPTURED_WEIGHT_DATA;
union _PS_CLIENT_SECURITY_CONTEXT;
union _SLIST_HEADER;
union _ULARGE_INTEGER;
union _WHEA_ERROR_PACKET_FLAGS;
union _WHEA_ERROR_RECORD_HEADER_FLAGS;
union _WHEA_ERROR_RECORD_HEADER_VALIDBITS;
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS;
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS;
union _WHEA_PERSISTENCE_INFO;
union _WHEA_REVISION;
union _WHEA_TIMESTAMP;

enum BUS_QUERY_ID_TYPE;
enum DEVICE_TEXT_TYPE;
enum DISPLAYCONFIG_SCANLINE_ORDERING;
enum LSA_FOREST_TRUST_RECORD_TYPE;
enum MCA_EXCEPTION_TYPE;
enum POWER_ACTION;
enum PS_CREATE_STATE;
enum ReplacesCorHdrNumericDefines;
enum _ALTERNATIVE_ARCHITECTURE_TYPE;
enum _DEVICE_POWER_STATE;
enum _DEVICE_RELATION_TYPE;
enum _DEVICE_USAGE_NOTIFICATION_TYPE;
enum _EVENT_TYPE;
enum _EXCEPTION_DISPOSITION;
enum _FILE_INFORMATION_CLASS;
enum _FSINFOCLASS;
enum _FS_FILTER_SECTION_SYNC_TYPE;
enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE;
enum _HARDWARE_COUNTER_TYPE;
enum _HEAP_FAILURE_TYPE;
enum _INTERFACE_TYPE;
enum _INTERLOCKED_RESULT;
enum _IO_ALLOCATION_ACTION;
enum _IO_PRIORITY_HINT;
enum _IRQ_PRIORITY;
enum _KOBJECTS;
enum _KPROCESS_STATE;
enum _KWAIT_BLOCK_STATE;
enum _KWAIT_STATE;
enum _MEMORY_CACHING_TYPE_ORIG;
enum _MM_PAGE_ACCESS_TYPE;
enum _MODE;
enum _NT_PRODUCT_TYPE;
enum _OB_OPEN_REASON;
enum _PF_FILE_ACCESS_TYPE;
enum _POOL_TYPE;
enum _POWER_STATE_TYPE;
enum _PP_NPAGED_LOOKASIDE_NUMBER;
enum _PROCESSOR_CACHE_TYPE;
enum _PROC_HYPERVISOR_STATE;
enum _PS_ATTRIBUTE_NUM;
enum _PS_IFEO_KEY_STATE;
enum _PS_RESOURCE_TYPE;
enum _PS_STD_HANDLE_STATE;
enum _REG_NOTIFY_CLASS;
enum _RTL_GENERIC_COMPARE_RESULTS;
enum _SECURITY_IMPERSONATION_LEVEL;
enum _SECURITY_OPERATION_CODE;
enum _SYSTEM_POWER_STATE;
enum _TP_CALLBACK_PRIORITY;
enum _WHEA_ERROR_PACKET_DATA_FORMAT;
enum _WHEA_ERROR_SEVERITY;
enum _WHEA_ERROR_SOURCE_TYPE;
enum _WHEA_ERROR_TYPE;
enum _WORKING_SET_TYPE;

typedef struct LIST_ENTRY32 {
    ULONG Flink;
    ULONG Blink;
};

typedef struct LIST_ENTRY64 {
    ULONG64 Flink;
    ULONG64 Blink;
};

typedef struct _ACCESS_REASONS {
    ULONG Data[32];
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

typedef struct _ACL {
    UCHAR AclRevision;
    UCHAR Sbz1;
    USHORT AclSize;
    USHORT AceCount;
    USHORT Sbz2;
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

typedef struct _ALPC_PROCESS_CONTEXT {
    struct _EX_PUSH_LOCK Lock;
    struct _LIST_ENTRY ViewListHead;
    ULONG64 PagedPoolQuotaCache;
};

typedef struct _ASSEMBLY_STORAGE_MAP {
};

typedef struct _AUX_ACCESS_DATA {
    struct _PRIVILEGE_SET *PrivilegesUsed;
    struct _GENERIC_MAPPING GenericMapping;
    ULONG AccessesToAudit;
    ULONG MaximumAuditMask;
    struct _GUID TransactionId;
    PVOID NewSecurityDescriptor;
    PVOID ExistingSecurityDescriptor;
    PVOID ParentSecurityDescriptor;
    PVOID DeRefSecurityDescriptor;
    PVOID SDLock;
    struct _ACCESS_REASONS AccessReasons;
};

typedef struct _CACHED_KSTACK_LIST {
    union _SLIST_HEADER SListHead;
    LONG MinimumFree;
    ULONG Misses;
    ULONG MissesLast;
    ULONG Pad0;
};

typedef struct _CACHE_DESCRIPTOR {
    UCHAR Level;
    UCHAR Associativity;
    USHORT LineSize;
    ULONG Size;
    enum _PROCESSOR_CACHE_TYPE Type;
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
    USHORT CompressionFormatAndEngine;
    UCHAR CompressionUnitShift;
    UCHAR ChunkShift;
    UCHAR ClusterShift;
    UCHAR Reserved;
    USHORT NumberOfChunks;
    ULONG CompressedChunkSizes[1];
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

typedef struct _COUNTER_READING {
    enum _HARDWARE_COUNTER_TYPE Type;
    ULONG Index;
    ULONG64 Start;
    ULONG64 Total;
};

typedef struct _CURDIR {
    struct _UNICODE_STRING DosPath;
    PVOID Handle;
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
    struct _LIST_ENTRY DependentList;
    struct _LIST_ENTRY ProviderList;
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

typedef struct _DPH_BLOCK_INFORMATION {
    ULONG StartStamp;
    PVOID Heap;
    ULONG64 RequestedSize;
    ULONG64 ActualSize;
    struct _LIST_ENTRY FreeQueue;
    struct _SLIST_ENTRY FreePushList;
    USHORT TraceIndex;
    PVOID StackTrace;
    ULONG Padding;
    ULONG EndStamp;
};

typedef struct _DPH_HEAP_BLOCK {
    struct _DPH_HEAP_BLOCK *pNextAlloc;
    struct _LIST_ENTRY AvailableEntry;
    struct _RTL_BALANCED_LINKS TableLinks;
    PUCHAR pUserAllocation;
    PUCHAR pVirtualBlock;
    ULONG64 nVirtualBlockSize;
    ULONG64 nVirtualAccessSize;
    ULONG64 nUserRequestedSize;
    ULONG64 nUserActualSize;
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
    ULONG64 nVirtualStorageBytes;
    struct _RTL_AVL_TABLE BusyNodesTable;
    struct _DPH_HEAP_BLOCK *NodeToAllocate;
    ULONG nBusyAllocations;
    ULONG64 nBusyAllocationBytesCommitted;
    struct _DPH_HEAP_BLOCK *pFreeAllocationListHead;
    struct _DPH_HEAP_BLOCK *pFreeAllocationListTail;
    ULONG nFreeAllocations;
    ULONG64 nFreeAllocationBytesCommitted;
    struct _LIST_ENTRY AvailableAllocationHead;
    ULONG nAvailableAllocations;
    ULONG64 nAvailableAllocationBytesCommitted;
    struct _DPH_HEAP_BLOCK *pUnusedNodeListHead;
    struct _DPH_HEAP_BLOCK *pUnusedNodeListTail;
    ULONG nUnusedNodes;
    ULONG64 nBusyAllocationBytesAccessible;
    struct _DPH_HEAP_BLOCK *pNodePoolListHead;
    struct _DPH_HEAP_BLOCK *pNodePoolListTail;
    ULONG nNodePools;
    ULONG64 nNodePoolBytes;
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

typedef struct _ECP_LIST {
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
    ULONG64 MinimumWorkingSetSize;
    ULONG64 MaximumWorkingSetSize;
    ULONG LimitFlags;
    ULONG ActiveProcessLimit;
    struct _KAFFINITY_EX Affinity;
    UCHAR PriorityClass;
    struct _JOB_ACCESS_STATE *AccessState;
    ULONG UIRestrictionsClass;
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
    ULONG64 ProcessMemoryLimit;
    ULONG64 JobMemoryLimit;
    ULONG64 PeakProcessMemoryUsed;
    ULONG64 PeakJobMemoryUsed;
    ULONG64 CurrentJobMemoryUsed;
    struct _EX_PUSH_LOCK MemoryLimitsLock;
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
    ULONG64 ProcessQuotaUsage[2];
    ULONG64 ProcessQuotaPeak[2];
    ULONG64 CommitCharge;
    struct _EPROCESS_QUOTA_BLOCK *QuotaBlock;
    struct _PS_CPU_QUOTA_BLOCK *CpuQuotaBlock;
    ULONG64 PeakVirtualSize;
    ULONG64 VirtualSize;
    struct _LIST_ENTRY SessionProcessLinks;
    PVOID DebugPort;
    PVOID ExceptionPortData;
    ULONG64 ExceptionPortValue;
    ULONG64 ExceptionPortState : 3;
    struct _HANDLE_TABLE *ObjectTable;
    struct _EX_FAST_REF Token;
    ULONG64 WorkingSetPage;
    struct _EX_PUSH_LOCK AddressCreationLock;
    struct _ETHREAD *RotateInProgress;
    struct _ETHREAD *ForkInProgress;
    ULONG64 HardwareTrigger;
    struct _MM_AVL_TABLE *PhysicalVadRoot;
    PVOID CloneRoot;
    ULONG64 NumberOfPrivatePages;
    ULONG64 NumberOfLockedPages;
    PVOID Win32Process;
    struct _EJOB *Job;
    PVOID SectionObject;
    PVOID SectionBaseAddress;
    ULONG Cookie;
    ULONG Spare8;
    struct _PAGEFAULT_HISTORY *WorkingSetWatch;
    PVOID Win32WindowStation;
    PVOID InheritedFromUniqueProcessId;
    PVOID LdtInformation;
    PVOID Spare;
    ULONG64 ConsoleHostProcess;
    PVOID DeviceMap;
    PVOID EtwDataSource;
    PVOID FreeTebHint;
    struct _HARDWARE_PTE PageDirectoryPte;
    ULONG64 Filler;
    PVOID Session;
    UCHAR ImageFileName[15];
    UCHAR PriorityClass;
    struct _LIST_ENTRY JobLinks;
    PVOID LockedPagesList;
    struct _LIST_ENTRY ThreadListHead;
    PVOID SecurityPort;
    PVOID Wow64Process;
    ULONG ActiveThreads;
    ULONG ImagePathHash;
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
    ULONG64 CommitChargeLimit;
    ULONG64 CommitChargePeak;
    PVOID AweInfo;
    struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;
    struct _MMSUPPORT Vm;
    struct _LIST_ENTRY MmProcessLinks;
    PVOID HighestUserAddress;
    ULONG ModifiedPageCount;
    ULONG Flags2;
    ULONG JobNotReallyActive : 1;
    ULONG AccountingFolded : 1;
    ULONG NewProcessReported : 1;
    ULONG ExitProcessReported : 1;
    ULONG ReportCommitChanges : 1;
    ULONG LastReportMemory : 1;
    ULONG ReportPhysicalPageChanges : 1;
    ULONG HandleTableRundown : 1;
    ULONG NeedsHandleRundown : 1;
    ULONG RefTraceEnabled : 1;
    ULONG NumaAware : 1;
    ULONG ProtectedProcess : 1;
    ULONG DefaultPagePriority : 3;
    ULONG PrimaryTokenFrozen : 1;
    ULONG ProcessVerifierTarget : 1;
    ULONG StackRandomizationDisabled : 1;
    ULONG AffinityPermanent : 1;
    ULONG AffinityUpdateEnable : 1;
    ULONG PropagateNode : 1;
    ULONG ExplicitAffinity : 1;
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
    ULONG DeprioritizeViews : 1;
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
    ULONG CrossSessionCreate : 1;
    ULONG ProcessInserted : 1;
    ULONG DefaultIoPriority : 3;
    ULONG ProcessSelfDelete : 1;
    ULONG SetTimerResolutionLink : 1;
    LONG ExitStatus;
    struct _MM_AVL_TABLE VadRoot;
    struct _ALPC_PROCESS_CONTEXT AlpcContext;
    struct _LIST_ENTRY TimerResolutionLink;
    ULONG RequestedTimerResolution;
    ULONG ActiveThreadsHighWatermark;
    ULONG SmallestTimerResolution;
    struct _PO_DIAG_STACK_RECORD *TimerResolutionStackRecord;
};

typedef struct _EPROCESS_QUOTA_BLOCK {
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
    struct _KTHREAD Tcb;
    union _LARGE_INTEGER CreateTime;
    union _LARGE_INTEGER ExitTime;
    struct _LIST_ENTRY KeyedWaitChain;
    LONG ExitStatus;
    struct _LIST_ENTRY PostBlockList;
    PVOID ForwardLinkShadow;
    PVOID StartAddress;
    struct _TERMINATION_PORT *TerminationPort;
    struct _ETHREAD *ReaperLink;
    PVOID KeyedWaitValue;
    ULONG64 ActiveTimerListLock;
    struct _LIST_ENTRY ActiveTimerListHead;
    struct _CLIENT_ID Cid;
    struct _KSEMAPHORE KeyedWaitSemaphore;
    struct _KSEMAPHORE AlpcWaitSemaphore;
    union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;
    struct _LIST_ENTRY IrpList;
    ULONG64 TopLevelIrp;
    struct _DEVICE_OBJECT *DeviceToVerify;
    union _PSP_CPU_QUOTA_APC *CpuQuotaApc;
    PVOID Win32StartAddress;
    PVOID LegacyPowerObject;
    struct _LIST_ENTRY ThreadListEntry;
    struct _EX_RUNDOWN_REF RundownProtect;
    struct _EX_PUSH_LOCK ThreadLock;
    ULONG ReadClusterSize;
    LONG MmLockOrdering;
    ULONG CrossThreadFlags;
    ULONG Terminated : 1;
    ULONG ThreadInserted : 1;
    ULONG HideFromDebugger : 1;
    ULONG ActiveImpersonationInfo : 1;
    ULONG SystemThread : 1;
    ULONG HardErrorsAreDisabled : 1;
    ULONG BreakOnTermination : 1;
    ULONG SkipCreationMsg : 1;
    ULONG SkipTerminationMsg : 1;
    ULONG CopyTokenOnOpen : 1;
    ULONG ThreadIoPriority : 3;
    ULONG ThreadPagePriority : 3;
    ULONG RundownFail : 1;
    ULONG NeedsWorkingSetAging : 1;
    ULONG SameThreadPassiveFlags;
    ULONG ActiveExWorker : 1;
    ULONG ExWorkerCanWaitUser : 1;
    ULONG MemoryMaker : 1;
    ULONG ClonedThread : 1;
    ULONG KeyedEventInUse : 1;
    ULONG RateApcState : 2;
    ULONG SelfTerminate : 1;
    ULONG SameThreadApcFlags;
    UCHAR Spare : 1;
    UCHAR StartAddressInvalid : 1;
    UCHAR EtwPageFaultCalloutActive : 1;
    UCHAR OwnsProcessWorkingSetExclusive : 1;
    UCHAR OwnsProcessWorkingSetShared : 1;
    UCHAR OwnsSystemCacheWorkingSetExclusive : 1;
    UCHAR OwnsSystemCacheWorkingSetShared : 1;
    UCHAR OwnsSessionWorkingSetExclusive : 1;
    UCHAR OwnsSessionWorkingSetShared : 1;
    UCHAR OwnsProcessAddressSpaceExclusive : 1;
    UCHAR OwnsProcessAddressSpaceShared : 1;
    UCHAR SuppressSymbolLoad : 1;
    UCHAR Prefetching : 1;
    UCHAR OwnsDynamicMemoryShared : 1;
    UCHAR OwnsChangeControlAreaExclusive : 1;
    UCHAR OwnsChangeControlAreaShared : 1;
    UCHAR OwnsPagedPoolWorkingSetExclusive : 1;
    UCHAR OwnsPagedPoolWorkingSetShared : 1;
    UCHAR OwnsSystemPtesWorkingSetExclusive : 1;
    UCHAR OwnsSystemPtesWorkingSetShared : 1;
    UCHAR TrimTrigger : 2;
    UCHAR Spare1 : 2;
    UCHAR PriorityRegionActive;
    UCHAR CacheManagerActive;
    UCHAR DisablePageFaultClustering;
    UCHAR ActiveFaultCount;
    UCHAR LockOrderState;
    ULONG64 AlpcMessageId;
    PVOID AlpcMessage;
    ULONG AlpcReceiveAttributeSet;
    struct _LIST_ENTRY AlpcWaitListEntry;
    ULONG CacheManagerCount;
    ULONG IoBoostCount;
    ULONG64 IrpListLock;
    PVOID ReservedForSynchTracking;
    struct _SINGLE_LIST_ENTRY CmCallbackListHead;
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
    ULONG64 ExceptionInformation[15];
};

typedef struct _EXCEPTION_REGISTRATION_RECORD {
    struct _EXCEPTION_REGISTRATION_RECORD *Next;
    enum _EXCEPTION_DISPOSITION *Handler;
};

typedef struct _EX_FAST_REF {
    PVOID Object;
    ULONG64 RefCnt : 4;
    ULONG64 Value;
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

typedef struct _EX_PUSH_LOCK_CACHE_AWARE {
    struct _EX_PUSH_LOCK *Locks[32];
};

typedef struct _EX_PUSH_LOCK_WAIT_BLOCK {
    struct _KEVENT WakeEvent;
    struct _EX_PUSH_LOCK_WAIT_BLOCK *Next;
    struct _EX_PUSH_LOCK_WAIT_BLOCK *Last;
    struct _EX_PUSH_LOCK_WAIT_BLOCK *Previous;
    LONG ShareCount;
    LONG Flags;
};

typedef struct _EX_RUNDOWN_REF {
    ULONG64 Count;
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

typedef struct _FLS_CALLBACK_INFO {
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

typedef struct _GDI_TEB_BATCH {
    ULONG Offset;
    ULONG64 HDC;
    ULONG Buffer[310];
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

typedef struct _GENERIC_MAPPING {
    ULONG GenericRead;
    ULONG GenericWrite;
    ULONG GenericExecute;
    ULONG GenericAll;
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

typedef struct _HANDLE_TABLE {
    ULONG64 TableCode;
    struct _EPROCESS *QuotaProcess;
    PVOID UniqueProcessId;
    struct _EX_PUSH_LOCK HandleLock;
    struct _LIST_ENTRY HandleTableList;
    struct _EX_PUSH_LOCK HandleContentionEvent;
    struct _HANDLE_TRACE_DEBUG_INFO *DebugInfo;
    LONG ExtraInfoPages;
    ULONG Flags;
    UCHAR StrictFIFO : 1;
    ULONG FirstFreeHandle;
    struct _HANDLE_TABLE_ENTRY *LastFreeHandleEntry;
    ULONG HandleCount;
    ULONG NextHandleNeedingPool;
    ULONG HandleCountHighWatermark;
};

typedef struct _HANDLE_TABLE_ENTRY {
    PVOID Object;
    ULONG ObAttributes;
    struct _HANDLE_TABLE_ENTRY_INFO *InfoTable;
    ULONG64 Value;
    ULONG GrantedAccess;
    USHORT GrantedAccessIndex;
    USHORT CreatorBackTraceIndex;
    ULONG NextFreeTableEntry;
};

typedef struct _HANDLE_TABLE_ENTRY_INFO {
    ULONG AuditMask;
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
    ULONG64 PageFrameNumber : 28;
    ULONG64 reserved1 : 12;
    ULONG64 SoftwareWsIndex : 11;
    ULONG64 NoExecute : 1;
};

typedef struct _HEAP {
    struct _HEAP_ENTRY Entry;
    ULONG SegmentSignature;
    ULONG SegmentFlags;
    struct _LIST_ENTRY SegmentListEntry;
    struct _HEAP *Heap;
    PVOID BaseAddress;
    ULONG NumberOfPages;
    struct _HEAP_ENTRY *FirstEntry;
    struct _HEAP_ENTRY *LastValidEntry;
    ULONG NumberOfUnCommittedPages;
    ULONG NumberOfUnCommittedRanges;
    USHORT SegmentAllocatorBackTraceIndex;
    USHORT Reserved;
    struct _LIST_ENTRY UCRSegmentList;
    ULONG Flags;
    ULONG ForceFlags;
    ULONG CompatibilityFlags;
    ULONG EncodeFlagMask;
    struct _HEAP_ENTRY Encoding;
    ULONG64 PointerKey;
    ULONG Interceptor;
    ULONG VirtualMemoryThreshold;
    ULONG Signature;
    ULONG64 SegmentReserve;
    ULONG64 SegmentCommit;
    ULONG64 DeCommitFreeBlockThreshold;
    ULONG64 DeCommitTotalFreeThreshold;
    ULONG64 TotalFreeSize;
    ULONG64 MaximumAllocationSize;
    USHORT ProcessHeapsListIndex;
    USHORT HeaderValidateLength;
    PVOID HeaderValidateCopy;
    USHORT NextAvailableTagIndex;
    USHORT MaximumTagIndex;
    struct _HEAP_TAG_ENTRY *TagEntries;
    struct _LIST_ENTRY UCRList;
    ULONG64 AlignRound;
    ULONG64 AlignMask;
    struct _LIST_ENTRY VirtualAllocdBlocks;
    struct _LIST_ENTRY SegmentList;
    USHORT AllocatorBackTraceIndex;
    ULONG NonDedicatedListLength;
    PVOID BlocksIndex;
    PVOID UCRIndex;
    struct _HEAP_PSEUDO_TAG_ENTRY *PseudoTagEntries;
    struct _LIST_ENTRY FreeLists;
    struct _HEAP_LOCK *LockVariable;
    PLONG CommitRoutine;
    PVOID FrontEndHeap;
    USHORT FrontHeapLockCount;
    UCHAR FrontEndHeapType;
    struct _HEAP_COUNTERS Counters;
    struct _HEAP_TUNING_PARAMETERS TuningParameters;
};

typedef struct _HEAP_BUCKET {
    USHORT BlockUnits;
    UCHAR SizeIndex;
    UCHAR UseAffinity : 1;
    UCHAR DebugFlags : 2;
};

typedef struct _HEAP_COUNTERS {
    ULONG64 TotalMemoryReserved;
    ULONG64 TotalMemoryCommitted;
    ULONG64 TotalMemoryLargeUCR;
    ULONG64 TotalSizeInVirtualBlocks;
    ULONG TotalSegments;
    ULONG TotalUCRs;
    ULONG CommittOps;
    ULONG DeCommitOps;
    ULONG LockAcquires;
    ULONG LockCollisions;
    ULONG CommitRate;
    ULONG DecommittRate;
    ULONG CommitFailures;
    ULONG InBlockCommitFailures;
    ULONG CompactHeapCalls;
    ULONG CompactedUCRs;
    ULONG AllocAndFreeOps;
    ULONG InBlockDeccommits;
    ULONG64 InBlockDeccomitSize;
    ULONG64 HighWatermarkSize;
    ULONG64 LastPolledSize;
};

typedef struct _HEAP_DEBUGGING_INFORMATION {
    PVOID InterceptorFunction;
    USHORT InterceptorValue;
    ULONG ExtendedOptions;
    ULONG StackTraceDepth;
    ULONG64 MinTotalBlockSize;
    ULONG64 MaxTotalBlockSize;
    PLONG HeapLeakEnumerationRoutine;
};

typedef struct _HEAP_ENTRY {
    PVOID PreviousBlockPrivateData;
    USHORT Size;
    UCHAR Flags;
    UCHAR SmallTagIndex;
    USHORT PreviousSize;
    UCHAR SegmentOffset;
    UCHAR LFHFlags;
    UCHAR UnusedBytes;
    ULONG64 CompactHeader;
    PVOID Reserved;
    USHORT FunctionIndex;
    USHORT ContextValue;
    ULONG InterceptorValue;
    USHORT UnusedBytesLength;
    UCHAR EntryOffset;
    UCHAR ExtendedBlockSignature;
    PVOID ReservedForAlignment;
    ULONG Code1;
    USHORT Code2;
    UCHAR Code3;
    UCHAR Code4;
    ULONG64 AgregateCode;
};

typedef struct _HEAP_ENTRY_EXTRA {
    USHORT AllocatorBackTraceIndex;
    USHORT TagIndex;
    ULONG64 Settable;
    ULONG64 ZeroInit;
    ULONG64 ZeroInit1;
};

typedef struct _HEAP_FAILURE_INFORMATION {
    ULONG Version;
    ULONG StructureSize;
    enum _HEAP_FAILURE_TYPE FailureType;
    PVOID HeapAddress;
    PVOID Address;
    PVOID Param1;
    PVOID Param2;
    PVOID Param3;
    struct _HEAP_ENTRY *PreviousBlock;
    struct _HEAP_ENTRY *NextBlock;
    struct _HEAP_ENTRY ExpectedEncodedEntry;
    struct _HEAP_ENTRY ExpectedDecodedEntry;
    PVOID StackTrace[32];
};

typedef struct _HEAP_FREE_ENTRY {
    PVOID PreviousBlockPrivateData;
    USHORT Size;
    UCHAR Flags;
    UCHAR SmallTagIndex;
    USHORT PreviousSize;
    UCHAR SegmentOffset;
    UCHAR LFHFlags;
    UCHAR UnusedBytes;
    ULONG64 CompactHeader;
    PVOID Reserved;
    USHORT FunctionIndex;
    USHORT ContextValue;
    ULONG InterceptorValue;
    USHORT UnusedBytesLength;
    UCHAR EntryOffset;
    UCHAR ExtendedBlockSignature;
    PVOID ReservedForAlignment;
    ULONG Code1;
    USHORT Code2;
    UCHAR Code3;
    UCHAR Code4;
    ULONG64 AgregateCode;
    struct _LIST_ENTRY FreeList;
};

typedef struct _HEAP_LIST_LOOKUP {
    struct _HEAP_LIST_LOOKUP *ExtendedLookup;
    ULONG ArraySize;
    ULONG ExtraItem;
    ULONG ItemCount;
    ULONG OutOfRangeItems;
    ULONG BaseIndex;
    struct _LIST_ENTRY *ListHead;
    PULONG ListsInUseUlong;
    struct _LIST_ENTRY **ListHints;
};

typedef struct _HEAP_LOCAL_DATA {
    union _SLIST_HEADER DeletedSubSegments;
    struct _LFH_BLOCK_ZONE *CrtZone;
    struct _LFH_HEAP *LowFragHeap;
    ULONG Sequence;
    struct _HEAP_LOCAL_SEGMENT_INFO SegmentInfo[128];
};

typedef struct _HEAP_LOCAL_SEGMENT_INFO {
    struct _HEAP_SUBSEGMENT *Hint;
    struct _HEAP_SUBSEGMENT *ActiveSubsegment;
    struct _HEAP_SUBSEGMENT *CachedItems[16];
    union _SLIST_HEADER SListHeader;
    union _HEAP_BUCKET_COUNTERS Counters;
    struct _HEAP_LOCAL_DATA *LocalData;
    ULONG LastOpSequence;
    USHORT BucketIndex;
    USHORT LastUsed;
};

typedef struct _HEAP_LOCK {
    union {
        struct _RTL_CRITICAL_SECTION CriticalSection;
    } Lock;
};

typedef struct _HEAP_PSEUDO_TAG_ENTRY {
    ULONG Allocs;
    ULONG Frees;
    ULONG64 Size;
};

typedef struct _HEAP_SEGMENT {
    struct _HEAP_ENTRY Entry;
    ULONG SegmentSignature;
    ULONG SegmentFlags;
    struct _LIST_ENTRY SegmentListEntry;
    struct _HEAP *Heap;
    PVOID BaseAddress;
    ULONG NumberOfPages;
    struct _HEAP_ENTRY *FirstEntry;
    struct _HEAP_ENTRY *LastValidEntry;
    ULONG NumberOfUnCommittedPages;
    ULONG NumberOfUnCommittedRanges;
    USHORT SegmentAllocatorBackTraceIndex;
    USHORT Reserved;
    struct _LIST_ENTRY UCRSegmentList;
};

typedef struct _HEAP_SUBSEGMENT {
    struct _HEAP_LOCAL_SEGMENT_INFO *LocalInfo;
    struct _HEAP_USERDATA_HEADER *UserBlocks;
    struct _INTERLOCK_SEQ AggregateExchg;
    USHORT BlockSize;
    USHORT Flags;
    USHORT BlockCount;
    UCHAR SizeIndex;
    UCHAR AffinityIndex;
    ULONG Alignment[2];
    struct _SINGLE_LIST_ENTRY SFreeListEntry;
    ULONG Lock;
};

typedef struct _HEAP_TAG_ENTRY {
    ULONG Allocs;
    ULONG Frees;
    ULONG64 Size;
    USHORT TagIndex;
    USHORT CreatorBackTraceIndex;
    WCHAR TagName[24];
};

typedef struct _HEAP_TUNING_PARAMETERS {
    ULONG CommittThresholdShift;
    ULONG64 MaxPreCommittThreshold;
};

typedef struct _HEAP_UCR_DESCRIPTOR {
    struct _LIST_ENTRY ListEntry;
    struct _LIST_ENTRY SegmentEntry;
    PVOID Address;
    ULONG64 Size;
};

typedef struct _HEAP_USERDATA_HEADER {
    struct _SINGLE_LIST_ENTRY SFreeListEntry;
    struct _HEAP_SUBSEGMENT *SubSegment;
    PVOID Reserved;
    ULONG64 SizeIndex;
    ULONG64 Signature;
};

typedef struct _IMAGE_DATA_DIRECTORY {
    ULONG VirtualAddress;
    ULONG Size;
};

typedef struct _IMAGE_DOS_HEADER {
    USHORT e_magic;
    USHORT e_cblp;
    USHORT e_cp;
    USHORT e_crlc;
    USHORT e_cparhdr;
    USHORT e_minalloc;
    USHORT e_maxalloc;
    USHORT e_ss;
    USHORT e_sp;
    USHORT e_csum;
    USHORT e_ip;
    USHORT e_cs;
    USHORT e_lfarlc;
    USHORT e_ovno;
    USHORT e_res[4];
    USHORT e_oemid;
    USHORT e_oeminfo;
    USHORT e_res2[10];
    LONG e_lfanew;
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

typedef struct _IMAGE_NT_HEADERS64 {
    ULONG Signature;
    struct _IMAGE_FILE_HEADER FileHeader;
    struct _IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};

typedef struct _IMAGE_OPTIONAL_HEADER64 {
    USHORT Magic;
    UCHAR MajorLinkerVersion;
    UCHAR MinorLinkerVersion;
    ULONG SizeOfCode;
    ULONG SizeOfInitializedData;
    ULONG SizeOfUninitializedData;
    ULONG AddressOfEntryPoint;
    ULONG BaseOfCode;
    ULONG64 ImageBase;
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
    ULONG64 SizeOfStackReserve;
    ULONG64 SizeOfStackCommit;
    ULONG64 SizeOfHeapReserve;
    ULONG64 SizeOfHeapCommit;
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

typedef struct _INTERLOCK_SEQ {
    USHORT Depth;
    USHORT FreeEntryOffset;
    ULONG OffsetAndDepth;
    ULONG Sequence;
    LONG64 Exchg;
};

typedef struct _IO_CLIENT_EXTENSION {
    struct _IO_CLIENT_EXTENSION *NextExtension;
    PVOID ClientIdentificationAddress;
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

typedef struct _IO_PRIORITY_INFO {
    ULONG Size;
    ULONG ThreadPriority;
    ULONG PagePriority;
    enum _IO_PRIORITY_HINT IoPriority;
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

typedef struct _IO_STATUS_BLOCK32 {
    LONG Status;
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

typedef struct _JOB_ACCESS_STATE {
};

typedef struct _KAFFINITY_EX {
    USHORT Count;
    USHORT Size;
    ULONG Reserved;
    ULONG64 Bitmap[4];
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

typedef struct _KDPC_DATA {
    struct _LIST_ENTRY DpcListHead;
    ULONG64 DpcLock;
    LONG DpcQueueDepth;
    ULONG DpcCount;
};

typedef struct _KERNEL_STACK_CONTROL {
    struct _KERNEL_STACK_SEGMENT Current;
    struct _KERNEL_STACK_SEGMENT Previous;
};

typedef struct _KERNEL_STACK_SEGMENT {
    ULONG64 StackBase;
    ULONG64 StackLimit;
    ULONG64 KernelStack;
    ULONG64 InitialStack;
    ULONG64 ActualLimit;
};

typedef struct _KEVENT {
    struct _DISPATCHER_HEADER Header;
};

typedef struct _KGATE {
    struct _DISPATCHER_HEADER Header;
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

typedef struct _KNODE {
    union _SLIST_HEADER PagedPoolSListHead;
    union _SLIST_HEADER NonPagedPoolSListHead[3];
    struct _GROUP_AFFINITY Affinity;
    ULONG ProximityId;
    USHORT NodeNumber;
    USHORT PrimaryNodeNumber;
    UCHAR MaximumProcessors;
    UCHAR Color;
    struct _flags Flags;
    UCHAR NodePad0;
    ULONG Seed;
    ULONG MmShiftedColor;
    ULONG64 FreeCount[2];
    ULONG Right;
    ULONG Left;
    struct _CACHED_KSTACK_LIST CachedKernelStacks;
    LONG ParkLock;
    ULONG NodePad1;
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
    struct _KPRCB Prcb;
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
    struct _KSPIN_LOCK_QUEUE LockQueue[17];
    struct _PP_LOOKASIDE_LIST PPLookasideList[16];
    struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];
    struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];
    LONG PacketBarrier;
    struct _SINGLE_LIST_ENTRY DeferredReadyListHead;
    LONG MmPageFaultCount;
    LONG MmCopyOnWriteCount;
    LONG MmTransitionCount;
    LONG MmDemandZeroCount;
    LONG MmPageReadCount;
    LONG MmPageReadIoCount;
    LONG MmDirtyPagesWriteCount;
    LONG MmDirtyWriteIoCount;
    LONG MmMappedPagesWriteCount;
    LONG MmMappedWriteIoCount;
    ULONG KeSystemCalls;
    ULONG KeContextSwitches;
    ULONG CcFastReadNoWait;
    ULONG CcFastReadWait;
    ULONG CcFastReadNotPossible;
    ULONG CcCopyReadNoWait;
    ULONG CcCopyReadWait;
    ULONG CcCopyReadNoWaitMiss;
    LONG LookasideIrpFloat;
    LONG IoReadOperationCount;
    LONG IoWriteOperationCount;
    LONG IoOtherOperationCount;
    union _LARGE_INTEGER IoReadTransferCount;
    union _LARGE_INTEGER IoWriteTransferCount;
    union _LARGE_INTEGER IoOtherTransferCount;
    LONG TargetCount;
    ULONG IpiFrozen;
    struct _KDPC_DATA DpcData[2];
    PVOID DpcStack;
    LONG MaximumDpcQueueDepth;
    ULONG DpcRequestRate;
    ULONG MinimumDpcRate;
    ULONG DpcLastCount;
    UCHAR ThreadDpcEnable;
    UCHAR QuantumEnd;
    UCHAR DpcRoutineActive;
    UCHAR IdleSchedule;
    LONG DpcRequestSummary;
    SHORT DpcRequestSlot[2];
    SHORT NormalDpcState;
    USHORT DpcThreadActive : 1;
    SHORT ThreadDpcState;
    ULONG TimerHand;
    LONG MasterOffset;
    ULONG LastTick;
    ULONG UnusedPad;
    ULONG64 PrcbPad50[2];
    struct _KTIMER_TABLE TimerTable;
    struct _KGATE DpcGate;
    PVOID PrcbPad52;
    struct _KDPC CallDpc;
    LONG ClockKeepAlive;
    UCHAR ClockCheckSlot;
    UCHAR ClockPollCycle;
    USHORT NmiActive;
    LONG DpcWatchdogPeriod;
    LONG DpcWatchdogCount;
    ULONG64 TickOffset;
    LONG KeSpinLockOrdering;
    ULONG PrcbPad70;
    struct _LIST_ENTRY WaitListHead;
    ULONG64 WaitLock;
    ULONG ReadySummary;
    ULONG QueueIndex;
    struct _KDPC TimerExpirationDpc;
    ULONG64 PrcbPad72[4];
    struct _LIST_ENTRY DispatcherReadyListHead[32];
    ULONG InterruptCount;
    ULONG KernelTime;
    ULONG UserTime;
    ULONG DpcTime;
    ULONG InterruptTime;
    ULONG AdjustDpcThreshold;
    UCHAR DebuggerSavedIRQL;
    UCHAR PrcbPad80[7];
    ULONG DpcTimeCount;
    ULONG DpcTimeLimit;
    ULONG PeriodicCount;
    ULONG PeriodicBias;
    ULONG AvailableTime;
    ULONG KeExceptionDispatchCount;
    struct _KNODE *ParentNode;
    ULONG64 StartCycles;
    ULONG64 PrcbPad82[3];
    LONG MmSpinLockOrdering;
    ULONG PageColor;
    ULONG NodeColor;
    ULONG NodeShiftedColor;
    ULONG SecondaryColorMask;
    ULONG PrcbPad83;
    ULONG64 CycleTime;
    ULONG CcFastMdlReadNoWait;
    ULONG CcFastMdlReadWait;
    ULONG CcFastMdlReadNotPossible;
    ULONG CcMapDataNoWait;
    ULONG CcMapDataWait;
    ULONG CcPinMappedDataCount;
    ULONG CcPinReadNoWait;
    ULONG CcPinReadWait;
    ULONG CcMdlReadNoWait;
    ULONG CcMdlReadWait;
    ULONG CcLazyWriteHotSpots;
    ULONG CcLazyWriteIos;
    ULONG CcLazyWritePages;
    ULONG CcDataFlushes;
    ULONG CcDataPages;
    ULONG CcLostDelayedWrites;
    ULONG CcFastReadResourceMiss;
    ULONG CcCopyReadWaitMiss;
    ULONG CcFastMdlReadResourceMiss;
    ULONG CcMapDataNoWaitMiss;
    ULONG CcMapDataWaitMiss;
    ULONG CcPinReadNoWaitMiss;
    ULONG CcPinReadWaitMiss;
    ULONG CcMdlReadNoWaitMiss;
    ULONG CcMdlReadWaitMiss;
    ULONG CcReadAheadIos;
    LONG MmCacheTransitionCount;
    LONG MmCacheReadCount;
    LONG MmCacheIoCount;
    ULONG PrcbPad91[1];
    ULONG64 RuntimeAccumulation;
    struct _PROCESSOR_POWER_STATE PowerState;
    UCHAR PrcbPad92[16];
    ULONG KeAlignmentFixupCount;
    struct _KDPC DpcWatchdogDpc;
    struct _KTIMER DpcWatchdogTimer;
    struct _CACHE_DESCRIPTOR Cache[5];
    ULONG CacheCount;
    ULONG CachedCommit;
    ULONG CachedResidentAvailable;
    PVOID HyperPte;
    PVOID WheaInfo;
    PVOID EtwSupport;
    union _SLIST_HEADER InterruptObjectPool;
    union _SLIST_HEADER HypercallPageList;
    PVOID HypercallPageVirtual;
    PVOID VirtualApicAssist;
    PULONG64 StatisticsPage;
    PVOID RateControl;
    ULONG64 CacheProcessorMask[5];
    struct _KAFFINITY_EX PackageProcessorSet;
    ULONG64 CoreProcessorSet;
    PVOID PebsIndexAddress;
    ULONG64 PrcbPad93[12];
    ULONG SpinLockAcquireCount;
    ULONG SpinLockContentionCount;
    ULONG SpinLockSpinCount;
    ULONG IpiSendRequestBroadcastCount;
    ULONG IpiSendRequestRoutineCount;
    ULONG IpiSendSoftwareInterruptCount;
    ULONG ExInitializeResourceCount;
    ULONG ExReInitializeResourceCount;
    ULONG ExDeleteResourceCount;
    ULONG ExecutiveResourceAcquiresCount;
    ULONG ExecutiveResourceContentionsCount;
    ULONG ExecutiveResourceReleaseExclusiveCount;
    ULONG ExecutiveResourceReleaseSharedCount;
    ULONG ExecutiveResourceConvertsCount;
    ULONG ExAcqResExclusiveAttempts;
    ULONG ExAcqResExclusiveAcquiresExclusive;
    ULONG ExAcqResExclusiveAcquiresExclusiveRecursive;
    ULONG ExAcqResExclusiveWaits;
    ULONG ExAcqResExclusiveNotAcquires;
    ULONG ExAcqResSharedAttempts;
    ULONG ExAcqResSharedAcquiresExclusive;
    ULONG ExAcqResSharedAcquiresShared;
    ULONG ExAcqResSharedAcquiresSharedRecursive;
    ULONG ExAcqResSharedWaits;
    ULONG ExAcqResSharedNotAcquires;
    ULONG ExAcqResSharedStarveExclusiveAttempts;
    ULONG ExAcqResSharedStarveExclusiveAcquiresExclusive;
    ULONG ExAcqResSharedStarveExclusiveAcquiresShared;
    ULONG ExAcqResSharedStarveExclusiveAcquiresSharedRecursive;
    ULONG ExAcqResSharedStarveExclusiveWaits;
    ULONG ExAcqResSharedStarveExclusiveNotAcquires;
    ULONG ExAcqResSharedWaitForExclusiveAttempts;
    ULONG ExAcqResSharedWaitForExclusiveAcquiresExclusive;
    ULONG ExAcqResSharedWaitForExclusiveAcquiresShared;
    ULONG ExAcqResSharedWaitForExclusiveAcquiresSharedRecursive;
    ULONG ExAcqResSharedWaitForExclusiveWaits;
    ULONG ExAcqResSharedWaitForExclusiveNotAcquires;
    ULONG ExSetResOwnerPointerExclusive;
    ULONG ExSetResOwnerPointerSharedNew;
    ULONG ExSetResOwnerPointerSharedOld;
    ULONG ExTryToAcqExclusiveAttempts;
    ULONG ExTryToAcqExclusiveAcquires;
    ULONG ExBoostExclusiveOwner;
    ULONG ExBoostSharedOwners;
    ULONG ExEtwSynchTrackingNotificationsCount;
    ULONG ExEtwSynchTrackingNotificationsAccountedCount;
    UCHAR VendorString[13];
    UCHAR PrcbPad10[3];
    ULONG FeatureBits;
    union _LARGE_INTEGER UpdateSignature;
    struct _CONTEXT *Context;
    ULONG ContextFlags;
    struct _XSAVE_AREA *ExtendedState;
    struct _REQUEST_MAILBOX *Mailbox;
    struct _REQUEST_MAILBOX RequestMailbox[1];
};

typedef struct _KPROCESS {
    struct _DISPATCHER_HEADER Header;
    struct _LIST_ENTRY ProfileListHead;
    ULONG64 DirectoryTableBase;
    struct _LIST_ENTRY ThreadListHead;
    ULONG64 ProcessLock;
    struct _KAFFINITY_EX Affinity;
    struct _LIST_ENTRY ReadyListHead;
    struct _SINGLE_LIST_ENTRY SwapListEntry;
    struct _KAFFINITY_EX ActiveProcessors;
    LONG AutoAlignment : 1;
    LONG DisableBoost : 1;
    LONG DisableQuantum : 1;
    ULONG ActiveGroupsMask : 4;
    LONG ReservedFlags : 25;
    LONG ProcessFlags;
    CHAR BasePriority;
    CHAR QuantumReset;
    UCHAR Visited;
    UCHAR Unused3;
    ULONG ThreadSeed[4];
    USHORT IdealNode[4];
    USHORT IdealGlobalNode;
    union _KEXECUTE_OPTIONS Flags;
    UCHAR Unused1;
    ULONG Unused2;
    ULONG Unused4;
    union _KSTACK_COUNT StackCount;
    struct _LIST_ENTRY ProcessListEntry;
    ULONG64 CycleTime;
    ULONG KernelTime;
    ULONG UserTime;
    PVOID InstrumentationCallback;
    union _KGDTENTRY64 LdtSystemDescriptor;
    PVOID LdtBaseAddress;
    struct _KGUARDED_MUTEX LdtProcessLock;
    USHORT LdtFreeSelectorHint;
    USHORT LdtTableLength;
};

typedef struct _KPROCESSOR_STATE {
    struct _KSPECIAL_REGISTERS SpecialRegisters;
    struct _CONTEXT ContextFrame;
};

typedef struct _KQUEUE {
    struct _DISPATCHER_HEADER Header;
    struct _LIST_ENTRY EntryListHead;
    ULONG CurrentCount;
    ULONG MaximumCount;
    struct _LIST_ENTRY ThreadListHead;
};

typedef struct _KREQUEST_PACKET {
    PVOID CurrentPacket[3];
    PVOID WorkerRoutine;
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

typedef struct _KSTACK_AREA {
    struct _KERNEL_STACK_CONTROL StackControl;
    struct _XSAVE_FORMAT NpxFrame;
};

typedef struct _KSYSTEM_TIME {
    ULONG LowPart;
    LONG High1Time;
    LONG High2Time;
};

typedef struct _KTHREAD {
    struct _DISPATCHER_HEADER Header;
    ULONG64 CycleTime;
    ULONG64 QuantumTarget;
    PVOID InitialStack;
    PVOID StackLimit;
    PVOID KernelStack;
    ULONG64 ThreadLock;
    union _KWAIT_STATUS_REGISTER WaitRegister;
    UCHAR Running;
    UCHAR Alerted[2];
    ULONG KernelStackResident : 1;
    ULONG ReadyTransition : 1;
    ULONG ProcessReadyQueue : 1;
    ULONG WaitNext : 1;
    ULONG SystemAffinityActive : 1;
    ULONG Alertable : 1;
    ULONG GdiFlushActive : 1;
    ULONG UserStackWalkActive : 1;
    ULONG ApcInterruptRequest : 1;
    ULONG ForceDeferSchedule : 1;
    ULONG QuantumEndMigrate : 1;
    ULONG UmsDirectedSwitchEnable : 1;
    ULONG TimerActive : 1;
    ULONG Reserved : 19;
    LONG MiscFlags;
    struct _KAPC_STATE ApcState;
    UCHAR ApcStateFill[43];
    CHAR Priority;
    ULONG NextProcessor;
    ULONG DeferredProcessor;
    ULONG64 ApcQueueLock;
    LONG64 WaitStatus;
    struct _KWAIT_BLOCK *WaitBlockList;
    struct _LIST_ENTRY WaitListEntry;
    struct _SINGLE_LIST_ENTRY SwapListEntry;
    struct _KQUEUE *Queue;
    PVOID Teb;
    struct _KTIMER Timer;
    ULONG AutoAlignment : 1;
    ULONG DisableBoost : 1;
    ULONG EtwStackTraceApc1Inserted : 1;
    ULONG EtwStackTraceApc2Inserted : 1;
    ULONG CalloutActive : 1;
    ULONG ApcQueueable : 1;
    ULONG EnableStackSwap : 1;
    ULONG GuiThread : 1;
    ULONG UmsPerformingSyscall : 1;
    ULONG ReservedFlags : 23;
    LONG ThreadFlags;
    ULONG Spare0;
    struct _KWAIT_BLOCK WaitBlock[4];
    UCHAR WaitBlockFill4[44];
    ULONG ContextSwitches;
    UCHAR WaitBlockFill5[92];
    UCHAR State;
    CHAR NpxState;
    UCHAR WaitIrql;
    CHAR WaitMode;
    UCHAR WaitBlockFill6[140];
    ULONG WaitTime;
    UCHAR WaitBlockFill7[168];
    PVOID TebMappedLowVa;
    struct _UMS_CONTROL_BLOCK *Ucb;
    UCHAR WaitBlockFill8[188];
    SHORT KernelApcDisable;
    SHORT SpecialApcDisable;
    ULONG CombinedApcDisable;
    struct _LIST_ENTRY QueueListEntry;
    struct _KTRAP_FRAME *TrapFrame;
    PVOID FirstArgument;
    PVOID CallbackStack;
    ULONG64 CallbackDepth;
    UCHAR ApcStateIndex;
    CHAR BasePriority;
    CHAR PriorityDecrement;
    UCHAR ForegroundBoost : 4;
    UCHAR UnusualBoost : 4;
    UCHAR Preempted;
    UCHAR AdjustReason;
    CHAR AdjustIncrement;
    CHAR PreviousMode;
    CHAR Saturation;
    ULONG SystemCallNumber;
    ULONG FreezeCount;
    struct _GROUP_AFFINITY UserAffinity;
    struct _KPROCESS *Process;
    struct _GROUP_AFFINITY Affinity;
    ULONG IdealProcessor;
    ULONG UserIdealProcessor;
    struct _KAPC_STATE *ApcStatePointer[2];
    struct _KAPC_STATE SavedApcState;
    UCHAR SavedApcStateFill[43];
    UCHAR WaitReason;
    CHAR SuspendCount;
    CHAR Spare1;
    UCHAR CodePatchInProgress;
    PVOID Win32Thread;
    PVOID StackBase;
    struct _KAPC SuspendApc;
    UCHAR SuspendApcFill0[1];
    UCHAR ResourceIndex;
    UCHAR SuspendApcFill1[3];
    UCHAR QuantumReset;
    UCHAR SuspendApcFill2[4];
    ULONG KernelTime;
    UCHAR SuspendApcFill3[64];
    struct _KPRCB *WaitPrcb;
    UCHAR SuspendApcFill4[72];
    PVOID LegoData;
    UCHAR SuspendApcFill5[83];
    UCHAR LargeStack;
    ULONG UserTime;
    struct _KSEMAPHORE SuspendSemaphore;
    UCHAR SuspendSemaphorefill[28];
    ULONG SListFaultCount;
    struct _LIST_ENTRY ThreadListEntry;
    struct _LIST_ENTRY MutantListHead;
    PVOID SListFaultAddress;
    LONG64 ReadOperationCount;
    LONG64 WriteOperationCount;
    LONG64 OtherOperationCount;
    LONG64 ReadTransferCount;
    LONG64 WriteTransferCount;
    LONG64 OtherTransferCount;
    struct _KTHREAD_COUNTERS *ThreadCounters;
    struct _XSTATE_SAVE *XStateSave;
};

typedef struct _KTHREAD_COUNTERS {
    ULONG64 WaitReasonBitMap;
    struct _THREAD_PERFORMANCE_DATA *UserData;
    ULONG Flags;
    ULONG ContextSwitches;
    ULONG64 CycleTimeBias;
    ULONG64 HardwareCounters;
    struct _COUNTER_READING HwCounter[16];
};

typedef struct _KTIMER {
    struct _DISPATCHER_HEADER Header;
    union _ULARGE_INTEGER DueTime;
    struct _LIST_ENTRY TimerListEntry;
    struct _KDPC *Dpc;
    ULONG Processor;
    ULONG Period;
};

typedef struct _KTIMER_TABLE {
    struct _KTIMER *TimerExpiry[64];
    struct _KTIMER_TABLE_ENTRY TimerEntries[256];
};

typedef struct _KTIMER_TABLE_ENTRY {
    ULONG64 Lock;
    struct _LIST_ENTRY Entry;
    union _ULARGE_INTEGER Time;
};

typedef struct _KTRAP_FRAME {
    ULONG64 P1Home;
    ULONG64 P2Home;
    ULONG64 P3Home;
    ULONG64 P4Home;
    ULONG64 P5;
    CHAR PreviousMode;
    UCHAR PreviousIrql;
    UCHAR FaultIndicator;
    UCHAR ExceptionActive;
    ULONG MxCsr;
    ULONG64 Rax;
    ULONG64 Rcx;
    ULONG64 Rdx;
    ULONG64 R8;
    ULONG64 R9;
    ULONG64 R10;
    ULONG64 R11;
    ULONG64 GsBase;
    ULONG64 GsSwap;
    struct _M128A Xmm0;
    struct _M128A Xmm1;
    struct _M128A Xmm2;
    struct _M128A Xmm3;
    struct _M128A Xmm4;
    struct _M128A Xmm5;
    ULONG64 FaultAddress;
    ULONG64 ContextRecord;
    ULONG64 TimeStampCKCL;
    ULONG64 Dr0;
    ULONG64 Dr1;
    ULONG64 Dr2;
    ULONG64 Dr3;
    ULONG64 Dr6;
    ULONG64 Dr7;
    ULONG64 DebugControl;
    ULONG64 LastBranchToRip;
    ULONG64 LastBranchFromRip;
    ULONG64 LastExceptionToRip;
    ULONG64 LastExceptionFromRip;
    ULONG64 LastBranchControl;
    ULONG LastBranchMSR;
    USHORT SegDs;
    USHORT SegEs;
    USHORT SegFs;
    USHORT SegGs;
    ULONG64 TrapFrame;
    ULONG64 Rbx;
    ULONG64 Rdi;
    ULONG64 Rsi;
    ULONG64 Rbp;
    ULONG64 ErrorCode;
    ULONG64 ExceptionFrame;
    ULONG64 TimeStampKlog;
    ULONG64 Rip;
    USHORT SegCs;
    UCHAR Fill0;
    UCHAR Logging;
    USHORT Fill1[2];
    ULONG EFlags;
    ULONG Fill2;
    ULONG64 Rsp;
    USHORT SegSs;
    USHORT Fill3;
    LONG CodePatchCycle;
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

typedef struct _KWAIT_BLOCK {
    struct _LIST_ENTRY WaitListEntry;
    struct _KTHREAD *Thread;
    PVOID Object;
    struct _KWAIT_BLOCK *NextWaitBlock;
    USHORT WaitKey;
    UCHAR WaitType;
    UCHAR BlockState;
    LONG SpareLong;
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
    struct _LIST_ENTRY ForwarderLinks;
    struct _LIST_ENTRY ServiceTagLinks;
    struct _LIST_ENTRY StaticLinks;
    PVOID ContextInformation;
    ULONG64 OriginalBase;
    union _LARGE_INTEGER LoadTime;
};

typedef struct _LFH_BLOCK_ZONE {
    struct _LIST_ENTRY ListEntry;
    PVOID FreePointer;
    PVOID Limit;
};

typedef struct _LFH_HEAP {
    struct _RTL_CRITICAL_SECTION Lock;
    struct _LIST_ENTRY SubSegmentZones;
    ULONG64 ZoneBlockSize;
    PVOID Heap;
    ULONG SegmentChange;
    ULONG SegmentCreate;
    ULONG SegmentInsertInFree;
    ULONG SegmentDelete;
    ULONG CacheAllocs;
    ULONG CacheFrees;
    ULONG64 SizeInCache;
    union _HEAP_BUCKET_RUN_INFO RunInfo;
    struct _USER_MEMORY_CACHE_ENTRY UserBlockCache[12];
    struct _HEAP_BUCKET Buckets[128];
    struct _HEAP_LOCAL_DATA LocalData[1];
};

typedef struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
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

typedef struct _MAILSLOT_CREATE_PARAMETERS {
    ULONG MailslotQuota;
    ULONG MaximumMessageSize;
    union _LARGE_INTEGER ReadTimeout;
    UCHAR TimeoutSpecified;
};

typedef struct _MCA_EXCEPTION {
    ULONG VersionNumber;
    enum MCA_EXCEPTION_TYPE ExceptionType;
    union _LARGE_INTEGER TimeStamp;
    ULONG ProcessorNumber;
    ULONG Reserved1;
    union {
        struct {
            UCHAR BankNumber;
            UCHAR Reserved2[7];
            union _MCI_STATS Status;
            union _MCI_ADDR Address;
            ULONG64 Misc;
        } Mca;
        struct {
            ULONG64 Address;
            ULONG64 Type;
        } Mce;
    } u;
    ULONG ExtCnt;
    ULONG Reserved3;
    ULONG64 ExtReg[24];
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
        LONG64 Balance : 2;
        struct _MMADDRESS_NODE *Parent;
    } u1;
    struct _MMADDRESS_NODE *LeftChild;
    struct _MMADDRESS_NODE *RightChild;
    ULONG64 StartingVpn;
    ULONG64 EndingVpn;
};

typedef struct _MMSUPPORT {
    struct _EX_PUSH_LOCK WorkingSetMutex;
    struct _KGATE *ExitGate;
    PVOID AccessLog;
    struct _LIST_ENTRY WorkingSetExpansionLinks;
    ULONG AgeDistribution[7];
    ULONG MinimumWorkingSetSize;
    ULONG WorkingSetSize;
    ULONG WorkingSetPrivateSize;
    ULONG MaximumWorkingSetSize;
    ULONG ChargedWslePages;
    ULONG ActualWslePages;
    ULONG WorkingSetSizeOverhead;
    ULONG PeakWorkingSetSize;
    ULONG HardFaultCount;
    struct _MMWSL *VmWorkingSetList;
    USHORT NextPageColor;
    USHORT LastTrimStamp;
    ULONG PageFaultCount;
    ULONG RepurposeCount;
    ULONG Spare[2];
    struct _MMSUPPORT_FLAGS Flags;
};

typedef struct _MMSUPPORT_FLAGS {
    UCHAR WorkingSetType : 3;
    UCHAR ModwriterAttached : 1;
    UCHAR TrimHard : 1;
    UCHAR MaximumWorkingSetHard : 1;
    UCHAR ForceTrim : 1;
    UCHAR MinimumWorkingSetHard : 1;
    UCHAR SessionMaster : 1;
    UCHAR TrimmerState : 2;
    UCHAR Reserved : 1;
    UCHAR PageStealers : 4;
    UCHAR MemoryPriority : 8;
    UCHAR WsleDeleted : 1;
    UCHAR VmExiting : 1;
    UCHAR ExpansionFailed : 1;
    UCHAR Available : 5;
};

typedef struct _MMWSL {
};

typedef struct _MM_AVL_TABLE {
    struct _MMADDRESS_NODE BalancedRoot;
    ULONG64 DepthOfTree : 5;
    ULONG64 Unused : 3;
    ULONG64 NumberGenericTableElements : 56;
    PVOID NodeHint;
    PVOID NodeFreeHint;
};

typedef struct _MM_DRIVER_VERIFIER_DATA {
    ULONG Level;
    ULONG RaiseIrqls;
    ULONG AcquireSpinLocks;
    ULONG SynchronizeExecutions;
    ULONG AllocationsAttempted;
    ULONG AllocationsSucceeded;
    ULONG AllocationsSucceededSpecialPool;
    ULONG AllocationsWithNoTag;
    ULONG TrimRequests;
    ULONG Trims;
    ULONG AllocationsFailed;
    ULONG AllocationsFailedDeliberately;
    ULONG Loads;
    ULONG Unloads;
    ULONG UnTrackedPool;
    ULONG UserTrims;
    ULONG CurrentPagedPoolAllocations;
    ULONG CurrentNonPagedPoolAllocations;
    ULONG PeakPagedPoolAllocations;
    ULONG PeakNonPagedPoolAllocations;
    ULONG64 PagedBytes;
    ULONG64 NonPagedBytes;
    ULONG64 PeakPagedBytes;
    ULONG64 PeakNonPagedBytes;
    ULONG BurstAllocationsFailedDeliberately;
    ULONG SessionTrims;
    ULONG OptionChanges;
    ULONG VerifyMode;
    struct _UNICODE_STRING PreviousBucketName;
    ULONG ActivityCounter;
    ULONG PreviousActivityCounter;
    ULONG WorkerTrimRequests;
};

typedef struct _MM_PAGE_ACCESS_INFO {
    union _MM_PAGE_ACCESS_INFO_FLAGS Flags;
    ULONG64 FileOffset;
    PVOID VirtualAddress;
    PVOID PointerProtoPte;
};

typedef struct _MM_PAGE_ACCESS_INFO_HEADER {
    struct _SINGLE_LIST_ENTRY Link;
    enum _MM_PAGE_ACCESS_TYPE Type;
    ULONG EmptySequenceNumber;
    ULONG CurrentFileIndex;
    ULONG64 CreateTime;
    ULONG64 EmptyTime;
    struct _MM_PAGE_ACCESS_INFO *TempEntry;
    struct _MM_PAGE_ACCESS_INFO *PageEntry;
    PULONG64 FileEntry;
    PULONG64 FirstFileEntry;
    struct _EPROCESS *Process;
    ULONG SessionId;
    PULONG64 PageFrameEntry;
    PULONG64 LastPageFrameEntry;
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

typedef struct _OBJECT_ATTRIBUTES {
    ULONG Length;
    PVOID RootDirectory;
    struct _UNICODE_STRING *ObjectName;
    ULONG Attributes;
    PVOID SecurityDescriptor;
    PVOID SecurityQualityOfService;
};

typedef struct _OBJECT_DUMP_CONTROL {
    PVOID Stream;
    ULONG Detail;
};

typedef struct _OBJECT_HANDLE_INFORMATION {
    ULONG HandleAttributes;
    ULONG GrantedAccess;
};

typedef struct _OBJECT_NAME_INFORMATION {
    struct _UNICODE_STRING Name;
};

typedef struct _OBJECT_TYPE {
    struct _LIST_ENTRY TypeList;
    struct _UNICODE_STRING Name;
    PVOID DefaultObject;
    UCHAR Index;
    ULONG TotalNumberOfObjects;
    ULONG TotalNumberOfHandles;
    ULONG HighWaterNumberOfObjects;
    ULONG HighWaterNumberOfHandles;
    struct _OBJECT_TYPE_INITIALIZER TypeInfo;
    struct _EX_PUSH_LOCK TypeLock;
    ULONG Key;
    struct _LIST_ENTRY CallbackList;
};

typedef struct _OBJECT_TYPE_INITIALIZER {
    USHORT Length;
    UCHAR ObjectTypeFlags;
    UCHAR CaseInsensitive : 1;
    UCHAR UnnamedObjectsOnly : 1;
    UCHAR UseDefaultObject : 1;
    UCHAR SecurityRequired : 1;
    UCHAR MaintainHandleCount : 1;
    UCHAR MaintainTypeList : 1;
    UCHAR SupportsObjectCallbacks : 1;
    ULONG ObjectTypeCode;
    ULONG InvalidAttributes;
    struct _GENERIC_MAPPING GenericMapping;
    ULONG ValidAccessMask;
    ULONG RetainAccess;
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
    ULONG64 OwnerThread;
    ULONG IoPriorityBoosted : 1;
    ULONG OwnerReferenced : 1;
    ULONG OwnerCount : 30;
    ULONG TableSize;
};

typedef struct _PAGED_LOOKASIDE_LIST {
    struct _GENERAL_LOOKASIDE L;
};

typedef struct _PAGEFAULT_HISTORY {
};

typedef struct _PEB {
    UCHAR InheritedAddressSpace;
    UCHAR ReadImageFileExecOptions;
    UCHAR BeingDebugged;
    UCHAR BitField;
    UCHAR ImageUsesLargePages : 1;
    UCHAR IsProtectedProcess : 1;
    UCHAR IsLegacyProcess : 1;
    UCHAR IsImageDynamicallyRelocated : 1;
    UCHAR SkipPatchingUser32Forwarders : 1;
    UCHAR SpareBits : 3;
    PVOID Mutant;
    PVOID ImageBaseAddress;
    struct _PEB_LDR_DATA *Ldr;
    struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters;
    PVOID SubSystemData;
    PVOID ProcessHeap;
    struct _RTL_CRITICAL_SECTION *FastPebLock;
    PVOID AtlThunkSListPtr;
    PVOID IFEOKey;
    ULONG CrossProcessFlags;
    ULONG ProcessInJob : 1;
    ULONG ProcessInitializing : 1;
    ULONG ProcessUsingVEH : 1;
    ULONG ProcessUsingVCH : 1;
    ULONG ProcessUsingFTH : 1;
    ULONG ReservedBits0 : 27;
    PVOID KernelCallbackTable;
    PVOID UserSharedInfoPtr;
    ULONG SystemReserved[1];
    ULONG AtlThunkSListPtr32;
    PVOID ApiSetMap;
    ULONG TlsExpansionCounter;
    PVOID TlsBitmap;
    ULONG TlsBitmapBits[2];
    PVOID ReadOnlySharedMemoryBase;
    PVOID HotpatchInformation;
    PVOID *ReadOnlyStaticServerData;
    PVOID AnsiCodePageData;
    PVOID OemCodePageData;
    PVOID UnicodeCaseTableData;
    ULONG NumberOfProcessors;
    ULONG NtGlobalFlag;
    union _LARGE_INTEGER CriticalSectionTimeout;
    ULONG64 HeapSegmentReserve;
    ULONG64 HeapSegmentCommit;
    ULONG64 HeapDeCommitTotalFreeThreshold;
    ULONG64 HeapDeCommitFreeBlockThreshold;
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
    ULONG64 ActiveProcessAffinityMask;
    ULONG GdiHandleBuffer[60];
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
    ULONG64 MinimumStackCommit;
    struct _FLS_CALLBACK_INFO *FlsCallback;
    struct _LIST_ENTRY FlsListHead;
    PVOID FlsBitmap;
    ULONG FlsBitmapBits[4];
    ULONG FlsHighIndex;
    PVOID WerRegistrationData;
    PVOID WerShipAssertPtr;
    PVOID pContextData;
    PVOID pImageHeaderHash;
    ULONG TracingFlags;
    ULONG HeapTracingEnabled : 1;
    ULONG CritSecTracingEnabled : 1;
    ULONG SpareTracingBits : 30;
};

typedef struct _PEB_LDR_DATA {
    ULONG Length;
    UCHAR Initialized;
    PVOID SsHandle;
    struct _LIST_ENTRY InLoadOrderModuleList;
    struct _LIST_ENTRY InMemoryOrderModuleList;
    struct _LIST_ENTRY InInitializationOrderModuleList;
    PVOID EntryInProgress;
    UCHAR ShutdownInProgress;
    PVOID ShutdownThreadId;
};

typedef struct _PERFINFO_GROUPMASK {
    ULONG Masks[8];
};

typedef struct _PF_KERNEL_GLOBALS {
    ULONG64 AccessBufferAgeThreshold;
    struct _EX_RUNDOWN_REF AccessBufferRef;
    struct _KEVENT AccessBufferExistsEvent;
    ULONG AccessBufferMax;
    union _SLIST_HEADER AccessBufferList;
    LONG StreamSequenceNumber;
    ULONG Flags;
    LONG ScenarioPrefetchCount;
};

typedef struct _POWER_SEQUENCE {
    ULONG SequenceD1;
    ULONG SequenceD2;
    ULONG SequenceD3;
};

typedef struct _PO_DIAG_STACK_RECORD {
    ULONG StackDepth;
    PVOID Stack[1];
};

typedef struct _PPM_FFH_THROTTLE_STATE_INFO {
    UCHAR EnableLogging;
    ULONG MismatchCount;
    UCHAR Initialized;
    ULONG64 LastValue;
    union _LARGE_INTEGER LastLogTickCount;
};

typedef struct _PPM_IDLE_STATE {
    struct _KAFFINITY_EX DomainMembers;
    PLONG IdleCheck;
    PVOID IdleHandler;
    PVOID Context;
    ULONG Latency;
    ULONG Power;
    ULONG TimeCheck;
    ULONG StateFlags;
    UCHAR PromotePercent;
    UCHAR DemotePercent;
    UCHAR PromotePercentBase;
    UCHAR DemotePercentBase;
    UCHAR StateType;
};

typedef struct _PPM_IDLE_STATES {
    ULONG Count;
    union {
        ULONG AsULONG;
        ULONG AllowScaling : 1;
        ULONG Disabled : 1;
        ULONG HvMaxCState : 4;
        ULONG Reserved : 26;
    } Flags;
    ULONG TargetState;
    ULONG ActualState;
    ULONG OldState;
    UCHAR NewlyUnparked;
    struct _KAFFINITY_EX TargetProcessors;
    struct _PPM_IDLE_STATE State[1];
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

typedef struct _PROCESSOR_NUMBER {
    USHORT Group;
    UCHAR Number;
    UCHAR Reserved;
};

typedef struct _PROCESSOR_POWER_STATE {
    struct _PPM_IDLE_STATES *IdleStates;
    ULONG64 IdleTimeLast;
    ULONG64 IdleTimeTotal;
    ULONG64 IdleTimeEntry;
    struct _PROC_IDLE_ACCOUNTING *IdleAccounting;
    enum _PROC_HYPERVISOR_STATE Hypervisor;
    ULONG PerfHistoryTotal;
    UCHAR ThermalConstraint;
    UCHAR PerfHistoryCount;
    UCHAR PerfHistorySlot;
    UCHAR Reserved;
    ULONG LastSysTime;
    ULONG64 WmiDispatchPtr;
    LONG WmiInterfaceEnabled;
    struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;
    struct _KDPC PerfActionDpc;
    LONG PerfActionMask;
    struct _PROC_IDLE_SNAP IdleCheck;
    struct _PROC_IDLE_SNAP PerfCheck;
    struct _PROC_PERF_DOMAIN *Domain;
    struct _PROC_PERF_CONSTRAINT *PerfConstraint;
    struct _PROC_PERF_LOAD *Load;
    struct _PROC_HISTORY_ENTRY *PerfHistory;
    ULONG Utility;
    ULONG OverUtilizedHistory;
    ULONG AffinityCount;
    ULONG AffinityHistory;
};

typedef struct _PROC_HISTORY_ENTRY {
    USHORT Utility;
    UCHAR Frequency;
    UCHAR Reserved;
};

typedef struct _PROC_IDLE_ACCOUNTING {
    ULONG StateCount;
    ULONG TotalTransitions;
    ULONG ResetCount;
    ULONG64 StartTime;
    ULONG64 BucketLimits[16];
    struct _PROC_IDLE_STATE_ACCOUNTING State[1];
};

typedef struct _PROC_IDLE_SNAP {
    ULONG64 Time;
    ULONG64 Idle;
};

typedef struct _PROC_IDLE_STATE_ACCOUNTING {
    ULONG64 TotalTime;
    ULONG IdleTransitions;
    ULONG FailedTransitions;
    ULONG InvalidBucketIndex;
    ULONG64 MinTime;
    ULONG64 MaxTime;
    struct _PROC_IDLE_STATE_BUCKET IdleTimeBuckets[16];
};

typedef struct _PROC_IDLE_STATE_BUCKET {
    ULONG64 TotalTime;
    ULONG64 MinTime;
    ULONG64 MaxTime;
    ULONG Count;
};

typedef struct _PROC_PERF_CONSTRAINT {
    struct _KPRCB *Prcb;
    ULONG64 PerfContext;
    ULONG PercentageCap;
    ULONG ThermalCap;
    ULONG TargetFrequency;
    ULONG AcumulatedFullFrequency;
    ULONG AcumulatedZeroFrequency;
    ULONG FrequencyHistoryTotal;
    ULONG AverageFrequency;
};

typedef struct _PROC_PERF_DOMAIN {
    struct _LIST_ENTRY Link;
    struct _KPRCB *Master;
    struct _KAFFINITY_EX Members;
    PUCHAR FeedbackHandler;
    PVOID GetFFHThrottleState;
    PVOID BoostPolicyHandler;
    PULONG PerfSelectionHandler;
    PVOID PerfHandler;
    struct _PROC_PERF_CONSTRAINT *Processors;
    ULONG64 PerfChangeTime;
    ULONG ProcessorCount;
    ULONG PreviousFrequencyMhz;
    ULONG CurrentFrequencyMhz;
    ULONG PreviousFrequency;
    ULONG CurrentFrequency;
    ULONG CurrentPerfContext;
    ULONG DesiredFrequency;
    ULONG MaxFrequency;
    ULONG MinPerfPercent;
    ULONG MinThrottlePercent;
    ULONG MaxPercent;
    ULONG MinPercent;
    ULONG ConstrainedMaxPercent;
    ULONG ConstrainedMinPercent;
    UCHAR Coordination;
    LONG PerfChangeIntervalCount;
};

typedef struct _PROC_PERF_LOAD {
    UCHAR BusyPercentage;
    UCHAR FrequencyPercentage;
};

typedef struct _PS_CPU_QUOTA_BLOCK {
    struct _LIST_ENTRY ListEntry;
    ULONG SessionId;
    ULONG CpuShareWeight;
    union _PSP_CPU_SHARE_CAPTURED_WEIGHT_DATA CapturedWeightData;
    ULONG DuplicateInputMarker : 1;
    ULONG Reserved : 31;
    LONG MiscFlags;
    ULONG64 BlockCurrentGenerationLock;
    ULONG64 CyclesAccumulated;
    ULONG64 CycleCredit;
    ULONG BlockCurrentGeneration;
    ULONG CpuCyclePercent;
    UCHAR CyclesFinishedForCurrentGeneration;
    struct _PS_PER_CPU_QUOTA_CACHE_AWARE Cpu[256];
};

typedef struct _PS_PER_CPU_QUOTA_CACHE_AWARE {
    struct _LIST_ENTRY SortedListEntry;
    struct _LIST_ENTRY IdleOnlyListHead;
    ULONG64 CycleBaseAllowance;
    LONG64 CyclesRemaining;
    ULONG CurrentGeneration;
};

typedef struct _QUAD {
    LONG64 UseThisFieldToCopy;
    DOUBLE DoNotUseThisField;
};

typedef struct _REQUEST_MAILBOX {
    struct _REQUEST_MAILBOX *Next;
    LONG64 RequestSummary;
    struct _KREQUEST_PACKET RequestPacket;
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

typedef struct _RTL_BITMAP {
    ULONG SizeOfBitMap;
    PULONG Buffer;
};

typedef struct _RTL_CRITICAL_SECTION {
    struct _RTL_CRITICAL_SECTION_DEBUG *DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    PVOID OwningThread;
    PVOID LockSemaphore;
    ULONG64 SpinCount;
};

typedef struct _RTL_CRITICAL_SECTION_DEBUG {
    USHORT Type;
    USHORT CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    struct _LIST_ENTRY ProcessLocksList;
    ULONG EntryCount;
    ULONG ContentionCount;
    ULONG Flags;
    USHORT CreatorBackTraceIndexHigh;
    USHORT SpareUSHORT;
};

typedef struct _RTL_DRIVE_LETTER_CURDIR {
    USHORT Flags;
    USHORT Length;
    ULONG TimeStamp;
    struct _STRING DosPath;
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

typedef struct _RTL_SRWLOCK {
    ULONG64 Locked : 1;
    ULONG64 Waiting : 1;
    ULONG64 Waking : 1;
    ULONG64 MultipleShared : 1;
    ULONG64 Shared : 60;
    ULONG64 Value;
    PVOID Ptr;
};

typedef struct _RTL_STACK_DATABASE_LOCK {
    struct _RTL_SRWLOCK Lock;
};

typedef struct _RTL_STACK_TRACE_ENTRY {
    struct _RTL_STD_LIST_ENTRY HashChain;
    USHORT TraceCount : 11;
    USHORT BlockDepth : 5;
    USHORT IndexHigh;
    USHORT Index;
    USHORT Depth;
    PVOID BackTrace[32];
    struct _SLIST_ENTRY FreeChain;
};

typedef struct _RTL_STD_LIST_ENTRY {
    struct _RTL_STD_LIST_ENTRY *Next;
};

typedef struct _RTL_STD_LIST_HEAD {
    struct _RTL_STD_LIST_ENTRY *Next;
    struct _RTL_STACK_DATABASE_LOCK Lock;
};

typedef struct _RTL_TRACE_BLOCK {
    ULONG Magic;
    ULONG Count;
    ULONG Size;
    ULONG64 UserCount;
    ULONG64 UserSize;
    PVOID UserContext;
    struct _RTL_TRACE_BLOCK *Next;
    PVOID *Trace;
};

typedef struct _RTL_TRACE_DATABASE {
    ULONG Magic;
    ULONG Flags;
    ULONG Tag;
    struct _RTL_TRACE_SEGMENT *SegmentList;
    ULONG64 MaximumSize;
    ULONG64 CurrentSize;
    PVOID Owner;
    struct _RTL_CRITICAL_SECTION Lock;
    ULONG NoOfBuckets;
    struct _RTL_TRACE_BLOCK **Buckets;
    PULONG HashFunction;
    ULONG64 NoOfTraces;
    ULONG64 NoOfHits;
    ULONG HashCounter[16];
};

typedef struct _RTL_TRACE_SEGMENT {
    ULONG Magic;
    struct _RTL_TRACE_DATABASE *Database;
    struct _RTL_TRACE_SEGMENT *NextSegment;
    ULONG64 TotalSize;
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
    ULONG64 EnvironmentSize;
    ULONG64 EnvironmentVersion;
};

typedef struct _SCSI_REQUEST_BLOCK {
};

typedef struct _SECTION_OBJECT_POINTERS {
    PVOID DataSectionObject;
    PVOID SharedCacheMap;
    PVOID ImageSectionObject;
};

typedef struct _SECURITY_DESCRIPTOR {
    UCHAR Revision;
    UCHAR Sbz1;
    USHORT Control;
    PVOID Owner;
    PVOID Group;
    struct _ACL *Sacl;
    struct _ACL *Dacl;
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

typedef struct _SID_IDENTIFIER_AUTHORITY {
    UCHAR Value[6];
};

typedef struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY *Next;
};

typedef struct _SINGLE_LIST_ENTRY32 {
    ULONG Next;
};

typedef struct _SLIST_ENTRY {
    struct _SLIST_ENTRY *Next;
};

typedef struct _STACK_TRACE_DATABASE {
    CHAR Reserved[104];
    struct _RTL_STACK_DATABASE_LOCK Lock;
    PVOID Reserved2;
    ULONG64 PeakHashCollisionListLength;
    PVOID LowerMemoryStart;
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
    ULONG NumberOfEntriesAllocated;
    ULONG NumberOfEntriesAvailable;
    ULONG NumberOfAllocationFailures;
    union _SLIST_HEADER FreeLists[32];
    ULONG NumberOfBuckets;
    struct _RTL_STD_LIST_HEAD Buckets[1];
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
    UCHAR SpareBytes[24];
    ULONG TxFsContext;
    struct _GDI_TEB_BATCH GdiTebBatch;
    struct _CLIENT_ID RealClientId;
    PVOID GdiCachedProcessHandle;
    ULONG GdiClientPID;
    ULONG GdiClientTID;
    PVOID GdiThreadLocalInfo;
    ULONG64 Win32ClientInfo[62];
    PVOID glDispatchTable[233];
    ULONG64 glReserved1[29];
    PVOID glReserved2;
    PVOID glSectionInfo;
    PVOID glSection;
    PVOID glTable;
    PVOID glCurrentRC;
    PVOID glContext;
    ULONG LastStatusValue;
    struct _UNICODE_STRING StaticUnicodeString;
    WCHAR StaticUnicodeBuffer[261];
    PVOID DeallocationStack;
    PVOID TlsSlots[64];
    struct _LIST_ENTRY TlsLinks;
    PVOID Vdm;
    PVOID ReservedForNtRpc;
    PVOID DbgSsReserved[2];
    ULONG HardErrorMode;
    PVOID Instrumentation[11];
    struct _GUID ActivityId;
    PVOID SubProcessTag;
    PVOID EtwLocalData;
    PVOID EtwTraceData;
    PVOID WinSockData;
    ULONG GdiBatchCount;
    struct _PROCESSOR_NUMBER CurrentIdealProcessor;
    ULONG IdealProcessorValue;
    UCHAR ReservedPad0;
    UCHAR ReservedPad1;
    UCHAR ReservedPad2;
    UCHAR IdealProcessor;
    ULONG GuaranteedStackBytes;
    PVOID ReservedForPerf;
    PVOID ReservedForOle;
    ULONG WaitingOnLoaderLock;
    PVOID SavedPriorityState;
    ULONG64 SoftPatchPtr1;
    PVOID ThreadPoolData;
    PVOID *TlsExpansionSlots;
    PVOID DeallocationBStore;
    PVOID BStoreLimit;
    ULONG MuiGeneration;
    ULONG IsImpersonating;
    PVOID NlsCache;
    PVOID pShimData;
    ULONG HeapVirtualAffinity;
    PVOID CurrentTransactionHandle;
    struct _TEB_ACTIVE_FRAME *ActiveFrame;
    PVOID FlsData;
    PVOID PreferredLanguages;
    PVOID UserPrefLanguages;
    PVOID MergedPrefLanguages;
    ULONG MuiImpersonation;
    USHORT CrossTebFlags;
    USHORT SpareCrossTebBits : 16;
    USHORT SameTebFlags;
    USHORT SafeThunkCall : 1;
    USHORT InDebugPrint : 1;
    USHORT HasFiberData : 1;
    USHORT SkipThreadAttach : 1;
    USHORT WerInShipAssertCode : 1;
    USHORT RanProcessInit : 1;
    USHORT ClonedThread : 1;
    USHORT SuppressDebugMsg : 1;
    USHORT DisableUserStackWalk : 1;
    USHORT RtlExceptionAttached : 1;
    USHORT InitialThread : 1;
    USHORT SpareSameTebBits : 5;
    PVOID TxnScopeEnterCallback;
    PVOID TxnScopeExitCallback;
    PVOID TxnScopeContext;
    ULONG LockCount;
    ULONG SpareUlong0;
    PVOID ResourceRetValue;
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

typedef struct _THREAD_PERFORMANCE_DATA {
    USHORT Size;
    USHORT Version;
    struct _PROCESSOR_NUMBER ProcessorNumber;
    ULONG ContextSwitches;
    ULONG HwCountersCount;
    ULONG64 UpdateCount;
    ULONG64 WaitReasonBitMap;
    ULONG64 HardwareCounters;
    struct _COUNTER_READING CycleTime;
    struct _COUNTER_READING HwCounters[16];
};

typedef struct _TP_CALLBACK_ENVIRON_V3 {
    ULONG Version;
    struct _TP_POOL *Pool;
    struct _TP_CLEANUP_GROUP *CleanupGroup;
    PVOID CleanupGroupCancelCallback;
    PVOID RaceDll;
    struct _ACTIVATION_CONTEXT *ActivationContext;
    PVOID FinalizationCallback;
    union {
        ULONG Flags;
        struct {
            ULONG LongFunction : 1;
            ULONG Persistent : 1;
            ULONG Private : 30;
        } s;
    } u;
    enum _TP_CALLBACK_PRIORITY CallbackPriority;
    ULONG Size;
};

typedef struct _TP_CALLBACK_INSTANCE {
};

typedef struct _TP_CLEANUP_GROUP {
};

typedef struct _TP_DIRECT {
    PVOID Callback;
    ULONG NumaNode;
    UCHAR IdealProcessor;
};

typedef struct _TP_NBQ_GUARD {
    struct _LIST_ENTRY GuardLinks;
    PVOID Guards[2];
};

typedef struct _TP_POOL {
};

typedef struct _TP_TASK {
    struct _TP_TASK_CALLBACKS *Callbacks;
    ULONG NumaNode;
    UCHAR IdealProcessor;
    struct _TP_NBQ_GUARD PostGuard;
    PVOID NBQNode;
};

typedef struct _TP_TASK_CALLBACKS {
    PVOID ExecuteCallback;
    PVOID Unposted;
};

typedef struct _TXN_PARAMETER_BLOCK {
    USHORT Length;
    USHORT TxFsContext;
    PVOID TransactionObject;
};

typedef struct _UMS_CONTROL_BLOCK {
};

typedef struct _UNICODE_STRING {
    USHORT Length;
    USHORT MaximumLength;
    PUSHORT Buffer;
};

typedef struct _USER_MEMORY_CACHE_ENTRY {
    union _SLIST_HEADER UserBlocks;
    ULONG AvailableBlocks;
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

typedef struct _XSAVE_AREA {
    struct _XSAVE_FORMAT LegacyState;
    struct _XSAVE_AREA_HEADER Header;
};

typedef struct _XSAVE_AREA_HEADER {
    ULONG64 Mask;
    ULONG64 Reserved[7];
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

typedef struct _XSTATE_CONFIGURATION {
    ULONG64 EnabledFeatures;
    ULONG Size;
    ULONG OptimizedSave : 1;
    struct _XSTATE_FEATURE Features[64];
};

typedef struct _XSTATE_CONTEXT {
    ULONG64 Mask;
    ULONG Length;
    ULONG Reserved1;
    struct _XSAVE_AREA *Area;
    PVOID Buffer;
};

typedef struct _XSTATE_FEATURE {
    ULONG Offset;
    ULONG Size;
};

typedef struct _XSTATE_SAVE {
    struct _XSTATE_SAVE *Prev;
    struct _KTHREAD *Thread;
    UCHAR Level;
    struct _XSTATE_CONTEXT XStateContext;
};

typedef struct _flags {
    UCHAR Removable : 1;
    UCHAR GroupAssigned : 1;
    UCHAR GroupCommitted : 1;
    UCHAR GroupAssignmentFixed : 1;
    UCHAR Fill : 4;
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
        enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE NotificationType;
        UCHAR SafeToRecurse;
    } NotifyStreamFileObject;
    struct {
        PVOID Argument1;
        PVOID Argument2;
        PVOID Argument3;
        PVOID Argument4;
        PVOID Argument5;
    } Others;
};

typedef union _HEAP_BUCKET_COUNTERS {
    ULONG TotalBlocks;
    ULONG SubSegmentCounts;
    LONG64 Aggregate64;
};

typedef union _HEAP_BUCKET_RUN_INFO {
    ULONG Bucket;
    ULONG RunLength;
    LONG64 Aggregate64;
};

typedef union _KEXECUTE_OPTIONS {
    UCHAR ExecuteDisable : 1;
    UCHAR ExecuteEnable : 1;
    UCHAR DisableThunkEmulation : 1;
    UCHAR Permanent : 1;
    UCHAR ExecuteDispatchEnable : 1;
    UCHAR ImageDispatchEnable : 1;
    UCHAR DisableExceptionChainValidation : 1;
    UCHAR Spare : 1;
    UCHAR ExecuteOptions;
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

typedef union _KSTACK_COUNT {
    LONG Value;
    ULONG State : 3;
    ULONG StackCount : 29;
};

typedef union _KWAIT_STATUS_REGISTER {
    UCHAR Flags;
    UCHAR State : 2;
    UCHAR Affinity : 1;
    UCHAR Priority : 1;
    UCHAR Apc : 1;
    UCHAR UserApc : 1;
    UCHAR Alert : 1;
    UCHAR Unused : 1;
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
        USHORT McaErrorCode;
        USHORT ModelErrorCode;
        ULONG OtherInformation : 25;
        ULONG ContextCorrupt : 1;
        ULONG AddressValid : 1;
        ULONG MiscValid : 1;
        ULONG ErrorEnabled : 1;
        ULONG UncorrectedError : 1;
        ULONG StatusOverFlow : 1;
        ULONG Valid : 1;
    } MciStatus;
    ULONG64 QuadPart;
};

typedef union _MM_PAGE_ACCESS_INFO_FLAGS {
    struct {
        ULONG FilePointerIndex : 9;
        ULONG HardFault : 1;
        ULONG Image : 1;
        ULONG Spare0 : 1;
    } File;
    struct {
        ULONG FilePointerIndex : 9;
        ULONG HardFault : 1;
        ULONG Spare1 : 2;
    } Private;
};

typedef union _POWER_STATE {
    enum _SYSTEM_POWER_STATE SystemState;
    enum _DEVICE_POWER_STATE DeviceState;
};

typedef union _PSP_CPU_QUOTA_APC {
};

typedef union _PSP_CPU_SHARE_CAPTURED_WEIGHT_DATA {
    ULONG CapturedCpuShareWeight;
    ULONG CapturedTotalWeight;
    LONG64 CombinedData;
};

typedef union _PS_CLIENT_SECURITY_CONTEXT {
    ULONG64 ImpersonationData;
    PVOID ImpersonationToken;
    ULONG64 ImpersonationLevel : 2;
    ULONG64 EffectiveOnly : 1;
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

typedef enum DISPLAYCONFIG_SCANLINE_ORDERING {
    DISPLAYCONFIG_SCANLINE_ORDERING_UNSPECIFIED = 0,
    DISPLAYCONFIG_SCANLINE_ORDERING_PROGRESSIVE = 1,
    DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED = 2,
    DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED_UPPERFIELDFIRST = 2,
    DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED_LOWERFIELDFIRST = 3,
    DISPLAYCONFIG_SCANLINE_ORDERING_FORCE_UINT32 = -1
};

typedef enum LSA_FOREST_TRUST_RECORD_TYPE {
    ForestTrustTopLevelName = 0,
    ForestTrustTopLevelNameEx = 1,
    ForestTrustDomainInfo = 2,
    ForestTrustRecordTypeLast = 2
};

typedef enum MCA_EXCEPTION_TYPE {
    HAL_MCE_RECORD = 0,
    HAL_MCA_RECORD = 1
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

typedef enum PS_CREATE_STATE {
    PsCreateInitialState = 0,
    PsCreateFailOnFileOpen = 1,
    PsCreateFailOnSectionCreate = 2,
    PsCreateFailExeFormat = 3,
    PsCreateFailMachineMismatch = 4,
    PsCreateFailExeName = 5,
    PsCreateSuccess = 6,
    PsCreateMaximumStates = 7
};

typedef enum ReplacesCorHdrNumericDefines {
    COMIMAGE_FLAGS_ILONLY = 1,
    COMIMAGE_FLAGS_32BITREQUIRED = 2,
    COMIMAGE_FLAGS_IL_LIBRARY = 4,
    COMIMAGE_FLAGS_STRONGNAMESIGNED = 8,
    COMIMAGE_FLAGS_NATIVE_ENTRYPOINT = 16,
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
    COR_VTABLE_FROM_UNMANAGED_RETAIN_APPDOMAIN = 8,
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

typedef enum _FS_FILTER_SECTION_SYNC_TYPE {
    SyncTypeOther = 0,
    SyncTypeCreateSection = 1
};

typedef enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE {
    NotifyTypeCreate = 0,
    NotifyTypeRetired = 1
};

typedef enum _HARDWARE_COUNTER_TYPE {
    PMCCounter = 0,
    MaxHardwareCounterType = 1
};

typedef enum _HEAP_FAILURE_TYPE {
    heap_failure_internal = 0,
    heap_failure_unknown = 1,
    heap_failure_generic = 2,
    heap_failure_entry_corruption = 3,
    heap_failure_multiple_entries_corruption = 4,
    heap_failure_virtual_block_corruption = 5,
    heap_failure_buffer_overrun = 6,
    heap_failure_buffer_underrun = 7,
    heap_failure_block_not_busy = 8,
    heap_failure_invalid_argument = 9,
    heap_failure_usage_after_free = 10,
    heap_failure_cross_heap_operation = 11,
    heap_failure_freelists_corruption = 12,
    heap_failure_listentry_corruption = 13
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

typedef enum _IO_PRIORITY_HINT {
    IoPriorityVeryLow = 0,
    IoPriorityLow = 1,
    IoPriorityNormal = 2,
    IoPriorityHigh = 3,
    IoPriorityCritical = 4,
    MaxIoPriorityTypes = 5
};

typedef enum _IRQ_PRIORITY {
    IrqPriorityUndefined = 0,
    IrqPriorityLow = 1,
    IrqPriorityNormal = 2,
    IrqPriorityHigh = 3
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

typedef enum _KPROCESS_STATE {
    ProcessInMemory = 0,
    ProcessOutOfMemory = 1,
    ProcessInTransition = 2,
    ProcessOutTransition = 3,
    ProcessInSwap = 4,
    ProcessOutSwap = 5,
    ProcessAllSwapStates = 6
};

typedef enum _KWAIT_BLOCK_STATE {
    WaitBlockBypassStart = 0,
    WaitBlockBypassComplete = 1,
    WaitBlockActive = 2,
    WaitBlockInactive = 3,
    WaitBlockAllStates = 4
};

typedef enum _KWAIT_STATE {
    WaitInProgress = 0,
    WaitCommitted = 1,
    WaitAborted = 2,
    MaximumWaitState = 3
};

typedef enum _MEMORY_CACHING_TYPE_ORIG {
    MmFrameBufferCached = 2
};

typedef enum _MM_PAGE_ACCESS_TYPE {
    MmPteAccessType = 0,
    MmCcReadAheadType = 1,
    MmPfnRepurposeType = 2,
    MmMaximumPageAccessType = 3
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

typedef enum _PF_FILE_ACCESS_TYPE {
    PfFileAccessTypeRead = 0,
    PfFileAccessTypeWrite = 1,
    PfFileAccessTypeMax = 2
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
    LookasideMediumIrpList = 1,
    LookasideLargeIrpList = 2,
    LookasideMdlList = 3,
    LookasideCreateInfoList = 4,
    LookasideNameBufferList = 5,
    LookasideTwilightList = 6,
    LookasideCompletionList = 7,
    LookasideScratchBufferList = 8,
    LookasideMaximumList = 9
};

typedef enum _PROCESSOR_CACHE_TYPE {
    CacheUnified = 0,
    CacheInstruction = 1,
    CacheData = 2,
    CacheTrace = 3
};

typedef enum _PROC_HYPERVISOR_STATE {
    ProcHypervisorNone = 0,
    ProcHypervisorPresent = 1,
    ProcHypervisorPower = 2
};

typedef enum _PS_ATTRIBUTE_NUM {
    PsAttributeParentProcess = 0,
    PsAttributeDebugObject = 1,
    PsAttributeToken = 2,
    PsAttributeClientId = 3,
    PsAttributeTebAddress = 4,
    PsAttributeImageName = 5,
    PsAttributeImageInfo = 6,
    PsAttributeMemoryReserve = 7,
    PsAttributePriorityClass = 8,
    PsAttributeErrorMode = 9,
    PsAttributeStdHandleInfo = 10,
    PsAttributeHandleList = 11,
    PsAttributeGroupAffinity = 12,
    PsAttributePreferredNode = 13,
    PsAttributeIdealProcessor = 14,
    PsAttributeUmsThread = 15,
    PsAttributeExecuteOptions = 16,
    PsAttributeMax = 17
};

typedef enum _PS_IFEO_KEY_STATE {
    PsReadIFEOAllValues = 0,
    PsSkipIFEODebugger = 1,
    PsSkipAllIFEO = 2,
    PsMaxIFEOKeyStates = 3
};

typedef enum _PS_RESOURCE_TYPE {
    PsResourceNonPagedPool = 0,
    PsResourcePagedPool = 1,
    PsResourcePageFile = 2,
    PsResourceWorkingSet = 3,
    PsResourceCpuRate = 4,
    PsResourceMax = 5
};

typedef enum _PS_STD_HANDLE_STATE {
    PsNeverDuplicate = 0,
    PsRequestDuplicate = 1,
    PsAlwaysDuplicate = 2,
    PsMaxStdHandleStates = 3
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

typedef enum _TP_CALLBACK_PRIORITY {
    TP_CALLBACK_PRIORITY_HIGH = 0,
    TP_CALLBACK_PRIORITY_NORMAL = 1,
    TP_CALLBACK_PRIORITY_LOW = 2,
    TP_CALLBACK_PRIORITY_INVALID = 3
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

typedef enum _WORKING_SET_TYPE {
    WorkingSetTypeUser = 0,
    WorkingSetTypeSession = 1,
    WorkingSetTypeSystemTypes = 2,
    WorkingSetTypeSystemCache = 2,
    WorkingSetTypePagedPool = 3,
    WorkingSetTypeSystemPtes = 4,
    WorkingSetTypeMaximum = 5
};

$$VProc_ImageExportDirectory;
AVrfpAllowResourceConversion;
AVrfpCurrentUserKeyPath;
AVrfpDebug;
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
AeSbCallEvent;
AeSbContextReadRetryEvent;
AeSbContextUpdateEvent;
AeSbImplEvent;
AitAppInfoEvent;
AitFeatureIdUsedEvent;
AitModuleInfoEvent;
AitParentAitFeatureEvent;
AitProcessEndEvent;
AitSystemUsageByParentEvent;
AitSystemUsageByStackEvent;
AitpEtwRegHandle;
AitpFirstCall;
AltResMemBlockCount;
AlternateResourceModuleCount;
AlternateResourceModules;
AvrfpLoaderEntry;
BaseDllTag;
CMFQueueRear;
CMFStandbyQueue;
CheckHeapFillPattern;
ConditionVariableSpinCount;
CsrClientProcess;
CsrHeap;
CsrInitOnceDone;
CsrPortBaseTag;
CsrPortHandle;
CsrPortHeap;
CsrPortMemoryRemoteDelta;
CsrPortName;
CsrProcessId;
CsrReadOnlySharedMemorySize;
CsrServerApiRoutine;
DataLoadLockCount;
DeprecatedDll;
EtwLocksInitialized;
EtwPrivSessionCritSect;
EtwProvCritSect;
EtwpGlobalSequence;
EtwpLoggerContext;
EtwpLoggerCount;
EtwpOneSecond;
EtwpRegList;
EtwpReplySend;
FastPebLock;
FatalUserCallbackException;
FlsBitMap;
GlobalKeyedEventHandle;
GuidFormat;
HotPatchBuffer;
InitRegistryInfoCritSect;
Kernel32ThreadInitThunkFunction;
LZNT1Formats;
LdrpActiveThreadCount;
LdrpActiveUnloadCount;
LdrpActualBitmapSize;
LdrpAdvapi32DllHandle;
LdrpBreakOnRecursiveDllLoads;
LdrpComPlusDllCount;
LdrpComPlusInstallRootName;
LdrpComPlusVersionName;
LdrpCorExeMainName;
LdrpCorExeMainRoutine;
LdrpCorImageUnloadingName;
LdrpCorImageUnloadingRoutine;
LdrpCorValidateImageName;
LdrpCorValidateImageRoutine;
LdrpCreateActCtxLanguageW;
LdrpCurrentDllInitializer;
LdrpDebugFlags;
LdrpDefaultExtension;
LdrpDefaultPath;
LdrpDelayedTlsReclaimTable;
LdrpDllNotificationList;
LdrpDllTagProcedures;
LdrpDllTags;
LdrpDllTagsInitialized;
LdrpFailureData;
LdrpFatalHardErrorCount;
LdrpForkActiveLock;
LdrpForkConditionVariable;
LdrpForkInProgress;
LdrpHashTable;
LdrpHeap;
LdrpHotPatchList;
LdrpHotpatchCount;
LdrpHotpatchModuleInfoList;
LdrpImageEntry;
LdrpInLdrInit;
LdrpInvertedFunctionTable;
LdrpInvertedFunctionTableSRWLock;
LdrpKernel32DllName;
LdrpKnownDllDirectoryHandle;
LdrpKnownDllDirectoryHandle32;
LdrpKnownDllPath;
LdrpLargePageDllKeyHandle;
LdrpLastDllInitializer;
LdrpLdrDatabaseIsSetup;
LdrpLoaderLock;
LdrpLoaderLockAcquisitionCount;
LdrpLockMemoryPrivilege;
LdrpLogLevelStateTable;
LdrpManifestProberRoutine;
LdrpModuleReferenceCache;
LdrpModuleReferenceFreeList;
LdrpMscoreeDllHandle;
LdrpMscoreeDllName;
LdrpNtDllDataTableEntry;
LdrpNumberOfDllTags;
LdrpPendingForwarders;
LdrpPotentialTlsLeaks;
LdrpProcessInitialized;
LdrpReleaseActCtxW;
LdrpSaferIsDllAllowedRoutine;
LdrpShouldCreateStackTraceDb;
LdrpShowRecursiveDllLoads;
LdrpStaticTlsBitmapVector;
LdrpSystemDllBase;
LdrpTlsBitmap;
LdrpTlsList;
LdrpTlsLock;
LdrpTopLevelDllBeingLoadedTeb;
LdrpUnloadHead;
LdrpUnloadInProgress;
LdrpUnloadIndex;
LdrpUnloadIndexEx;
LdrpVectorHandlerList;
LeapYearDayToMonth;
LeapYearDaysPrecedingMonth;
LoadAsDataCrits;
LoadAsDataTable;
LoadAsDataTableBlockCount;
LoadAsDataTableCount;
LoadMUIDllGuid;
LoaderLockDebug;
LoaderLockInitialized;
MS_Windows_AIT_Provider;
MS_Windows_AeSwitchBack_Provider;
M_strAcePrefix;
Magic10000;
Magic10000000;
Magic86400000;
Microsoft_Windows_SQM_Provider;
MuiCriticalSection;
MuiLockInitCount;
NativePageShift;
NativePageSize;
Nls844UnicodeLowercaseTable;
Nls844UnicodeUpcaseTable;
NlsAnsiCodePage;
NlsAnsiToUnicodeData;
NlsLeadByteInfoTable;
NlsMbAnsiCodePageTables;
NlsMbCodePageTag;
NlsMbOemCodePageTables;
NlsMbOemCodePageTag;
NlsOemCodePage;
NlsOemLeadByteInfoTable;
NlsOemToUnicodeData;
NlsUnicodeToAnsiData;
NlsUnicodeToMbAnsiData;
NlsUnicodeToMbOemData;
NlsUnicodeToOemData;
NormalYearDayToMonth;
NormalYearDaysPrecedingMonth;
NormalizationList;
NtDllName;
NtDllUserStubs;
NtUserPfn;
NtdllBaseTag;
NumOfVistaDlls;
OemDefaultChar;
OemTransUniDefaultChar;
PebLdr;
RegistryInfoCritSect;
ResRuntimeView;
RtlAllocateStringRoutine;
RtlBaseAceType;
RtlCompressBufferProcs;
RtlCrc32Table;
RtlCriticalSectionDebugSList;
RtlCriticalSectionList;
RtlCriticalSectionLock;
RtlCriticalSectionLock_DEBUG;
RtlDecompressBufferProcs;
RtlDecompressFragmentProcs;
RtlDosPathSeperatorsString;
RtlFailedCriticalDebugAllocations;
RtlFatIllegalTable;
RtlFreeStringRoutine;
RtlHeapProcessFlags;
RtlIsSystemAceType;
RtlNtdllName;
RtlSecureMemorySystemRangeStart;
RtlWorkSpaceProcs;
RtlpAffinityState;
RtlpAtomAllocateTag;
RtlpBitsClearAnywhere;
RtlpBitsClearHigh;
RtlpBitsClearLow;
RtlpBitsClearTotal;
RtlpBucketBlockSizes;
RtlpBusyList;
RtlpCType844;
RtlpCTypeMap;
RtlpCaptureActivationContextActivationStacks;
RtlpCriticalSectionVerifier;
RtlpCrtHeapAddress;
RtlpCsVerifyDoNotBreak;
RtlpCurDirRef;
RtlpDebugPageHeapTable;
RtlpDefaultHeapDebuggingOptions;
RtlpDisableBreakOnFailureCookie;
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
RtlpDphInitFailureFlags;
RtlpDynamicFunctionTable;
RtlpDynamicFunctionTableLock;
RtlpDynamicFunctionTableLockDebug;
RtlpEmptyString;
RtlpEnvironLookupTable;
RtlpExitThreadFunc;
RtlpFlsLock;
RtlpFunctionAddressTable;
RtlpGlobalTagHeap;
RtlpHeapErrorHandlerThreshold;
RtlpHeapFailureInfo;
RtlpHeapHeaderFieldOffsets;
RtlpHeapInvalidBadAddress;
RtlpHeapInvalidBreakPoint;
RtlpHeapMaxAffinity;
RtlpHeapStackTraceLog;
RtlpHeapStopOn;
RtlpIntegerChars;
RtlpIntegerWChars;
RtlpInterceptorRoutines;
RtlpLDCrtPage;
RtlpLDNumBlocks;
RtlpLDPreviousPage;
RtlpLFHKey;
RtlpLeakHeap;
RtlpLeakHeapAddress;
RtlpLeakList;
RtlpLeaksCount;
RtlpLockedMemoryBlockLookasideCount;
RtlpLockedMemoryZoneCount;
RtlpLockedSectionList;
RtlpLockedSectionListLock;
RtlpMemoryBlockLookasideCriticalRoutines;
RtlpMemoryBlockLookasideLock;
RtlpMemoryZoneCriticalRoutines;
RtlpMemoryZoneLock;
RtlpNormListInitGuardEnter;
RtlpNormListInitGuardLeave;
RtlpNullString;
RtlpPreviousStartAddress;
RtlpProcessHeapsListBuffer;
RtlpProcessHeapsListLock;
RtlpProcessMemoryMap;
RtlpProductInfoMapping;
RtlpRandomConstantVector;
RtlpRandomExAuxVarY;
RtlpRandomExConstantVector;
RtlpRandomExInit;
RtlpRegistryPaths;
RtlpRunTable;
RtlpSecMemListHead;
RtlpSecMemLock;
RtlpShutdownProcessFlags;
RtlpSlashSlashDot;
RtlpSmMessageInfo;
RtlpStackTraceDatabase;
RtlpStartThreadFunc;
RtlpStaticDebugInfo;
RtlpStaticDebugInfoEnd;
RtlpStatusTable;
RtlpTempBlocks;
RtlpTheEmptyActivationContextData;
RtlpTheEmptyActivationContextWrapped;
RtlpTimeout;
RtlpTimoutDisable;
RtlpTpIoDllNotificationCookie;
RtlpTpIoRegistered;
RtlpTpIoRegisteredLock;
RtlpTpIoTree;
RtlpTpIoTreeLock;
RtlpTpTimerKeyedEvent;
RtlpTpWorkTaskCallbacks;
RtlpTripleListNextActiveValue;
RtlpUnhandledExceptionFilter;
RtlpUnloadEventTrace;
RtlpUnloadEventTraceEx;
RtlpUnloadEventTraceExNumber;
RtlpUnloadEventTraceExSize;
RtlpUnwindHistoryTable;
RtlpUnwindOpSlotTable;
RtlpValidateHeapHdrsEnable;
RtlpValidateHeapTagsEnable;
RtlpVersions;
RtlpWin32NtRoot;
RtlpWin32NtRootSlash;
RtlpWin32NtUncRoot;
RtlpWin32NtUncRootSlash;
SQM_ADDTOAVERAGE_DWORD;
SQM_ADD_LEGACYSTREAMROW;
SQM_ADD_STREAMROW;
SQM_END_SESSION;
SQM_INCREMENT_DWORD;
SQM_SETIFMAX_DWORD;
SQM_SETIFMIN_DWORD;
SQM_SET_DWORD;
SQM_SET_DWORD64;
SQM_SET_STRING;
SQM_START_SESSION;
SRWLockSpinCount;
SbSupportedOsList;
SbtpGenericSRWLock;
SbtpInitialized;
SbtpModuleSequenceNumber;
SecondsToStartOf1970;
SecondsToStartOf1980;
SecurityCookieInitCount;
SecurityCookieInitialized;
SessionNotificationGuid;
ShowSnaps;
SidHashByteToIndexLookupTable;
SlashSystem32SlashString;
SystemTraceControlGuid;
TlsBitMap;
TlsExpansionBitMap;
TppAlpcpCleanupGroupMemberVFuncs;
TppCleanupGroupMemberpNoPoolList;
TppCleanupGroupMemberpNoPoolListLock;
TppGlobalpKeyedEvent;
TppHeapTag;
TppIopCleanupGroupMemberVFuncs;
TppLogpFunction;
TppLogpRoutine;
TppNBQDebugAllocRoutine;
TppNBQDebugFreeRoutine;
TppNumberNodes;
TppPoolpGlobalPool;
TppPoolpGlobalPoolLock;
TppPoolpGlobalPoolMaxThreads;
TppPoolpGlobalPoolStackSize;
TppPoolpList;
TppPoolpListLock;
TppPoolpSerializedPool;
TppPoolpSerializedPoolLock;
TppSimplepCleanupGroupMemberVFuncs;
TppSimplepTaskVFuncs;
TppTimerpCleanupGroupMemberVFuncs;
TppTimerpTaskVFuncs;
TppWaiterpList;
TppWaiterpListLock;
TppWaitpCleanupGroupMemberVFuncs;
TppWaitpTaskVFuncs;
TppWorkerpList;
TppWorkerpListLock;
TppWorkpCleanupGroupMemberVFuncs;
TppWorkpTaskVFuncs;
TrkContext;
UnicodeDefaultChar;
UseCOR;
UseWOW64;
UserLoaderGuid;
VerifierDllString;
VerifierDllWCharArray;
Wow64ApcRoutine;
Wow64EnvironmentThunkTable;
Wow64Handle;
Wow64LdrpInitialize;
Wow64PrepareForException;
_clocalestr;
_initiallocalestructinfo;
_initiallocinfo;
_lconv_c;
_lconv_static_W_decimal;
_lconv_static_W_null;
_lconv_static_decimal;
_lconv_static_null;
_lookuptable;
_lookuptable_s;
_maskNegDouble;
_mb_cur_max;
_newclmap;
_newctype;
_newcumap;
_nullstring;
_real;
_realbfe5c28f5c28f5c3;
_realbff0000000000000;
_realc000000000000000;
_security_cookie;
_security_cookie_complement;
_wnullstring;
`RtlpGetCustomCultureRegKey'::`2'::KeyName;
`RtlpGetCustomCultureRegKey'::`2'::ObjAttribute;
`RtlpGetLocaleDataKey'::`2'::KeyPath;
`RtlpGetUserLocaleName'::`2'::KeyValueName;
`_control87'::`2'::dazSupported;
d_inf;
d_max;
errno;
fUseBackupSemantics;
fltused;
gBaseAddress;
gCustomCultureRegKey;
gDefaultCasingTableSize;
gDefaultLocaleId;
gLocaleDataRegKey;
gMUICacheType;
gSystemLocale;
g_LdrBreakOnLdrpInitializeProcessFailure;
g_RegInfo;
g_ShimsEnabled;
g_SxsCurrentDeadActivationContexts;
g_SxsFreeActivationContexts;
g_SxsKeepActivationContextsAlive;
g_SxsLiveActivationContexts;
g_SxsMaxDeadActivationContexts;
g_SxsTrackReleaseStacks;
g_disableEscalation;
g_dwLastErrorToBreakOn;
g_pShimEngineModule;
g_pfnSE_DllLoaded;
g_pfnSE_DllUnloaded;
g_pfnSE_GetProcAddressLoad;
g_pfnSE_InstallAfterInit;
g_pfnSE_InstallBeforeInit;
g_pfnSE_LdrEntryRemoved;
g_pfnSE_ProcessDying;
g_sqmSessionHandle;
g_werEscalationData;
matherr_flag;
pTblPtrs;
pctype;
pwctype;
setjmpexused;
szBias;
szDaylightBias;
szDaylightName;
szDaylightStart;
szDynamicDaylightDisabled;
szFirstEntry;
szLastEntry;
szSlashDynamicDst;
szStandardBias;
szStandardName;
szStandardStart;
szTimeZoneKeyName;
szTimeZonesSlash;
ulInvalidTypes;
wctype;

 ?? ::FNODOBFM::`string'();
ARRAY_FITS();
AVrfDllLoadNotification();
AVrfDllUnloadNotification();
AVrfInitializeVerifier();
AVrfInternalHeapFreeNotification();
AVrfOpenCurrentUserImageFileOptionsKey();
AVrfpAppendCurrentUserSid();
AVrfpChainDuplicateVerificationLayers();
AVrfpClearVerifiedExports();
AVrfpDetectVerifiedExports();
AVrfpDllLoadNotificationInternal();
AVrfpDllUnloadNotificationInternal();
AVrfpDumpProviderList();
AVrfpEnableHandleVerifier();
AVrfpEnableHeapVerifier();
AVrfpEnableStackVerifier();
AVrfpEnableVerifierOptions();
AVrfpFindClosestThunkDuplicate();
AVrfpFormatCurrentUserKeyPath();
AVrfpIsDebuggerPresent();
AVrfpIsVerifierProviderDll();
AVrfpLoadAndInitializeProvider();
AVrfpMoveProviderToEndOfInitializationList();
AVrfpParseVerifierDllsString();
AVrfpQueryProcessVerifierOptions();
AVrfpSetProcessVerifierOptions();
AVrfpSnapAlreadyLoadedDlls();
AVrfpSnapDllImports();
AVrfpVerifierStopInitialize();
A_SHAFinal();
A_SHAInit();
A_SHAUpdate();
AeComputeHeaderHashFromNtHeaders();
AeGetFileSizeForLoadedModule();
AeGetImageHeaderHashForCurrentProcess();
AeGetImageHeaderHashForLoadedModule();
AeInPageExceptionHandler();
AeOpenNoRightsHandleToFile();
AitFireParentUsageEvent();
AitLogFeatureUsageByApp();
AitpDoFirstTelemetryHitSetup();
AitpDoFirstTelemetryHitSetupWorker();
AitpIsEnabledNt();
AitpOpenRegKeyNt();
AitpReadUlongFromKeyNt();
AlpcAdjustCompletionListConcurrencyCount();
AlpcFreeCompletionListMessage();
AlpcGetCompletionListLastMessageInformation();
AlpcGetCompletionListMessageAttributes();
AlpcGetHeaderSize();
AlpcGetMessageAttribute();
AlpcGetMessageFromCompletionList();
AlpcGetOutstandingCompletionListMessageCount();
AlpcInitializeMessageAttribute();
AlpcMaxAllowedMessageLength();
AlpcRegisterCompletionList();
AlpcRegisterCompletionListWorkerThread();
AlpcRundownCompletionList();
AlpcUnregisterCompletionList();
AlpcUnregisterCompletionListWorkerThread();
ApiSetResolveToHost();
ApiSetpSearchForApiSetHost();
AvrfMiniLoadDll();
BaseFormatObjectAttributes();
BaseFormatTimeOut();
BaseGetNamedObjectDirectory();
BaseIsThisAConsoleName();
BasepInitializeFindFileHandle();
CanComposeHangul();
CheckEscalationForDWORD64Data();
CheckEscalationForDWORDData();
CheckEscalationForStringData();
CheckOneBitValidFlag();
CheckWinSQMOptinValue();
ChkSum();
CompareNamesCaseSensitive();
ComposeHangulLV();
ComposeHangulLVT();
ComputeNameLength();
CopyLowerCaseAndSubstitute();
CountUTF8ToUnicode();
CountUnicodeToUTF8();
CreateEscalationManager();
CreateSecureFileMapping();
CsrAllocateCaptureBuffer();
CsrAllocateMessagePointer();
CsrCaptureMessageBuffer();
CsrCaptureMessageMultiUnicodeStringsInPlace();
CsrCaptureMessageString();
CsrCaptureTimeout();
CsrClientCallServer();
CsrClientConnectToServer();
CsrFreeCaptureBuffer();
CsrGetProcessId();
CsrHeapCommitRoutine();
CsrIdentifyAlertableThread();
CsrSetPriorityClass();
CsrValidateMessageData();
CsrVerifyRegion();
CsrpConnectToServer();
DWORDToBigEndian();
DbgBreakPoint();
DbgBreakPointWithStatus();
DbgBreakPointWithStatusEnd();
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
DebugService2();
DeleteNodeFromTree();
ElapsedDaysToYears();
EtwCreateTraceInstanceId();
EtwDeliverDataBlock();
EtwEnumerateProcessRegGuids();
EtwEventActivityIdControl();
EtwEventEnabled();
EtwEventProviderEnabled();
EtwEventRegister();
EtwEventUnregister();
EtwEventWrite();
EtwEventWriteEndScenario();
EtwEventWriteEx();
EtwEventWriteFull();
EtwEventWriteNoRegistration();
EtwEventWriteStartScenario();
EtwEventWriteString();
EtwEventWriteTransfer();
EtwGetKmRegHandle();
EtwGetTraceEnableFlags();
EtwGetTraceEnableLevel();
EtwGetTraceLoggerHandle();
EtwLogTraceEvent();
EtwNotificationRegister();
EtwNotificationUnregister();
EtwProcessPrivateLoggerRequest();
EtwRegisterSecurityProvider();
EtwRegisterTraceGuidsA();
EtwRegisterTraceGuidsW();
EtwReplyNotification();
EtwSendNotification();
EtwSetMark();
EtwTraceEventInstance();
EtwTraceMessage();
EtwTraceMessageVa();
EtwUnregisterTraceGuids();
EtwWriteUMSecurityEvent();
EtwpAddInstanceIdToLogFileName();
EtwpAddLogHeaderToLogFile();
EtwpAllocateFreeBuffers();
EtwpAllocateTraceBufferPool();
EtwpBufferingModeFlush();
EtwpCheckForEnoughStackSpace();
EtwpCreateEtwThread();
EtwpCreateFile();
EtwpCreateRegGuidsContext();
EtwpDequeueFreeBuffer();
EtwpDisableTraceProvider();
EtwpEventWriteFull();
EtwpFinalizeLogFileHeader();
EtwpFindAndLockBufferForFlushing();
EtwpFlushActiveBuffers();
EtwpFlushBuffer();
EtwpFlushUmLogger();
EtwpFreeLoggerContext();
EtwpGenerateFileName();
EtwpGetCpuSpeed();
EtwpGetFreeBuffer();
EtwpGetNewRegEntry();
EtwpGetPrivateLoggerContext();
EtwpGetPrivateLoggerContextByLoggerId();
EtwpGetPrivateLoggerContextByName();
EtwpGetStackExtendedHeaderItem();
EtwpGetTimeZoneInformation();
EtwpGetUmLoggerInfoFromContext();
EtwpInitLoggerContext();
EtwpIsPrivateLoggerOn();
EtwpLogger();
EtwpNotificationThread();
EtwpProcessNotification();
EtwpQueryUmLogger();
EtwpReceiveReplyDataBlock();
EtwpRegisterProvider();
EtwpReleasePrivateBuffers();
EtwpRelogEvent();
EtwpReserveTraceBuffer();
EtwpSendSessionNotification();
EtwpSetLastError();
EtwpShutdownPrivateLoggers();
EtwpStartUmLogger();
EtwpStopLoggerInstance();
EtwpStopUmLogger();
EtwpSwitchBuffer();
EtwpSynchronizeWithLogger();
EtwpTraceUmEvent();
EtwpTraceUmMessage();
EtwpUpdateEnableInfoAndCallback();
EtwpUpdateUmLogger();
EtwpValidateLoggerInfo();
EtwpWaitForBufferReferenceCount();
EtwpWriteToPrivateBuffers();
EventApiCallback();
EvtIntReportAuthzEventAndSourceAsync();
EvtIntReportEventAndSourceAsync();
EvtIntReportEventWorker();
ExpInterlockedFlushSList();
ExpInterlockedPopEntrySList();
ExpInterlockedPopEntrySListEnd();
ExpInterlockedPopEntrySListEnd16();
ExpInterlockedPopEntrySListFault();
ExpInterlockedPopEntrySListFault16();
ExpInterlockedPopEntrySListResume();
ExpInterlockedPopEntrySListResume16();
ExpInterlockedPushEntrySList();
FindDirectoryEntry();
FindFirst();
FindLast();
FindNodeOrParent();
FirstEntrySList();
GetEntryIndex<_RESCDIRECTORY * __ptr64,_RESCDENTRY * __ptr64,0>();
GetEscalationRule();
GetFirstEntryIndex<_RESCDIRECTORY * __ptr64,_RESCDENTRY * __ptr64,0>();
GetHangulL();
GetHangulT();
GetHangulV();
GetHighSurrogate();
GetInstrumentationProperty();
GetLCIDFromLangListNode();
GetLCIDFromLangListNodeWithLICCheck();
GetLowSurrogate();
GetNameFromLangListNode();
GetNextWchar();
GetResourceDirectoryEntry();
GetRtlCategory();
GetShipAssertBuffer();
GetSurrogateHigh();
GetSurrogateLow();
GetUCBytes();
GetUTF32();
HasUpperCaseFlag();
HashStringToDwordCaseInsensitiveLen();
ImportTablepFreeFunctionSorted();
ImportTablepFreeModuleSorted();
ImportTablepHashCanonicalLists();
ImportTablepInsertFunctionSorted();
ImportTablepInsertModuleSorted();
InRange();
InitSecurityCookie();
InitStack<int>();
InitStack<unsigned int>();
InitializeSListHead();
InitializeTEBUserLangList();
InitializeUserOrMachineLangList();
InsertChar();
InsertModuleFunctions<_IMAGE_THUNK_DATA32,unsigned long>();
InsertModuleFunctions<_IMAGE_THUNK_DATA64,unsigned __int64>();
InterlockedPushListSList();
IsDebugPortPresent();
IsDot();
IsExtendedWinSqmHandle();
IsHangulL();
IsHangulLV();
IsHangulS();
IsHangulT();
IsHangulV();
IsMachineSampledOut();
IsProcessDisabled();
IsRuleThrottled();
IsSessionDisabled();
IsSupplementary();
IsSurrogate();
IsTimeExpired();
IsValidPointer();
KiRaiseUserExceptionDispatcher();
KiUserApcDispatch();
KiUserApcDispatcher();
KiUserApcHandler();
KiUserCallbackDispatch();
KiUserCallbackDispatcher();
KiUserCallbackDispatcherContinue();
KiUserCallbackDispatcherHandler();
KiUserExceptionDispatch();
KiUserExceptionDispatcher();
LZNT1CompressChunk();
LZNT1DecompressChunk();
LZNT1FindMatchMaximum();
LZNT1FindMatchStandard();
LdrAccessResource();
LdrAddLoadAsDataTable();
LdrAddRefDll();
LdrDecrementModuleReference();
LdrDisableThreadCalloutsForDll();
LdrEnumResources();
LdrEnumerateLoadedModules();
LdrFindEntryForAddress();
LdrFindResourceDirectory_U();
LdrFindResourceEx_U();
LdrFindResource_U();
LdrFlushAlternateResourceModules();
LdrGetDllHandle();
LdrGetDllHandleByMapping();
LdrGetDllHandleByName();
LdrGetDllHandleEx();
LdrGetFailureData();
LdrGetFileNameFromLoadAsDataTable();
LdrGetModuleName();
LdrGetProcedureAddress();
LdrGetProcedureAddressEx();
LdrGetVersionResourceFromCMFSegment();
LdrHotPatchRoutine();
LdrInitShimEngineDynamic();
LdrInitializeModuleReference();
LdrInitializeThunk();
LdrIsResItemExist();
LdrLoadAlternateResourceModule();
LdrLoadAlternateResourceModuleEx();
LdrLoadDll();
LdrLockLoaderLock();
LdrProcessRelocationBlock();
LdrProcessRelocationBlockLongLong();
LdrQueryImageFileExecutionOptions();
LdrQueryInLoadOrderModuleList();
LdrQueryInLoadOrderModuleList32();
LdrQueryModuleInfoFromLdrEntry();
LdrQueryModuleInfoFromLdrEntry32();
LdrQueryModuleInfoLocalLoaderLock();
LdrQueryModuleInfoLocalLoaderLock32();
LdrQueryModuleInfoLocalLoaderUnlock();
LdrQueryModuleInfoLocalLoaderUnlock32();
LdrQueryModuleServiceTags();
LdrQueryNextListEntry();
LdrQueryNextListEntry32();
LdrQueryProcessModuleInformation();
LdrQueryProcessModuleInformationEx();
LdrQueryProcessModuleInformationEx2();
LdrQueryProcessPeb32();
LdrReadMemory();
LdrRegisterDllNotification();
LdrRelocateImage();
LdrRelocateImageWithBias();
LdrRemoveLoadAsDataTable();
LdrResFallbackLangList();
LdrResFindResource();
LdrResFindResourceDirectory();
LdrResGetRCConfig();
LdrResRelease();
LdrResSearchResource();
LdrRscIsTypeExist();
LdrSetAppCompatDllRedirectionCallback();
LdrSetDllManifestProber();
LdrSetMUICacheType();
LdrShutdownProcess();
LdrShutdownThread();
LdrUnloadAlternateResourceModule();
LdrUnloadAlternateResourceModuleEx();
LdrUnloadDll();
LdrUnlockLoaderLock();
LdrUnregisterDllNotification();
LdrVerifyImageMatchesChecksum();
LdrVerifyImageMatchesChecksumEx();
LdrVerifyMappedImageMatchesChecksum();
LdrpAccessResourceData();
LdrpAccessResourceDataNoMultipleLanguage();
LdrpAcquireTlsIndex();
LdrpAllocateDataTableEntry();
LdrpAllocateTls();
LdrpAllocateTlsEntry();
LdrpAppendToForwarderList();
LdrpApplyFileNameRedirection();
LdrpApplyHotPatch();
LdrpCMFAddToStanbyQueue();
LdrpCMFRemoveFromStandbyQueue();
LdrpCalcAllocSize();
LdrpCallTlsInitializers();
LdrpCheckForwardedEntries();
LdrpCleanUpTebData();
LdrpCleanupThreadTlsData();
LdrpClearForwardersList();
LdrpClearLoadInProgress();
LdrpCnvrtShortToLongFileName();
LdrpCodeAuthzInitialize();
LdrpCompareResourceNames_U();
LdrpCompareServiceChecksum();
LdrpConvertLangFallbackListToMultiSz();
LdrpCorInitialize();
LdrpCreateKey();
LdrpCreateLangFallbackList();
LdrpDefineDllTag();
LdrpDoDebuggerBreak();
LdrpEnsureLoaderLockIsHeld();
LdrpFinalizeAndDeallocateDataTableEntry();
LdrpFindKnownDll();
LdrpFindLoadedDll();
LdrpFindLoadedDllByHandle();
LdrpFindLoadedDllByMapping();
LdrpFindLoadedDllByName();
LdrpFindMessageInAlternateModule();
LdrpFindOrMapDll();
LdrpFindTlsEntry();
LdrpFixupIATForRelocatedImport();
LdrpForkProcess();
LdrpFreeTls();
LdrpFreeUnicodeString();
LdrpGenericExceptionFilter();
LdrpGetAlternateResourceModuleHandleEx();
LdrpGetCultureIndex();
LdrpGetDataModulePath();
LdrpGetFileSizeFromLoadAsDataTable();
LdrpGetFromMUIMemCache();
LdrpGetImageSize();
LdrpGetImportAddressTableInfo();
LdrpGetKnownDllSectionHandle();
LdrpGetLoadAsEntry();
LdrpGetMUIFromCMFSegment();
LdrpGetMUILangConfigNode();
LdrpGetMappingFromCacheEntry();
LdrpGetModuleInfoFromVirtualMemory();
LdrpGetNewTlsVector();
LdrpGetParentLangId();
LdrpGetRcConfig();
LdrpGetResourceServiceChecksum();
LdrpGetShimEngineInterface();
LdrpHandleNewFormatImportDescriptors();
LdrpHandleOneNewFormatImportDescriptor();
LdrpHandleOneOldFormatImportDescriptor();
LdrpHandleTlsData();
LdrpHashUnicodeString();
LdrpHotpatchModuleInfoRemoveCallback();
LdrpInitMuiCrits();
LdrpInitializationFailure();
LdrpInitialize();
LdrpInitializeApplicationVerifierPackage();
LdrpInitializeExecutionOptions();
LdrpInitializeProcess();
LdrpInitializeProcessWrapperFilter();
LdrpInitializeThread();
LdrpInitializeTls();
LdrpIsReparsePoint();
LdrpLangFallbackListAppendNode();
LdrpLangFallbackListFindNode();
LdrpLoadDll();
LdrpLoadImportModule();
LdrpLoadResourceFromAlternativeModule();
LdrpLoadShimEngine();
LdrpLockTlsDelayedReclaimTable();
LdrpLogDbgPrint();
LdrpLogDeprecatedDllEtwEvent();
LdrpLogDllRelocationEtwEvent();
LdrpLogFatalUserCallbackException();
LdrpMUIEtwOutput();
LdrpMapResourceFile();
LdrpMapViewOfSection();
LdrpMergeLangFallbackLists();
LdrpMergeParentBaseLanguagesToList();
LdrpModuleCacheLoadNotification();
LdrpModuleCacheNotification();
LdrpModuleReferenceBucketLookup();
LdrpModuleReferenceCacheInitialize();
LdrpModuleReferenceFree();
LdrpModuleReferenceFreeCallback();
LdrpModuleReferenceRelease();
LdrpMultiSZCchLength();
LdrpMungHeapImportsForTagging();
LdrpOpenKey();
LdrpProcessInitializationComplete();
LdrpProcessStaticImports();
LdrpQuerySxSMUIFile();
LdrpQueryValueKey();
LdrpQueueDeferredTlsData();
LdrpRecordFailureInfo();
LdrpRecordForwarder();
LdrpRecordStaticImport();
LdrpRecordUnloadEvent();
LdrpReleaseTlsEntry();
LdrpRelocateImage();
LdrpRemoveAlternateModuleCacheItem();
LdrpResCompareResourceNames();
LdrpResCompareServiceChecksum();
LdrpResFileSize();
LdrpResGetMappingSize();
LdrpResGetResourceDirectory();
LdrpResMapFile();
LdrpResReadFile();
LdrpResSearchResourceHandle();
LdrpResSearchResourceInsideDirectory();
LdrpResSearchResourceMappedFile();
LdrpResSetFilePointer();
LdrpResValdiateMappedAddress();
LdrpResValidateFileHandle();
LdrpResValidateFilePath();
LdrpResolveDllName();
LdrpResolveFileName();
LdrpRunInitializeRoutines();
LdrpRunShimEngineInitRoutine();
LdrpRundownHotpatchList();
LdrpSearchPath();
LdrpSearchResourceSection_U();
LdrpSectionTableFromVirtualAddress();
LdrpSendDllNotifications();
LdrpSetAlternateResourceModuleHandle();
LdrpSetHotpatchProtection();
LdrpSetProtection();
LdrpSetThreadPreferredLangList();
LdrpSetupHotpatch();
LdrpSnapIAT();
LdrpSnapThunk();
LdrpSpecialCacheTypeHandle();
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
LdrpTraceLoadMUIDll();
LdrpUnloadDll();
LdrpUnloadShimEngine();
LdrpUnlockTlsDelayedReclaimTable();
LdrpUnmapCMFSegment();
LdrpUnmapCMFSegmentIfUnreferenced();
LdrpUpdateLoadCount2();
LdrpUpdateServiceTagCount();
LdrpVerifyAlternateResourceModule();
MD4Final();
MD4Init();
MD4Transform();
MD4Update();
MD5Final();
MD5Init();
MD5Update();
MatchAll();
NLG_Notify();
NormBuffer__Append();
NormBuffer__AppendAndSortDecomposed();
NormBuffer__AppendAndSortNonStart();
NormBuffer__AppendEx();
NormBuffer__CheckBufferSpace();
NormBuffer__EndOfInput();
NormBuffer__GetCurrentOutputChar();
NormBuffer__GetLastChar();
NormBuffer__Insert();
NormBuffer__InsertAtBlockedLocation();
NormBuffer__IsBlocked();
NormBuffer__LastStartBase();
NormBuffer__LastStartBasePair();
NormBuffer__RecheckStartCombinations();
NormBuffer__RemoveCharacter();
NormBuffer__ReplaceLastStartBase();
NormBuffer__ReplaceLastStartBasePair();
NormBuffer__RewindOutputCharacter();
NormBuffer__SetLastStart();
NormBuffer__SortBeforeSameClass();
NormBuffer__VerifyLastStart();
NormalizationListEntry_Alloc();
NormalizationListEntry_Free();
NormalizationList__InitDone();
NormalizationList__Initialize();
NormalizationList__Lookup();
NormalizationList__Unlock();
Normalization__AppendDecomposedChar();
Normalization__CanCombinableCharactersCombine();
Normalization__CanCombineWithStartBase();
Normalization__CanCombineWithStartFirstPair();
Normalization__GetFirstDecomposedCharPlane0();
Normalization__GetLastChar();
Normalization__GetSecondAndThirdDecomposedCharPlane0();
Normalization__GetSecondDecomposedCharPlane0();
Normalization__GetThirdAndLastDecomposedCharPlane0();
Normalization__GuessBetterCharCount();
Normalization__GuessCharCount();
Normalization__GuessCharCountBySize();
Normalization__IsNormalized();
Normalization__LoadClassMapExceptions();
Normalization__LoadTables();
Normalization__Normalize();
Normalization__NormalizeCharacter();
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
NtAllocateReserveObject();
NtAllocateUserPhysicalPages();
NtAllocateUuids();
NtAllocateVirtualMemory();
NtAlpcAcceptConnectPort();
NtAlpcCancelMessage();
NtAlpcConnectPort();
NtAlpcCreatePort();
NtAlpcCreatePortSection();
NtAlpcCreateResourceReserve();
NtAlpcCreateSectionView();
NtAlpcCreateSecurityContext();
NtAlpcDeletePortSection();
NtAlpcDeleteResourceReserve();
NtAlpcDeleteSectionView();
NtAlpcDeleteSecurityContext();
NtAlpcDisconnectPort();
NtAlpcImpersonateClientOfPort();
NtAlpcOpenSenderProcess();
NtAlpcOpenSenderThread();
NtAlpcQueryInformation();
NtAlpcQueryInformationMessage();
NtAlpcRevokeSecurityContext();
NtAlpcSendWaitReceivePort();
NtAlpcSetInformation();
NtApphelpCacheControl();
NtAreMappedFilesTheSame();
NtAssignProcessToJobObject();
NtCallbackReturn();
NtCancelIoFile();
NtCancelIoFileEx();
NtCancelSynchronousIoFile();
NtCancelTimer();
NtClearEvent();
NtClose();
NtCloseObjectAuditAlarm();
NtCommitComplete();
NtCommitEnlistment();
NtCommitTransaction();
NtCompactKeys();
NtCompareTokens();
NtCompleteConnectPort();
NtCompressKey();
NtConnectPort();
NtContinue();
NtCreateDebugObject();
NtCreateDirectoryObject();
NtCreateEnlistment();
NtCreateEvent();
NtCreateEventPair();
NtCreateFile();
NtCreateIoCompletion();
NtCreateJobObject();
NtCreateJobSet();
NtCreateKey();
NtCreateKeyTransacted();
NtCreateKeyedEvent();
NtCreateMailslotFile();
NtCreateMutant();
NtCreateNamedPipeFile();
NtCreatePagingFile();
NtCreatePort();
NtCreatePrivateNamespace();
NtCreateProcess();
NtCreateProcessEx();
NtCreateProfile();
NtCreateProfileEx();
NtCreateResourceManager();
NtCreateSection();
NtCreateSemaphore();
NtCreateSymbolicLinkObject();
NtCreateThread();
NtCreateThreadEx();
NtCreateTimer();
NtCreateToken();
NtCreateTransaction();
NtCreateTransactionManager();
NtCreateUserProcess();
NtCreateWaitablePort();
NtCreateWorkerFactory();
NtDebugActiveProcess();
NtDebugContinue();
NtDelayExecution();
NtDeleteAtom();
NtDeleteBootEntry();
NtDeleteDriverEntry();
NtDeleteFile();
NtDeleteKey();
NtDeleteObjectAuditAlarm();
NtDeletePrivateNamespace();
NtDeleteValueKey();
NtDeviceIoControlFile();
NtDisableLastKnownGood();
NtDisplayString();
NtDrawText();
NtDuplicateObject();
NtDuplicateToken();
NtEnableLastKnownGood();
NtEnumerateBootEntries();
NtEnumerateDriverEntries();
NtEnumerateKey();
NtEnumerateSystemEnvironmentValuesEx();
NtEnumerateTransactionObject();
NtEnumerateValueKey();
NtExtendSection();
NtFilterToken();
NtFindAtom();
NtFlushBuffersFile();
NtFlushInstallUILanguage();
NtFlushInstructionCache();
NtFlushKey();
NtFlushProcessWriteBuffers();
NtFlushVirtualMemory();
NtFlushWriteBuffer();
NtFreeUserPhysicalPages();
NtFreeVirtualMemory();
NtFreezeRegistry();
NtFreezeTransactions();
NtFsControlFile();
NtGetContextThread();
NtGetCurrentProcessorNumber();
NtGetDevicePowerState();
NtGetMUIRegistryInfo();
NtGetNextProcess();
NtGetNextThread();
NtGetNlsSectionPtr();
NtGetNotificationResourceManager();
NtGetPlugPlayEvent();
NtGetWriteWatch();
NtImpersonateAnonymousToken();
NtImpersonateClientOfPort();
NtImpersonateThread();
NtInitializeNlsFiles();
NtInitializeRegistry();
NtInitiatePowerAction();
NtIsProcessInJob();
NtIsSystemResumeAutomatic();
NtIsUILanguageComitted();
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
NtMapCMFModule();
NtMapUserPhysicalPages();
NtMapUserPhysicalPagesScatter();
NtMapViewOfSection();
NtModifyBootEntry();
NtModifyDriverEntry();
NtNotifyChangeDirectoryFile();
NtNotifyChangeKey();
NtNotifyChangeMultipleKeys();
NtNotifyChangeSession();
NtOpenDirectoryObject();
NtOpenEnlistment();
NtOpenEvent();
NtOpenEventPair();
NtOpenFile();
NtOpenIoCompletion();
NtOpenJobObject();
NtOpenKey();
NtOpenKeyEx();
NtOpenKeyTransacted();
NtOpenKeyTransactedEx();
NtOpenKeyedEvent();
NtOpenMutant();
NtOpenObjectAuditAlarm();
NtOpenPrivateNamespace();
NtOpenProcess();
NtOpenProcessToken();
NtOpenProcessTokenEx();
NtOpenResourceManager();
NtOpenSection();
NtOpenSemaphore();
NtOpenSession();
NtOpenSymbolicLinkObject();
NtOpenThread();
NtOpenThreadToken();
NtOpenThreadTokenEx();
NtOpenTimer();
NtOpenTransaction();
NtOpenTransactionManager();
NtPlugPlayControl();
NtPowerInformation();
NtPrePrepareComplete();
NtPrePrepareEnlistment();
NtPrepareComplete();
NtPrepareEnlistment();
NtPrivilegeCheck();
NtPrivilegeObjectAuditAlarm();
NtPrivilegedServiceAuditAlarm();
NtPropagationComplete();
NtPropagationFailed();
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
NtQueryInformationEnlistment();
NtQueryInformationFile();
NtQueryInformationJobObject();
NtQueryInformationPort();
NtQueryInformationProcess();
NtQueryInformationResourceManager();
NtQueryInformationThread();
NtQueryInformationToken();
NtQueryInformationTransaction();
NtQueryInformationTransactionManager();
NtQueryInformationWorkerFactory();
NtQueryInstallUILanguage();
NtQueryIntervalProfile();
NtQueryIoCompletion();
NtQueryKey();
NtQueryLicenseValue();
NtQueryMultipleValueKey();
NtQueryMutant();
NtQueryObject();
NtQueryOpenSubKeys();
NtQueryOpenSubKeysEx();
NtQueryPerformanceCounter();
NtQueryPortInformationProcess();
NtQueryQuotaInformationFile();
NtQuerySection();
NtQuerySecurityAttributesToken();
NtQuerySecurityObject();
NtQuerySemaphore();
NtQuerySymbolicLinkObject();
NtQuerySystemEnvironmentValue();
NtQuerySystemEnvironmentValueEx();
NtQuerySystemInformation();
NtQuerySystemInformationEx();
NtQuerySystemTime();
NtQueryTimer();
NtQueryTimerResolution();
NtQueryValueKey();
NtQueryVirtualMemory();
NtQueryVolumeInformationFile();
NtQueueApcThread();
NtQueueApcThreadEx();
NtRaiseException();
NtRaiseHardError();
NtReadFile();
NtReadFileScatter();
NtReadOnlyEnlistment();
NtReadRequestData();
NtReadVirtualMemory();
NtRecoverEnlistment();
NtRecoverResourceManager();
NtRecoverTransactionManager();
NtRegisterProtocolAddressInformation();
NtRegisterThreadTerminatePort();
NtReleaseKeyedEvent();
NtReleaseMutant();
NtReleaseSemaphore();
NtReleaseWorkerFactoryWorker();
NtRemoveIoCompletion();
NtRemoveIoCompletionEx();
NtRemoveProcessDebug();
NtRenameKey();
NtRenameTransactionManager();
NtReplaceKey();
NtReplacePartitionUnit();
NtReplyPort();
NtReplyWaitReceivePort();
NtReplyWaitReceivePortEx();
NtReplyWaitReplyPort();
NtRequestPort();
NtRequestWaitReplyPort();
NtResetEvent();
NtResetWriteWatch();
NtRestoreKey();
NtResumeProcess();
NtResumeThread();
NtRollbackComplete();
NtRollbackEnlistment();
NtRollbackTransaction();
NtRollforwardTransactionManager();
NtSaveKey();
NtSaveKeyEx();
NtSaveMergedKeys();
NtSecureConnectPort();
NtSerializeBoot();
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
NtSetInformationEnlistment();
NtSetInformationFile();
NtSetInformationJobObject();
NtSetInformationKey();
NtSetInformationObject();
NtSetInformationProcess();
NtSetInformationResourceManager();
NtSetInformationThread();
NtSetInformationToken();
NtSetInformationTransaction();
NtSetInformationTransactionManager();
NtSetInformationWorkerFactory();
NtSetIntervalProfile();
NtSetIoCompletion();
NtSetIoCompletionEx();
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
NtSetTimerEx();
NtSetTimerResolution();
NtSetUuidSeed();
NtSetValueKey();
NtSetVolumeInformationFile();
NtShutdownSystem();
NtShutdownWorkerFactory();
NtSignalAndWaitForSingleObject();
NtSinglePhaseReject();
NtStartProfile();
NtStopProfile();
NtSuspendProcess();
NtSuspendThread();
NtSystemDebugControl();
NtTerminateJobObject();
NtTerminateProcess();
NtTerminateThread();
NtTestAlert();
NtThawRegistry();
NtThawTransactions();
NtTraceControl();
NtTraceEvent();
NtTranslateFilePath();
NtUmsThreadYield();
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
NtWaitForWorkViaWorkerFactory();
NtWaitHighEventPair();
NtWaitLowEventPair();
NtWorkerFactoryWorkerReady();
NtWriteFile();
NtWriteFileGather();
NtWriteRequestData();
NtWriteVirtualMemory();
NtYieldExecution();
NtdllButtonWndProcWorker();
NtdllButtonWndProc_A();
NtdllButtonWndProc_W();
NtdllComboBoxWndProcWorker();
NtdllComboBoxWndProc_A();
NtdllComboBoxWndProc_W();
NtdllComboListBoxProcWorker();
NtdllComboListBoxProc_A();
NtdllComboListBoxProc_W();
NtdllCtfHookProcWorker();
NtdllDefWindowProc_A();
NtdllDefWindowProc_W();
NtdllDesktopWndProc_A();
NtdllDesktopWndProc_W();
NtdllDialogWndProcWorker();
NtdllDialogWndProc_A();
NtdllDialogWndProc_W();
NtdllDispatchDefWindowProc_A();
NtdllDispatchDefWindowProc_W();
NtdllDispatchHook_A();
NtdllDispatchHook_W();
NtdllDispatchMessage_A();
NtdllDispatchMessage_W();
NtdllEditWndProcWorker();
NtdllEditWndProc_A();
NtdllEditWndProc_W();
NtdllGhostWndProcWorker();
NtdllGhostWndProc_A();
NtdllGhostWndProc_W();
NtdllHkINLPCWPRETSTRUCT_A();
NtdllHkINLPCWPRETSTRUCT_W();
NtdllHkINLPCWPSTRUCT_A();
NtdllHkINLPCWPSTRUCT_W();
NtdllImeWndProcWorker();
NtdllImeWndProc_A();
NtdllImeWndProc_W();
NtdllListBoxWndProcWorker();
NtdllListBoxWndProc_A();
NtdllListBoxWndProc_W();
NtdllMDIActivateDlgProc_A();
NtdllMDIActivateDlgProc_W();
NtdllMDIClientWndProcWorker();
NtdllMDIClientWndProc_A();
NtdllMDIClientWndProc_W();
NtdllMenuWndProc_A();
NtdllMenuWndProc_W();
NtdllScrollBarWndProc_A();
NtdllScrollBarWndProc_W();
NtdllStaticWndProcWorker();
NtdllStaticWndProc_A();
NtdllStaticWndProc_W();
NtdllSwitchWindowProc_A();
NtdllSwitchWindowProc_W();
NtdllpAllocateStringRoutine();
NtdllpFreeStringRoutine();
OffsetToPointer();
OpenAdaptiveSqmPrivateSection();
PfxFindPrefix();
PfxInitialize();
PfxInsertPrefix();
PfxRemovePrefix();
PromoteNode();
RXactpCommit();
RXactpOpenTargetKey();
RaiseException();
RcConsolidateFrames();
RcFrameConsolidation();
ReadUlongFromKey();
ReadUlonglongFromKey();
RealPredecessor();
RealSuccessor();
RebalanceNode();
RecurseValidate<_RESCDIRECTORY * __ptr64>();
RegisterGuidsApiCallback();
RegisterWinSqmProvider();
ReleaseEscalationManager();
ReleaseStack<int>();
ReleaseStack<unsigned int>();
RemoveChars();
ReportExceptionInternal();
ResCCloseRuntimeView();
ResCCompareCacheIDs();
ResCCreateCultureMap();
ResCCreateDefaultCultureMap();
ResCCreateMapping();
ResCCreateMappingExclusive();
ResCCultureMapCreateAndPopulate();
ResCCultureMapPopulate();
ResCCultureMapValidateHeader();
ResCDirectoryCreateAndPopulate();
ResCDirectoryFree();
ResCDirectoryGetEntry();
ResCDirectoryGetEntryCopyAndIndex();
ResCDirectoryGetEntryEx();
ResCDirectoryGetEntryIndexEx();
ResCDirectoryGetSegmentName();
ResCDirectoryGetSize();
ResCDirectoryPopulate();
ResCDirectoryValidate();
ResCDirectoryValidateEntries();
ResCDirectoryValidateHeader();
ResCDupString();
ResCFlushMappedView();
ResCFreeCultureMap();
ResCFreeString();
ResCGetCultureID();
ResCGetHighestCacheIndex();
ResCGetHighestConsecutiveCacheIndex();
ResCGetIndexedName();
ResCGetName();
ResCGetRegistryFlags();
ResCGetRegistryLatestIndex();
ResCGetSubIndexedName();
ResCHitsCreateAndPopulate();
ResCHitsEntryHit();
ResCHitsFlush();
ResCHitsFree();
ResCHitsPopulate();
ResCHitsValidateHeader();
ResCIncrementCMFMissCount();
ResCKeCreateRuntimeView();
ResCKeDirectoryOpenMapping();
ResCKeGetBaseFolder();
ResCKeGetCacheIndices();
ResCKeHitsOpenMapping();
ResCKeInitRuntimeViewEx();
ResCKeOpenRuntimeView();
ResCKeSegmentOpenMapping();
ResCLoadCultureMap();
ResCLoadFixedSize();
ResCMapCMFModule();
ResCMatchFlags();
ResCOpenMapping();
ResCOpenRegistryKey();
ResCReleaseInitMutex();
ResCReloadCultureMap();
ResCRequestInitMutex();
ResCRuntimeGetCultureID();
ResCRuntimeGetEntryDataEx();
ResCRuntimeGetResourceDataEx();
ResCRuntimeGetSegmentDataEx();
ResCRuntimeUnmapSegment();
ResCRuntimeViewLoadCultureMap();
ResCSegmentCreateAndPopulate();
ResCSegmentCreateMapping();
ResCSegmentFree();
ResCSegmentGetData();
ResCSegmentGetSize();
ResCSegmentOpenMapping();
ResCSegmentPopulate();
ResCSegmentValidateHeader();
ResCloseHandle();
ResCompareString();
ResCreateFile();
ResCreateFileMapping();
ResCreateMutex();
ResCreateSecurityDescriptor();
ResCultureNameToLCID();
ResFindClose();
ResFindFirstFileExW();
ResFindNextFileW();
ResGetFileAttributesEx();
ResGetFileAttributesW();
ResGetFileSizeEx();
ResGetSystemWindowsDirectory();
ResMapViewOfFile();
ResOpenFileMapping();
ResQueryValueKey();
ResReadFile();
ResReleaseMutex();
ResUnmapViewOfFile();
ResWaitForSingleObject();
ResetEventCountOnConsolidatorRun();
ResourceEntryBinarySearch();
RtlAbortRXact();
RtlAbsoluteToSelfRelativeSD();
RtlAcquirePebLock();
RtlAcquirePrivilege();
RtlAcquireReleaseSRWLockExclusive();
RtlAcquireResourceExclusive();
RtlAcquireResourceShared();
RtlAcquireSRWLockExclusive();
RtlAcquireSRWLockShared();
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
RtlAddFunctionTable();
RtlAddIntegrityLabelToBoundaryDescriptor();
RtlAddMandatoryAce();
RtlAddRefActivationContext();
RtlAddRefMemoryStream();
RtlAddSIDToBoundaryDescriptor();
RtlAddVectoredContinueHandler();
RtlAddVectoredExceptionHandler();
RtlAddressInSectionTable();
RtlAdjustPrivilege();
RtlAllocateActivationContextStack();
RtlAllocateAndInitializeSid();
RtlAllocateHandle();
RtlAllocateHeap();
RtlAllocateMemoryBlockLookaside();
RtlAllocateMemoryZone();
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
RtlBackoff();
RtlBarrier();
RtlBarrierForDelete();
RtlCallVectoredContinueHandlers();
RtlCancelTimer();
RtlCaptureContext();
RtlCaptureStackBackTrace();
RtlCharToInteger();
RtlCheckForOrphanedCriticalSections();
RtlCheckHeldCriticalSections();
RtlCheckRegistryKey();
RtlCleanUpTEBLangLists();
RtlClearAllBits();
RtlClearBits();
RtlCloneMemoryStream();
RtlCloneUserProcess();
RtlCmDecodeMemIoResource();
RtlCmEncodeMemIoResource();
RtlCommitDebugInfo();
RtlCommitMemoryStream();
RtlCompactHeap();
RtlCompareAltitudes();
RtlCompareMemory();
RtlCompareMemoryUlong();
RtlCompareString();
RtlCompareUnicodeString();
RtlCompareUnicodeStrings();
RtlCompleteProcessCloning();
RtlCompressBuffer();
RtlCompressBufferLZNT1();
RtlCompressBufferNS();
RtlCompressWorkSpaceSizeLZNT1();
RtlCompressWorkSpaceSizeNS();
RtlComputeCrc32();
RtlComputeImportTableHash();
RtlComputeLfnChecksum();
RtlComputePrivatizedDllName_U();
RtlConnectToSm();
RtlConsoleMultiByteToUnicodeN();
RtlContractHashTable();
RtlControlStackTraceDataBase();
RtlConvertExclusiveToShared();
RtlConvertLCIDToString();
RtlConvertSharedToExclusive();
RtlConvertSidToUnicodeString();
RtlConvertToAutoInheritSecurityObject();
RtlConvertUiListToApiList();
RtlCopyExtendedContext();
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
RtlCreateBoundaryDescriptor();
RtlCreateEnvironment();
RtlCreateEnvironmentEx();
RtlCreateHashTable();
RtlCreateHeap();
RtlCreateHotPatch();
RtlCreateMemoryBlockLookaside();
RtlCreateMemoryZone();
RtlCreateProcessParameters();
RtlCreateProcessParametersEx();
RtlCreateProcessReflection();
RtlCreateQueryDebugBuffer();
RtlCreateRegistryKey();
RtlCreateSecurityDescriptor();
RtlCreateSecurityDescriptorRelative();
RtlCreateServiceSid();
RtlCreateSystemVolumeInformationFolder();
RtlCreateTagHeap();
RtlCreateTimer();
RtlCreateTimerQueue();
RtlCreateUmsCompletionList();
RtlCreateUmsThread();
RtlCreateUmsThreadContext();
RtlCreateUnicodeString();
RtlCreateUnicodeStringFromAsciiz();
RtlCreateUserProcess();
RtlCreateUserSecurityObject();
RtlCreateUserStack();
RtlCreateUserThread();
RtlCreateVirtualAccountSid();
RtlCultureNameToLCID();
RtlCustomCPToUnicodeN();
RtlCutoverTimeToSystemTime();
RtlDeCommitDebugInfo();
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
RtlDeleteBarrier();
RtlDeleteBoundaryDescriptor();
RtlDeleteCriticalSection();
RtlDeleteElementGenericTable();
RtlDeleteElementGenericTableAvl();
RtlDeleteFunctionTable();
RtlDeleteHashTable();
RtlDeleteNoSplay();
RtlDeleteRegistryValue();
RtlDeleteResource();
RtlDeleteSecurityObject();
RtlDeleteTimer();
RtlDeleteTimerQueue();
RtlDeleteTimerQueueEx();
RtlDeleteUmsCompletionList();
RtlDeleteUmsThreadContext();
RtlDequeueUmsCompletionListItems();
RtlDeregisterSecureMemoryCacheCallback();
RtlDeregisterWait();
RtlDeregisterWaitEx();
RtlDescribeChunkLZNT1();
RtlDescribeChunkNS();
RtlDestroyAtomTable();
RtlDestroyEnvironment();
RtlDestroyHandleTable();
RtlDestroyHeap();
RtlDestroyMemoryBlockLookaside();
RtlDestroyMemoryZone();
RtlDestroyProcessParameters();
RtlDestroyQueryDebugBuffer();
RtlDetectHeapLeaks();
RtlDetermineDosPathNameType_U();
RtlDetermineDosPathNameType_Ustr();
RtlDisableThreadProfiling();
RtlDispatchAPC();
RtlDispatchException();
RtlDllShutdownInProgress();
RtlDnsHostNameToComputerName();
RtlDoesFileExists_U();
RtlDoesFileExists_UEx();
RtlDoesFileExists_UStr();
RtlDoesFileExists_UstrEx();
RtlDoesNameContainWildCards();
RtlDosApplyFileIsolationRedirection_Ustr();
RtlDosPathNameToNtPathName_U();
RtlDosPathNameToNtPathName_U_WithStatus();
RtlDosPathNameToRelativeNtPathName_U();
RtlDosPathNameToRelativeNtPathName_U_WithStatus();
RtlDosSearchPath_U();
RtlDosSearchPath_Ustr();
RtlDowncaseUnicodeChar();
RtlDowncaseUnicodeString();
RtlDumpResource();
RtlDuplicateUnicodeString();
RtlEmptyAtomTable();
RtlEnableEarlyCriticalSectionEventCreation();
RtlEnableThreadProfiling();
RtlEncodePointer();
RtlEncodeSystemPointer();
RtlEndEnumerationHashTable();
RtlEndWeakEnumerationHashTable();
RtlEnterCriticalSection();
RtlEnterUmsSchedulingMode();
RtlEnumProcessHeaps();
RtlEnumerateEntryHashTable();
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
RtlEthernetAddressToStringA();
RtlEthernetAddressToStringW();
RtlEthernetStringToAddressA();
RtlEthernetStringToAddressW();
RtlExecuteUmsThread();
RtlExitUserProcess();
RtlExitUserThread();
RtlExpandEnvironmentStrings();
RtlExpandEnvironmentStrings_U();
RtlExpandHashTable();
RtlExtendMemoryBlockLookaside();
RtlExtendMemoryZone();
RtlExtendedLargeIntegerDivide();
RtlExtendedMagicDivide();
RtlFillMemory();
RtlFinalReleaseOutOfProcessMemoryStream();
RtlFindAceBySid();
RtlFindAceByType();
RtlFindActivationContextSectionGuid();
RtlFindActivationContextSectionString();
RtlFindCharInUnicodeString();
RtlFindClearBits();
RtlFindClearBitsAndSet();
RtlFindClearRuns();
RtlFindClosestEncodableLength();
RtlFindLastBackwardRunClear();
RtlFindLeastSignificantBit();
RtlFindLongestRunClear();
RtlFindMessage();
RtlFindMostSignificantBit();
RtlFindNextForwardRunClear();
RtlFindRtlPatchHeader();
RtlFindSetBits();
RtlFindSetBitsAndClear();
RtlFirstFreeAce();
RtlFlsAlloc();
RtlFlsFree();
RtlFlushSecureMemoryCache();
RtlFormatCurrentUserKeyPath();
RtlFormatMessage();
RtlFormatMessageEx();
RtlFreeActivationContextStack();
RtlFreeAnsiString();
RtlFreeHandle();
RtlFreeHeap();
RtlFreeHotPatchData();
RtlFreeMemoryBlockLookaside();
RtlFreeOemString();
RtlFreeSid();
RtlFreeThreadActivationContextStack();
RtlFreeUnicodeString();
RtlFreeUserStack();
RtlGUIDFromString();
RtlGenerate8dot3Name();
RtlGetAce();
RtlGetActiveActivationContext();
RtlGetAssemblyStorageRoot();
RtlGetCallersAddress();
RtlGetCompressionWorkSpaceSize();
RtlGetControlSecurityDescriptor();
RtlGetCriticalSectionContentionCount();
RtlGetCriticalSectionRecursionCount();
RtlGetCurrentDirectory_U();
RtlGetCurrentPeb();
RtlGetCurrentProcessorNumber();
RtlGetCurrentProcessorNumberEx();
RtlGetCurrentTransaction();
RtlGetCurrentUmsThread();
RtlGetDaclSecurityDescriptor();
RtlGetElementGenericTable();
RtlGetElementGenericTableAvl();
RtlGetEnabledExtendedFeatures();
RtlGetExtendedContextLength();
RtlGetExtendedFeaturesMask();
RtlGetFileMUIPath();
RtlGetFrame();
RtlGetFullPathName_U();
RtlGetFullPathName_UEx();
RtlGetFullPathName_Ustr();
RtlGetFullPathName_UstrEx();
RtlGetFunctionTableListHead();
RtlGetGroupSecurityDescriptor();
RtlGetHotpatchHeader();
RtlGetIntegerAtom();
RtlGetLastNtStatus();
RtlGetLastWin32Error();
RtlGetLengthWithoutLastFullDosOrNtPathElement();
RtlGetLengthWithoutTrailingPathSeperators();
RtlGetLocaleFileMappingAddress();
RtlGetLongestNtPathLength();
RtlGetNextEntryHashTable();
RtlGetNextUmsListItem();
RtlGetNtGlobalFlags();
RtlGetNtProductType();
RtlGetNtVersionNumbers();
RtlGetOwnerSecurityDescriptor();
RtlGetParentLocaleName();
RtlGetProcessHeaps();
RtlGetProcessPreferredUILanguages();
RtlGetProductInfo();
RtlGetSaclSecurityDescriptor();
RtlGetSecurityDescriptorRMControl();
RtlGetSetBootStatusData();
RtlGetSystemPreferredUILanguages();
RtlGetThreadErrorMode();
RtlGetThreadLangIdByIndex();
RtlGetThreadPreferredUILanguages();
RtlGetTickCount();
RtlGetUILanguageInfo();
RtlGetUmsCompletionListEvent();
RtlGetUnloadEventTrace();
RtlGetUnloadEventTraceEx();
RtlGetUserInfoHeap();
RtlGetUserPreferredUILanguages();
RtlGetUserTpWaitCallback();
RtlGetVersion();
RtlHashUnicodeString();
RtlHeapTrkInitialize();
RtlHeapsStackCollection();
RtlIdentifierAuthoritySid();
RtlIdnToAscii();
RtlIdnToNameprepUnicode();
RtlIdnToUnicode();
RtlImageDirectoryEntryToData();
RtlImageNtHeader();
RtlImageNtHeaderEx();
RtlImageNtHeaderEx_ExceptionFilter();
RtlImageRvaToSection();
RtlImageRvaToVa();
RtlImpersonateSelf();
RtlImpersonateSelfEx();
RtlInitAnsiString();
RtlInitAnsiStringEx();
RtlInitBarrier();
RtlInitCodePageTable();
RtlInitEnumerationHashTable();
RtlInitMemoryStream();
RtlInitNlsTables();
RtlInitOutOfProcessMemoryStream();
RtlInitString();
RtlInitUnicodeString();
RtlInitUnicodeStringEx();
RtlInitWeakEnumerationHashTable();
RtlInitializeAtomPackage();
RtlInitializeBitMap();
RtlInitializeConditionVariable();
RtlInitializeContext();
RtlInitializeCriticalSection();
RtlInitializeCriticalSectionAndSpinCount();
RtlInitializeCriticalSectionEx();
RtlInitializeExtendedContext();
RtlInitializeGenericTable();
RtlInitializeGenericTableAvl();
RtlInitializeHandleTable();
RtlInitializeHeapManager();
RtlInitializeHistoryTable();
RtlInitializeHotPatch();
RtlInitializeNtUserPfn();
RtlInitializeRXact();
RtlInitializeResource();
RtlInitializeSListHead();
RtlInitializeSRWLock();
RtlInitializeSid();
RtlInsertElementGenericTable();
RtlInsertElementGenericTableAvl();
RtlInsertElementGenericTableFull();
RtlInsertElementGenericTableFullAvl();
RtlInsertEntryHashTable();
RtlInsertInvertedFunctionTable();
RtlInstallFunctionTableCallback();
RtlInt64ToUnicodeString();
RtlIntegerToChar();
RtlIntegerToUnicode();
RtlIntegerToUnicodeString();
RtlInterlockedClearBitRun();
RtlInterlockedFlushSList();
RtlInterlockedPopEntrySList();
RtlInterlockedPushEntrySList();
RtlInterlockedSetBitRun();
RtlIoDecodeMemIoResource();
RtlIoEncodeMemIoResource();
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
RtlIsAnyDebuggerPresent();
RtlIsCriticalSectionLocked();
RtlIsCriticalSectionLockedByThread();
RtlIsCurrentThreadAttachExempt();
RtlIsDosDeviceName_U();
RtlIsDosDeviceName_Ustr();
RtlIsGenericTableEmpty();
RtlIsGenericTableEmptyAvl();
RtlIsNameInExpression();
RtlIsNameLegalDOS8Dot3();
RtlIsNormalizedString();
RtlIsTextUnicode();
RtlIsThreadWithinLoaderCallout();
RtlIsValidHandle();
RtlIsValidIndexHandle();
RtlIsValidLocaleName();
RtlIsValidOemCharacter();
RtlKnownExceptionFilter();
RtlLCIDToCultureName();
RtlLargeIntegerToChar();
RtlLargeIntegerToUnicode();
RtlLcidToLocaleName();
RtlLeaveCriticalSection();
RtlLengthRequiredSid();
RtlLengthSecurityDescriptor();
RtlLengthSid();
RtlLengthSidAsUnicodeString();
RtlLoadString();
RtlLocalTimeToSystemTime();
RtlLocaleNameToLcid();
RtlLocateExtendedFeature();
RtlLocateLegacyContext();
RtlLockBootStatusData();
RtlLockCurrentThread();
RtlLockHeap();
RtlLockHeapManagerForCloning();
RtlLockMemoryBlockLookaside();
RtlLockMemoryStreamRegion();
RtlLockMemoryZone();
RtlLockModuleSection();
RtlLogStackBackTrace();
RtlLogStackBackTraceEx();
RtlLogStackTrace();
RtlLookupAtomInAtomTable();
RtlLookupElementGenericTable();
RtlLookupElementGenericTableAvl();
RtlLookupElementGenericTableFull();
RtlLookupElementGenericTableFullAvl();
RtlLookupEntryHashTable();
RtlLookupFunctionEntry();
RtlLookupFunctionTable();
RtlMakeSelfRelativeSD();
RtlMapGenericMask();
RtlMapSecurityErrorToNtStatus();
RtlMuiRegAddLIPParent();
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
RtlNormalizeString();
RtlNtPathNameToDosPathName();
RtlNtStatusToDosError();
RtlNtStatusToDosErrorNoTeb();
RtlNumberGenericTableElements();
RtlNumberGenericTableElementsAvl();
RtlNumberOfClearBits();
RtlNumberOfSetBits();
RtlNumberOfSetBitsUlongPtr();
RtlOemStringToUnicodeString();
RtlOemToUnicodeN();
RtlOpenCurrentUser();
RtlOpenImageFileOptionsKey();
RtlOwnerAcesPresent();
RtlPcToFileHeader();
RtlPinAtomInAtomTable();
RtlPopFrame();
RtlPrefetchMemoryNonTemporal();
RtlPrefixString();
RtlPrefixUnicodeString();
RtlPrepareForProcessCloning();
RtlProcessFlsData();
RtlProtectHeap();
RtlPushFrame();
RtlQueryActivationContextApplicationSettings();
RtlQueryAtomInAtomTable();
RtlQueryCriticalSectionOwner();
RtlQueryDepthSList();
RtlQueryDynamicTimeZoneInformation();
RtlQueryElevationFlags();
RtlQueryEnvironmentVariable();
RtlQueryEnvironmentVariable_U();
RtlQueryHeapInformation();
RtlQueryImageFileExecutionOptions();
RtlQueryImageFileKeyOption();
RtlQueryInformationAcl();
RtlQueryInformationActivationContext();
RtlQueryInformationActiveActivationContext();
RtlQueryInterfaceMemoryStream();
RtlQueryModuleInformation();
RtlQueryPerformanceCounter();
RtlQueryPerformanceFrequency();
RtlQueryProcessBackTraceInformation();
RtlQueryProcessDebugInformation();
RtlQueryProcessHeapInformation();
RtlQueryProcessLockInformation();
RtlQueryProcessModuleInformation();
RtlQueryRegistryValues();
RtlQuerySecurityObject();
RtlQuerySystemTime();
RtlQueryTagHeap();
RtlQueryThreadProfiling();
RtlQueryTimeZoneInformation();
RtlQueryUmsThreadInformation();
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
RtlReadThreadProfilingData();
RtlRealPredecessor();
RtlRealSuccessor();
RtlRegisterSecureMemoryCacheCallback();
RtlRegisterThreadWithCsrss();
RtlRegisterWait();
RtlReleaseActivationContext();
RtlReleaseMemoryStream();
RtlReleasePebLock();
RtlReleasePrivilege();
RtlReleaseRelativeName();
RtlReleaseResource();
RtlReleaseSRWLockExclusive();
RtlReleaseSRWLockShared();
RtlReleaseStackTrace();
RtlRemoteCall();
RtlRemoveEntryHashTable();
RtlRemoveInvertedFunctionTable();
RtlRemovePrivileges();
RtlRemoveVectoredContinueHandler();
RtlRemoveVectoredExceptionHandler();
RtlReplaceSidInSd();
RtlReportCriticalFailure();
RtlReportException();
RtlReportExceptionEx();
RtlReportSilentProcessExit();
RtlReportSqmEscalation();
RtlReserveChunkLZNT1();
RtlReserveChunkNS();
RtlResetMemoryBlockLookaside();
RtlResetMemoryZone();
RtlResetRtlTranslations();
RtlResetStackOverflow();
RtlRestoreContext();
RtlRetrieveNtUserPfn();
RtlRevertMemoryStream();
RtlRunDecodeUnicodeString();
RtlRunEncodeUnicodeString();
RtlRunOnceBeginInitialize();
RtlRunOnceComplete();
RtlRunOnceExecuteOnce();
RtlRunOnceInitialize();
RtlSecondsSince1970ToTime();
RtlSecondsSince1980ToTime();
RtlSectionTableFromVirtualAddress();
RtlSeekMemoryStream();
RtlSelfRelativeToAbsoluteSD();
RtlSelfRelativeToAbsoluteSD2();
RtlSendMsgToSm();
RtlSetAllBits();
RtlSetAttributesSecurityDescriptor();
RtlSetBits();
RtlSetControlSecurityDescriptor();
RtlSetCriticalSectionSpinCount();
RtlSetCurrentDirectory_U();
RtlSetCurrentEnvironment();
RtlSetCurrentTransaction();
RtlSetDaclSecurityDescriptor();
RtlSetDynamicTimeZoneInformation();
RtlSetEnvironmentStrings();
RtlSetEnvironmentVar();
RtlSetEnvironmentVariable();
RtlSetExtendedFeaturesMask();
RtlSetGroupSecurityDescriptor();
RtlSetHeapDebuggingInformation();
RtlSetHeapInformation();
RtlSetInformationAcl();
RtlSetIoCompletionCallback();
RtlSetLFHDebuggingInformation();
RtlSetLastWin32Error();
RtlSetLastWin32ErrorAndNtStatusFromNtStatus();
RtlSetMemoryStreamSize();
RtlSetOwnerSecurityDescriptor();
RtlSetProcessDebugInformation();
RtlSetProcessIsCritical();
RtlSetProcessPreferredUILanguages();
RtlSetSaclSecurityDescriptor();
RtlSetSecurityDescriptorRMControl();
RtlSetSecurityObject();
RtlSetSecurityObjectEx();
RtlSetThreadErrorMode();
RtlSetThreadIsCritical();
RtlSetThreadPoolStartFunc();
RtlSetThreadPreferredUILanguages();
RtlSetTimeZoneInformation();
RtlSetTimer();
RtlSetUmsThreadInformation();
RtlSetUnhandledExceptionFilter();
RtlSetUserFlagsHeap();
RtlSetUserValueHeap();
RtlSidDominates();
RtlSidEqualLevel();
RtlSidHashInitialize();
RtlSidHashLookup();
RtlSidIsHigherLevel();
RtlSizeHeap();
RtlSleepConditionVariableCS();
RtlSleepConditionVariableSRW();
RtlSplay();
RtlStartRXact();
RtlStatMemoryStream();
RtlStdDeleteStackDatabase();
RtlStdInitializeStackDatabase();
RtlStdLogStackTrace();
RtlStdReleaseStackTrace();
RtlStringCbCatW();
RtlStringCbCopyExW();
RtlStringCbCopyW();
RtlStringCbLengthW();
RtlStringCbPrintfA();
RtlStringCbPrintfExW();
RtlStringCbPrintfW();
RtlStringCbVPrintfA();
RtlStringCchCatW();
RtlStringCchCopyExW();
RtlStringCchCopyNExW();
RtlStringCchCopyW();
RtlStringCchLengthW();
RtlStringCchPrintfExW();
RtlStringFromGUID();
RtlSubAuthorityCountSid();
RtlSubAuthoritySid();
RtlSubtreePredecessor();
RtlSubtreeSuccessor();
RtlSystemTimeToLocalTime();
RtlTestBit();
RtlTimeFieldsToTime();
RtlTimeToElapsedTimeFields();
RtlTimeToSecondsSince1970();
RtlTimeToSecondsSince1980();
RtlTimeToTimeFields();
RtlTpETWCallbackDequeue();
RtlTraceDatabaseAdd();
RtlTraceDatabaseCreate();
RtlTraceDatabaseDestroy();
RtlTraceDatabaseEnumerate();
RtlTraceDatabaseFind();
RtlTraceDatabaseLock();
RtlTraceDatabaseUnlock();
RtlTraceDatabaseValidate();
RtlTripleListDeferredRemove();
RtlTripleListInsert();
RtlTryAcquirePebLock();
RtlTryAcquireSRWLockExclusive();
RtlTryAcquireSRWLockShared();
RtlTryEnterCriticalSection();
RtlUIntAdd();
RtlULongAdd();
RtlULongLongAdd();
RtlULongLongMult();
RtlULongLongToUInt();
RtlULongLongToULong();
RtlULongToUShort();
RtlUTF8ToUnicodeN();
RtlUmsThreadYield();
RtlUnhandledExceptionFilter();
RtlUnhandledExceptionFilter2();
RtlUnicodeStringInit();
RtlUnicodeStringToAnsiString();
RtlUnicodeStringToCountedOemString();
RtlUnicodeStringToInteger();
RtlUnicodeStringToLcid();
RtlUnicodeStringToOemString();
RtlUnicodeStringValidateEx();
RtlUnicodeToCustomCPN();
RtlUnicodeToMultiByteN();
RtlUnicodeToMultiByteSize();
RtlUnicodeToOemN();
RtlUnicodeToUTF8N();
RtlUniform();
RtlUnlockBootStatusData();
RtlUnlockCurrentThread();
RtlUnlockHeap();
RtlUnlockHeapManagerForCloning();
RtlUnlockMemoryBlockLookaside();
RtlUnlockMemoryStreamRegion();
RtlUnlockMemoryZone();
RtlUnlockModuleSection();
RtlUnwind();
RtlUnwindEx();
RtlUpcaseUnicodeChar();
RtlUpcaseUnicodeString();
RtlUpcaseUnicodeStringToAnsiString();
RtlUpcaseUnicodeStringToCountedOemString();
RtlUpcaseUnicodeStringToOemString();
RtlUpcaseUnicodeToCustomCPN();
RtlUpcaseUnicodeToMultiByteN();
RtlUpcaseUnicodeToOemN();
RtlUpdateClonedCriticalSection();
RtlUpdateClonedSRWLock();
RtlUpdateProcessRegistryInfo();
RtlUpdateTimer();
RtlUpperChar();
RtlUpperString();
RtlUserThreadStart();
RtlValidAcl();
RtlValidRelativeSecurityDescriptor();
RtlValidSecurityDescriptor();
RtlValidSid();
RtlValidateHeap();
RtlValidateProcessHeaps();
RtlValidateUnicodeString();
RtlVerifyVersionInfo();
RtlVirtualUnwind();
RtlWakeAllConditionVariable();
RtlWakeConditionVariable();
RtlWalkFrameChain();
RtlWalkHeap();
RtlWeaklyEnumerateEntryHashTable();
RtlWerpReportException();
RtlWow64CallFunction64();
RtlWow64GetThreadContext();
RtlWow64GetThreadSelectorEntry();
RtlWow64LogMessageInEventLogger();
RtlWow64SetThreadContext();
RtlWow64SuspendThread();
RtlWriteMemoryStream();
RtlWriteRegistryValue();
RtlXRestore();
RtlXSave();
RtlZeroHeap();
RtlZeroMemory();
RtlZombifyActivationContext();
RtlpAcquireHeapListLock();
RtlpActivateLowFragmentationHeap();
RtlpAddData();
RtlpAddHeapToProcessList();
RtlpAddKnownAce();
RtlpAddKnownObjectAce();
RtlpAddLanguagesToMultiSZ();
RtlpAddVectoredHandler();
RtlpAllocDeallocQueryBuffer();
RtlpAllocateActivationContextStackFrame();
RtlpAllocateAffinityIndex();
RtlpAllocateAtom();
RtlpAllocateDebugInfo();
RtlpAllocateEnvBlock();
RtlpAllocateHeap();
RtlpAllocateHotpatchMemory();
RtlpAllocateSecondLevelDir();
RtlpAllocateTags();
RtlpAllocateUserBlock();
RtlpAllocationSize();
RtlpAnalyzeHeapFailure();
RtlpAppendMaclToSacl();
RtlpApplyAclToObject();
RtlpApplyLengthFunction();
RtlpApplyRelocationFixups();
RtlpAssemblyStorageMapResolutionDefaultCallback();
RtlpAtomMapAtomToHandleEntry();
RtlpAttachThreadToUmsCompletionList();
RtlpAutoCompleteLanguageFallback();
RtlpBreakPointHeap();
RtlpBreakWithStatusInstruction();
RtlpCallQueryRegistryRoutine();
RtlpCallSecureMemoryCallbacks();
RtlpCallVectoredHandlers();
RtlpChangeQueryDebugBufferTarget();
RtlpCheckBusyBlockTail();
RtlpCheckDeferredCriticalSection();
RtlpCheckDeviceName();
RtlpCheckDynamicTimeZoneInformation();
RtlpCheckForSameCurdir();
RtlpCheckHeapSignature();
RtlpCheckMuiMultiStringSafe();
RtlpCheckRelativeDrive();
RtlpCleanupRegistryKeys();
RtlpCoalesceFreeBlocks();
RtlpCoalesceHeap();
RtlpCommitBlock();
RtlpCommitQueryDebugInfo();
RtlpCompareAces();
RtlpCompareActivationContextDataTOCEntryById();
RtlpCompareActivationContextGuidSectionEntryByGuid();
RtlpCompareActivationContextStringSectionEntryByPseudoKey();
RtlpCompareConfigNodeWithSpec();
RtlpCompareKnownAces();
RtlpCompareKnownObjectAces();
RtlpComputeBackupIndex();
RtlpComputeLangListCheckSum();
RtlpComputeMergedAcl();
RtlpComputeMergedAcl2();
RtlpConsoleFallbackNameFromLocaleName();
RtlpConvertAclToAutoInherit();
RtlpConvertCultureNamesToLCIDs();
RtlpConvertLCIDsToCultureNames();
RtlpConvertToAutoInheritSecurityObject();
RtlpCopyAces();
RtlpCopyAndNormalizePeHeaderForHash();
RtlpCopyContext();
RtlpCopyContextChunk();
RtlpCopyEffectiveAce();
RtlpCopyExtendedContext();
RtlpCopyLegacyContext();
RtlpCopyLegacyContextAmd64();
RtlpCopyLegacyContextIa64();
RtlpCopyLegacyContextX86();
RtlpCopyMappedMemoryEx();
RtlpCopyMappedMemoryEx_ExceptionFilter();
RtlpCopyProcString();
RtlpCrackActivationContextStringSectionHeader();
RtlpCreateCriticalSectionSem();
RtlpCreateNewDirectoryReference();
RtlpCreateProcessRegistryInfo();
RtlpCreateServerAcl();
RtlpCreateSplitBlock();
RtlpCreateTraverseNodes();
RtlpCreateUCREntry();
RtlpCreateUserProcess();
RtlpCreateUserThreadEx();
RtlpDeCommitFreeBlock();
RtlpDeCommitQueryDebugInfo();
RtlpDebugPageHeapCreate();
RtlpDebugPageHeapDestroy();
RtlpDecommitBlock();
RtlpDeleteData();
RtlpDestroyHeapSegment();
RtlpDestroyTags();
RtlpDetachThreadFromUmsCompletionList();
RtlpDetermineDosPathNameType4();
RtlpDidUnicodeToOemWork();
RtlpDosPathNameToRelativeNtPathName_U();
RtlpDosPathNameToRelativeNtPathName_Ustr();
RtlpDumpEntryFlagDescription();
RtlpDumpEntryHeader();
RtlpDumpEntryInfo();
RtlpEnsureBufferSize();
RtlpEnsureLiveDeadListsInitialized();
RtlpEnumerateBoundaryDescriptorEntries();
RtlpEstimateAllocatedSize();
RtlpExceptionHandler();
RtlpExecuteHandlerForException();
RtlpExecuteHandlerForUnwind();
RtlpExecuteUmsThread();
RtlpExitThread();
RtlpExtendHeap();
RtlpExtendListLookup();
RtlpExtendedHeapInformationGenerator();
RtlpExtendedHeapInformationWorkerCallback();
RtlpExtendedHeapInformationWorkerThread();
RtlpFileIsWin32WithRCManifest();
RtlpFilterandReplaceConsoleLanguages();
RtlpFindActivationContextSection_CheckParameters();
RtlpFindActivationContextSection_FillOutReturnedData();
RtlpFindAndCommitPages();
RtlpFindGuidInSection();
RtlpFindNextActivationContextSection();
RtlpFindRegTziForCurrentYear();
RtlpFindSectionHeader();
RtlpFindUCREntry();
RtlpFindUnicodeStringInSection();
RtlpFreeActivationContext();
RtlpFreeActivationContextStackFrame();
RtlpFreeAtom();
RtlpFreeDebugInfo();
RtlpFreeEnvBlock();
RtlpFreeHandleForAtom();
RtlpFreeHeap();
RtlpFreeHotpatchMemory();
RtlpFreeTebLanguageList();
RtlpFreeTraverseNodes();
RtlpFreeUserBlock();
RtlpGenerateInheritAcl();
RtlpGenerateInheritedAce();
RtlpGetActivationContextData();
RtlpGetActivationContextDataStorageMapAndRosterHeader();
RtlpGetAlternateCodePage();
RtlpGetAssemblyStorageMapRootLocation();
RtlpGetBlockInfo();
RtlpGetBlockSizeEx();
RtlpGetChainHead();
RtlpGetColdpatchDebugSignature();
RtlpGetCompleteLanguageFallback();
RtlpGetContainingRange();
RtlpGetCustomCultureData();
RtlpGetCustomCultureDataFromFile();
RtlpGetCustomCultureRegKey();
RtlpGetDefaultLanguageBaseOrParent();
RtlpGetDefaultsSubjectContext();
RtlpGetDynamicTimeZoneInfoHandle();
RtlpGetExtraStuffPointer();
RtlpGetExtraStuffPointerUnsafe();
RtlpGetFileSize();
RtlpGetFirstBlockAddress();
RtlpGetFreeBlockInsidePageBoundaries();
RtlpGetHeapBlock();
RtlpGetHeapInterceptorIndex();
RtlpGetInstalledLanguageType();
RtlpGetLCIDFromLangInfoNode();
RtlpGetLengthWithoutLastPathElement();
RtlpGetLocaleDataKey();
RtlpGetMUIRedirectedFilePath();
RtlpGetMemoryFlag();
RtlpGetModifiedProcessCookie();
RtlpGetMultiStringLength();
RtlpGetNameFromLangInfoNode();
RtlpGetNextRegionHeap();
RtlpGetNormalization();
RtlpGetNumProcessors();
RtlpGetRegistryHandle();
RtlpGetReservedBlockSize();
RtlpGetSegmentForAddress();
RtlpGetStackLimits();
RtlpGetStackTraceAddress();
RtlpGetStackTraceAddressEx();
RtlpGetStringTypeW();
RtlpGetSystemDefaultUILanguage();
RtlpGetTagName();
RtlpGetTimeZoneInfoHandle();
RtlpGetUserLocaleName();
RtlpGetUserOrMachineUILanguage4NLS();
RtlpGetWindowsPolicy();
RtlpGrowBlockInPlace();
RtlpGuidPresentInGuidList();
RtlpHasMachineUILock();
RtlpHashStringToAtom();
RtlpHeapExceptionFilter();
RtlpHeapGenerateRandomValue64();
RtlpHeapHandleError();
RtlpHeapLogRangeCreate();
RtlpHeapLogRangeDestroy();
RtlpHeapLogRangeRelease();
RtlpHeapLogRangeReserve();
RtlpHeapTrkInterceptor();
RtlpHeapTrkLeakCallback();
RtlpImageDirectoryEntryToData32();
RtlpImageDirectoryEntryToDataEx();
RtlpInheritAcl();
RtlpInheritAcl2();
RtlpInitAndCallLcidToCultureName();
RtlpInitConditionVariable();
RtlpInitCurrentDir();
RtlpInitDeferredCriticalSection();
RtlpInitEnvironmentBlock();
RtlpInitMuiCriticalSection();
RtlpInitParameterBlock();
RtlpInitRandomExVector();
RtlpInitSRWLock();
RtlpInitUnicodeStringUsingBuffer();
RtlpInitializeActivationContextStack();
RtlpInitializeActivationContextStackFrameList();
RtlpInitializeAffinityManager();
RtlpInitializeAllowedAce();
RtlpInitializeAssemblyStorageMap();
RtlpInitializeAuditAce();
RtlpInitializeDeniedAce();
RtlpInitializeHandleTableForAtomTable();
RtlpInitializeHeapSegment();
RtlpInitializeLangRegistryInfo();
RtlpInitializeLeakDetection();
RtlpInitializeLowFragHeapManager();
RtlpInitializeMap();
RtlpInitializeStackTraceDatabase();
RtlpInitializeStackTraceLog();
RtlpInitializeUCRIndex();
RtlpInitializeUserList();
RtlpInsertAssemblyStorageMapEntry();
RtlpInsertFreeBlock();
RtlpInsertStringAtom();
RtlpInsertUCRBlock();
RtlpInterlockedFlushSList();
RtlpInterlockedPopEntrySList();
RtlpInterlockedPushEntrySList();
RtlpIsALicensedLIPLanguage();
RtlpIsALicensedRegularLanguage();
RtlpIsCustomLocale();
RtlpIsDuplicateAce();
RtlpIsFrameInBounds();
RtlpIsLFHZoneAllocation();
RtlpIsNameInExpressionPrivate();
RtlpIsQualifiedLanguage();
RtlpIsSameImage();
RtlpLangNameInMultiSzString();
RtlpLangNameInMultiSzString_Size();
RtlpLeakCallbackRoutine();
RtlpLoadInstallLanguageFallback();
RtlpLoadLanguageConfigList();
RtlpLoadMachineUIByPolicy();
RtlpLoadNlsData();
RtlpLoadPolicyLanguageSpec();
RtlpLoadPrimaryDbgRegWrap();
RtlpLoadUmsDebugRegisterState();
RtlpLoadUserUIByPolicy();
RtlpLocateActivationContextSection();
RtlpLocateActivationContextSectionForQuery();
RtlpLocateExtendedFeature();
RtlpLocateModuleSectionInLockedSectionList();
RtlpLocateRelatedBlocks();
RtlpLocateXStateChunk();
RtlpLockAtomTable();
RtlpLockFlsCallbackVector();
RtlpLockStack();
RtlpLogHeapAllocateEvent();
RtlpLogHeapCommit();
RtlpLogHeapContractEvent();
RtlpLogHeapCreateEvent();
RtlpLogHeapDecommit();
RtlpLogHeapDestroyEvent();
RtlpLogHeapExtendEvent();
RtlpLogHeapFailure();
RtlpLogHeapFreeEvent();
RtlpLogHeapSubSegmentAlloc();
RtlpLogHeapSubSegmentAllocCached();
RtlpLogHeapSubSegmentFree();
RtlpLogHeapSubSegmentFreeCached();
RtlpLookupDynamicFunctionEntry();
RtlpLookupFunctionEntryForStackWalks();
RtlpLookupPrimaryFunctionEntry();
RtlpLowFragHeapAllocFromContext();
RtlpLowFragHeapAllocateFromZone();
RtlpLowFragHeapMultipleAlloc();
RtlpLowFragHeapMultipleFree();
RtlpMUIEnumerateFolder();
RtlpMUIGetAllInstalledLang();
RtlpMUIRegPatchLicenseInfortmation();
RtlpMapSpecialValuesToBuiltInActivationContexts();
RtlpMatchUILanguage();
RtlpMatchUserLanguage();
RtlpModuleEnumeratorCallback();
RtlpMoveActCtxToFreeList();
RtlpMuiFreeLangRegistryInfo();
RtlpMuiRegAddAlternateCodePage();
RtlpMuiRegAddBaseLanguage();
RtlpMuiRegAddLanguageByName();
RtlpMuiRegAddMultiSzToLangFallbackList();
RtlpMuiRegAddNeutralLanguage();
RtlpMuiRegAddNeutralToInstalled();
RtlpMuiRegConfigListAddLanguage();
RtlpMuiRegConfigMatchesInstalled();
RtlpMuiRegConfigNodePopulate();
RtlpMuiRegCreateAndLoadRegistryInfo();
RtlpMuiRegCreateLanguageConfigList();
RtlpMuiRegCreateLanguageList();
RtlpMuiRegCreateLanguages();
RtlpMuiRegCreateRegistryInfo();
RtlpMuiRegCreateStringPool();
RtlpMuiRegDeserializeRegistryInfo();
RtlpMuiRegDupLanguageList();
RtlpMuiRegFreeLanguageConfigList();
RtlpMuiRegFreeLanguageList();
RtlpMuiRegFreeLanguages();
RtlpMuiRegFreeRegistryInfo();
RtlpMuiRegFreeStringPool();
RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId();
RtlpMuiRegGetFallbackLanguageInfoByIndex();
RtlpMuiRegGetFallbackLanguageInfoByLangId();
RtlpMuiRegGetFallbackLanguageInfoByName();
RtlpMuiRegGetFallbackLanguagesAsMultiSZ();
RtlpMuiRegGetInstalledLangInfoIndex();
RtlpMuiRegGetInstalledLanguageIndex();
RtlpMuiRegGetInstalledLanguageIndexByLangId();
RtlpMuiRegGetInstalledLanguageIndexByName();
RtlpMuiRegGetInstalledLanguageInfoByIndex();
RtlpMuiRegGetLangInfoIndex();
RtlpMuiRegGetLanginfoTypeNSpec();
RtlpMuiRegGetLanguageSpec();
RtlpMuiRegGetOrAddLangInfo();
RtlpMuiRegGetOrAddString();
RtlpMuiRegGetOrAddStringToPool();
RtlpMuiRegGetString();
RtlpMuiRegGetStringFromPool();
RtlpMuiRegGrowLanguageConfigList();
RtlpMuiRegGrowLanguageList();
RtlpMuiRegGrowLanguages();
RtlpMuiRegGrowStringPool();
RtlpMuiRegInitAnyLanguage();
RtlpMuiRegInitLIPLanguage();
RtlpMuiRegInitPartialLanguage();
RtlpMuiRegLangInfoMatchesSpec();
RtlpMuiRegLoadLicInformation();
RtlpMuiRegLoadMachinePreferredUILanguages();
RtlpMuiRegLoadPreferredUILanguages();
RtlpMuiRegLoadRegistryInfo();
RtlpMuiRegPopulateBaseLanguages();
RtlpMuiRegResizeLanguageConfigList();
RtlpMuiRegResizeLanguageList();
RtlpMuiRegResizeLanguages();
RtlpMuiRegResizeStringPool();
RtlpMuiRegTryToAppendLangId();
RtlpMuiRegTryToAppendLanguageName();
RtlpMuiRegValidateAndGetInstallFallbackBase();
RtlpMuiRegValidateConfigNode();
RtlpNameprepAsciiWorker();
RtlpNewSecurityObject();
RtlpNlsCompareUnicodeString();
RtlpNlsGetNameIndex();
RtlpNonNegativeDecrement();
RtlpNormalizePeHeaderForIdHash();
RtlpNormalizeStringWorker();
RtlpNotOwnerCriticalSection();
RtlpNtCreateKey();
RtlpNtEnumerateSubKey();
RtlpNtMakeTemporaryKey();
RtlpNtOpenKey();
RtlpNtQueryValueKey();
RtlpNtSetValueKey();
RtlpOpenAndMapCustomCultureFile();
RtlpOpenBaseImageFileOptionsKey();
RtlpOpenImageFileOptionsKey();
RtlpOpenThreadToken();
RtlpOptimizeConditionVariableWaitList();
RtlpOptimizeSRWLockList();
RtlpOwnerAcesPresent();
RtlpPageHeapStop();
RtlpPeHeaderHash2();
RtlpPerformHeapMaintenance();
RtlpPlaceActivationContextOnLiveList();
RtlpPopulateContext();
RtlpPopulateLanguageConfigList();
RtlpPopulateListIndex();
RtlpPossibleDeadlock();
RtlpPrintErrorInformation();
RtlpProbeAssemblyStorageRootForAssembly();
RtlpProbeUserBufferSafe();
RtlpProcessIFEOKeyFilter();
RtlpProcessReflectionStartup();
RtlpProtectBlock();
RtlpPushPageDescriptor();
RtlpQueryAssemblyInformationActivationContextDetailedInformation();
RtlpQueryBlockStackTrace();
RtlpQueryCriticalSectionOwnerInformation();
RtlpQueryDefaultUILanguage();
RtlpQueryEnvironmentCache();
RtlpQueryErrorInformationAddress();
RtlpQueryExtendedHeapInformation();
RtlpQueryExtendedInformationAllHeaps();
RtlpQueryExtendedInformationHeap();
RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation();
RtlpQueryInformationActivationContextBasicInformation();
RtlpQueryInformationActivationContextCompatibilityInformation();
RtlpQueryInformationActivationContextDetailedInformation();
RtlpQueryInformationActivationContextManifestResourceName();
RtlpQueryMemoryUsageHeap();
RtlpQueryProcessDebugInformationFromWow64();
RtlpQueryProcessDebugInformationRemote();
RtlpQueryProcessEnumHeapsRoutine();
RtlpQueryPseudoEnvironmentVariable();
RtlpQueryRegistryDirect();
RtlpQueryRunLevel();
RtlpQuerySecurityDescriptor();
RtlpQueryTimeZoneInformationWorker();
RtlpQueueWaitBlockToSRWLock();
RtlpReAllocateHeap();
RtlpReadProcessHeaps();
RtlpReadSingleHookInformation();
RtlpReferenceCurrentDirectory();
RtlpRefreshCachedUILanguage();
RtlpRegTziFormatToTzi();
RtlpRegisterLockedMemoryBlockLookaside();
RtlpRegisterLockedMemoryZone();
RtlpRegisterStackTrace();
RtlpReleaseHeapListLock();
RtlpRemoveHeapFromProcessList();
RtlpRemovePendingDeleteLanguages();
RtlpRemoveUCRBlock();
RtlpRemoveVectoredHandler();
RtlpReportHeapFailure();
RtlpResUltimateFallbackInfo();
RtlpResetDriveEnvironment();
RtlpResolveAssemblyStorageMapEntry();
RtlpRunOnceWaitForInit();
RtlpSafewcslen();
RtlpSameFunction();
RtlpSaveUmsDebugRegisterState();
RtlpScanEnvironment();
RtlpScanHeapAllocBlocks();
RtlpScanProcessVirtualMemory();
RtlpSchedulerExceptionFilter();
RtlpSearchFunctionTable();
RtlpSearchUCRBlock();
RtlpSearchValidationCode();
RtlpSecMemFreeVirtualMemory();
RtlpSetBlockInfo();
RtlpSetHeapDebuggingInformation();
RtlpSetInstallLanguage();
RtlpSetMachineUILanguagesImmediate();
RtlpSetPreferredUILanguages();
RtlpSetPrivilege();
RtlpSetProcMergedLangList();
RtlpSetProcUserMachineLangList();
RtlpSetProcessBacktraces();
RtlpSetProcessDebugInformationRemote();
RtlpSetSecurityObject();
RtlpSetTimeZoneInformationWorker();
RtlpSetupCTypeTable();
RtlpSetupExtendedBlock();
RtlpSingleRangeValidate();
RtlpStackTraceDatabaseHeapEnum();
RtlpStackTraceDatabaseLogPrefix();
RtlpStackTracePrefix();
RtlpStartThread();
RtlpStdExtendLowerWatermark();
RtlpStdExtendUpperWatermark();
RtlpStdGetNumberOfBuckets();
RtlpStdGetRecordedStackTraceIndex();
RtlpStdGetSpaceForTrace();
RtlpStdListRemove();
RtlpStdLockAcquire();
RtlpStdLockRelease();
RtlpStdLogCapturedStackTrace();
RtlpSubSegmentAllocateAll();
RtlpSubSegmentDebugInitialize();
RtlpSubSegmentFreeAll();
RtlpSubSegmentInitialize();
RtlpSysVolAllocate();
RtlpSysVolCheckOwnerAndSecurity();
RtlpSysVolCreateSecurityDescriptor();
RtlpSysVolFree();
RtlpSysVolTakeOwnership();
RtlpTerminateCurrentProcess();
RtlpTerminateFailureFilter();
RtlpTpDeleteData();
RtlpTpETWCallbackEnqueue();
RtlpTpETWCallbackStart();
RtlpTpETWCallbackStop();
RtlpTpImpersonate();
RtlpTpInitializeData();
RtlpTpIoAlloc();
RtlpTpIoCallback();
RtlpTpIoDllLoaded();
RtlpTpIoDllNotification();
RtlpTpIoDllProcessUnloads();
RtlpTpIoDllUnloaded();
RtlpTpIoLookup();
RtlpTpResumeImpersonation();
RtlpTpRevert();
RtlpTpRevertCapture();
RtlpTpTimerCallback();
RtlpTpTimerFinalizationCallback();
RtlpTpTimerQueueRundown();
RtlpTpTimerRundown();
RtlpTpWaitCallback();
RtlpTpWaitCheckReset();
RtlpTpWaitFinalizationCallback();
RtlpTpWaitRundown();
RtlpTpWorkCallback();
RtlpTpWorkUnposted();
RtlpTraceDatabaseAllocate();
RtlpTraceDatabaseFree();
RtlpTraceDatabaseInternalAdd();
RtlpTraceDatabaseInternalFind();
RtlpTraceStandardHashFunction();
RtlpTraverseParents();
RtlpTripleListAddToTail();
RtlpTripleListCommitPendingUpdates();
RtlpTripleListMakeUpdateReady();
RtlpTripleListRemove();
RtlpTripleListSwitchStandby();
RtlpTripleListUpdate();
RtlpUmsExecuteYieldThreadEnd();
RtlpUmsPrimaryContextWrap();
RtlpUmsThreadYield();
RtlpUnWaitCriticalSection();
RtlpUninitializeAssemblyStorageMap();
RtlpUnlockFlsCallbackVector();
RtlpUnlockStack();
RtlpUnregisterLockedMemoryBlockLookaside();
RtlpUnregisterLockedMemoryZone();
RtlpUnwindHandler();
RtlpUnwindOpSlots();
RtlpUpcaseUnicodeStringPrivate();
RtlpUpdateHeapListIndex();
RtlpUpdateHeapRates();
RtlpUpdateTEBLanguage();
RtlpUpdateTagEntry();
RtlpUpdateUCRIndexInsert();
RtlpUpdateUCRIndexRemove();
RtlpValidLabelSubjectContext();
RtlpValidOwnerSubjectContext();
RtlpValidateActivationContextData();
RtlpValidateBoundaryDescriptor();
RtlpValidateContextFlags();
RtlpValidateHeap();
RtlpValidateHeapEntry();
RtlpValidateHeapHeaders();
RtlpValidateHeapSegment();
RtlpValidatePeChecksum();
RtlpValidatePeHeaderHash2();
RtlpValidateSDOffsetAndSize();
RtlpValidateSidBuffer();
RtlpValidateStd3AndAscii();
RtlpValidateTargetModule();
RtlpValidateTargetRanges();
RtlpVerCompare();
RtlpVerGetConditionMask();
RtlpVerifyAndCommitUILanguageSettings();
RtlpWaitCouldDeadlock();
RtlpWaitForCriticalSection();
RtlpWaitOnCriticalSection();
RtlpWakeConditionVariable();
RtlpWakeSRWLock();
RtlpWakeSingle();
RtlpWalkCallbackRoutine();
RtlpWalkFrameChain();
RtlpWalkHeap();
RtlpWalkLFHBlock();
RtlpWin32NTNameToNtPathName_U();
RtlpWow64EnableFsRedirection();
RtlpWow64EnableFsRedirectionEx();
RtlpWow64ThunkEnvironment32To64();
RtlxAnsiStringToUnicodeSize();
RtlxOemStringToUnicodeSize();
RtlxUnicodeStringToAnsiSize();
RtlxUnicodeStringToOemSize();
SHATransform();
SbAtomicCaptureContextGuid();
SbCleanupTrace();
SbExecuteProcedure();
SbGetContextDetailsByGuid();
SbObtainTraceHandle();
SbSelectProcedure();
SbUpdateSwitchContextBasedOnDll();
SbpDeterimineDllContext();
SbpFindOverridenBranch();
SbpLookup();
SbpParseFuncName();
SbpResolveBasedOnName();
SbpRetrieveCompatibilityManifest();
SbpTraceContextReadRetry();
SbpTraceContextUpdate();
SbpTraceSbCall();
SbpTraceSbImpl();
SbpUpdateCache();
SbpUpdateCacheWithDefaultImpl();
SbtDisableForCurrentProcess();
SbtLogDllMapping();
SbtLogExeInitializing();
SbtLogExeTerminating();
SbtLogSystemUsageByParent();
SbtLogSystemUsageByStack();
SendMessageToWERService();
SetAssertBufferPtrinPeb();
ShipAssert();
ShipAssertGetBufferInfo();
ShipAssertMsgA();
ShipAssertMsgW();
SignalStartWerSvc();
SqmEscalationCallback();
StackPop<int>();
StackPop<unsigned int>();
StackPush<int>();
StackPush<unsigned int>();
StringCbCopyW();
StringCbLengthW();
StringCbPrintfA();
StringCbPrintfW();
StringCchCopyNW();
StringCchCopyW();
StringCchPrintfW();
SwapSplayLinks();
ThrottleEscalatedRule();
TpAllocAlpcCompletion();
TpAllocAlpcCompletionEx();
TpAllocCleanupGroup();
TpAllocIoCompletion();
TpAllocPool();
TpAllocTimer();
TpAllocWait();
TpAllocWork();
TpAlpcRegisterCompletionList();
TpAlpcUnregisterCompletionList();
TpBindAlpcToDirect();
TpBindFileToDirect();
TpCallbackIndependent();
TpCallbackLeaveCriticalSectionOnCompletion();
TpCallbackMayRunLong();
TpCallbackReleaseMutexOnCompletion();
TpCallbackReleaseSemaphoreOnCompletion();
TpCallbackSetEventOnCompletion();
TpCallbackUnloadDllOnCompletion();
TpCancelAsyncIoOperation();
TpCaptureCaller();
TpCheckTerminateWorker();
TpDbgDumpHeapUsage();
TpDbgGetFreeInfo();
TpDbgSetLogRoutine();
TpDereferenceGlobalPool();
TpDisablePoolCallbackChecks();
TpDisassociateCallback();
TpInitializePackage();
TpIsTimerSet();
TpPoolFreeUnusedNodes();
TpPoolReferenceExistingGlobalPool();
TpPostTask();
TpPostWork();
TpQueryPoolStackInformation();
TpReferenceGlobalPool();
TpReleaseAlpcCompletion();
TpReleaseCleanupGroup();
TpReleaseCleanupGroupMembers();
TpReleaseIoCompletion();
TpReleasePool();
TpReleaseTimer();
TpReleaseWait();
TpReleaseWork();
TpReserveTaskPost();
TpSetDefaultPoolMaxThreads();
TpSetDefaultPoolStackInformation();
TpSetPoolMaxThreads();
TpSetPoolMinThreads();
TpSetPoolStackInformation();
TpSetTimer();
TpSetWait();
TpSimpleTryPost();
TpStartAsyncIoOperation();
TpTimerOutstandingCallbackCount();
TpUnreserveTaskPost();
TpWaitForAlpcCompletion();
TpWaitForIoCompletion();
TpWaitForTimer();
TpWaitForWait();
TpWaitForWork();
TpWaitOutstandingCallbackCount();
TppAdjustRunningThreadGoal();
TppAllocAlpcCompletion();
TppAllocThreadData();
TppAlpcpCallbackEpilog();
TppAlpcpExecuteCallback();
TppAlpcpFree();
TppAreNodeWorkersSteadyState();
TppBarrierAdjust();
TppCallbackCheckThreadAfterCallback();
TppCallbackCheckThreadBeforeCallback();
TppCallbackEpilog();
TppCallbackMayRunLongProlog();
TppCheckForTransactions();
TppCleanupGroupAddMember();
TppCleanupGroupMemberAddCallback();
TppCleanupGroupMemberCallbackProlog();
TppCleanupGroupMemberCompleteCallbacks();
TppCleanupGroupMemberDestroy();
TppCleanupGroupMemberInitialize();
TppCleanupGroupMemberRelease();
TppCleanupGroupMemberWait();
TppCleanupGroupRemoveMember();
TppCleanupGrouppFree();
TppCompleteThreadData();
TppCritResetThread();
TppCritSetThread();
TppETWCallbackCancel();
TppETWCallbackDequeue();
TppETWCallbackEnqueue();
TppETWCallbackStart();
TppETWCallbackStop();
TppETWPoolClose();
TppETWPoolCreate();
TppETWPoolThreadMax();
TppETWPoolThreadMin();
TppETWWorkerNodeSwitch();
TppExceptionFilter();
TppFreeThreadData();
TppGetCurrentThreadNumaNode();
TppGetWorkerFactoryHandle();
TppGlobalpGetKeyedEvent();
TppIopCallbackEpilog();
TppIopCancelPendingCallbacks();
TppIopExecuteCallback();
TppIopFree();
TppIsWorkerThread();
TppLogpDbgPrint();
TppNBQAllocNode();
TppNBQDestroy();
TppNBQFreeNode();
TppNBQInit();
TppNBQInsertTail();
TppNBQRemoveHead();
TppPHDelete();
TppPHExtractMin();
TppPHInsert();
TppPoolAddGuard();
TppPoolAddWorker();
TppPoolDestroyFreeList();
TppPoolDestroyLists();
TppPoolFreeUnusedNodes();
TppPoolInitializeListState();
TppPoolRemoveGuard();
TppPoolRemoveWorker();
TppPoolReserveTaskPost();
TppPoolRuntimeInitializeLists();
TppPoolUnreserveTaskPost();
TppPoolpDereferenceGlobalPool();
TppPoolpFree();
TppPoolpReferenceGlobalPool();
TppSetWaitInterrupt();
TppSimplepExecuteCallback();
TppSimplepFree();
TppStartThreadData();
TppTerminateProcess();
TppTimerAlloc();
TppTimerpAcquirePoolTimerQueue();
TppTimerpAllocTimerQueue();
TppTimerpCancelPendingCallbacks();
TppTimerpDequeueTimer();
TppTimerpDestroyTimerQueueQueue();
TppTimerpEnqueueTimer();
TppTimerpExecuteCallback();
TppTimerpExpire();
TppTimerpExpireTimerQueue();
TppTimerpFree();
TppTimerpFreeTimerQueue();
TppTimerpInitTimerQueueQueue();
TppTimerpReleasePoolTimerQueue();
TppTimerpSet();
TppTimerpStopCallbackGeneration();
TppTimerpTimerExpired();
TppTimerpUpdate();
TppWaitAlloc();
TppWaitComplete();
TppWaiterAllocWaitSlot();
TppWaiterEnqueueTransition();
TppWaiterFreeWaitSlot();
TppWaiterpCompleteWait();
TppWaiterpDoTransitions();
TppWaiterpInsertWait();
TppWaiterpOuterExceptionFilter();
TppWaiterpRemoveWait();
TppWaiterpSpinupThread();
TppWaiterpThread();
TppWaiterpWaitIsDue();
TppWaiterpWaitTimerExpired();
TppWaitpExecuteCallback();
TppWaitpFree();
TppWaitpSet();
TppWaitpStopCallbackGeneration();
TppWorkCallbackEpilog();
TppWorkCallbackPrologRelease();
TppWorkCancelPendingCallbacks();
TppWorkDestroy();
TppWorkInitialize();
TppWorkPost();
TppWorkUnposted();
TppWorkWait();
TppWorkerFindTask();
TppWorkerGetNextNode();
TppWorkerSwitchNode();
TppWorkerThread();
TppWorkerpInnerExceptionFilter();
TppWorkerpOuterExceptionFilter();
TppWorkpExecuteCallback();
TppWorkpFree();
TransformMD5();
ULongAdd();
ULongLongToULong();
UShortAdd();
UninitUser32Proc();
Validate<_RESCDIRECTORY * __ptr64,_RESCDENTRY * __ptr64>();
ValidatePointer();
ValidateRegistrLangType();
ValidateStd3();
VerSetConditionMask();
WaitForWerSvc();
WerEscalationLazyInit();
WerEscalationReadImageVersionInfoForModuleBase();
WerReportSQMEvent();
WerpAllocateAndInitializeSid();
WerpEscalationIsDisabled();
WerpEscalationIsWMRSendStringSet();
WerpEscalationReadUlongFromKey();
WerpFreeSid();
WerpGlobalFlagsForProcess();
WerpPathTail();
WerpProcessId();
WerpThreadId();
WerpUtilPathTail();
WinSqmAddToAverageDWORD();
WinSqmAddToStream();
WinSqmAddToStreamEx();
WinSqmCheckEscalationAddToStreamEx();
WinSqmCheckEscalationSetDWORD();
WinSqmCheckEscalationSetDWORD64();
WinSqmCheckEscalationSetString();
WinSqmCommonDatapointDelete();
WinSqmCommonDatapointSet();
WinSqmCommonDatapointSetDWORD();
WinSqmCommonDatapointSetDWORD64();
WinSqmCommonDatapointSetStreamEx();
WinSqmCommonDatapointSetString();
WinSqmCopyString();
WinSqmCreateStringStreamEntryEx();
WinSqmDWORDEvent();
WinSqmEndSession();
WinSqmEscalationCallback();
WinSqmEscalationManagerAcquire();
WinSqmEscalationManagerRelease();
WinSqmEventEnabled();
WinSqmEventWrite();
WinSqmGetEscalationRuleStatus();
WinSqmGetInstrumentationProperty();
WinSqmGetProcessHashValue();
WinSqmIncrementDWORD();
WinSqmIsOptedIn();
WinSqmIsOptedInEx();
WinSqmLogEscalationStream();
WinSqmSetDWORD();
WinSqmSetDWORD64();
WinSqmSetEscalationInfo();
WinSqmSetIfMaxDWORD();
WinSqmSetIfMinDWORD();
WinSqmSetString();
WinSqmStartSession();
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
ZwAllocateReserveObject();
ZwAllocateUserPhysicalPages();
ZwAllocateUuids();
ZwAllocateVirtualMemory();
ZwAlpcAcceptConnectPort();
ZwAlpcCancelMessage();
ZwAlpcConnectPort();
ZwAlpcCreatePort();
ZwAlpcCreatePortSection();
ZwAlpcCreateResourceReserve();
ZwAlpcCreateSectionView();
ZwAlpcCreateSecurityContext();
ZwAlpcDeletePortSection();
ZwAlpcDeleteResourceReserve();
ZwAlpcDeleteSectionView();
ZwAlpcDeleteSecurityContext();
ZwAlpcDisconnectPort();
ZwAlpcImpersonateClientOfPort();
ZwAlpcOpenSenderProcess();
ZwAlpcOpenSenderThread();
ZwAlpcQueryInformation();
ZwAlpcQueryInformationMessage();
ZwAlpcRevokeSecurityContext();
ZwAlpcSendWaitReceivePort();
ZwAlpcSetInformation();
ZwApphelpCacheControl();
ZwAreMappedFilesTheSame();
ZwAssignProcessToJobObject();
ZwCallbackReturn();
ZwCancelIoFile();
ZwCancelIoFileEx();
ZwCancelSynchronousIoFile();
ZwCancelTimer();
ZwClearEvent();
ZwClose();
ZwCloseObjectAuditAlarm();
ZwCommitComplete();
ZwCommitEnlistment();
ZwCommitTransaction();
ZwCompactKeys();
ZwCompareTokens();
ZwCompleteConnectPort();
ZwCompressKey();
ZwConnectPort();
ZwContinue();
ZwCreateDebugObject();
ZwCreateDirectoryObject();
ZwCreateEnlistment();
ZwCreateEvent();
ZwCreateEventPair();
ZwCreateFile();
ZwCreateIoCompletion();
ZwCreateJobObject();
ZwCreateJobSet();
ZwCreateKey();
ZwCreateKeyTransacted();
ZwCreateKeyedEvent();
ZwCreateMailslotFile();
ZwCreateMutant();
ZwCreateNamedPipeFile();
ZwCreatePagingFile();
ZwCreatePort();
ZwCreatePrivateNamespace();
ZwCreateProcess();
ZwCreateProcessEx();
ZwCreateProfile();
ZwCreateProfileEx();
ZwCreateResourceManager();
ZwCreateSection();
ZwCreateSemaphore();
ZwCreateSymbolicLinkObject();
ZwCreateThread();
ZwCreateThreadEx();
ZwCreateTimer();
ZwCreateToken();
ZwCreateTransaction();
ZwCreateTransactionManager();
ZwCreateUserProcess();
ZwCreateWaitablePort();
ZwCreateWorkerFactory();
ZwDebugActiveProcess();
ZwDebugContinue();
ZwDelayExecution();
ZwDeleteAtom();
ZwDeleteBootEntry();
ZwDeleteDriverEntry();
ZwDeleteFile();
ZwDeleteKey();
ZwDeleteObjectAuditAlarm();
ZwDeletePrivateNamespace();
ZwDeleteValueKey();
ZwDeviceIoControlFile();
ZwDisableLastKnownGood();
ZwDisplayString();
ZwDrawText();
ZwDuplicateObject();
ZwDuplicateToken();
ZwEnableLastKnownGood();
ZwEnumerateBootEntries();
ZwEnumerateDriverEntries();
ZwEnumerateKey();
ZwEnumerateSystemEnvironmentValuesEx();
ZwEnumerateTransactionObject();
ZwEnumerateValueKey();
ZwExtendSection();
ZwFilterToken();
ZwFindAtom();
ZwFlushBuffersFile();
ZwFlushInstallUILanguage();
ZwFlushInstructionCache();
ZwFlushKey();
ZwFlushProcessWriteBuffers();
ZwFlushVirtualMemory();
ZwFlushWriteBuffer();
ZwFreeUserPhysicalPages();
ZwFreeVirtualMemory();
ZwFreezeRegistry();
ZwFreezeTransactions();
ZwFsControlFile();
ZwGetContextThread();
ZwGetCurrentProcessorNumber();
ZwGetDevicePowerState();
ZwGetMUIRegistryInfo();
ZwGetNextProcess();
ZwGetNextThread();
ZwGetNlsSectionPtr();
ZwGetNotificationResourceManager();
ZwGetPlugPlayEvent();
ZwGetWriteWatch();
ZwImpersonateAnonymousToken();
ZwImpersonateClientOfPort();
ZwImpersonateThread();
ZwInitializeNlsFiles();
ZwInitializeRegistry();
ZwInitiatePowerAction();
ZwIsProcessInJob();
ZwIsSystemResumeAutomatic();
ZwIsUILanguageComitted();
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
ZwMapCMFModule();
ZwMapUserPhysicalPages();
ZwMapUserPhysicalPagesScatter();
ZwMapViewOfSection();
ZwModifyBootEntry();
ZwModifyDriverEntry();
ZwNotifyChangeDirectoryFile();
ZwNotifyChangeKey();
ZwNotifyChangeMultipleKeys();
ZwNotifyChangeSession();
ZwOpenDirectoryObject();
ZwOpenEnlistment();
ZwOpenEvent();
ZwOpenEventPair();
ZwOpenFile();
ZwOpenIoCompletion();
ZwOpenJobObject();
ZwOpenKey();
ZwOpenKeyEx();
ZwOpenKeyTransacted();
ZwOpenKeyTransactedEx();
ZwOpenKeyedEvent();
ZwOpenMutant();
ZwOpenObjectAuditAlarm();
ZwOpenPrivateNamespace();
ZwOpenProcess();
ZwOpenProcessToken();
ZwOpenProcessTokenEx();
ZwOpenResourceManager();
ZwOpenSection();
ZwOpenSemaphore();
ZwOpenSession();
ZwOpenSymbolicLinkObject();
ZwOpenThread();
ZwOpenThreadToken();
ZwOpenThreadTokenEx();
ZwOpenTimer();
ZwOpenTransaction();
ZwOpenTransactionManager();
ZwPlugPlayControl();
ZwPowerInformation();
ZwPrePrepareComplete();
ZwPrePrepareEnlistment();
ZwPrepareComplete();
ZwPrepareEnlistment();
ZwPrivilegeCheck();
ZwPrivilegeObjectAuditAlarm();
ZwPrivilegedServiceAuditAlarm();
ZwPropagationComplete();
ZwPropagationFailed();
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
ZwQueryInformationEnlistment();
ZwQueryInformationFile();
ZwQueryInformationJobObject();
ZwQueryInformationPort();
ZwQueryInformationProcess();
ZwQueryInformationResourceManager();
ZwQueryInformationThread();
ZwQueryInformationToken();
ZwQueryInformationTransaction();
ZwQueryInformationTransactionManager();
ZwQueryInformationWorkerFactory();
ZwQueryInstallUILanguage();
ZwQueryIntervalProfile();
ZwQueryIoCompletion();
ZwQueryKey();
ZwQueryLicenseValue();
ZwQueryMultipleValueKey();
ZwQueryMutant();
ZwQueryObject();
ZwQueryOpenSubKeys();
ZwQueryOpenSubKeysEx();
ZwQueryPerformanceCounter();
ZwQueryPortInformationProcess();
ZwQueryQuotaInformationFile();
ZwQuerySection();
ZwQuerySecurityAttributesToken();
ZwQuerySecurityObject();
ZwQuerySemaphore();
ZwQuerySymbolicLinkObject();
ZwQuerySystemEnvironmentValue();
ZwQuerySystemEnvironmentValueEx();
ZwQuerySystemInformation();
ZwQuerySystemInformationEx();
ZwQuerySystemTime();
ZwQueryTimer();
ZwQueryTimerResolution();
ZwQueryValueKey();
ZwQueryVirtualMemory();
ZwQueryVolumeInformationFile();
ZwQueueApcThread();
ZwQueueApcThreadEx();
ZwRaiseException();
ZwRaiseHardError();
ZwReadFile();
ZwReadFileScatter();
ZwReadOnlyEnlistment();
ZwReadRequestData();
ZwReadVirtualMemory();
ZwRecoverEnlistment();
ZwRecoverResourceManager();
ZwRecoverTransactionManager();
ZwRegisterProtocolAddressInformation();
ZwRegisterThreadTerminatePort();
ZwReleaseKeyedEvent();
ZwReleaseMutant();
ZwReleaseSemaphore();
ZwReleaseWorkerFactoryWorker();
ZwRemoveIoCompletion();
ZwRemoveIoCompletionEx();
ZwRemoveProcessDebug();
ZwRenameKey();
ZwRenameTransactionManager();
ZwReplaceKey();
ZwReplacePartitionUnit();
ZwReplyPort();
ZwReplyWaitReceivePort();
ZwReplyWaitReceivePortEx();
ZwReplyWaitReplyPort();
ZwRequestPort();
ZwRequestWaitReplyPort();
ZwResetEvent();
ZwResetWriteWatch();
ZwRestoreKey();
ZwResumeProcess();
ZwResumeThread();
ZwRollbackComplete();
ZwRollbackEnlistment();
ZwRollbackTransaction();
ZwRollforwardTransactionManager();
ZwSaveKey();
ZwSaveKeyEx();
ZwSaveMergedKeys();
ZwSecureConnectPort();
ZwSerializeBoot();
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
ZwSetInformationEnlistment();
ZwSetInformationFile();
ZwSetInformationJobObject();
ZwSetInformationKey();
ZwSetInformationObject();
ZwSetInformationProcess();
ZwSetInformationResourceManager();
ZwSetInformationThread();
ZwSetInformationToken();
ZwSetInformationTransaction();
ZwSetInformationTransactionManager();
ZwSetInformationWorkerFactory();
ZwSetIntervalProfile();
ZwSetIoCompletion();
ZwSetIoCompletionEx();
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
ZwSetTimerEx();
ZwSetTimerResolution();
ZwSetUuidSeed();
ZwSetValueKey();
ZwSetVolumeInformationFile();
ZwShutdownSystem();
ZwShutdownWorkerFactory();
ZwSignalAndWaitForSingleObject();
ZwSinglePhaseReject();
ZwStartProfile();
ZwStopProfile();
ZwSuspendProcess();
ZwSuspendThread();
ZwSystemDebugControl();
ZwTerminateJobObject();
ZwTerminateProcess();
ZwTerminateThread();
ZwTestAlert();
ZwThawRegistry();
ZwThawTransactions();
ZwTraceControl();
ZwTraceEvent();
ZwTranslateFilePath();
ZwUmsThreadYield();
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
ZwWaitForWorkViaWorkerFactory();
ZwWaitHighEventPair();
ZwWaitLowEventPair();
ZwWorkerFactoryWorkerReady();
ZwWriteFile();
ZwWriteFileGather();
ZwWriteRequestData();
ZwWriteVirtualMemory();
ZwYieldExecution();
_C_specific_handler();
_GSHandlerCheck();
_GSHandlerCheckCommon();
_GSHandlerCheck_SEH();
_NLG_Dispatch2();
_NLG_Return2();
_ResCULongLongToUInt();
__entry_from_strcat_in_strcpy();
_ascii_memicmp();
_ascii_stricmp();
_ascii_strnicmp();
_chkstk();
_clear_x87_state();
_isascii();
_iscsym();
_iscsymf();
_misaligned_access();
_pctype_func();
_pow_error();
_remainder_piby2();
_report_gsfailure();
_security_check_cookie();
_security_init_cookie();
_security_init_cookie_ex();
_toascii();
abs();
adapt();
alloca_probe();
atan();
atoi();
atoi64();
atol();
basic();
bsearch();
ceil();
clrfp();
control87();
controlfp();
cos();
ctrlfp();
decode_digit();
decomp();
encode_basic();
encode_digit();
errcode();
except1();
fabs();
fclrf();
fgetwc_nolock();
filbuf();
filbuf_s();
filwbuf_s();
floor();
flsbuf();
flsbuf_s();
flswbuf();
fputwc_nolock();
frnd();
get_fpsr();
get_printf_count_output();
getbuf();
handle_error();
handle_exc();
handle_qnan1();
i64toa();
i64toa_s();
i64tow();
i64tow_s();
input_l();
input_s();
invalid_parameter();
isalnum();
isalpha();
iscntrl();
isdigit();
isgraph();
isleadbyte();
islower();
isprint();
ispunct();
isspace();
isupper();
iswalpha();
iswctype();
iswctype_l();
iswdigit();
iswlower();
iswspace();
iswxdigit();
isxdigit();
itoa();
itoa_s();
itow();
itow_s();
labs();
lfind();
local_unwind();
log();
longjmp();
ltoa();
ltoa_s();
ltow();
ltow_s();
makepath_s();
matherr();
mbstowcs();
mbstrlen();
mbtowc();
memccpy();
memchr();
memcmp();
memcpy();
memcpy_s();
memicmp();
memmove();
memmove_s();
memset();
output_l();
output_s();
pow();
punycode_decode();
punycode_encode();
qsort();
raise_exc();
raise_exc_ex();
safecrt_mbtowc();
set_errno_from_matherr();
set_fpsr();
set_statfp();
setjmp();
setjmpex();
sin();
sinput_s();
snprintf();
snprintf_s();
snscanf_s();
snwprintf();
snwprintf_s();
snwscanf_s();
soutput_s();
splitpath();
splitpath_s();
sprintf();
sprintf_s();
sptype();
sqrt();
sscanf();
sscanf_s();
statfp();
strcat();
strcat_s();
strchr();
strcmp();
strcpy();
strcpy_s();
strcspn();
stricmp();
strlen();
strlwr();
strncat();
strncat_s();
strncmp();
strncpy();
strncpy_s();
strnicmp();
strnlen();
strnset_s();
strpbrk();
strrchr();
strset_s();
strspn();
strstr();
strtoi64();
strtok_s();
strtol();
strtolX();
strtoul();
strupr();
swinput_s();
swoutput_s();
swprintf();
swprintf_s();
swscanf_s();
tan();
tolower();
toupper();
towlower();
towupper();
ui64toa();
ui64toa_s();
ui64tow();
ui64tow_s();
ultoa();
ultoa_s();
ultow();
ultow_s();
umatherr();
ungetc_nolock();
ungetwc_nolock();
vDbgPrintEx();
vDbgPrintExWithPrefix();
vDbgPrintExWithPrefixInternal();
vscwprintf();
vscwprintf_helper();
vsnprintf();
vsnprintf_l();
vsnprintf_s();
vsnwprintf();
vsnwprintf_l();
vsnwprintf_s();
vsprintf();
vsprintf_l();
vsprintf_s();
vswprintf();
vswprintf_l();
vswprintf_s();
wchartodigit();
wcscat();
wcscat_s();
wcschr();
wcscmp();
wcscpy();
wcscpy_s();
wcscspn();
wcsicmp();
wcslen();
wcslwr();
wcsncat();
wcsncat_s();
wcsncmp();
wcsncpy();
wcsncpy_s();
wcsnicmp();
wcsnlen();
wcsnset_s();
wcspbrk();
wcsrchr();
wcsset_s();
wcsspn();
wcsstr();
wcstoi64();
wcstol();
wcstolX();
wcstombs();
wcstoui64();
wcstoul();
wcsupr();
wctomb_s();
wctomb_s_l();
winput_s();
wmakepath_s();
woutput_l();
woutput_s();
wsplitpath_s();
wtoi();
wtoi64();
wtol();
zzz_AsmCodeRange_Begin();
zzz_AsmCodeRange_End();
