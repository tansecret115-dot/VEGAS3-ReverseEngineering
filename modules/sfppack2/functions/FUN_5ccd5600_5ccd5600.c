/* Module: sfppack2.dll
   Function: FUN_5ccd5600
   Address: 5ccd5600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccd5600(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(HLOCAL *)(param_1 + 0x318) != (HLOCAL)0x0) {
    FUN_5cd26500(*(HLOCAL *)(param_1 + 0x318));
    *(undefined4 *)(param_1 + 0x318) = 0;
  }
  if (*(HLOCAL *)(param_1 + 0x598) != (HLOCAL)0x0) {
    FUN_5cd26500(*(HLOCAL *)(param_1 + 0x598));
    *(undefined4 *)(param_1 + 0x598) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0xaa4) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xaa4));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xaa4));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xaa4) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0xaa4) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xaa4));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xaa4));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xaa4) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x324) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x324));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x324));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x324) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x5a4) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x5a4));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x5a4));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x5a4) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x2d8) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x2d8));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x2d8));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x2d8) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x2dc) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x2dc));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x2dc));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x2dc) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x2d0) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x2d0));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x2d0));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x2d0) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x2d4) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x2d4));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x2d4));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x2d4) = 0;
  }
  return 0;
}


