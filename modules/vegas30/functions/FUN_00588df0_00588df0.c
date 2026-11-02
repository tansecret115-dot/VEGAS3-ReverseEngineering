/* Module: vegas30.exe
   Function: FUN_00588df0
   Address: 00588df0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00588df0(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x20) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x20));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x20));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x28) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x28));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x28));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x30) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x30));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x30));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x38) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x38));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x38));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}


