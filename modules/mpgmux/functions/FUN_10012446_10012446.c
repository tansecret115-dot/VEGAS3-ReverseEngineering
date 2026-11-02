/* Module: mpgmux.dll
   Function: FUN_10012446
   Address: 10012446
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10012446(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_1001b640 <= param_1) {
LAB_100124c7:
    pDVar3 = FUN_1000ff9f();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_1001b540)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_100124c7;
  FUN_10010211(param_1);
  if ((*(byte *)((&DAT_1001b540)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_100101cf(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_100124bc;
    pDVar3 = FUN_1000ffa8();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_1000ff9f();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_100124bc:
  FUN_10010270(param_1);
  return uVar5;
}


