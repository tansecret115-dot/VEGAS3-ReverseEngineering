/* Module: sfconfigmgr.dll
   Function: FUN_0040fd30
   Address: 0040fd30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_0040fd30(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_0040fdd0(param_1);
  uVar2 = FUN_00406090((uchar *)&DAT_0042547c,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_0040fc80(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_00409ac0(DAT_004230d0,0x10e3);
      FUN_00406090(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_0042547c + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x42547b + (0x800 - uVar2)) = 0;
    return &DAT_0042547c;
  }
  return &DAT_0042547c;
}


