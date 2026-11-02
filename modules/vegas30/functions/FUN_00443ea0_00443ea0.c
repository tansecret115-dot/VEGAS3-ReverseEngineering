/* Module: vegas30.exe
   Function: FUN_00443ea0
   Address: 00443ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00443ea0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 10;
  piVar1 = param_1;
  do {
    if (*piVar1 != 0) {
      _SfDibFree_8(*piVar1,0);
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (param_1[10] != 0) {
    DrawDibClose(param_1[10]);
    param_1[10] = 0;
  }
  return;
}


