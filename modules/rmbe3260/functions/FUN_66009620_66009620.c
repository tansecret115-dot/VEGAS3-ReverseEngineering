/* Module: rmbe3260.dll
   Function: FUN_66009620
   Address: 66009620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66009620(int param_1,undefined4 *param_2)

{
  CPNWindow *pCVar1;
  void *this;
  CPNDialog *pCVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    pCVar1 = CPNWindow::GetPNWindow((void *)*param_2);
    this = operator_new(0x38e);
    if (this == (void *)0x0) {
      pCVar2 = (CPNDialog *)0x0;
    }
    else {
      pCVar2 = FUN_66009770(this,pCVar1,*(undefined4 *)(param_1 + 0x34));
    }
    if (pCVar2 != (CPNDialog *)0x0) {
      uVar3 = (**(code **)(*(int *)pCVar2 + 0x11c))();
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x34))
                (*(int **)(param_1 + 0x1c),*(int *)(pCVar2 + 0xd4));
      (*(code *)**(undefined4 **)pCVar2)(1);
      return uVar3;
    }
  }
  return 1;
}


