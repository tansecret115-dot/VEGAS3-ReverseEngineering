/* Module: pngu3266.dll
   Function: GetHighlightPen
   Address: 6060a1de
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNPen & __cdecl CPNDrawHelper::GetHighlightPen(void) */

CPNPen * __cdecl CPNDrawHelper::GetHighlightPen(void)

{
                    /* 0x1a1de  1212  ?GetHighlightPen@CPNDrawHelper@@SAAAVCPNPen@@XZ */
  return &m_highlightPen;
}


