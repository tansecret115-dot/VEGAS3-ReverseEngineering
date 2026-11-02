/* Module: erv23260.dll
   Function: FUN_637fa4d0
   Address: 637fa4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_637fa4d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_638293e0;
  param_1[6] = &PTR_LAB_638293ec;
  if ((param_1[0x26] == 0) && ((void *)param_1[0x2e] != (void *)0x0)) {
    FUN_637f2010((void *)param_1[0x2e]);
    param_1[0x2e] = 0;
  }
  puVar1 = (undefined4 *)param_1[0x25];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_637ff880(puVar1);
    FUN_637f2010(puVar1);
    param_1[0x25] = 0;
  }
  if ((void *)param_1[0x26] != (void *)0x0) {
    FUN_637f2010((void *)param_1[0x26]);
    param_1[0x26] = 0;
  }
  FUN_637ff960((undefined4 *)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 6)));
  FUN_637fd1b0(param_1);
  return;
}


