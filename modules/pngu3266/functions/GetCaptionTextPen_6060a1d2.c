/* Module: pngu3266.dll
   Function: GetCaptionTextPen
   Address: 6060a1d2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNPen & __cdecl CPNDrawHelper::GetCaptionTextPen(void) */

CPNPen * __cdecl CPNDrawHelper::GetCaptionTextPen(void)

{
                    /* 0x1a1d2  1124  ?GetCaptionTextPen@CPNDrawHelper@@SAAAVCPNPen@@XZ */
  return &m_captionTextPen;
}


