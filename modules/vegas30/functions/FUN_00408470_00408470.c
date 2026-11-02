/* Module: vegas30.exe
   Function: FUN_00408470
   Address: 00408470
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00408470(int *param_1,int *param_2)

{
  HDC hdc;
  int iVar1;
  int iVar2;
  
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x58);
  iVar2 = GetDeviceCaps(hdc,0x5a);
  ReleaseDC((HWND)0x0,hdc);
  *param_2 = ((iVar1 >> 1) + *param_1 * 0x9ec) / iVar1;
  param_2[1] = ((iVar2 >> 1) + param_1[1] * 0x9ec) / iVar2;
  return;
}


