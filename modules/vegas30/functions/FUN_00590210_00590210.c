/* Module: vegas30.exe
   Function: FUN_00590210
   Address: 00590210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00590210(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xb8)) {
    piVar2 = (int *)(param_1 + 0x58);
    do {
      if (*piVar2 != 0) {
        iVar1 = FUN_0058e180(*piVar2);
        if (iVar1 == 0) {
          return 0;
        }
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xb8));
  }
  return 1;
}


