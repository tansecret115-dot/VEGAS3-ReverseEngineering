/* Module: pngu3266.dll
   Function: GetMenuFont
   Address: 6060a292
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNFont & __cdecl CPNDrawHelper::GetMenuFont(void) */

CPNFont * __cdecl CPNDrawHelper::GetMenuFont(void)

{
                    /* 0x1a292  1254  ?GetMenuFont@CPNDrawHelper@@SAAAVCPNFont@@XZ */
  return &m_menuFont;
}


