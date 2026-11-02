/* Module: pncrt.dll
   Function: FUN_780116c0
   Address: 780116c0
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD __cdecl FUN_780116c0(uint param_1,LONG param_2,DWORD param_3)

{
  HANDLE hFile;
  int *piVar1;
  DWORD DVar2;
  uint uVar3;
  
  hFile = (HANDLE)_get_osfhandle(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    piVar1 = _errno();
    *piVar1 = 9;
    return 0xffffffff;
  }
  DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
  if (DVar2 == 0xffffffff) {
    uVar3 = GetLastError();
  }
  else {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    FUN_7800a870(uVar3);
    return 0xffffffff;
  }
  *(byte *)((&__pioinfo)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
       *(byte *)((&__pioinfo)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
  return DVar2;
}


