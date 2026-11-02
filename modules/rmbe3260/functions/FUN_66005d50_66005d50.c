/* Module: rmbe3260.dll
   Function: FUN_66005d50
   Address: 66005d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66005d50(void *this,uint param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 local_204 [512];
  
  uVar1 = param_1;
  if (param_1 < *(uint *)((int)this + 0x128)) {
    uVar3 = (**(code **)(**(int **)((int)this + 0x11c) + 0x134))();
    if (uVar1 != uVar3) {
      (**(code **)(**(int **)((int)this + 0x11c) + 0x13c))(uVar1);
    }
    FUN_660145d0(&param_1);
    FUN_66014700(&param_1,*(undefined4 **)(*(int *)((int)this + 0x124) + uVar1 * 4));
    bVar2 = FUN_66014680((int *)&param_1);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      piVar4 = (int *)FUN_660145e0(&param_1);
      iVar5 = (**(code **)(*piVar4 + 0x1c))(piVar4,local_204,0x1ff);
      if (iVar5 < 0) {
        puVar6 = &DAT_66075004;
      }
      else {
        puVar6 = local_204;
      }
      (**(code **)(**(int **)((int)this + 0x120) + 0x11c))(puVar6);
    }
    thunk_FUN_66014790((int *)&param_1);
  }
  return;
}


