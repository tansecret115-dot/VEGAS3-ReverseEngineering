/* Module: pngu3266.dll
   Function: OnEvent
   Address: 6060f62e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNAnimateCtl::OnEvent(class CPNEvent &) */

int __thiscall XPNAnimateCtl::OnEvent(XPNAnimateCtl *this,CPNEvent *param_1)

{
  int iVar1;
  CPNPaintDC local_254 [548];
  CPNEvent local_30 [44];
  
                    /* 0x1f62e  1615  ?OnEvent@XPNAnimateCtl@@UAEHAAVCPNEvent@@@Z */
  if (*(int *)(param_1 + 0xc) == 0x66) {
    if ((short)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x10) == 0) {
      CPNEvent::CPNEvent(local_30,0x80000000,1,(CPNRouter *)this,0,0,0,0);
      (**(code **)(*(int *)this + 4))(local_30);
      CPNEvent::~CPNEvent(local_30);
    }
  }
  else if (*(int *)(param_1 + 0xc) == 0xb0) {
    CPNPaintDC::CPNPaintDC(local_254,(CPNWindow *)this);
    (**(code **)(*(int *)this + 0x148))(local_254);
    CPNPaintDC::~CPNPaintDC(local_254);
    return 1;
  }
  iVar1 = CPNWindow::OnEvent((CPNWindow *)this,param_1);
  return iVar1;
}


