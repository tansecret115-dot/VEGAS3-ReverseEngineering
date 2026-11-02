/* Module: mp3plug.dll
   Function: FUN_5f69b170
   Address: 5f69b170
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f69b170(int param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5f69a4e0(param_1);
  if (*(LPCVOID *)(param_1 + 0x34) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x34));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x34));
    GlobalFree(pvVar1);
  }
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    free(*(void **)(param_1 + 0x28));
  }
  if (*(void **)(param_1 + 0x2c) != (void *)0x0) {
    free(*(void **)(param_1 + 0x2c));
  }
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    free(*(void **)(param_1 + 0x30));
  }
  return;
}


