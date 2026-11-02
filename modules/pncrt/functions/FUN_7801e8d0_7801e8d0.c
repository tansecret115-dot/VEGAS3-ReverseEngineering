/* Module: pncrt.dll
   Function: FUN_7801e8d0
   Address: 7801e8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __cdecl FUN_7801e8d0(uint param_1,LONG param_2,LONG param_3,DWORD param_4)

{
  HANDLE hFile;
  int *piVar1;
  DWORD DVar2;
  DWORD DVar3;
  LONG local_4;
  
  local_4 = param_3;
  hFile = (HANDLE)_get_osfhandle(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    piVar1 = _errno();
    *piVar1 = 9;
    return 0xffffffffffffffff;
  }
  DVar2 = SetFilePointer(hFile,param_2,&local_4,param_4);
  if (DVar2 == 0xffffffff) {
    DVar3 = GetLastError();
    if (DVar3 != 0) {
      FUN_7800a870(DVar3);
      return 0xffffffffffffffff;
    }
  }
  *(byte *)((&__pioinfo)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
       *(byte *)((&__pioinfo)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
  return CONCAT44(local_4,DVar2);
}


