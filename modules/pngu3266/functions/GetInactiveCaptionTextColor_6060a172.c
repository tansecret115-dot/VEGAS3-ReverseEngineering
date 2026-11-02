/* Module: pngu3266.dll
   Function: GetInactiveCaptionTextColor
   Address: 6060a172
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetInactiveCaptionTextColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetInactiveCaptionTextColor(void)

{
                    /* 0x1a172  1226  ?GetInactiveCaptionTextColor@CPNDrawHelper@@SAAAVCPNColor@@XZ
                        */
  return &m_inactiveCaptionTextColor;
}


