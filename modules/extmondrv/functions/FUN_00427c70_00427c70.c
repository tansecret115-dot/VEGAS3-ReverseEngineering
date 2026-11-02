/* Module: extmondrv.dll
   Function: FUN_00427c70
   Address: 00427c70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_00427c70(uint param_1,int param_2)

{
  BYTE *pBVar1;
  uint uVar2;
  uchar *lpString2;
  uchar local_64 [100];
  
  pBVar1 = (BYTE *)FUN_00427d10(param_1);
  uVar2 = FUN_004220d0((uchar *)&DAT_0045e06c,pBVar1);
  if (uVar2 < 0x800) {
    lpString2 = FUN_00427bc0(param_2);
    if (lpString2 == (uchar *)0x0) {
      pBVar1 = FUN_00412df0(DAT_0045b190,0x10e3);
      FUN_004220d0(local_64,pBVar1);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_0045e06c + uVar2),(LPCSTR)lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x45e06b + (0x800 - uVar2)) = 0;
    return &DAT_0045e06c;
  }
  return &DAT_0045e06c;
}


