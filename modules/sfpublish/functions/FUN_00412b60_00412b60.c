/* Module: sfpublish.dll
   Function: FUN_00412b60
   Address: 00412b60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00412b60(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    FUN_0041f830(param_1,1,&DAT_004418e0,0x104,(LPCSTR)0x0,1);
    return 0;
  }
  DAT_004418e0 = 0;
  iVar2 = 0;
  if (0 < *param_2) {
    do {
      _mbscat(&DAT_004418e0,*(uchar **)(param_2[2] + iVar2 * 4));
      _mbscat(&DAT_004418e0,"|");
      iVar2 = iVar2 + 1;
    } while (iVar2 < *param_2);
  }
  uVar1 = FUN_0041f940(param_1,1,&DAT_004418e0);
  return uVar1;
}


