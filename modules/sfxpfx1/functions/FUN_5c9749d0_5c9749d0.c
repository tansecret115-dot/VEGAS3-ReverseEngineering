/* Module: sfxpfx1.dll
   Function: FUN_5c9749d0
   Address: 5c9749d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5c9749d0(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_5c974a70(param_1);
  uVar2 = FUN_5c964c90((uchar *)&DAT_5c99b72c,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_5c974920(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_5c956850(DAT_5c9987a0,0x10e2);
      FUN_5c964c90(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_5c99b72c + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x5c99b72b + (0x800 - uVar2)) = 0;
    return &DAT_5c99b72c;
  }
  return &DAT_5c99b72c;
}


