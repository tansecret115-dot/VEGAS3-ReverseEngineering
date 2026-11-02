/* Module: pngu3266.dll
   Function: OnEvent
   Address: 606121fb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNToolTip::OnEvent(class CPNEvent &) */

int __thiscall XPNToolTip::OnEvent(XPNToolTip *this,CPNEvent *param_1)

{
  CPNPaintDC local_228 [548];
  
                    /* 0x221fb  1626  ?OnEvent@XPNToolTip@@UAEHAAVCPNEvent@@@Z */
  if (*(int *)(param_1 + 8) == 1) {
    (**(code **)(*(int *)this + 0x98))(0);
  }
  else if ((*(int *)(param_1 + 8) == 2) && (*(int *)(param_1 + 0xc) == 0xb0)) {
    CPNPaintDC::CPNPaintDC(local_228,(CPNWindow *)this);
    OnPaint(this,(CPNDC *)local_228);
    CPNPaintDC::~CPNPaintDC(local_228);
  }
  return 0;
}


