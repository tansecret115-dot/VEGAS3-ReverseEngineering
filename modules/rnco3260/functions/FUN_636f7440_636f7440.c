/* Module: rnco3260.dll
   Function: FUN_636f7440
   Address: 636f7440
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f7440(uint *param_1,int param_2,byte *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_4 >> 1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    uVar1 = (uint)*param_3;
    *param_1 = (uint)CONCAT21(CONCAT11(*(undefined1 *)(&DAT_637956a0 + uVar1),
                                       *(undefined1 *)((int)&DAT_637956a0 + uVar1 * 4 + 1)),
                              *(undefined1 *)((int)&DAT_637956a0 + uVar1 * 4 + 2));
    param_1 = param_1 + 1;
    do {
      param_3 = param_3 + 1;
      iVar3 = iVar3 - param_2;
    } while (-1 < iVar3);
    iVar3 = iVar3 + param_4;
  }
  return;
}


