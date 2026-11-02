/* Module: sfmarket2.dll
   Function: FUN_0043ed50
   Address: 0043ed50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_0043ed50(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_0043edf0(param_1);
  uVar2 = FUN_00424a60((uchar *)&DAT_004ad2dc,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_0043eca0(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_00423470(DAT_004aaec0,0x10e3);
      FUN_00424a60(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_004ad2dc + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x4ad2db + (0x800 - uVar2)) = 0;
    return &DAT_004ad2dc;
  }
  return &DAT_004ad2dc;
}


