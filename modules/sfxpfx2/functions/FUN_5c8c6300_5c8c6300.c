/* Module: sfxpfx2.dll
   Function: FUN_5c8c6300
   Address: 5c8c6300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5c8c6300(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_5c8c63a0(param_1);
  uVar2 = FUN_5c8b65c0((uchar *)&DAT_5c8ec384,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_5c8c6250(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_5c8a8180(DAT_5c8e93f8,0x10e2);
      FUN_5c8b65c0(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_5c8ec384 + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x5c8ec383 + (0x800 - uVar2)) = 0;
    return &DAT_5c8ec384;
  }
  return &DAT_5c8ec384;
}


