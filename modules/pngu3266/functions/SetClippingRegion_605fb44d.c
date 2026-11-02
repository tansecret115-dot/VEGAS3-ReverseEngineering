/* Module: pngu3266.dll
   Function: SetClippingRegion
   Address: 605fb44d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::SetClippingRegion(long,long,long,long) */

void __thiscall
CPNDC::SetClippingRegion(CPNDC *this,long param_1,long param_2,long param_3,long param_4)

{
                    /* 0xb44d  1859  ?SetClippingRegion@CPNDC@@UAEXJJJJ@Z */
  *(long *)(this + 0x1b7) = param_1;
  *(undefined4 *)(this + 0x1c7) = 1;
  *(long *)(this + 0x1bb) = param_2;
  *(long *)(this + 0x1bf) = param_3 + param_1;
  *(long *)(this + 0x1c3) = param_4 + param_2;
  DoClipping(this,*(HDC__ **)(this + 0x1cf));
  return;
}


