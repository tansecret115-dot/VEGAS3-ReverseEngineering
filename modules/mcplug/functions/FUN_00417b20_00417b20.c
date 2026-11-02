/* Module: mcplug.dll
   Function: FUN_00417b20
   Address: 00417b20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00417b20(int param_1,uchar *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_00477278;
  *param_2 = '\0';
  do {
    if (*piVar1 == param_1) {
      _mbscpy(param_2,(uchar *)("mcmpeglimit" + iVar2 * 0x830));
      return 0;
    }
    piVar1 = piVar1 + 0x20c;
    iVar2 = iVar2 + 1;
  } while (piVar1 < &DAT_0047a398);
  return 0;
}


