/* Module: sipr3260.dll
   Function: RAOpenCodec
   Address: 632a1670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RAOpenCodec(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  
                    /* 0x1670  12  RAOpenCodec */
  pvVar1 = operator_new(0x79);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_632a11e0((int)pvVar1);
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = uVar2;
  }
  return 0;
}


