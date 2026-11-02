/* Module: vegas30.exe
   Function: FUN_005aa9b0
   Address: 005aa9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005aa9b0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x240)) {
    piVar2 = (int *)(param_1 + 0x40);
    do {
      if ((*piVar2 == -1) && (piVar2[1] == 0x7fffffff)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < *(int *)(param_1 + 0x240));
  }
  return -1;
}


