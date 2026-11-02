/* Module: pngu3266.dll
   Function: GetMinimalMultilineHeight
   Address: 6060c55d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall XPNCustomText::GetMinimalMultilineHeight(char const *) */

long __thiscall XPNCustomText::GetMinimalMultilineHeight(XPNCustomText *this,char *param_1)

{
  CPNFont *pCVar1;
  int iVar2;
  CPNScreenDC local_1fc [484];
  CPNFont *local_18;
  CPNxRect local_14 [4];
  int local_10;
  int local_8;
  
                    /* 0x1c55d  1265  ?GetMinimalMultilineHeight@XPNCustomText@@QAEJPBD@Z */
  CPNScreenDC::CPNScreenDC(local_1fc);
  pCVar1 = (CPNFont *)(**(code **)(*(int *)this + 0x30))();
  if (&stack0x00000000 != (undefined1 *)0x1fc) {
    local_18 = XPNDC::SetFont((XPNDC *)local_1fc,pCVar1);
  }
  (**(code **)(*(int *)this + 0x3c))(local_14);
  local_10 = 0;
  local_8 = 0;
  CPNDC::DrawTextExA((CPNDC *)local_1fc,param_1,local_14,0x20081);
  iVar2 = local_8 - local_10;
  if (&stack0x00000000 != (undefined1 *)0x1fc) {
    XPNDC::SetFont((XPNDC *)local_1fc,local_18);
  }
  CPNScreenDC::~CPNScreenDC(local_1fc);
  return iVar2;
}


