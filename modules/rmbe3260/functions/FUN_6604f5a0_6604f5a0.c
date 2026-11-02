/* Module: rmbe3260.dll
   Function: FUN_6604f5a0
   Address: 6604f5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6604f5a0(void *this,int *param_1,void *param_2,int param_3)

{
  void *this_00;
  int *piVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int local_10 [3];
  
  uVar4 = 0;
  iVar3 = -0x7fffbffb;
  if (*(uint *)((int)this + 0xc) != 0) {
    piVar1 = *(int **)((int)this + 8);
    while (param_1 != (int *)*piVar1) {
      uVar4 = uVar4 + 1;
      piVar1 = piVar1 + 4;
      if (*(uint *)((int)this + 0xc) <= uVar4) {
        return -0x7fffbffb;
      }
    }
    param_1 = (int *)0x0;
    FUN_6605b650(local_10);
    if (param_3 == 0) {
      FUN_6605b970(local_10,*(char **)(*(int *)((int)this + 8) + 4 + uVar4 * 0x10));
    }
    else {
      FUN_6605bfd0(local_10,s__s_lu_6606ef70);
    }
    param_3 = (**(code **)(**(int **)((int)this + 4) + 4))(local_10[0],&param_1);
    this_00 = param_2;
    if ((-1 < param_3) && (param_1 != (int *)0x0)) {
      pcVar2 = (char *)(**(code **)(*param_1 + 0x1c))(param_1);
      FUN_6605b970(this_00,pcVar2);
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
        param_1 = (int *)0x0;
      }
    }
    if ((param_3 < 0) &&
       (pcVar2 = *(char **)(*(int *)((int)this + 8) + 0xc + uVar4 * 0x10), pcVar2 != (char *)0x0)) {
      FUN_6605b970(this_00,pcVar2);
      param_3 = 0;
    }
    FUN_6605b770(local_10);
    iVar3 = param_3;
  }
  return iVar3;
}


