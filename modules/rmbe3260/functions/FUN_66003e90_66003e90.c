/* Module: rmbe3260.dll
   Function: FUN_66003e90
   Address: 66003e90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66003e90(void *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  CPNDialog *pCVar3;
  
  if (*(int *)(param_1 + 0x18) == 0x471) {
    if ((*(short *)((int)this + 0x124) == 0) && (*(int *)(param_1 + 0xc) == 1)) {
      (**(code **)(**(int **)((int)this + 0x104) + 0x130))(0);
      pvVar2 = operator_new(0xd8);
      if (pvVar2 == (void *)0x0) {
        pCVar3 = (CPNDialog *)0x0;
      }
      else {
        pCVar3 = FUN_6600a740(pvVar2,*(CPNWindow **)((int)this + 0xe4));
      }
      (**(code **)(*(int *)pCVar3 + 0x11c))();
      if (pCVar3 != (CPNDialog *)0x0) {
        (*(code *)**(undefined4 **)pCVar3)(1);
      }
    }
  }
  else if (((*(int *)(param_1 + 0x18) == 0x4fb) && (*(short *)((int)this + 0x124) == 0)) &&
          (*(int *)(param_1 + 0xc) == 1)) {
    iVar1 = (**(code **)(**(int **)((int)this + 0x10c) + 0x134))();
    if (iVar1 != 0) {
      (**(code **)(**(int **)((int)this + 0x10c) + 0x130))(0);
      (**(code **)(**(int **)((int)this + 0x108) + 0x130))(1);
      pvVar2 = operator_new(0xd8);
      if (pvVar2 == (void *)0x0) {
        pCVar3 = (CPNDialog *)0x0;
      }
      else {
        pCVar3 = FUN_6600a740(pvVar2,*(CPNWindow **)((int)this + 0xe4));
      }
      (**(code **)(*(int *)pCVar3 + 0x11c))();
      if (pCVar3 != (CPNDialog *)0x0) {
        (*(code *)**(undefined4 **)pCVar3)(1);
        return;
      }
    }
  }
  return;
}


