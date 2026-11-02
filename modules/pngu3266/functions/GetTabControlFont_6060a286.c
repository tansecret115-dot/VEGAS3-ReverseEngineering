/* Module: pngu3266.dll
   Function: GetTabControlFont
   Address: 6060a286
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNFont & __cdecl CPNDrawHelper::GetTabControlFont(void) */

CPNFont * __cdecl CPNDrawHelper::GetTabControlFont(void)

{
                    /* 0x1a286  1378  ?GetTabControlFont@CPNDrawHelper@@SAAAVCPNFont@@XZ */
  return &m_tabControlFont;
}


