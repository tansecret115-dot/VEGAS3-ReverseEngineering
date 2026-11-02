/* Module: mpgmux.dll
   Function: FUN_1000cd71
   Address: 1000cd71
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __cdecl FUN_1000cd71(uint param_1,LONG param_2,LONG param_3,DWORD param_4)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  DWORD DVar4;
  LONG local_8;
  
  local_8 = param_3;
  hFile = (HANDLE)FUN_100101cf(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_1000ff9f();
    *pDVar2 = 9;
LAB_1000cdcb:
    DVar4 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar4 = SetFilePointer(hFile,param_2,&local_8,param_4);
    if (DVar4 == 0xffffffff) {
      DVar3 = GetLastError();
      if (DVar3 != 0) {
        FUN_1000ff2c(DVar3);
        goto LAB_1000cdcb;
      }
    }
    pbVar1 = (byte *)((&DAT_1001b540)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar4);
}


