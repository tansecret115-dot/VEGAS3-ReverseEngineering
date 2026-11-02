/* Module: sfpublish.dll
   Function: FUN_00408900
   Address: 00408900
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00408900(int *param_1,int *param_2)

{
  HDC hdc;
  int iVar1;
  int iVar2;
  
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x58);
  iVar2 = GetDeviceCaps(hdc,0x5a);
  ReleaseDC((HWND)0x0,hdc);
  *param_2 = (*param_1 * iVar1 + 0x4f6) / 0x9ec;
  iVar1 = param_1[1] * iVar2 + 0x4f6;
  param_2[1] = iVar1 / 0x9ec;
  return iVar1 * 0x6734d007;
}


