/* Module: pngu3266.dll
   Function: GetBtnTextColor
   Address: 6060a16c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetBtnTextColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetBtnTextColor(void)

{
                    /* 0x1a16c  1114  ?GetBtnTextColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_btnTextColor;
}


