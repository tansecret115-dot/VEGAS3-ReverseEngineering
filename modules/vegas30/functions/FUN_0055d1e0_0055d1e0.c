/* Module: vegas30.exe
   Function: FUN_0055d1e0
   Address: 0055d1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0055d1e0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_00645468;
  do {
    if (param_1 == *piVar1) {
      return *(undefined4 *)(iVar2 * 8 + 0x64546c);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (piVar1 < &DAT_006454c8);
  return 0x4f3a;
}


