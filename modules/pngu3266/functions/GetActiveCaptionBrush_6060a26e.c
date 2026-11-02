/* Module: pngu3266.dll
   Function: GetActiveCaptionBrush
   Address: 6060a26e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNBrush & __cdecl CPNDrawHelper::GetActiveCaptionBrush(void) */

CPNBrush * __cdecl CPNDrawHelper::GetActiveCaptionBrush(void)

{
                    /* 0x1a26e  1078  ?GetActiveCaptionBrush@CPNDrawHelper@@SAAAVCPNBrush@@XZ */
  return &m_activeCaptionBrush;
}


