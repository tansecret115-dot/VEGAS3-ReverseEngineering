/* Module: vegas30.exe
   Function: FUN_0057adb0
   Address: 0057adb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0057adb0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_0061bee8;
  do {
    if (param_1 == *piVar1) {
      return *(undefined4 *)(&UNK_0061c710 + iVar2 * 0x830);
    }
    piVar1 = piVar1 + 0x20c;
    iVar2 = iVar2 + 1;
  } while (piVar1 < &DAT_00627308);
  return 0;
}


