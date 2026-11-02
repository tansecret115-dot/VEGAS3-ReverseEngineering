/* Module: pngu3266.dll
   Function: Clear
   Address: 605fb123
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::Clear(void) */

void __thiscall CPNDC::Clear(CPNDC *this)

{
  COLORREF color;
  HBRUSH hbr;
  RECT local_10;
  
                    /* 0xb123  857  ?Clear@CPNDC@@UAEXXZ */
  SetMapMode(*(HDC *)(this + 0x1cf),1);
  color = GetBkColor(*(HDC *)(this + 0x1cf));
  hbr = CreateSolidBrush(color);
  FillRect(*(HDC *)(this + 0x1cf),&local_10,hbr);
  DeleteObject(hbr);
  return;
}


