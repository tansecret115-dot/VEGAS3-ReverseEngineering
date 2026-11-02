/* Module: pngu3266.dll
   Function: GetBtnFaceBrush
   Address: 6060a22c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNBrush & __cdecl CPNDrawHelper::GetBtnFaceBrush(void) */

CPNBrush * __cdecl CPNDrawHelper::GetBtnFaceBrush(void)

{
                    /* 0x1a22c  1106  ?GetBtnFaceBrush@CPNDrawHelper@@SAAAVCPNBrush@@XZ */
  return &m_btnFaceBrush;
}


