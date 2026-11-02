/* Module: pngu3266.dll
   Function: GetCaptionTextColor
   Address: 6060a14e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetCaptionTextColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetCaptionTextColor(void)

{
                    /* 0x1a14e  1123  ?GetCaptionTextColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_captionTextColor;
}


