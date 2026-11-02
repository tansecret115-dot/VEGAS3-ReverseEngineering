/* Module: pngu3266.dll
   Function: GetBtnHighlightPen
   Address: 6060a1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNPen & __cdecl CPNDrawHelper::GetBtnHighlightPen(void) */

CPNPen * __cdecl CPNDrawHelper::GetBtnHighlightPen(void)

{
                    /* 0x1a1f0  1110  ?GetBtnHighlightPen@CPNDrawHelper@@SAAAVCPNPen@@XZ */
  return &m_btnHighlightPen;
}


