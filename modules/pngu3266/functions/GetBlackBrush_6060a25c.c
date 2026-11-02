/* Module: pngu3266.dll
   Function: GetBlackBrush
   Address: 6060a25c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNBrush & __cdecl CPNDrawHelper::GetBlackBrush(void) */

CPNBrush * __cdecl CPNDrawHelper::GetBlackBrush(void)

{
                    /* 0x1a25c  1097  ?GetBlackBrush@CPNDrawHelper@@SAAAVCPNBrush@@XZ */
  return &m_blackBrush;
}


