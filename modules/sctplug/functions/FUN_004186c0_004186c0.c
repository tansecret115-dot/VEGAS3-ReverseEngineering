/* Module: sctplug.dll
   Function: FUN_004186c0
   Address: 004186c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_004186c0(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_00418760(param_1);
  uVar2 = FUN_00412100((uchar *)&DAT_0043f2dc,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_00418610(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_0040dea0(DAT_0043cd30,0x10e2);
      FUN_00412100(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_0043f2dc + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x43f2db + (0x800 - uVar2)) = 0;
    return &DAT_0043f2dc;
  }
  return &DAT_0043f2dc;
}


