/* Module: vidcap30.exe
   Function: FUN_00412310
   Address: 00412310
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00412310(HDC param_1,LPRECT param_2,UINT param_3,uint param_4)

{
  uint grfFlags;
  
  if ((DAT_005bb858 == 0) || ((param_4 & 0x800) == 0)) {
    DrawEdge(param_1,param_2,param_3,param_4);
  }
  else {
    grfFlags = param_4 & 0xfffff7ff;
    if ((param_4 & 0x2000) != 0) {
      DrawEdge(param_1,param_2,param_3,grfFlags);
      FUN_00412000(param_1,param_2,0,&DAT_005bb858);
      return;
    }
    FUN_00412000(param_1,param_2,0,&DAT_005bb858);
    if (grfFlags != 0) {
      DrawEdge(param_1,param_2,param_3,grfFlags);
      return;
    }
  }
  return;
}


