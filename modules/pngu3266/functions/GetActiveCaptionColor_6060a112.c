/* Module: pngu3266.dll
   Function: GetActiveCaptionColor
   Address: 6060a112
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetActiveCaptionColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetActiveCaptionColor(void)

{
                    /* 0x1a112  1079  ?GetActiveCaptionColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_activeCaptionColor;
}


