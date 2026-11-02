/* Module: pngu3266.dll
   Function: GetWhiteColor
   Address: 6060a1ba
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetWhiteColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetWhiteColor(void)

{
                    /* 0x1a1ba  1414  ?GetWhiteColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_whiteColor;
}


