/* Module: mp3plug.dll
   Function: FUN_5f6bb4d0
   Address: 5f6bb4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5f6bb4d0(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_5f6bb570(param_1);
  uVar2 = FUN_5f6b1a30((uchar *)&DAT_5f74f854,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_5f6bb420(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_5f69eff0(DAT_5f74d488,0x10e3);
      FUN_5f6b1a30(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_5f74f854 + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x5f74f853 + (0x800 - uVar2)) = 0;
    return &DAT_5f74f854;
  }
  return &DAT_5f74f854;
}


