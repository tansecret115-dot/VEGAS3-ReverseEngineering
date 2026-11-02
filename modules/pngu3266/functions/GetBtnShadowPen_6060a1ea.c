/* Module: pngu3266.dll
   Function: GetBtnShadowPen
   Address: 6060a1ea
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNPen & __cdecl CPNDrawHelper::GetBtnShadowPen(void) */

CPNPen * __cdecl CPNDrawHelper::GetBtnShadowPen(void)

{
                    /* 0x1a1ea  1112  ?GetBtnShadowPen@CPNDrawHelper@@SAAAVCPNPen@@XZ */
  return &m_btnShadowPen;
}


