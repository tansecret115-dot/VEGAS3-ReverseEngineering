/* Module: sfppack1.dll
   Function: FUN_5cdfb080
   Address: 5cdfb080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5cdfb080(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_5cdfb120(param_1);
  uVar2 = FUN_5cdeb340((uchar *)&DAT_5ce267b4,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_5cdfafd0(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_5cddcf00(DAT_5ce23828,0x10e2);
      FUN_5cdeb340(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_5ce267b4 + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x5ce267b3 + (0x800 - uVar2)) = 0;
    return &DAT_5ce267b4;
  }
  return &DAT_5ce267b4;
}


