/* Module: vidcap30.exe
   Function: FUN_00464eb0
   Address: 00464eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00464eb0(int param_1,uchar *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_0058c758;
  *param_2 = '\0';
  do {
    if (*piVar1 == param_1) {
      _mbscpy(param_2,(uchar *)("appexit" + iVar2 * 0x830));
      return 0;
    }
    piVar1 = piVar1 + 0x20c;
    iVar2 = iVar2 + 1;
  } while (piVar1 < &DAT_00592168);
  return 0;
}


