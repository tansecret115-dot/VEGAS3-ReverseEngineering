/* Module: pngu3266.dll
   Function: GetMenuColor
   Address: 6060a11e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetMenuColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetMenuColor(void)

{
                    /* 0x1a11e  1252  ?GetMenuColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_menuColor;
}


