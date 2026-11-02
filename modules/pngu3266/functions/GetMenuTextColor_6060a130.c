/* Module: pngu3266.dll
   Function: GetMenuTextColor
   Address: 6060a130
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetMenuTextColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetMenuTextColor(void)

{
                    /* 0x1a130  1260  ?GetMenuTextColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_menuTextColor;
}


