/* Module: pngu3266.dll
   Function: CleanupDefaultTools
   Address: 605faa6b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::CleanupDefaultTools(void) */

void __thiscall CPNDC::CleanupDefaultTools(CPNDC *this)

{
  int iVar1;
  
                    /* 0xaa6b  853  ?CleanupDefaultTools@CPNDC@@UAEXXZ */
  *(undefined4 *)(this + 0x1b3) = 1;
  SelectClipRgn(*(HDC *)(this + 0x1cf),*(HRGN *)(this + 0x141));
  SetTextColor(*(HDC *)(this + 0x1cf),*(COLORREF *)(this + 0x151));
  SetBkColor(*(HDC *)(this + 0x1cf),*(COLORREF *)(this + 0x170));
  SetROP2(*(HDC *)(this + 0x1cf),*(int *)(this + 0x187));
  SetBkMode(*(HDC *)(this + 0x1cf),*(int *)(this + 0x18b));
  iVar1 = (**(code **)(*(int *)(this + 0x135) + 0x2c))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)(this + 0x135) + 0x28))();
  }
  XPNDC::CleanupDefaultTools((XPNDC *)this);
  return;
}


