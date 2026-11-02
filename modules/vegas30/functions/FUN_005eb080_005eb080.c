/* Module: vegas30.exe
   Function: FUN_005eb080
   Address: 005eb080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005eb080(int param_1,uint param_2)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  SIZE_T dwBytes;
  SIZE_T dwBytes_00;
  UINT uFlags;
  
  if (param_2 <= *(uint *)(param_1 + 0x10)) {
    *(uint *)(param_1 + 0xc) = param_2;
    return 0;
  }
  if (*(char *)(param_1 + 0x18) != '\x01') {
    dwBytes = ((param_2 >> 0xf) + 1) * 0x8000;
    if (*(LPCVOID *)(param_1 + 8) == (LPCVOID)0x0) {
      pvVar1 = GlobalAlloc(2,dwBytes);
      pvVar2 = GlobalLock(pvVar1);
      if (pvVar2 != (LPVOID)0x0) {
        *(SIZE_T *)(param_1 + 0x10) = dwBytes;
        *(LPVOID *)(param_1 + 8) = pvVar2;
        *(uint *)(param_1 + 0xc) = param_2;
        *(undefined4 *)(param_1 + 0x14) = 0;
        return 0;
      }
    }
    else {
      pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 8));
      GlobalUnlock(pvVar1);
      uFlags = 2;
      dwBytes_00 = dwBytes;
      pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 8));
      pvVar1 = GlobalReAlloc(pvVar1,dwBytes_00,uFlags);
      pvVar2 = GlobalLock(pvVar1);
      if (pvVar2 != (LPVOID)0x0) {
        *(SIZE_T *)(param_1 + 0x10) = dwBytes;
        *(LPVOID *)(param_1 + 8) = pvVar2;
        *(uint *)(param_1 + 0xc) = param_2;
        return 0;
      }
    }
  }
  return 0x80030070;
}


