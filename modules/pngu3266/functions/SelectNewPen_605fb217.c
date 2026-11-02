/* Module: pngu3266.dll
   Function: SelectNewPen
   Address: 605fb217
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNDC::SelectNewPen(class CPNPen *) */

int __thiscall CPNDC::SelectNewPen(CPNDC *this,CPNPen *param_1)

{
  HGDIOBJ pvVar1;
  
                    /* 0xb217  1805  ?SelectNewPen@CPNDC@@UAEHPAVCPNPen@@@Z */
  pvVar1 = SelectObject(*(HDC *)(this + 0x1cf),*(HGDIOBJ *)(param_1 + 0x5f));
  return (uint)(pvVar1 != (HGDIOBJ)0x0);
}


