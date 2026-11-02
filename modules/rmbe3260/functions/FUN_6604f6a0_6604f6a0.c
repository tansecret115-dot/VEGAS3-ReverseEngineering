/* Module: rmbe3260.dll
   Function: FUN_6604f6a0
   Address: 6604f6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6604f6a0(void *this,int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_10 [3];
  
  uVar3 = 0;
  uVar4 = 0x80004005;
  if (*(uint *)((int)this + 0xc) != 0) {
    piVar2 = *(int **)((int)this + 8);
    while (param_1 != *piVar2) {
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 4;
      if (*(uint *)((int)this + 0xc) <= uVar3) {
        return 0x80004005;
      }
    }
    puVar1 = operator_new(0x28);
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_6605c060(puVar1);
    }
    (**(code **)(*piVar2 + 4))(piVar2);
    (**(code **)(*piVar2 + 0x10))(piVar2,*param_2,*(int *)(*param_2 + -8) + 1);
    FUN_6605b650(local_10);
    if (param_3 == 0) {
      FUN_6605b970(local_10,*(char **)(uVar3 * 0x10 + 4 + *(int *)((int)this + 8)));
    }
    else {
      FUN_6605bfd0(local_10,s__s_lu_6606ef70);
    }
    uVar4 = (**(code **)(**(int **)((int)this + 4) + 8))(local_10[0],piVar2);
    (**(code **)(*piVar2 + 8))(piVar2);
    FUN_6605b770(local_10);
  }
  return uVar4;
}


