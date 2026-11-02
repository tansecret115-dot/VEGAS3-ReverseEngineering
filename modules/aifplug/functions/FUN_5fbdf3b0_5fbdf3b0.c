/* Module: aifplug.dll
   Function: FUN_5fbdf3b0
   Address: 5fbdf3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5fbdf3b0(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_5fbdf450(param_1);
  uVar2 = FUN_5fbe2c50((uchar *)&DAT_5fc0bcd4,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_5fbdf300(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_5fbda8f0(DAT_5fc09910,0x10e3);
      FUN_5fbe2c50(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_5fc0bcd4 + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x5fc0bcd3 + (0x800 - uVar2)) = 0;
    return &DAT_5fc0bcd4;
  }
  return &DAT_5fc0bcd4;
}


