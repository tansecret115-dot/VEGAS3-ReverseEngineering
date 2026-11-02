/* Module: vegas30.exe
   Function: FUN_0058ec90
   Address: 0058ec90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0058ec90(int param_1)

{
  LONG LVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xb8)) {
    piVar2 = (int *)(param_1 + 0x58);
    do {
      if (*piVar2 != 0) {
        FUN_0058ec90(*piVar2);
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xb8));
  }
  LVar1 = InterlockedDecrement((LONG *)(param_1 + 0x14));
  if ((LVar1 == 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    FUN_0058e0a0(param_1);
  }
  return;
}


