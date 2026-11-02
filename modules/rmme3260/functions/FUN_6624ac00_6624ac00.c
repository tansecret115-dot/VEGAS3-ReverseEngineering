/* Module: rmme3260.dll
   Function: FUN_6624ac00
   Address: 6624ac00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_6624ac00(LPBITMAPINFO param_1,LPCSTR param_2)

{
  HDC hdc;
  int iVar1;
  
  hdc = (HDC)FUN_6624ac40(param_2);
  if (hdc == (HDC)0x0) {
    return -0x7fffbffb;
  }
  iVar1 = FUN_6624ac80(hdc,param_1);
  DeleteDC(hdc);
  return iVar1;
}


