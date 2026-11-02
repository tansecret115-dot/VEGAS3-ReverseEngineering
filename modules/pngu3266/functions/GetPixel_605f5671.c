/* Module: pngu3266.dll
   Function: GetPixel
   Address: 605f5671
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNColorMap::GetPixel(unsigned char,unsigned char,unsigned char) */

int __thiscall CPNColorMap::GetPixel(CPNColorMap *this,uchar param_1,uchar param_2,uchar param_3)

{
  UINT UVar1;
  
                    /* 0x5671  1295  ?GetPixel@CPNColorMap@@QAEHEEE@Z */
  UVar1 = GetNearestPaletteIndex
                    (*(HPALETTE *)(this + 8),(uint)CONCAT21(CONCAT11(param_3,param_2),param_1));
  return UVar1;
}


