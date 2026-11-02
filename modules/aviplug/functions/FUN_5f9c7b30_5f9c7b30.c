/* Module: aviplug.dll
   Function: FUN_5f9c7b30
   Address: 5f9c7b30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5f9c7b30(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_5f9c7bd0(param_1);
  uVar2 = FUN_5f988570((uchar *)&DAT_5fa186b4,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_5f9c7a80(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_5f981f60(DAT_5f9f5978,0x10e3);
      FUN_5f988570(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_5fa186b4 + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x5fa186b3 + (0x800 - uVar2)) = 0;
    return &DAT_5fa186b4;
  }
  return &DAT_5fa186b4;
}


