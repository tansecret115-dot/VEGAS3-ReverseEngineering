/* Module: tokr3260.dll
   Function: OpenEncoder
   Address: 68051170
   Source: Ghidra pseudocode (Stage 10 batch) */


int OpenEncoder(undefined4 *param_1)

{
  void *pvVar1;
  
                    /* 0x1170  4  OpenEncoder */
  pvVar1 = calloc(1,0x98);
  *param_1 = pvVar1;
  return (-(uint)(pvVar1 != (void *)0x0) & 0x7ff8fff2) + 0x8007000e;
}


