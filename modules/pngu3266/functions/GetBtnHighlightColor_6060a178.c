/* Module: pngu3266.dll
   Function: GetBtnHighlightColor
   Address: 6060a178
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetBtnHighlightColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetBtnHighlightColor(void)

{
                    /* 0x1a178  1109  ?GetBtnHighlightColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_btnHighlightColor;
}


