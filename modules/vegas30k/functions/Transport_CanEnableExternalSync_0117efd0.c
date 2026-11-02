/* Module: vegas30k.dll
   Function: Transport_CanEnableExternalSync
   Address: 0117efd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_CanEnableExternalSync(unsigned long) */

long Transport_CanEnableExternalSync(ulong param_1)

{
  long lVar1;
  
                    /* 0x17efd0  532  ?Transport_CanEnableExternalSync@@YGJK@Z */
  lVar1 = (**(code **)(*DAT_012b0b2c + 0x3c))(DAT_012b0b2c,param_1);
  return lVar1;
}


