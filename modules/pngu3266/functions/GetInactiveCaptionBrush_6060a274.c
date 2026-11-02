/* Module: pngu3266.dll
   Function: GetInactiveCaptionBrush
   Address: 6060a274
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNBrush & __cdecl CPNDrawHelper::GetInactiveCaptionBrush(void) */

CPNBrush * __cdecl CPNDrawHelper::GetInactiveCaptionBrush(void)

{
                    /* 0x1a274  1224  ?GetInactiveCaptionBrush@CPNDrawHelper@@SAAAVCPNBrush@@XZ */
  return &m_inactiveCaptionBrush;
}


