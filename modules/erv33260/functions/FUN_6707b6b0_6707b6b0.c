/* Module: erv33260.dll
   Function: FUN_6707b6b0
   Address: 6707b6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6707b6b0(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    puVar1 = *(undefined4 **)(*param_1 + uVar2);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_6707b5e0(puVar1);
      FUN_67072140(puVar1);
      *(undefined4 *)(*param_1 + uVar2) = 0;
    }
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x40);
  FUN_67072140((void *)*param_1);
  *param_1 = 0;
  FUN_67072140((void *)param_1[2]);
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  return;
}


