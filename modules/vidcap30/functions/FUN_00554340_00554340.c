/* Module: vidcap30.exe
   Function: FUN_00554340
   Address: 00554340
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00554340(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_00553c70(param_1,0xd8);
  iVar2 = 0;
  piVar1 = (int *)(param_1 + 0x7d);
  do {
    if (*piVar1 != 0) {
      FUN_00553f20(param_1,iVar2);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 4);
  if (*(char *)(param_1 + 0xe6) == '\0') {
    iVar2 = 0;
    piVar1 = (int *)(param_1 + 0x9d);
    do {
      if (piVar1[-4] != 0) {
        FUN_00554140(param_1,iVar2,0);
      }
      if (*piVar1 != 0) {
        FUN_00554140(param_1,iVar2,1);
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 4);
  }
  FUN_00553c70(param_1,0xd9);
  return;
}


