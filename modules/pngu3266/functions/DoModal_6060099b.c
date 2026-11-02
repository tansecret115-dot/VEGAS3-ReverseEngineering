/* Module: pngu3266.dll
   Function: DoModal
   Address: 6060099b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNMessageBox::DoModal(class CPNWindow *,char const
   *,char const *,unsigned long) */

ulong __thiscall
CPNMessageBox::DoModal
          (CPNMessageBox *this,CPNWindow *param_1,char *param_2,char *param_3,ulong param_4)

{
  ulong uVar1;
  CPNWindow *pCVar2;
  CPNWindow *pCVar3;
  CPNWindow *this_00;
  CPNDialog local_f4 [240];
  
                    /* 0x1099b  966  ?DoModal@CPNMessageBox@@UAEKPAVCPNWindow@@PBD1K@Z */
  this_00 = param_1;
  (**(code **)(*(int *)this + 0x18))(param_1);
  XPNDialog::PreDomodal((XPNDialog *)this,(CPNWindow *)0x0);
  param_1 = (CPNWindow *)0x0;
  if (XPNMessageBox::zmb_CustomMessageBoxes == 0) {
    if (this_00 != (CPNWindow *)0x0) {
      pCVar2 = (CPNWindow *)(**(code **)(*(int *)this_00 + 0x10c))();
      while (pCVar3 = pCVar2, pCVar3 != (CPNWindow *)0x0) {
        pCVar2 = (CPNWindow *)(**(code **)(*(int *)pCVar3 + 0x10c))();
        this_00 = pCVar3;
      }
      param_1 = (CPNWindow *)CPNWindow::GetHWND(this_00);
      (**(code **)(*(int *)this_00 + 0x110))(this);
    }
    DAT_60649cbc = *(undefined4 *)(this + 0xd0);
    DAT_60649cb8 = SetWindowsHookA(4,FUN_60600809);
    DAT_60649cc0 = this;
    uVar1 = MessageBoxA((HWND)param_1,param_2,param_3,param_4);
    UnhookWindowsHook(4,FUN_60600809);
    DAT_60649cbc = 0;
    (**(code **)(*(int *)this + 200))();
    DAT_60649cc0 = (CPNMessageBox *)0x0;
    if (this_00 != (CPNWindow *)0x0) {
      (**(code **)(*(int *)this_00 + 0x110))(0);
    }
    XPNDialog::PostDomodal((XPNDialog *)this,(CPNWindow *)0x0);
  }
  else {
    FUN_60600acc(local_f4,this_00);
    FUN_60600c75(local_f4,param_2);
    FUN_60600c2e(local_f4,param_3);
    FUN_60600cbc(local_f4,param_4);
    uVar1 = CPNDialog::DoModal(local_f4);
    FUN_60600b2b(local_f4);
  }
  return uVar1;
}


