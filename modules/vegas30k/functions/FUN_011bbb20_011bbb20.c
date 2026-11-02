/* Module: vegas30k.dll
   Function: FUN_011bbb20
   Address: 011bbb20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011bbb20(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar3 = 0;
  uVar5 = 1;
  if (*(int **)(param_1 + 0x7f8) == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)(param_1 + 0x7f8);
  }
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      if (iVar3 < 0) break;
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x7f8) + 8) + iVar6 * 4);
      uVar2 = piVar1[2];
      if (((((uVar2 & 1) != 0) && ((uVar2 & 2) != 0)) && ((uVar2 & 4) != 0)) &&
         ((((uVar2 & 8) != 0 && ((uVar2 & 0x10) == 0)) || ((uVar2 & 0x20) != 0)))) {
        iVar3 = (**(code **)(*piVar1 + 0x5c))(piVar1);
        if (iVar3 == 0) {
          uVar5 = 0;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  *(uint *)(param_1 + 0x7ec) = *(uint *)(param_1 + 0x7ec) & 0xfffffeff;
  return uVar5;
}


