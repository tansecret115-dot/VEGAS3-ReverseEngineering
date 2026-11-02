/* Module: vegas30k.dll
   Function: Transport_CanGenerateSync
   Address: 0117f010
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_CanGenerateSync(unsigned long) */

long Transport_CanGenerateSync(ulong param_1)

{
  long lVar1;
  
                    /* 0x17f010  533  ?Transport_CanGenerateSync@@YGJK@Z */
  lVar1 = (**(code **)(*DAT_012b0b2c + 0x44))(DAT_012b0b2c,param_1);
  return lVar1;
}


