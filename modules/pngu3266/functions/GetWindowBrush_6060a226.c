/* Module: pngu3266.dll
   Function: GetWindowBrush
   Address: 6060a226
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNBrush & __cdecl CPNDrawHelper::GetWindowBrush(void) */

CPNBrush * __cdecl CPNDrawHelper::GetWindowBrush(void)

{
                    /* 0x1a226  1417  ?GetWindowBrush@CPNDrawHelper@@SAAAVCPNBrush@@XZ */
  return &m_windowBrush;
}


