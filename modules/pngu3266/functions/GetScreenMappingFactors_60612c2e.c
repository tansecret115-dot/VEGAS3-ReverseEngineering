/* Module: pngu3266.dll
   Function: GetScreenMappingFactors
   Address: 60612c2e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNSystemInfo::GetScreenMappingFactors(long &,long &) */

void __cdecl CPNSystemInfo::GetScreenMappingFactors(long *param_1,long *param_2)

{
  CPNFont *pCVar1;
  int iVar2;
  CPNScreenDC local_1f4 [484];
  CPNFont *local_10;
  long local_c;
  long local_8;
  
                    /* 0x22c2e  1323  ?GetScreenMappingFactors@CPNSystemInfo@@SAXAAJ0@Z */
  if ((m_xMappingPercent == 0) || (m_yMappingPercent == 0)) {
    CPNScreenDC::CPNScreenDC(local_1f4);
    pCVar1 = CPNDrawHelper::GetControlsFont();
    if (&stack0x00000000 != (undefined1 *)0x1f4) {
      local_10 = XPNDC::SetFont((XPNDC *)local_1f4,pCVar1);
    }
    local_8 = CPNDC::GetCharHeight((CPNDC *)local_1f4);
    local_c = CPNDC::GetCharWidthA((CPNDC *)local_1f4);
    iVar2 = ftol();
    m_xMappingPercent = iVar2;
    m_yMappingPercent = ftol();
    if (iVar2 < 100) {
      m_xMappingPercent = 100;
    }
    if (m_yMappingPercent < 100) {
      m_yMappingPercent = 100;
    }
    if (&stack0x00000000 != (undefined1 *)0x1f4) {
      XPNDC::SetFont((XPNDC *)local_1f4,local_10);
    }
    CPNScreenDC::~CPNScreenDC(local_1f4);
  }
  *param_1 = m_xMappingPercent;
  *param_2 = m_yMappingPercent;
  return;
}


