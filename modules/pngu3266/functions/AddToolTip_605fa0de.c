/* Module: pngu3266.dll
   Function: AddToolTip
   Address: 605fa0de
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNWindow::AddToolTip(char const *) */

int __thiscall CPNWindow::AddToolTip(CPNWindow *this,char *param_1)

{
  CPNTipManager *this_00;
  undefined4 uVar1;
  int iVar2;
  
                    /* 0xa0de  785  ?AddToolTip@CPNWindow@@UAEHPBD@Z */
  if (*(int *)(this + 0x7c) == 0) {
    this_00 = operator_new(0x20);
    if (this_00 == (CPNTipManager *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = CPNTipManager::CPNTipManager(this_00,this);
    }
    *(undefined4 *)(this + 0x7c) = uVar1;
  }
  iVar2 = (**(code **)(**(int **)(this + 0x7c) + 0xc))(param_1);
  return iVar2;
}


