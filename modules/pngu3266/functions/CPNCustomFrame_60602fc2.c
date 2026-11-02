/* Module: pngu3266.dll
   Function: CPNCustomFrame
   Address: 60602fc2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNCustomFrame::CPNCustomFrame(class CPNWindow *,class CPNImage *,class
   CPNImage *) */

CPNCustomFrame * __thiscall
CPNCustomFrame::CPNCustomFrame
          (CPNCustomFrame *this,CPNWindow *param_1,CPNImage *param_2,CPNImage *param_3)

{
  HWND__ *pHVar1;
  int iVar2;
  CPNCustomMenu *this_00;
  undefined1 local_14 [4];
  int local_10;
  undefined1 local_c [4];
  int local_8;
  
                    /* 0x12fc2  46  ??0CPNCustomFrame@@QAE@PAVCPNWindow@@PAVCPNImage@@1@Z */
  CPNObject::CPNObject((CPNObject *)this);
  *(CPNWindow **)(this + 8) = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined ***)this = &_vftable_;
  (**(code **)(*(int *)param_2 + 0x40))(local_c);
  (**(code **)(*(int *)param_3 + 0x40))(local_14);
  if (local_8 < local_10) {
    *(CPNImage **)(this + 0x20) = param_3;
    *(CPNImage **)(this + 0x1c) = param_2;
  }
  else {
    *(CPNImage **)(this + 0x20) = param_2;
    *(CPNImage **)(this + 0x1c) = param_3;
  }
  pHVar1 = CPNWindow::GetHWND(*(CPNWindow **)(this + 8));
  *(HWND__ **)(this + 0x14) = pHVar1;
  CPNWindow::SetCustomFrameManager(param_1,this);
  GetNonClientData(this);
  iVar2 = (**(code **)(*(int *)param_1 + 0x11c))();
  *(int *)(this + 0x10) = iVar2;
  if (iVar2 != 0) {
    this_00 = operator_new(0x1c);
    if (this_00 == (CPNCustomMenu *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = CPNCustomMenu::CPNCustomMenu(this_00);
    }
    *(int *)(this + 0xc) = iVar2;
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(*(int *)(this + 0x10) + 8);
    (**(code **)(**(int **)(this + 0xc) + 0x94))(*(undefined4 *)(*(int *)(this + 0x10) + 0x14));
    (**(code **)(**(int **)(this + 8) + 0x120))(*(undefined4 *)(this + 0xc));
  }
  return this;
}


