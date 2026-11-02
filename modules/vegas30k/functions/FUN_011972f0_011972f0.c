/* Module: vegas30k.dll
   Function: FUN_011972f0
   Address: 011972f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011972f0(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x3fc) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x3fc));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x3fc));
    GlobalFree(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x3fc) = 0;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x404) = 0;
  *(undefined4 *)(param_1 + 0x42c) = 0;
  *(undefined4 *)(param_1 + 0x44c) = 0;
  return 0;
}


