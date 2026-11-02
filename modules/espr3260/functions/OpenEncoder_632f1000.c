/* Module: espr3260.dll
   Function: OpenEncoder
   Address: 632f1000
   Source: Ghidra pseudocode (Stage 10 batch) */


int OpenEncoder(undefined4 *param_1)

{
  void *pvVar1;
  
                    /* 0x1000  2  OpenEncoder */
  pvVar1 = operator_new(0x3526e);
  if (pvVar1 != (void *)0x0) {
    pvVar1 = FUN_632f1110(pvVar1);
    *param_1 = pvVar1;
    return (-(uint)(pvVar1 != (void *)0x0) & 0xfffffff2) + 0xe;
  }
  *param_1 = 0;
  return 0xe;
}


