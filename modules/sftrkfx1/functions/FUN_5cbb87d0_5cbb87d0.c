/* Module: sftrkfx1.dll
   Function: FUN_5cbb87d0
   Address: 5cbb87d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cbb87d0(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0xf4) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xf4));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xf4));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  if (*(void **)(param_1 + 0xa0) != (void *)0x0) {
    FUN_5cbdf350(*(void **)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0xa8) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xa8));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xa8));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  return 0;
}


