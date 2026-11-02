/* Module: vidpcore.dll
   Function: FUN_5de29540
   Address: 5de29540
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5de29540(int param_1,int param_2)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  
  if (*(LPCVOID *)(param_1 + 0x80) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x80));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x80));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (0 < param_2) {
    pvVar1 = GlobalAlloc(0x40,param_2 * 2);
    pvVar2 = GlobalLock(pvVar1);
    *(LPVOID *)(param_1 + 0x80) = pvVar2;
  }
  *(int *)(param_1 + 0x7c) = param_2;
  return;
}


