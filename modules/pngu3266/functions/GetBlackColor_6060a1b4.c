/* Module: pngu3266.dll
   Function: GetBlackColor
   Address: 6060a1b4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetBlackColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetBlackColor(void)

{
                    /* 0x1a1b4  1098  ?GetBlackColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_blackColor;
}


