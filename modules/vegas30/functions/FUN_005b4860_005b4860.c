/* Module: vegas30.exe
   Function: FUN_005b4860
   Address: 005b4860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005b4860(int param_1,SIZE_T param_2)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  SIZE_T dwBytes;
  UINT uFlags;
  
  pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x3ac));
  GlobalUnlock(pvVar1);
  uFlags = 2;
  dwBytes = param_2;
  pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x3ac));
  pvVar1 = GlobalReAlloc(pvVar1,dwBytes,uFlags);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 != (LPVOID)0x0) {
    *(LPVOID *)(param_1 + 0x3ac) = pvVar2;
    *(SIZE_T *)(param_1 + 0x3b0) = param_2;
    return 0;
  }
  return 0x8007000e;
}


