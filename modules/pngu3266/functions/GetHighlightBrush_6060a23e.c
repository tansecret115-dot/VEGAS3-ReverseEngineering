/* Module: pngu3266.dll
   Function: GetHighlightBrush
   Address: 6060a23e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNBrush & __cdecl CPNDrawHelper::GetHighlightBrush(void) */

CPNBrush * __cdecl CPNDrawHelper::GetHighlightBrush(void)

{
                    /* 0x1a23e  1210  ?GetHighlightBrush@CPNDrawHelper@@SAAAVCPNBrush@@XZ */
  return &m_highlightBrush;
}


