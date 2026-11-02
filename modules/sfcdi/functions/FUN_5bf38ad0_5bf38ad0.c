/* Module: sfcdi.dll
   Function: FUN_5bf38ad0
   Address: 5bf38ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5bf38ad0(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_5bf38b70(param_1);
  uVar2 = FUN_5bf25750((uchar *)&DAT_5bf78f8c,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_5bf38a20(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_5bf29180(DAT_5bf76078,0x10e3);
      FUN_5bf25750(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_5bf78f8c + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x5bf78f8b + (0x800 - uVar2)) = 0;
    return &DAT_5bf78f8c;
  }
  return &DAT_5bf78f8c;
}


