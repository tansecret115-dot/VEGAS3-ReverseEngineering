/* Module: sfppack1.dll
   Function: FUN_5cdb6380
   Address: 5cdb6380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdb6380(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x11c) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x11c));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x11c));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0xb8) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb8));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb8));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0xbc) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xbc));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xbc));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0xc0) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xc0));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xc0));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0xc4) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xc4));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xc4));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  if (*(LPCVOID *)(param_1 + 200) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 200));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 200));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 200) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0xcc) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xcc));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xcc));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  return 0;
}


