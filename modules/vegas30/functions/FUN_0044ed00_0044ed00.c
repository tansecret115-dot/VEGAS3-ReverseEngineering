/* Module: vegas30.exe
   Function: FUN_0044ed00
   Address: 0044ed00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044ed00(HDC param_1,LPRECT param_2,UINT param_3,uint param_4)

{
  uint grfFlags;
  
  if ((DAT_0064b188 == 0) || ((param_4 & 0x800) == 0)) {
    DrawEdge(param_1,param_2,param_3,param_4);
  }
  else {
    grfFlags = param_4 & 0xfffff7ff;
    if ((param_4 & 0x2000) != 0) {
      DrawEdge(param_1,param_2,param_3,grfFlags);
      FUN_0044e9f0(param_1,param_2,0,&DAT_0064b188);
      return;
    }
    FUN_0044e9f0(param_1,param_2,0,&DAT_0064b188);
    if (grfFlags != 0) {
      DrawEdge(param_1,param_2,param_3,grfFlags);
      return;
    }
  }
  return;
}


