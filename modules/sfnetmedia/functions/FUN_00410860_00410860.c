/* Module: sfnetmedia.dll
   Function: FUN_00410860
   Address: 00410860
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00410860(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 == (int *)0x0) {
    FUN_0041a4a0(param_1,1,&DAT_004419c8,0x104,(LPCSTR)0x0,1);
    uVar1 = 0;
  }
  else {
    DAT_004419c8 = 0;
    iVar3 = 0;
    if (0 < *param_2) {
      do {
        _mbscat(&DAT_004419c8,*(uchar **)(param_2[2] + iVar3 * 4));
        _mbscat(&DAT_004419c8,"|");
        iVar3 = iVar3 + 1;
      } while (iVar3 < *param_2);
    }
    uVar1 = FUN_0041a5b0(param_1,1,&DAT_004419c8);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  DAT_00441acc = 0;
  piVar2 = (int *)_mbstok(&DAT_004419c8,"|");
  while ((piVar2 != (int *)0x0 && (uVar1 = FUN_00410380(piVar2), -1 < (int)uVar1))) {
    DAT_00441acc = DAT_00441acc + 1;
    piVar2 = (int *)_mbstok((uchar *)0x0,"|");
  }
  return uVar1;
}


