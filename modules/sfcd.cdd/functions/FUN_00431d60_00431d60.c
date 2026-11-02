/* Module: sfcd.cdd
   Function: FUN_00431d60
   Address: 00431d60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_00431d60(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_00431e00(param_1);
  uVar2 = FUN_00420aa0((uchar *)&DAT_0044464c,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_00431cb0(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_00426ed0(DAT_00441930,0x10e3);
      FUN_00420aa0(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_0044464c + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x44464b + (0x800 - uVar2)) = 0;
    return &DAT_0044464c;
  }
  return &DAT_0044464c;
}


