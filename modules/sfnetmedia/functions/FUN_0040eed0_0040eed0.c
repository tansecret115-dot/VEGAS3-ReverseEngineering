/* Module: sfnetmedia.dll
   Function: FUN_0040eed0
   Address: 0040eed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040eed0(int param_1,uint param_2,uint param_3)

{
  HANDLE hHandle;
  DWORD DVar1;
  
  hHandle = *(HANDLE *)(*(int *)(param_1 + 0xc) + 0xdac);
  if (hHandle != (HANDLE)0x0) {
    DVar1 = WaitForSingleObject(hHandle,0);
    if (DVar1 == 0) {
      return 0x80004004;
    }
  }
  if (param_3 < param_2) {
    param_3 = param_2;
  }
  PostMessageA(*(HWND *)(*(int *)(param_1 + 0xc) + 0xda0),0xf92,param_2,param_3);
  return 0;
}


