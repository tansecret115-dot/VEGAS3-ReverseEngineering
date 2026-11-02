/* Module: pngu3266.dll
   Function: GetInactiveBorderColor
   Address: 6060a13c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetInactiveBorderColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetInactiveBorderColor(void)

{
                    /* 0x1a13c  1223  ?GetInactiveBorderColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_inactiveBorderColor;
}


