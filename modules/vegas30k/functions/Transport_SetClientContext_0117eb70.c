/* Module: vegas30k.dll
   Function: Transport_SetClientContext
   Address: 0117eb70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_SetClientContext(long (__stdcall*)(struct ISFTransport *,unsigned
   int,unsigned long *,unsigned long,__int64 *,long),unsigned long) */

long Transport_SetClientContext
               (_func_long_ISFTransport_ptr_uint_ulong_ptr_ulong___int64_ptr_long *param_1,
               ulong param_2)

{
                    /* 0x17eb70  564
                       ?Transport_SetClientContext@@YGJP6GJPAUISFTransport@@IPAKKPA_JJ@ZK@Z */
  DAT_012b0b30 = param_1;
  DAT_012b0b34 = param_2;
  return 0;
}


