/* Module: pngu3266.dll
   Function: DrawFocusRect
   Address: 605fafe9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::DrawFocusRect(class CPNxRect const &) */

void __thiscall CPNDC::DrawFocusRect(CPNDC *this,CPNxRect *param_1)

{
  RECT local_24;
  LONG local_14;
  LONG local_10;
  LONG local_c;
  LONG local_8;
  
                    /* 0xafe9  995  ?DrawFocusRect@CPNDC@@UAEXABVCPNxRect@@@Z */
  local_24.left = *(LONG *)param_1;
  local_24.top = *(LONG *)(param_1 + 4);
  local_24.right = *(LONG *)(param_1 + 8);
  local_24.bottom = *(LONG *)(param_1 + 0xc);
  local_14 = local_24.left;
  local_10 = local_24.top;
  local_c = local_24.right;
  local_8 = local_24.bottom;
  ::DrawFocusRect(*(HDC *)(this + 0x1cf),&local_24);
  return;
}


