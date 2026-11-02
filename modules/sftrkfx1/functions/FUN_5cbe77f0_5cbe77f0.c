/* Module: sftrkfx1.dll
   Function: FUN_5cbe77f0
   Address: 5cbe77f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5cbe77f0(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_5cbe7890(param_1);
  uVar2 = FUN_5cbbf190((uchar *)&DAT_5cc1448c,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_5cbe7740(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_5cbd6910(DAT_5cc114f8,0x10e2);
      FUN_5cbbf190(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_5cc1448c + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x5cc1448b + (0x800 - uVar2)) = 0;
    return &DAT_5cc1448c;
  }
  return &DAT_5cc1448c;
}


