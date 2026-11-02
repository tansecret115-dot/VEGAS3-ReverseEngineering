/* Module: vegas30.exe
   Function: FUN_0054c070
   Address: 0054c070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0054c070(int param_1)

{
  HGLOBAL hMem;
  LPSTR lpString1;
  char *lpString2;
  int iVar1;
  undefined4 *puVar2;
  short *psVar3;
  int iMaxLength;
  
  hMem = GlobalAlloc(2,0x1a68);
  lpString1 = GlobalLock(hMem);
  *(LPSTR *)(param_1 + 0x548) = lpString1;
  if (lpString1 == (LPSTR)0x0) {
    return 0x8007000e;
  }
  iMaxLength = 0x1a68;
  puVar2 = &DAT_0061aca8;
  psVar3 = &DAT_006577c8;
  do {
    *psVar3 = (short)lpString1 - *(short *)(param_1 + 0x548);
    if (1 < iMaxLength) {
      if (psVar3 < (short *)0x6577fc) {
        lpString2 = (char *)_SfGetString_8(DAT_00647204,*puVar2);
      }
      else {
        lpString2 = "!Bogus!";
      }
      lstrcpynA(lpString1,lpString2,iMaxLength);
      lpString1[iMaxLength + -1] = '\0';
      iVar1 = lstrlenA(lpString1);
      iMaxLength = iMaxLength - (iVar1 + 1);
      lpString1 = lpString1 + iVar1 + 1;
    }
    psVar3 = psVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (psVar3 < &DAT_006577fc);
  *lpString1 = '\0';
  return 0;
}


