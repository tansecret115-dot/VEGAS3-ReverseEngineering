/* Module: pngu3266.dll
   Function: SelectNewBitmap
   Address: 605fb2a3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNDC::SelectNewBitmap(class CPNBitmapImage *) */

int __thiscall CPNDC::SelectNewBitmap(CPNDC *this,CPNBitmapImage *param_1)

{
  HGDIOBJ pvVar1;
  
                    /* 0xb2a3  1801  ?SelectNewBitmap@CPNDC@@UAEHPAVCPNBitmapImage@@@Z */
  pvVar1 = SelectObject(*(HDC *)(this + 0x1cf),*(HGDIOBJ *)(param_1 + 0x14));
  return (uint)(pvVar1 != (HGDIOBJ)0x0);
}


