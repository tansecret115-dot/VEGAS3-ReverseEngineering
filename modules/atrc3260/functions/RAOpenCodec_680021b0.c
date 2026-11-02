/* Module: atrc3260.dll
   Function: RAOpenCodec
   Address: 680021b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int RAOpenCodec(int *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
                    /* 0x21b0  13  RAOpenCodec */
  if (param_1 != (int *)0x0) {
    puVar1 = operator_new(0x62);
    if (puVar1 == (undefined2 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_68001aa0(puVar1);
    }
    *param_1 = iVar2;
    return (-(uint)(iVar2 != 0) & 0x7ff8fff2) + 0x8007000e;
  }
  return -0x7ff8ffa9;
}


