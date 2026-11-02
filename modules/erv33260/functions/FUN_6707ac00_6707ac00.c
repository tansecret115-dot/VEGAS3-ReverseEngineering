/* Module: erv33260.dll
   Function: FUN_6707ac00
   Address: 6707ac00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6707ac00(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_67090480;
  if ((param_1[0x13] == 0) && ((void *)param_1[0x1b] != (void *)0x0)) {
    FUN_67072140((void *)param_1[0x1b]);
    param_1[0x1b] = 0;
  }
  puVar1 = (undefined4 *)param_1[0x12];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_6707dca0(puVar1);
    FUN_67072140(puVar1);
    param_1[0x12] = 0;
  }
  if ((void *)param_1[0x13] != (void *)0x0) {
    FUN_67072140((void *)param_1[0x13]);
    param_1[0x13] = 0;
  }
  FUN_6707d5a0(param_1);
  return;
}


