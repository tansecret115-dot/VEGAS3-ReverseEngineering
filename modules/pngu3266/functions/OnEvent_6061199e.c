/* Module: pngu3266.dll
   Function: OnEvent
   Address: 6061199e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNScrollingText::OnEvent(class CPNEvent &) */

int __thiscall XPNScrollingText::OnEvent(XPNScrollingText *this,CPNEvent *param_1)

{
  int iVar1;
  CPNPaintDC local_228 [548];
  
                    /* 0x2199e  1622  ?OnEvent@XPNScrollingText@@UAEHAAVCPNEvent@@@Z */
  if (*(int *)(param_1 + 0xc) == 0xab) {
    (**(code **)(*(int *)this + 0x14c))();
  }
  else {
    if (*(int *)(param_1 + 0xc) != 0xb0) {
      iVar1 = CPNWindow::OnEvent((CPNWindow *)this,param_1);
      return iVar1;
    }
    CPNPaintDC::CPNPaintDC(local_228,(CPNWindow *)this);
    (**(code **)(*(int *)this + 0x148))(local_228);
    CPNPaintDC::~CPNPaintDC(local_228);
  }
  return 1;
}


