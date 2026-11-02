/* Module: dnet3260.dll
   Function: RAOpenCodec
   Address: 63052060
   Source: Ghidra pseudocode (Stage 10 batch) */


int RAOpenCodec(int *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
                    /* 0x2060  11  RAOpenCodec */
  if (param_1 != (int *)0x0) {
    puVar1 = operator_new(0x3e);
    if (puVar1 == (undefined2 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_63051bb0(puVar1);
    }
    *param_1 = iVar2;
    return (-(uint)(iVar2 != 0) & 0x7ff8fff2) + 0x8007000e;
  }
  return -0x7ff8ffa9;
}


