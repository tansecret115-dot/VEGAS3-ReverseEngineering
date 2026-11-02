/* Module: sfpublish.dll
   Function: FUN_0042b640
   Address: 0042b640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_0042b640(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_0042b6e0(param_1);
  uVar2 = FUN_00418d60((uchar *)&DAT_00444204,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_0042b590(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_0041c790(DAT_00441c78,0x10e3);
      FUN_00418d60(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_00444204 + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x444203 + (0x800 - uVar2)) = 0;
    return &DAT_00444204;
  }
  return &DAT_00444204;
}


