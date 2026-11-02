/* Module: sfppack2.dll
   Function: FUN_5cd39c00
   Address: 5cd39c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5cd39c00(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_5cd39ca0(param_1);
  uVar2 = FUN_5cd20ca0((uchar *)&DAT_5cd72bcc,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_5cd39b50(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_5cd08210(DAT_5cd67a38,0x10e2);
      FUN_5cd20ca0(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_5cd72bcc + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x5cd72bcb + (0x800 - uVar2)) = 0;
    return &DAT_5cd72bcc;
  }
  return &DAT_5cd72bcc;
}


