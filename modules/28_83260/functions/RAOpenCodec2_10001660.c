/* Module: 28_83260.dll
   Function: RAOpenCodec2
   Address: 10001660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RAOpenCodec2(int *param_1)

{
  void *pvVar1;
  int iVar2;
  
                    /* 0x1660  10  RAOpenCodec2 */
  pvVar1 = operator_new(0x1c54);
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_10001120((int)pvVar1);
  }
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2;
  }
  return 0;
}


