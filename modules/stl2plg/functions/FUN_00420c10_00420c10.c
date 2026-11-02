/* Module: stl2plg.dll
   Function: FUN_00420c10
   Address: 00420c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_00420c10(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_00420cb0(param_1);
  uVar2 = FUN_004256a0((uchar *)&DAT_004759d4,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_00420b60(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_0040e730(DAT_00473620,0x10e3);
      FUN_004256a0(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_004759d4 + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x4759d3 + (0x800 - uVar2)) = 0;
    return &DAT_004759d4;
  }
  return &DAT_004759d4;
}


