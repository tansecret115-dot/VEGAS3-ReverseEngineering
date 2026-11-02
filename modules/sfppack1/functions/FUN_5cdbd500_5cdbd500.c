/* Module: sfppack1.dll
   Function: FUN_5cdbd500
   Address: 5cdbd500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdbd500(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x34c) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x34c));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x34c));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x34c) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0xb0) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb0));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb0));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0xb4) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb4));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb4));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0xb8) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb8));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb8));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x138) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x138));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x138));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x13c) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x13c));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x13c));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x13c) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x140) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x140));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x140));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x144) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x144));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x144));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x144) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x148) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x148));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x148));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x14c) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x14c));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x14c));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x184) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x184));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x184));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x184) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x188) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x188));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x188));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x188) = 0;
  }
  return 0;
}


