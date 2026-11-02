/* Module: pngu3266.dll
   Function: GetCaptionFont
   Address: 6060a28c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNFont & __cdecl CPNDrawHelper::GetCaptionFont(void) */

CPNFont * __cdecl CPNDrawHelper::GetCaptionFont(void)

{
                    /* 0x1a28c  1122  ?GetCaptionFont@CPNDrawHelper@@SAAAVCPNFont@@XZ */
  return &m_captionFont;
}


