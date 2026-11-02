/* Module: Setup.exe
   Function: FUN_0041f580
   Address: 0041f580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_0041f580(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_0041f620(param_1);
  uVar2 = SfPrintF((uchar *)&DAT_0044bb44,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_0041f4d0(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = _SfGetString2_8(DAT_00448e00,0x10e3);
      SfPrintF(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_0044bb44 + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x44bb43 + (0x800 - uVar2)) = 0;
    return &DAT_0044bb44;
  }
  return &DAT_0044bb44;
}


