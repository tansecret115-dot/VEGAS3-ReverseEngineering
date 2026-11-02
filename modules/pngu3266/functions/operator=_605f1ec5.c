/* Module: pngu3266.dll
   Function: operator=
   Address: 605f1ec5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNColorMap & __thiscall CPNColorMap::operator=(class CPNColorMap const &) */

CPNColorMap * __thiscall CPNColorMap::operator=(CPNColorMap *this,CPNColorMap *param_1)

{
                    /* 0x1ec5  443  ??4CPNColorMap@@QAEAAV0@ABV0@@Z
                       0x1ec5  447  ??4CPNCursor@@QAEAAV0@ABV0@@Z
                       0x1ec5  459  ??4CPNGraphicResource@@QAEAAV0@ABV0@@Z
                       0x1ec5  545  ??4XPNRegion@@QAEAAV0@ABV0@@Z
                       0x1ec5  558  ??4XPNWindow@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}


