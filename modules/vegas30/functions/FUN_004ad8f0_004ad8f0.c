/* Module: vegas30.exe
   Function: FUN_004ad8f0
   Address: 004ad8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ad8f0(int param_1,uint *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  
  FUN_004abbe0(param_1,param_2,0);
  if ((*(int *)(param_1 + 0x170) != 2) || ((*param_2 & 0x100000) == 0)) {
    *(undefined4 *)(param_1 + 0x170) = param_4;
  }
  lVar2 = ftol();
  lVar2 = lVar2 + *(longlong *)(param_1 + 0xb88);
  if (((int)((ulonglong)lVar2 >> 0x20) < 1) && (lVar2 < 0)) {
    lVar2 = 0;
  }
  if (param_2[0x1b] == 10) {
    FUN_004ad320(param_1,param_2,lVar2);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x170);
    if (iVar1 == 0) {
      FUN_004acba0(param_1,param_2,*(undefined4 *)(param_3 + 4),lVar2);
    }
    else if (iVar1 == 1) {
      FUN_004ac800(param_1,param_2,*(undefined4 *)(param_3 + 4),lVar2);
    }
    else if (iVar1 == 2) {
      FUN_004ad050(param_1,param_2,*(undefined4 *)(param_3 + 4),lVar2);
    }
  }
  FUN_004abc80(param_1,param_2,*(undefined4 *)(param_3 + 4),lVar2,0);
  return;
}


