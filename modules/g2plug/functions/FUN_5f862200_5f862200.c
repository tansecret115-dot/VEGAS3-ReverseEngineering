/* Module: g2plug.dll
   Function: FUN_5f862200
   Address: 5f862200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5f862200(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_5f8622a0(param_1);
  uVar2 = FUN_5f825e30((uchar *)&DAT_5f89a23c,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_5f862150(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_5f818540(DAT_5f877520,0x10e2);
      FUN_5f825e30(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_5f89a23c + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x5f89a23b + (0x800 - uVar2)) = 0;
    return &DAT_5f89a23c;
  }
  return &DAT_5f89a23c;
}


