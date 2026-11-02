/* Module: pngu3266.dll
   Function: SelectNewRegion
   Address: 605fb280
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNDC::SelectNewRegion(class CPNRegion *) */

int __thiscall CPNDC::SelectNewRegion(CPNDC *this,CPNRegion *param_1)

{
  int iVar1;
  
                    /* 0xb280  1806  ?SelectNewRegion@CPNDC@@UAEHPAVCPNRegion@@@Z */
  iVar1 = SelectClipRgn(*(HDC *)(this + 0x1cf),*(HRGN *)(param_1 + 0xc));
  return (uint)(iVar1 != 0);
}


