/* Module: wmfplug2.dll
   Function: FUN_00427ba0
   Address: 00427ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_00427ba0(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_00427c40(param_1);
  uVar2 = FUN_00425a40((uchar *)&DAT_0048c1f4,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_00427af0(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_00420d00(DAT_00489e30,0x10e3);
      FUN_00425a40(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_0048c1f4 + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x48c1f3 + (0x800 - uVar2)) = 0;
    return &DAT_0048c1f4;
  }
  return &DAT_0048c1f4;
}


