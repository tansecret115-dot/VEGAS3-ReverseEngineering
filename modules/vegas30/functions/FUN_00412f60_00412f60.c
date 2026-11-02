/* Module: vegas30.exe
   Function: FUN_00412f60
   Address: 00412f60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00412f60(HDC param_1,LPRECT param_2,int param_3,int param_4)

{
  UINT grfFlags;
  
  grfFlags = 0xf;
  if (param_4 != 0) {
    grfFlags = 0x80f;
  }
  if (param_3 != 0) {
    DrawEdge(param_1,param_2,2,grfFlags);
    return;
  }
  DrawEdge(param_1,param_2,4,grfFlags);
  return;
}


