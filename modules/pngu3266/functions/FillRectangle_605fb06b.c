/* Module: pngu3266.dll
   Function: FillRectangle
   Address: 605fb06b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::FillRectangle(class CPNxRect const &,class CPNBrush &) */

void __thiscall CPNDC::FillRectangle(CPNDC *this,CPNxRect *param_1,CPNBrush *param_2)

{
  RECT local_28;
  LONG local_18;
  LONG local_14;
  LONG local_10;
  LONG local_c;
  CPNDC *local_8;
  
  local_8 = this;
                    /* 0xb06b  1045  ?FillRectangle@CPNDC@@UAEXABVCPNxRect@@AAVCPNBrush@@@Z */
  CPNGraphicResource::LockResource((CPNGraphicResource *)param_2);
  local_28.left = *(LONG *)param_1;
  local_28.top = *(LONG *)(param_1 + 4);
  local_28.right = *(LONG *)(param_1 + 8);
  local_28.bottom = *(LONG *)(param_1 + 0xc);
  local_18 = local_28.left;
  local_14 = local_28.top;
  local_10 = local_28.right;
  local_c = local_28.bottom;
  FillRect(*(HDC *)(local_8 + 0x1cf),&local_28,*(HBRUSH *)(param_2 + 0x2f));
  CPNGraphicResource::UnLockResource((CPNGraphicResource *)param_2);
  return;
}


