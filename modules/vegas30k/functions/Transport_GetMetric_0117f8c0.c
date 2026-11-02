/* Module: vegas30k.dll
   Function: Transport_GetMetric
   Address: 0117f8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_GetMetric(unsigned long,void *) */

long Transport_GetMetric(ulong param_1,void *param_2)

{
  long lVar1;
  
                    /* 0x17f8c0  540  ?Transport_GetMetric@@YGJKPAX@Z */
  lVar1 = (**(code **)(*DAT_012b0b2c + 0xbc))(DAT_012b0b2c,param_1,param_2);
  return lVar1;
}


