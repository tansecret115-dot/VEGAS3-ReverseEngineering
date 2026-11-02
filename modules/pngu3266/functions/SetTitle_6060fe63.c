/* Module: pngu3266.dll
   Function: SetTitle
   Address: 6060fe63
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNImageButton::SetTitle(char const *) */

void __thiscall XPNImageButton::SetTitle(XPNImageButton *this,char *param_1)

{
  CPNFont *pCVar1;
  CPNClientDC local_1f8 [488];
  CPNFont *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x1fe63  2031  ?SetTitle@XPNImageButton@@UAEXPBD@Z */
  CPNWindow::SetTitle((CPNWindow *)this,param_1);
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    pCVar1 = (CPNFont *)(**(code **)(*(int *)this + 0x30))();
    CPNClientDC::CPNClientDC(local_1f8,(CPNWindow *)this);
    if (&stack0x00000000 != (undefined1 *)0x1f8) {
      local_10 = XPNDC::SetFont((XPNDC *)local_1f8,pCVar1);
    }
    local_c = 0;
    local_8 = 0;
    CPNDC::GetTextExtent((CPNDC *)local_1f8,param_1,(CPNxSize *)&local_c);
    *(undefined4 *)(this + 0x103) = local_c;
    if (&stack0x00000000 != (undefined1 *)0x1f8) {
      XPNDC::SetFont((XPNDC *)local_1f8,local_10);
    }
    CPNClientDC::~CPNClientDC(local_1f8);
  }
  return;
}


