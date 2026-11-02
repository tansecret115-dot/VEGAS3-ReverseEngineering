/* Module: rmbe3260.dll
   Function: FUN_66003aa0
   Address: 66003aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66003aa0(void *this,int *param_1)

{
  bool bVar1;
  int *piVar2;
  float10 fVar3;
  CPNDialog local_e0 [216];
  float local_8;
  
  piVar2 = param_1;
  bVar1 = false;
  if (((param_1[6] == 0x412) && (*(short *)((int)this + 0x11c) == 0)) && (param_1[3] == 1)) {
    param_1 = (int *)0x0;
    (**(code **)(**(int **)((int)this + 0x104) + 0xc))
              (*(int **)((int)this + 0x104),DAT_66075000,&param_1);
    (**(code **)(*param_1 + 0x1c))(param_1,&local_8);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
      param_1 = (int *)0x0;
    }
    fVar3 = FUN_66003a30((int)this);
    if (fVar3 != (float10)local_8) {
      FUN_66003550((int)this);
      FUN_6600a740(local_e0,*(CPNWindow **)((int)this + 0xe4));
      CPNDialog::DoModal(local_e0);
      FUN_6600a7a0(local_e0);
    }
    bVar1 = true;
  }
  if (!bVar1) {
    FUN_660014e0(this,(int)piVar2);
  }
  return;
}


