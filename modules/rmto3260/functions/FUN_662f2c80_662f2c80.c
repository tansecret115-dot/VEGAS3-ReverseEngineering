/* Module: rmto3260.dll
   Function: FUN_662f2c80
   Address: 662f2c80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662f2c80(undefined4 *param_1)

{
  if (param_1[3] != 0) {
    FUN_662f2e40(param_1);
  }
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete((void *)param_1[2]);
    param_1[2] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete((void *)param_1[4]);
    param_1[4] = 0;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete((void *)param_1[5]);
    param_1[5] = 0;
  }
  return;
}


