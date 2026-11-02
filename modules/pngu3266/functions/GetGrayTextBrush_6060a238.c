/* Module: pngu3266.dll
   Function: GetGrayTextBrush
   Address: 6060a238
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNBrush & __cdecl CPNDrawHelper::GetGrayTextBrush(void) */

CPNBrush * __cdecl CPNDrawHelper::GetGrayTextBrush(void)

{
                    /* 0x1a238  1202  ?GetGrayTextBrush@CPNDrawHelper@@SAAAVCPNBrush@@XZ */
  return &m_grayTextBrush;
}


