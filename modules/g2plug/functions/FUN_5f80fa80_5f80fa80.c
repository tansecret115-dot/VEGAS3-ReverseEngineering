/* Module: g2plug.dll
   Function: FUN_5f80fa80
   Address: 5f80fa80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f80fa80(HWND param_1,WPARAM param_2)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  pMem = (LPCVOID)SendMessageA(param_1,0x150,param_2,0);
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    return 0;
  }
  return 0;
}


