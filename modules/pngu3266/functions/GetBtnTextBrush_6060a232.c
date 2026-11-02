/* Module: pngu3266.dll
   Function: GetBtnTextBrush
   Address: 6060a232
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNBrush & __cdecl CPNDrawHelper::GetBtnTextBrush(void) */

CPNBrush * __cdecl CPNDrawHelper::GetBtnTextBrush(void)

{
                    /* 0x1a232  1113  ?GetBtnTextBrush@CPNDrawHelper@@SAAAVCPNBrush@@XZ */
  return &m_btnTextBrush;
}


