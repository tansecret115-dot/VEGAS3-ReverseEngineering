/* Module: pngu3266.dll
   Function: GetBtnFaceColor
   Address: 6060a15a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNColor & __cdecl CPNDrawHelper::GetBtnFaceColor(void) */

CPNColor * __cdecl CPNDrawHelper::GetBtnFaceColor(void)

{
                    /* 0x1a15a  1107  ?GetBtnFaceColor@CPNDrawHelper@@SAAAVCPNColor@@XZ */
  return &m_btnFaceColor;
}


