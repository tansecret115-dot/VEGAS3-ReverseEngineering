/* Module: pngu3266.dll
   Function: GetWindowTextColor
   Address: 6060a136
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetWindowTextColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetWindowTextColor(void)

{
                    /* 0x1a136  1425  ?GetWindowTextColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_windowTextColor;
}


