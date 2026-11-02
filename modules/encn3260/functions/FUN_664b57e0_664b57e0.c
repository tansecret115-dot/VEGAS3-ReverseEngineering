/* Module: encn3260.dll
   Function: FUN_664b57e0
   Address: 664b57e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_664b57e0(HDC param_1,LPBITMAPINFO param_2)

{
  HBITMAP hbm;
  int iVar1;
  LPBITMAPINFO ptVar2;
  
  ptVar2 = param_2;
  for (iVar1 = 0x10a; iVar1 != 0; iVar1 = iVar1 + -1) {
    (ptVar2->bmiHeader).biSize = 0;
    ptVar2 = (LPBITMAPINFO)&(ptVar2->bmiHeader).biWidth;
  }
  (param_2->bmiHeader).biSize = 0x28;
  (param_2->bmiHeader).biBitCount = 0;
  hbm = CreateCompatibleBitmap(param_1,1,1);
  GetDIBits(param_1,hbm,0,1,(LPVOID)0x0,param_2,0);
  GetDIBits(param_1,hbm,0,1,(LPVOID)0x0,param_2,0);
  DeleteObject(hbm);
  iVar1 = FUN_664ba740((int)param_2);
  return (-(uint)(iVar1 != 0) & 0x7fffbffb) + 0x80004005;
}


