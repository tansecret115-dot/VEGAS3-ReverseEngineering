/* Module: mpgmux.dll
   Function: FUN_10010507
   Address: 10010507
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD __cdecl FUN_10010507(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_100101cf(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_1000ff9f();
    *pDVar2 = 9;
  }
  else {
    DVar3 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
    if (DVar3 == 0xffffffff) {
      uVar4 = GetLastError();
    }
    else {
      uVar4 = 0;
    }
    if (uVar4 == 0) {
      pbVar1 = (byte *)((&DAT_1001b540)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_1000ff2c(uVar4);
  }
  return 0xffffffff;
}


