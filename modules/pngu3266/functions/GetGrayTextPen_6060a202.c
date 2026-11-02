/* Module: pngu3266.dll
   Function: GetGrayTextPen
   Address: 6060a202
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNPen & __cdecl CPNDrawHelper::GetGrayTextPen(void) */

CPNPen * __cdecl CPNDrawHelper::GetGrayTextPen(void)

{
                    /* 0x1a202  1204  ?GetGrayTextPen@CPNDrawHelper@@SAAAVCPNPen@@XZ */
  return &m_grayTextPen;
}


