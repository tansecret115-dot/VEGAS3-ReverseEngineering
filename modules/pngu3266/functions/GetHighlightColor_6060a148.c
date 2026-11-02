/* Module: pngu3266.dll
   Function: GetHighlightColor
   Address: 6060a148
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetHighlightColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetHighlightColor(void)

{
                    /* 0x1a148  1211  ?GetHighlightColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_highlightColor;
}


