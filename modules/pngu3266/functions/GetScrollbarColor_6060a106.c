/* Module: pngu3266.dll
   Function: GetScrollbarColor
   Address: 6060a106
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetScrollbarColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetScrollbarColor(void)

{
                    /* 0x1a106  1342  ?GetScrollbarColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_scrollbarColor;
}


