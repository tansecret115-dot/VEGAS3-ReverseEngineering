/* Module: mp3plug.dll
   Function: FUN_5f6ecde0
   Address: 5f6ecde0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6ecde0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_5f705200(*param_1);
    }
    if (param_1[1] != 0) {
      FUN_5f705200(param_1[1]);
    }
    if (param_1[2] != 0) {
      FUN_5f705730(param_1[2]);
    }
    if (param_1[3] != 0) {
      FUN_5f705730(param_1[3]);
    }
    if ((int *)param_1[4] != (int *)0x0) {
      FUN_5f705a20((int *)param_1[4]);
    }
    if ((int *)param_1[5] != (int *)0x0) {
      FUN_5f705a20((int *)param_1[5]);
    }
    if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
      FUN_5f705e50((undefined4 *)param_1[6]);
    }
    if (param_1[7] != 0) {
      FUN_5f706420(param_1[7]);
    }
    FUN_5f6d97a0((int)param_1);
  }
  return;
}


