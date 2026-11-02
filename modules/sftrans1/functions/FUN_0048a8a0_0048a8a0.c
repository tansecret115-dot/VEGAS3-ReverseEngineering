/* Module: sftrans1.dll
   Function: FUN_0048a8a0
   Address: 0048a8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_0048a8a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar4 = 1;
  iVar1 = **(int **)(param_1 + 0xb0);
  if (0 < iVar1) {
    do {
      uVar2 = FUN_004dc7f0(*(undefined4 *)(param_1 + 0xa4),0,0xffffffff,
                           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb0) + 8) + iVar5 * 4));
      uVar3 = FUN_0048c380(uVar2,param_2);
      uVar4 = uVar4 | uVar3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return uVar4;
}


