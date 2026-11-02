/* Module: aviplug.dll
   Function: FUN_5f940a40
   Address: 5f940a40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f940a40(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((int *)param_1[3] != (int *)0x0) {
      FUN_5f9796e0((int *)param_1[3]);
    }
    if ((LPVOID)*param_1 != (LPVOID)0x0) {
      VirtualFree((LPVOID)*param_1,0,0x8000);
    }
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
  }
  return;
}


