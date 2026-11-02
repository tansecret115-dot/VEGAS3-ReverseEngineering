/* Module: vegas30.exe
   Function: FUN_0058f860
   Address: 0058f860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0058f860(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 8);
  iVar2 = 8;
  do {
    if (*piVar1 != 0) {
      FUN_0058ecf0(*piVar1);
    }
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}


