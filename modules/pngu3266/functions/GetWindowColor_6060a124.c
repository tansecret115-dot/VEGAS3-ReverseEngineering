/* Module: pngu3266.dll
   Function: GetWindowColor
   Address: 6060a124
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetWindowColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetWindowColor(void)

{
                    /* 0x1a124  1418  ?GetWindowColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_windowColor;
}


