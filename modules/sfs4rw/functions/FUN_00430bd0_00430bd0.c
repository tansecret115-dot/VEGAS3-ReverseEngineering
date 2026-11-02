/* Module: sfs4rw.dll
   Function: FUN_00430bd0
   Address: 00430bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_00430bd0(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_00430c70(param_1);
  uVar2 = FUN_00420f60((uchar *)&DAT_004ac5bc,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_00430b20(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_0041f970(DAT_004a98f8,0x10e3);
      FUN_00420f60(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_004ac5bc + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x4ac5bb + (0x800 - uVar2)) = 0;
    return &DAT_004ac5bc;
  }
  return &DAT_004ac5bc;
}


