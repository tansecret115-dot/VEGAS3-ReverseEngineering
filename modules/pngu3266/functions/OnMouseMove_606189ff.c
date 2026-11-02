/* Module: pngu3266.dll
   Function: OnMouseMove
   Address: 606189ff
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNTextWithLink::OnMouseMove(class CPNxPoint const &) */

void __thiscall XPNTextWithLink::OnMouseMove(XPNTextWithLink *this,CPNxPoint *param_1)

{
  int iVar1;
  CPNCursor *pCVar2;
  ulong local_8;
  
                    /* 0x289ff  1651  ?OnMouseMove@XPNTextWithLink@@MAEXABVCPNxPoint@@@Z */
  local_8 = 0;
  iVar1 = PointOnLink(this,param_1,&local_8);
  if (iVar1 == 0) {
    pCVar2 = &zm_ArrowCursor;
  }
  else {
    pCVar2 = *(CPNCursor **)(this + 0x16c);
    if (pCVar2 == (CPNCursor *)0x0) {
      return;
    }
  }
  CPNSystemInfo::SetCursor(pCVar2);
  return;
}


