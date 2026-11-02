/* Module: pngu3266.dll
   Function: GetCharWidthA
   Address: 605fb1b3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __thiscall CPNDC::GetCharWidthA(void) */

long __thiscall CPNDC::GetCharWidthA(CPNDC *this)

{
  tagTEXTMETRICA local_3c;
  
                    /* 0xb1b3  1128  ?GetCharWidthA@CPNDC@@UAEJXZ */
  GetTextMetricsA(*(HDC *)(this + 0x1cf),&local_3c);
  return local_3c.tmAveCharWidth;
}


