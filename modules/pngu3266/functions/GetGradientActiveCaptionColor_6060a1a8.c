/* Module: pngu3266.dll
   Function: GetGradientActiveCaptionColor
   Address: 6060a1a8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetGradientActiveCaptionColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetGradientActiveCaptionColor(void)

{
                    /* 0x1a1a8  1200
                       ?GetGradientActiveCaptionColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_gradientActiveCaptionColor;
}


