/* Module: vegas30.exe
   Function: FUN_0057ad60
   Address: 0057ad60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0057ad60(int param_1,uchar *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_0061bee8;
  *param_2 = '\0';
  do {
    if (*piVar1 == param_1) {
      _mbscpy(param_2,&DAT_0061beec + iVar2 * 0x830);
      return 0;
    }
    piVar1 = piVar1 + 0x20c;
    iVar2 = iVar2 + 1;
  } while (piVar1 < &DAT_00627308);
  return 0;
}


