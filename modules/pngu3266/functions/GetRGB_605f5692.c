/* Module: pngu3266.dll
   Function: GetRGB
   Address: 605f5692
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNColorMap::GetRGB(int,unsigned char *,unsigned char *,unsigned char *)
    */

int __thiscall
CPNColorMap::GetRGB(CPNColorMap *this,int param_1,uchar *param_2,uchar *param_3,uchar *param_4)

{
  UINT UVar1;
  
                    /* 0x5692  1308  ?GetRGB@CPNColorMap@@QAEHHPAE00@Z */
  if (((-1 < param_1) && (param_1 < 0x100)) &&
     (UVar1 = GetPaletteEntries(*(HPALETTE *)(this + 8),param_1,1,(LPPALETTEENTRY)&param_1),
     UVar1 != 0)) {
    *param_2 = (uchar)param_1;
    *param_3 = (uchar)((uint)param_1 >> 8);
    *param_4 = param_1._2_1_;
    return 1;
  }
  return 0;
}


