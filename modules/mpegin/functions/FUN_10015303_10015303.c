/* Module: mpegin.dll
   Function: FUN_10015303
   Address: 10015303
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10015303(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_1001da60 <= param_1) {
LAB_10015384:
    pDVar3 = FUN_10011c3e();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_1001d960)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_10015384;
  FUN_10014b6c(param_1);
  if ((*(byte *)((&DAT_1001d960)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_10014b2a(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_10015379;
    pDVar3 = FUN_10011c47();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_10011c3e();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_10015379:
  FUN_10014bcb(param_1);
  return uVar5;
}


