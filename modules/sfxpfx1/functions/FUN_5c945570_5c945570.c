/* Module: sfxpfx1.dll
   Function: FUN_5c945570
   Address: 5c945570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c945570(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x40c) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x40c));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x40c));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x40c) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x1f8) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1f8));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1f8));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x1f8) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x1fc) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1fc));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1fc));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x1fc) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0xb8) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb8));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb8));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  return 0;
}


