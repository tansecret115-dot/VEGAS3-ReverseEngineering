/* Module: vegas30.exe
   Function: FUN_004519a0
   Address: 004519a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004519a0(undefined4 *param_1)

{
  LPCVOID lpBaseAddress;
  HGLOBAL pvVar1;
  
  if ((void *)param_1[1] != (void *)0x0) {
    if ((*(byte *)(param_1 + 2) & 2) == 0) {
      free((void *)param_1[1]);
      param_1[1] = 0;
    }
    else {
      FUN_00451a40(*param_1,param_1 + 1);
    }
  }
  if ((HGDIOBJ)param_1[3] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[3]);
  }
  lpBaseAddress = (LPCVOID)*param_1;
  param_1[3] = 0;
  if (lpBaseAddress != (LPCVOID)0x0) {
    if ((param_1[2] & 2) == 0) {
      if ((param_1[2] & 0x10) != 0) {
        pvVar1 = GlobalHandle(lpBaseAddress);
        GlobalUnlock(pvVar1);
        pvVar1 = GlobalHandle((LPCVOID)*param_1);
        GlobalFree(pvVar1);
        *param_1 = 0;
        return;
      }
      UnmapViewOfFile(lpBaseAddress);
    }
    *param_1 = 0;
  }
  return;
}


