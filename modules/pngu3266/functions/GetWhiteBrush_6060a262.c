/* Module: pngu3266.dll
   Function: GetWhiteBrush
   Address: 6060a262
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNBrush & __cdecl CPNDrawHelper::GetWhiteBrush(void) */

CPNBrush * __cdecl CPNDrawHelper::GetWhiteBrush(void)

{
                    /* 0x1a262  1413  ?GetWhiteBrush@CPNDrawHelper@@SAAAVCPNBrush@@XZ */
  return &m_whiteBrush;
}


