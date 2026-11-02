/* Module: vegas30k.dll
   Function: Transport_SetMetric
   Address: 0117f8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_SetMetric(unsigned long,void *) */

long Transport_SetMetric(ulong param_1,void *param_2)

{
  long lVar1;
  
                    /* 0x17f8a0  567  ?Transport_SetMetric@@YGJKPAX@Z */
  lVar1 = (**(code **)(*DAT_012b0b2c + 0xc0))(DAT_012b0b2c,param_1,param_2);
  return lVar1;
}


