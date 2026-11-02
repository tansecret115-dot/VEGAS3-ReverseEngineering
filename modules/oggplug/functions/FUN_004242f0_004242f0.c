/* Module: oggplug.dll
   Function: FUN_004242f0
   Address: 004242f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_004242f0(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_00424390(param_1);
  uVar2 = FUN_00410930((uchar *)&DAT_00513b7c,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_00424240(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_0040bbf0(DAT_00510e98,0x10e2);
      FUN_00410930(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_00513b7c + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x513b7b + (0x800 - uVar2)) = 0;
    return &DAT_00513b7c;
  }
  return &DAT_00513b7c;
}


