/* Module: wavplug.dll
   Function: FUN_5f394120
   Address: 5f394120
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f394120(LPCSTR param_1,undefined4 param_2,short *param_3,int param_4,undefined4 param_5,
                undefined4 param_6,DWORD *param_7,DWORD *param_8)

{
  HANDLE hFile;
  DWORD DVar1;
  int iVar2;
  
  hFile = CreateFileA(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    SetFilePointer(hFile,0,(PLONG)0x0,0);
    FUN_5f3aa690(hFile);
    FUN_5f3aa320(hFile);
    if (param_4 != 0) {
      if (param_7 != (DWORD *)0x0) {
        DVar1 = SetFilePointer(hFile,0,(PLONG)0x0,1);
        *param_7 = DVar1;
      }
      FUN_5f3aa320(hFile);
    }
    if (param_8 != (DWORD *)0x0) {
      DVar1 = SetFilePointer(hFile,0,(PLONG)0x0,1);
      *param_8 = DVar1;
    }
    iVar2 = FUN_5f3aa2b0(hFile);
    CloseHandle(hFile);
    return iVar2;
  }
  return -0x7ffb1ff9;
}


