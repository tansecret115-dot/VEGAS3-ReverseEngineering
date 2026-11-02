/* Module: wavplug.dll
   Function: FUN_5f3a73d0
   Address: 5f3a73d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5f3a73d0(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_5f3a7470(param_1);
  uVar2 = FUN_5f39c1a0((uchar *)&DAT_5f3dd92c,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_5f3a7320(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_5f3984e0(DAT_5f3db380,0x10e3);
      FUN_5f39c1a0(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_5f3dd92c + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x5f3dd92b + (0x800 - uVar2)) = 0;
    return &DAT_5f3dd92c;
  }
  return &DAT_5f3dd92c;
}


