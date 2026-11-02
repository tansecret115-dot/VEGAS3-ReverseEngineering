/* Module: sfpagepeel.dll
   Function: FUN_00460860
   Address: 00460860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_00460860(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_00460900(param_1);
  uVar2 = FUN_00425020((uchar *)&DAT_004a095c,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_004607b0(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_00428a50(DAT_0047d9f0,0x10e3);
      FUN_00425020(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_004a095c + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x4a095b + (0x800 - uVar2)) = 0;
    return &DAT_004a095c;
  }
  return &DAT_004a095c;
}


