/* Module: pngu3266.dll
   Function: OnEvent
   Address: 606102e6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNScrollButton::OnEvent(class CPNEvent &) */

int __thiscall XPNScrollButton::OnEvent(XPNScrollButton *this,CPNEvent *param_1)

{
  int iVar1;
  CPNPaintDC local_228 [548];
  
                    /* 0x202e6  1621  ?OnEvent@XPNScrollButton@@UAEHAAVCPNEvent@@@Z */
  if (*(int *)(param_1 + 0xc) == 0xb0) {
    CPNPaintDC::CPNPaintDC(local_228,(CPNWindow *)this);
    OnPaint(this,(CPNDC *)local_228);
    CPNPaintDC::~CPNPaintDC(local_228);
  }
  else {
    if (*(int *)(param_1 + 0xc) != 0xb4) {
      iVar1 = CPNButton::OnEvent((CPNButton *)this,param_1);
      return iVar1;
    }
    (**(code **)(*(int *)this + 0x78))(0,1);
  }
  return 1;
}


