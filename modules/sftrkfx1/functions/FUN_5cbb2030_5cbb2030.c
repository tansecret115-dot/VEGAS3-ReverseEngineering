/* Module: sftrkfx1.dll
   Function: FUN_5cbb2030
   Address: 5cbb2030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cbb2030(int param_1)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  
  pvVar1 = GlobalAlloc(0x40,4000);
  pvVar2 = GlobalLock(pvVar1);
  *(LPVOID *)(param_1 + 400) = pvVar2;
  if (pvVar2 == (LPVOID)0x0) {
    return 0;
  }
  pvVar1 = GlobalAlloc(0x40,0xfa4);
  pvVar2 = GlobalLock(pvVar1);
  *(LPVOID *)(param_1 + 0x194) = pvVar2;
  if (pvVar2 == (LPVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 400));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 400));
    GlobalFree(pvVar1);
    return 0;
  }
  FUN_5cbb1680(*(undefined4 **)(param_1 + 400),1000);
  return 1;
}


