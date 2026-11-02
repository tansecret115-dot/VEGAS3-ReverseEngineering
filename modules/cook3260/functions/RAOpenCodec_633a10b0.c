/* Module: cook3260.dll
   Function: RAOpenCodec
   Address: 633a10b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int RAOpenCodec(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
                    /* 0x10b0  13  RAOpenCodec */
  if (param_1 != (int *)0x0) {
    puVar1 = operator_new(0x2c);
    if (puVar1 == (undefined4 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_633a1320(puVar1);
    }
    *param_1 = iVar2;
    return (-(uint)(iVar2 != 0) & 0x7ff8fff2) + 0x8007000e;
  }
  return -0x7ff8ffa9;
}


