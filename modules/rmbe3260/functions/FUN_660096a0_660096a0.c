/* Module: rmbe3260.dll
   Function: FUN_660096a0
   Address: 660096a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_660096a0(void *this,CPNWindow *param_1)

{
  bool bVar1;
  int iVar2;
  void *this_00;
  CPNDialog *pCVar3;
  undefined4 uVar4;
  CPNWindow *pCVar5;
  int local_c;
  int *local_8;
  
  bVar1 = false;
  local_8 = (int *)0x0;
  (**(code **)**(undefined4 **)((int)this + 0x30))
            (*(undefined4 **)((int)this + 0x30),&DAT_660662a8,&local_8);
  if (local_8 != (int *)0x0) {
    if (param_1 == (CPNWindow *)0x0) {
      pCVar5 = (CPNWindow *)0x0;
    }
    else {
      pCVar5 = param_1 + 0xd0;
    }
    iVar2 = (**(code **)(*local_8 + 0x24))(local_8,pCVar5,&local_c);
    if ((-1 < iVar2) && (local_c == 0)) {
      bVar1 = true;
    }
    (**(code **)(*local_8 + 8))(local_8);
  }
  if (bVar1) {
    this_00 = operator_new(0x38e);
    if (this_00 == (void *)0x0) {
      pCVar3 = (CPNDialog *)0x0;
    }
    else {
      pCVar3 = FUN_66009770(this_00,param_1,*(undefined4 *)((int)this + 0x48));
    }
    if (pCVar3 != (CPNDialog *)0x0) {
      uVar4 = (**(code **)(*(int *)pCVar3 + 0x11c))();
      (**(code **)(**(int **)((int)this + 0x30) + 0x34))
                (*(int **)((int)this + 0x30),*(int *)(pCVar3 + 0xd4));
      (*(code *)**(undefined4 **)pCVar3)(1);
      return uVar4;
    }
  }
  return 1;
}


