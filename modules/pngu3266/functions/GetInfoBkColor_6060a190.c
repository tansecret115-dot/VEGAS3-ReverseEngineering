/* Module: pngu3266.dll
   Function: GetInfoBkColor
   Address: 6060a190
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetInfoBkColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetInfoBkColor(void)

{
                    /* 0x1a190  1228  ?GetInfoBkColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_infoBkColor;
}


