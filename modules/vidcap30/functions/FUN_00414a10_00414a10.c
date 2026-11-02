/* Module: vidcap30.exe
   Function: FUN_00414a10
   Address: 00414a10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00414a10(undefined4 *param_1)

{
  LPCVOID lpBaseAddress;
  uint uVar1;
  HGLOBAL pvVar2;
  
  if ((void *)param_1[1] != (void *)0x0) {
    if ((*(byte *)(param_1 + 2) & 2) == 0) {
      free((void *)param_1[1]);
      param_1[1] = 0;
    }
    else {
      FUN_00414ac0(*param_1,param_1 + 1);
    }
  }
  if ((HGDIOBJ)param_1[3] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[3]);
  }
  lpBaseAddress = (LPCVOID)*param_1;
  param_1[3] = 0;
  if (lpBaseAddress != (LPCVOID)0x0) {
    uVar1 = param_1[2];
    if ((uVar1 & 0x40) != 0) {
      _SfDibFree_8(lpBaseAddress,0);
      *param_1 = 0;
      return;
    }
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 0x10) != 0) {
        pvVar2 = GlobalHandle(lpBaseAddress);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle((LPCVOID)*param_1);
        GlobalFree(pvVar2);
        *param_1 = 0;
        return;
      }
      UnmapViewOfFile(lpBaseAddress);
    }
    *param_1 = 0;
  }
  return;
}


