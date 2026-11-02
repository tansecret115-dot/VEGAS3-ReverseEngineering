/* Module: pngu3266.dll
   Function: GetMenuTextPen
   Address: 6060a1c6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNPen & __cdecl CPNDrawHelper::GetMenuTextPen(void) */

CPNPen * __cdecl CPNDrawHelper::GetMenuTextPen(void)

{
                    /* 0x1a1c6  1261  ?GetMenuTextPen@CPNDrawHelper@@SAAAVCPNPen@@XZ */
  return &m_menuTextPen;
}


