/* Module: pngu3266.dll
   Function: OnEvent
   Address: 60607740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNTextWithLink::OnEvent(class CPNEvent &) */

int __thiscall CPNTextWithLink::OnEvent(CPNTextWithLink *this,CPNEvent *param_1)

{
  int iVar1;
  
                    /* 0x17740  1613  ?OnEvent@CPNTextWithLink@@UAEHAAVCPNEvent@@@Z */
  if (*(int *)(param_1 + 0x24) == 0x215) {
    *(undefined4 *)(this + 0x145) = 0;
    iVar1 = 0;
  }
  else {
    iVar1 = XPNTextWithLink::OnEvent((XPNTextWithLink *)this,param_1);
  }
  return iVar1;
}


