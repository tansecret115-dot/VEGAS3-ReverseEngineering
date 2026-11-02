/* Module: pngu3266.dll
   Function: GetTooltipFont
   Address: 6060a280
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNFont & __cdecl CPNDrawHelper::GetTooltipFont(void) */

CPNFont * __cdecl CPNDrawHelper::GetTooltipFont(void)

{
                    /* 0x1a280  1400  ?GetTooltipFont@CPNDrawHelper@@SAAAVCPNFont@@XZ */
  return &m_tooltipFont;
}


