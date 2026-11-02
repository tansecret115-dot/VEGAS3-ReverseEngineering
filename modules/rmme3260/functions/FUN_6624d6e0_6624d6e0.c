/* Module: rmme3260.dll
   Function: FUN_6624d6e0
   Address: 6624d6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_6624d6e0(undefined4 *param_1,byte param_2)

{
  HDC hdc;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  hdc = GetDC((HWND)*param_1);
  if (hdc != (HDC)0x0) {
    if (((param_2 & 2) != 0) && (DAT_6627e548 != (code *)0x0)) {
      uVar2 = (*DAT_6627e548)(param_1[0x11d],hdc,0xffffffff,0xffffffff,param_1 + 0x11e,
                              param_1[0x11f],param_1[0x120],0x1000);
    }
    if ((param_2 & 1) != 0) {
      iVar1 = SetStretchBltMode(hdc,3);
      uVar2 = (uint)(iVar1 != 0);
    }
    ReleaseDC((HWND)*param_1,hdc);
  }
  return uVar2;
}


