/* Module: sfpublish.dll
   Function: FUN_00402920
   Address: 00402920
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00402920(int param_1)

{
  LPCVOID pvVar1;
  HGLOBAL pvVar2;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    FUN_00413120(*(int **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  pvVar1 = *(LPCVOID *)(param_1 + 0x1c);
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  pvVar1 = *(LPCVOID *)(param_1 + 0x20);
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(HMODULE *)(param_1 + 300) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 300));
    *(undefined4 *)(param_1 + 300) = 0;
  }
  if (*(HKEY *)(param_1 + 0x130) != (HKEY)0x0) {
    RegCloseKey(*(HKEY *)(param_1 + 0x130));
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


