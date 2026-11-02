/* Module: vegas30k.dll
   Function: FUN_011bbd10
   Address: 011bbd10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011bbd10(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar3 = param_1;
  iVar6 = 0;
  *param_2 = 0;
  iVar4 = 0;
  iVar5 = 0;
  uVar7 = 1;
  if (*(int **)(param_1 + 0x7f8) == (int *)0x0) {
    param_1 = 0;
  }
  else {
    param_1 = **(int **)(param_1 + 0x7f8);
  }
  if (0 < param_1) {
    while (-1 < iVar4) {
      piVar1 = *(int **)(*(int *)(*(int *)(iVar3 + 0x7f8) + 8) + iVar6 * 4);
      uVar2 = piVar1[2];
      if ((((((uVar2 & 1) != 0) && ((uVar2 & 2) != 0)) && ((uVar2 & 4) != 0)) &&
          ((((uVar2 & 8) != 0 && ((uVar2 & 0x20) != 0)) || ((uVar2 & 0x10) != 0)))) &&
         (iVar4 = (**(code **)(*piVar1 + 0x54))(piVar1), iVar4 == 0)) {
        uVar7 = 0;
        iVar5 = iVar5 + 1;
      }
      iVar6 = iVar6 + 1;
      if (param_1 <= iVar6) {
        *param_2 = iVar5;
        return uVar7;
      }
    }
  }
  *param_2 = iVar5;
  return uVar7;
}


