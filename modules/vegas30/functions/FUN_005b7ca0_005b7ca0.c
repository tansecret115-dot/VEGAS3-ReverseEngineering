/* Module: vegas30.exe
   Function: FUN_005b7ca0
   Address: 005b7ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005b7ca0(int param_1)

{
  LPCVOID pvVar1;
  HGLOBAL pvVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    pvVar1 = *(LPCVOID *)(param_1 + 0xc);
    if (pvVar1 != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle(pvVar1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pvVar1);
      GlobalFree(pvVar2);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    pvVar1 = *(LPCVOID *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 8) = 0;
    if (pvVar1 != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle(pvVar1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pvVar1);
      GlobalFree(pvVar2);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    pvVar1 = *(LPCVOID *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (pvVar1 != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle(pvVar1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pvVar1);
      GlobalFree(pvVar2);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}


