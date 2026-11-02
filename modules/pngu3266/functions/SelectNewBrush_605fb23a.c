/* Module: pngu3266.dll
   Function: SelectNewBrush
   Address: 605fb23a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNDC::SelectNewBrush(class CPNBrush *) */

int __thiscall CPNDC::SelectNewBrush(CPNDC *this,CPNBrush *param_1)

{
  HGDIOBJ pvVar1;
  
                    /* 0xb23a  1802  ?SelectNewBrush@CPNDC@@UAEHPAVCPNBrush@@@Z */
  pvVar1 = SelectObject(*(HDC *)(this + 0x1cf),*(HGDIOBJ *)(param_1 + 0x2f));
  return (uint)(pvVar1 != (HGDIOBJ)0x0);
}


