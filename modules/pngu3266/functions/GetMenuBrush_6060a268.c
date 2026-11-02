/* Module: pngu3266.dll
   Function: GetMenuBrush
   Address: 6060a268
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNBrush & __cdecl CPNDrawHelper::GetMenuBrush(void) */

CPNBrush * __cdecl CPNDrawHelper::GetMenuBrush(void)

{
                    /* 0x1a268  1251  ?GetMenuBrush@CPNDrawHelper@@SAAAVCPNBrush@@XZ */
  return &m_menuBrush;
}


