/* Module: vidcap30.exe
   Function: FUN_0041adb0
   Address: 0041adb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041adb0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_00588f34;
  do {
    if (param_1 == *piVar2) {
      return iVar1;
    }
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + 1;
  } while (piVar2 < &DAT_00588f4c);
  return -1;
}


