/* Module: vfplugs.dll
   Function: FUN_0046dec0
   Address: 0046dec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_0046dec0(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_0046df60(param_1);
  uVar2 = FUN_0042a040((uchar *)&DAT_005379f4,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_0046de10(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_0042da70(DAT_00494a78,0x10e3);
      FUN_0042a040(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_005379f4 + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x5379f3 + (0x800 - uVar2)) = 0;
    return &DAT_005379f4;
  }
  return &DAT_005379f4;
}


