/* Module: sipr3260.dll
   Function: RAOpenCodec2
   Address: 632a16a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RAOpenCodec2(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  
                    /* 0x16a0  11  RAOpenCodec2 */
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


