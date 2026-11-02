/* Module: pngu3266.dll
   Function: GetInfoTextColor
   Address: 6060a18a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetInfoTextColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetInfoTextColor(void)

{
                    /* 0x1a18a  1229  ?GetInfoTextColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_infoTextColor;
}


