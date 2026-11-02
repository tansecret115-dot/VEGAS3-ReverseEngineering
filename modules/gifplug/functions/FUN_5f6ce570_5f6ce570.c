/* Module: gifplug.dll
   Function: FUN_5f6ce570
   Address: 5f6ce570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5f6ce570(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_5f6ce610(param_1);
  uVar2 = FUN_5f6f3bc0((uchar *)&DAT_5f70e29c,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_5f6ce4c0(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_5f6cce60(DAT_5f70bef0,0x10e2);
      FUN_5f6f3bc0(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_5f70e29c + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x5f70e29b + (0x800 - uVar2)) = 0;
    return &DAT_5f70e29c;
  }
  return &DAT_5f70e29c;
}


