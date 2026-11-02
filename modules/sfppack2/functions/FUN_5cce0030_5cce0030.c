/* Module: sfppack2.dll
   Function: FUN_5cce0030
   Address: 5cce0030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cce0030(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(HLOCAL *)(param_1 + 0xac) != (HLOCAL)0x0) {
    FUN_5cd26500(*(HLOCAL *)(param_1 + 0xac));
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  if (*(HLOCAL *)(param_1 + 0xd8) != (HLOCAL)0x0) {
    FUN_5cd26500(*(HLOCAL *)(param_1 + 0xd8));
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x148) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x148));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x148));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0xb8) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb8));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb8));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0xe4) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xe4));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xe4));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x78) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x78));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x78));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x7c) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x7c));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x7c));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x70) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x70));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x70));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x74) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x74));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x74));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  return 0;
}


