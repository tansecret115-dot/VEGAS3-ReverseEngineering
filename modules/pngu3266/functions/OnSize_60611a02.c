/* Module: pngu3266.dll
   Function: OnSize
   Address: 60611a02
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNScrollingText::OnSize(void) */

void __thiscall XPNScrollingText::OnSize(XPNScrollingText *this)

{
  int iVar1;
  CPNFont *pCVar2;
  long lVar3;
  int iVar4;
  CPNScreenDC local_1fc [484];
  CPNFont *local_18;
  undefined1 local_14 [4];
  int local_10;
  int local_8;
  
                    /* 0x21a02  1697  ?OnSize@XPNScrollingText@@UAEXXZ */
  CPNScreenDC::CPNScreenDC(local_1fc);
  pCVar2 = (CPNFont *)(**(code **)(*(int *)this + 0x30))();
  if (&stack0x00000000 != (undefined1 *)0x1fc) {
    local_18 = XPNDC::SetFont((XPNDC *)local_1fc,pCVar2);
  }
  lVar3 = CPNDC::GetCharHeight((CPNDC *)local_1fc);
  *(long *)(this + 0x11a) = lVar3;
  (**(code **)(*(int *)this + 0x3c))(local_14);
  iVar1 = *(int *)(this + 0x11a);
  *(undefined4 *)(this + 0x136) = 0;
  *(int *)(this + 0x13a) = ((local_8 - local_10) - iVar1) / 2;
  iVar4 = local_8 - local_10;
  if (local_8 - local_10 < iVar1) {
    iVar4 = iVar1;
  }
  *(int *)(this + 0x11a) = iVar4;
  if (&stack0x00000000 != (undefined1 *)0x1fc) {
    XPNDC::SetFont((XPNDC *)local_1fc,local_18);
  }
  CPNScreenDC::~CPNScreenDC(local_1fc);
  return;
}


