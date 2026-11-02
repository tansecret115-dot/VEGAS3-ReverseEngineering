/* Module: sfppack2.dll
   Function: FUN_5cd023b0
   Address: 5cd023b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cd023b0(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x150) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x150));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x150));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0xf8) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xf8));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xf8));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0xfc) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xfc));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xfc));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x100) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x100));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x100));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x104) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x104));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x104));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  return 0;
}


