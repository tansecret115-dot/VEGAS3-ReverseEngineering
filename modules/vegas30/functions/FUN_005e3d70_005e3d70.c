/* Module: vegas30.exe
   Function: FUN_005e3d70
   Address: 005e3d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005e3d70(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (1 < param_2 + -2) {
    do {
      if (*(char *)(iVar1 + param_1) == '\0') {
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2 + -2);
  }
  return 0;
}


