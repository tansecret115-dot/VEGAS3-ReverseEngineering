/* Module: pngu3266.dll
   Function: GetHighlightTextColor
   Address: 6060a154
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetHighlightTextColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetHighlightTextColor(void)

{
                    /* 0x1a154  1213  ?GetHighlightTextColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_highlightTextColor;
}


