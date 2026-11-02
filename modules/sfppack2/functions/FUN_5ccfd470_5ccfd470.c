/* Module: sfppack2.dll
   Function: FUN_5ccfd470
   Address: 5ccfd470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccfd470(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x178) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x178));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x178));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x130) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x130));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x130));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x108) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x108));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x108));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x128) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x128));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x128));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  return 0;
}


