/* Module: vegas30.exe
   Function: FUN_004aedc0
   Address: 004aedc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004aedc0(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = param_1;
  param_1 = *(int *)(param_1 + 0x170) + 1;
  iVar2 = param_1 / 3;
  param_1 = param_1 % 3;
  if ((param_1 == 2) && ((*param_2 & 0x100000) != 0)) {
    param_1 = 0;
  }
  if (param_1 != *(int *)(iVar1 + 0x170)) {
    FUN_004abbe0(iVar1,param_2,0);
    *(int *)(iVar1 + 0x170) = param_1;
    lVar3 = ftol();
    lVar3 = lVar3 + *(longlong *)(iVar1 + 0xb88);
    if (((int)((ulonglong)lVar3 >> 0x20) < 1) && (lVar3 < 0)) {
      lVar3 = 0;
    }
    if (param_2[0x1b] == 10) {
      FUN_004ad320(iVar1,param_2,lVar3);
    }
    else if (param_1 == 0) {
      FUN_004acba0(iVar1,param_2,*(undefined4 *)(param_3 + 4),lVar3);
    }
    else if (param_1 == 1) {
      FUN_004ac800(iVar1,param_2,*(undefined4 *)(param_3 + 4),lVar3);
    }
    else if (param_1 == 2) {
      FUN_004ad050(iVar1,param_2,*(undefined4 *)(param_3 + 4),lVar3);
    }
    iVar2 = FUN_004abc80(iVar1,param_2,*(undefined4 *)(param_3 + 4),lVar3,0);
  }
  return iVar2;
}


