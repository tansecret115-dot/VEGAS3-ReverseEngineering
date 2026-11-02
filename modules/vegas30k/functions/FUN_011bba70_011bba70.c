/* Module: vegas30k.dll
   Function: FUN_011bba70
   Address: 011bba70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011bba70(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = param_1;
  iVar6 = 0;
  iVar3 = 0;
  iVar5 = 1;
  if (*(int **)(param_1 + 0x7f8) == (int *)0x0) {
    param_1 = 0;
  }
  else {
    param_1 = **(int **)(param_1 + 0x7f8);
  }
  if (0 < param_1) {
    do {
      if (iVar3 < 0) break;
      piVar1 = *(int **)(*(int *)(*(int *)(iVar2 + 0x7f8) + 8) + iVar6 * 4);
      uVar4 = piVar1[2];
      if (((((uVar4 & 1) != 0) && ((uVar4 & 2) != 0)) && ((uVar4 & 4) != 0)) &&
         ((((uVar4 & 8) != 0 && ((uVar4 & 0x30) == 0)) &&
          (iVar3 = (**(code **)(*piVar1 + 0x58))(piVar1,param_2,param_3), iVar3 == 0)))) {
        iVar5 = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1);
  }
  uVar4 = (uint)(iVar5 == 0) << 8;
  *(uint *)(iVar2 + 0x7ec) = (~uVar4 >> 8 & 1) << 6 | uVar4 | *(uint *)(iVar2 + 0x7ec) & 0xfffffebf;
  return iVar5;
}


