/* Module: pngu3266.dll
   Function: GetInactiveCaptionColor
   Address: 6060a118
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetInactiveCaptionColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetInactiveCaptionColor(void)

{
                    /* 0x1a118  1225  ?GetInactiveCaptionColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_inactiveCaptionColor;
}


