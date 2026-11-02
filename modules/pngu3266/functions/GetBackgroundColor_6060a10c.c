/* Module: pngu3266.dll
   Function: GetBackgroundColor
   Address: 6060a10c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetBackgroundColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetBackgroundColor(void)

{
                    /* 0x1a10c  1092  ?GetBackgroundColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_backgroundColor;
}


