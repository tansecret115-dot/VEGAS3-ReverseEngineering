/* Module: pngu3266.dll
   Function: OnEvent
   Address: 60602a0a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNScrollBar::OnEvent(class CPNEvent &) */

int __thiscall CPNScrollBar::OnEvent(CPNScrollBar *this,CPNEvent *param_1)

{
  int iVar1;
  int iVar2;
  CPNPaintDC local_230 [548];
  int local_c;
  int local_8;
  
                    /* 0x12a0a  1611  ?OnEvent@CPNScrollBar@@UAEHAAVCPNEvent@@@Z */
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 8) == 0x10) && (*(int *)(param_1 + 0x24) == 0x115)) {
      iVar2 = 1;
    }
  }
  else if (iVar1 == 0x65) {
    if ((short)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x10) == 0) {
      local_c = (int)*(short *)(param_1 + 0x20);
      local_8 = (int)(short)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10);
      (**(code **)(*(int *)this + 0x60))(&local_c);
      iVar2 = XPNGifImage::CreateBlankImage
                        ((XPNGifImage *)this,(CPNDC *)&local_c,*(CPNxSize **)(param_1 + 0x1c));
    }
  }
  else if (iVar1 == 0xb0) {
    CPNPaintDC::CPNPaintDC(local_230,(CPNWindow *)this);
    CPNRadioGroup::AddRadio((CPNRadioGroup *)this,(CPNRadioBtn *)local_230);
    iVar2 = 1;
    CPNPaintDC::~CPNPaintDC(local_230);
  }
  if (iVar2 == 0) {
    iVar2 = CPNWindow::OnEvent((CPNWindow *)this,param_1);
  }
  return iVar2;
}


