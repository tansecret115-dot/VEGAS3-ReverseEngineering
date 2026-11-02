/* Module: qt4plug.dll
   Function: FUN_5f53e0c0
   Address: 5f53e0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5f53e0c0(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_5f53e160(param_1);
  uVar2 = FUN_5f52c900((uchar *)&DAT_5f5a6524,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_5f53e010(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_5f528830(DAT_5f5a4158,0x10e3);
      FUN_5f52c900(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_5f5a6524 + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x5f5a6523 + (0x800 - uVar2)) = 0;
    return &DAT_5f5a6524;
  }
  return &DAT_5f5a6524;
}


