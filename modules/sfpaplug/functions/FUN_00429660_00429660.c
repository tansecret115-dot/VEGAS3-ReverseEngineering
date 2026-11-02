/* Module: sfpaplug.dll
   Function: FUN_00429660
   Address: 00429660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_00429660(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_00429700(param_1);
  uVar2 = FUN_00419320((uchar *)&DAT_0045e744,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_004295b0(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_00416f60(DAT_0045c380,0x10e3);
      FUN_00419320(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_0045e744 + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x45e743 + (0x800 - uVar2)) = 0;
    return &DAT_0045e744;
  }
  return &DAT_0045e744;
}


