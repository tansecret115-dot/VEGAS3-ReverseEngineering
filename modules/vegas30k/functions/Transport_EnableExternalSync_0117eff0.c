/* Module: vegas30k.dll
   Function: Transport_EnableExternalSync
   Address: 0117eff0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_EnableExternalSync(int,unsigned long) */

long Transport_EnableExternalSync(int param_1,ulong param_2)

{
  long lVar1;
  
                    /* 0x17eff0  535  ?Transport_EnableExternalSync@@YGJHK@Z */
  lVar1 = (**(code **)(*DAT_012b0b2c + 0x40))(DAT_012b0b2c,param_1,param_2);
  return lVar1;
}


