/* Module: pngu3266.dll
   Function: OnEvent
   Address: 6060752d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNCustomText::OnEvent(class CPNEvent &) */

int __thiscall CPNCustomText::OnEvent(CPNCustomText *this,CPNEvent *param_1)

{
  int iVar1;
  
                    /* 0x1752d  1604  ?OnEvent@CPNCustomText@@UAEHAAVCPNEvent@@@Z */
  if (*(int *)(param_1 + 0x24) == 0x215) {
    *(undefined4 *)(this + 0x145) = 0;
    iVar1 = 0;
  }
  else {
    iVar1 = XPNCustomText::OnEvent((XPNCustomText *)this,param_1);
  }
  return iVar1;
}


