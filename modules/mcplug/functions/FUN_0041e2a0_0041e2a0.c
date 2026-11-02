/* Module: mcplug.dll
   Function: FUN_0041e2a0
   Address: 0041e2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_0041e2a0(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_0041e340(param_1);
  uVar2 = FUN_0041fd40((uchar *)&DAT_0048a29c,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_0041e1f0(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_0041a210(DAT_00487ed8,0x10e3);
      FUN_0041fd40(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_0048a29c + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x48a29b + (0x800 - uVar2)) = 0;
    return &DAT_0048a29c;
  }
  return &DAT_0048a29c;
}


