/* Module: sfppack3.dll
   Function: FUN_5cc70a10
   Address: 5cc70a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5cc70a10(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_5cc70ab0(param_1);
  uVar2 = FUN_5cc60cd0((uchar *)&DAT_5cc9b28c,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_5cc70960(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_5cc4e750(DAT_5cc98300,0x10e2);
      FUN_5cc60cd0(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_5cc9b28c + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x5cc9b28b + (0x800 - uVar2)) = 0;
    return &DAT_5cc9b28c;
  }
  return &DAT_5cc9b28c;
}


