/* Module: erv33260.dll
   Function: FUN_67074490
   Address: 67074490
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_67074490(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_670900c8;
  if ((void *)param_1[0x14] != (void *)0x0) {
    FUN_67072140((void *)param_1[0x14]);
    param_1[0x14] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  return;
}


