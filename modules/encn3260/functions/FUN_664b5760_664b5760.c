/* Module: encn3260.dll
   Function: FUN_664b5760
   Address: 664b5760
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_664b5760(LPBITMAPINFO param_1,LPCSTR param_2)

{
  HDC hdc;
  int iVar1;
  
  hdc = (HDC)FUN_664b57a0(param_2);
  if (hdc == (HDC)0x0) {
    return -0x7fffbffb;
  }
  iVar1 = FUN_664b57e0(hdc,param_1);
  DeleteDC(hdc);
  return iVar1;
}


