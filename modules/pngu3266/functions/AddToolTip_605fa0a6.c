/* Module: pngu3266.dll
   Function: AddToolTip
   Address: 605fa0a6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNWindow::AddToolTip(class CPNxRect &,char const *) */

int __thiscall CPNWindow::AddToolTip(CPNWindow *this,CPNxRect *param_1,char *param_2)

{
  CPNTipManager *this_00;
  undefined4 uVar1;
  int iVar2;
  
                    /* 0xa0a6  784  ?AddToolTip@CPNWindow@@UAEHAAVCPNxRect@@PBD@Z */
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
  iVar2 = (**(code **)(**(int **)(this + 0x7c) + 0x10))(param_1,param_2);
  return iVar2;
}


