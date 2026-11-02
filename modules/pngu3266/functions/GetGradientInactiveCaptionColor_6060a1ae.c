/* Module: pngu3266.dll
   Function: GetGradientInactiveCaptionColor
   Address: 6060a1ae
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetGradientInactiveCaptionColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetGradientInactiveCaptionColor(void)

{
                    /* 0x1a1ae  1201
                       ?GetGradientInactiveCaptionColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_gradientInactiveCaptionColor;
}


