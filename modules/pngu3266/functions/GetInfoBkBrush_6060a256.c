/* Module: pngu3266.dll
   Function: GetInfoBkBrush
   Address: 6060a256
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNBrush & __cdecl CPNDrawHelper::GetInfoBkBrush(void) */

CPNBrush * __cdecl CPNDrawHelper::GetInfoBkBrush(void)

{
                    /* 0x1a256  1227  ?GetInfoBkBrush@CPNDrawHelper@@SAAAVCPNBrush@@XZ */
  return &m_infoBkBrush;
}


