/* Module: mp3plug.dll
   Function: FUN_5f6d8f50
   Address: 5f6d8f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6d8f50(int *param_1)

{
  int *piVar1;
  
  while (param_1 != (int *)0x0) {
    piVar1 = (int *)param_1[4];
    if (*param_1 != 0) {
      FUN_5f6d97a0(*param_1);
    }
    if (param_1[2] != 0) {
      FUN_5f6d97a0(param_1[2]);
    }
    if (param_1[3] != 0) {
      FUN_5f6d97a0(param_1[3]);
    }
    FUN_5f6d97a0((int)param_1);
    param_1 = piVar1;
  }
  return;
}


