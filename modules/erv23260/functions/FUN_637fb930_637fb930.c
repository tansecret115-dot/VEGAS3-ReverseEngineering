/* Module: erv23260.dll
   Function: FUN_637fb930
   Address: 637fb930
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_637fb930(void *this,int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var;
  int iVar3;
  
  iVar3 = 0;
  if ((*(int *)((int)this + 0x5c) != 0x15) && (*(int *)((int)this + 0x5c) != 0x16)) {
    if (*(int *)(param_1 + 4) == 7) {
      if (*(int *)(param_1 + 0x50) != 0) {
        iVar3 = FUN_637fbd70(this,*(int *)(param_1 + 0x14),(undefined4 *)(param_1 + 0x54),param_2);
      }
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    uVar2 = FUN_637fd3d0(this,5);
    *(char *)(param_1 + 0x90) = (char)uVar2;
    if ((char)uVar2 == '\0') {
      return 1;
    }
    if ((*(int *)(param_1 + 4) != 7) &&
       (bVar1 = FUN_637fd5c0((int)this), CONCAT31(extraout_var,bVar1) != 0)) {
      return 1;
    }
    if ((*(int *)(param_1 + 0x24) != 0) || (*(int *)(param_1 + 0x14) == 2)) {
      uVar2 = FUN_637fd3d0(this,3);
      *(char *)(param_1 + 0x92) = (char)uVar2;
      uVar2 = FUN_637fd3d0(this,2);
      *(char *)(param_1 + 0x93) = (char)uVar2;
    }
    FUN_637fbf40(this,param_1);
    FUN_637fca20(this,param_1);
  }
  return 0;
}


