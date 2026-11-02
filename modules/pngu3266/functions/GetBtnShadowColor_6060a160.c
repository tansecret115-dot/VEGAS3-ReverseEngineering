/* Module: pngu3266.dll
   Function: GetBtnShadowColor
   Address: 6060a160
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetBtnShadowColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetBtnShadowColor(void)

{
                    /* 0x1a160  1111  ?GetBtnShadowColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_btnShadowColor;
}


