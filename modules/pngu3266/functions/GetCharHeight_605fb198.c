/* Module: pngu3266.dll
   Function: GetCharHeight
   Address: 605fb198
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __thiscall CPNDC::GetCharHeight(void) */

long __thiscall CPNDC::GetCharHeight(CPNDC *this)

{
  tagTEXTMETRICA local_3c;
  
                    /* 0xb198  1127  ?GetCharHeight@CPNDC@@UAEJXZ */
  GetTextMetricsA(*(HDC *)(this + 0x1cf),&local_3c);
  return local_3c.tmHeight;
}


