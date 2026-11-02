/* Module: pngu3266.dll
   Function: SelectNewBackgroundMode
   Address: 605fb391
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::SelectNewBackgroundMode(long) */

void __thiscall CPNDC::SelectNewBackgroundMode(CPNDC *this,long param_1)

{
  int mode;
  
                    /* 0xb391  1800  ?SelectNewBackgroundMode@CPNDC@@UAEXJ@Z */
  if ((param_1 == 0) || (param_1 != 1)) {
    mode = 2;
  }
  else {
    mode = 1;
  }
  SetBkMode(*(HDC *)(this + 0x1cf),mode);
  return;
}


