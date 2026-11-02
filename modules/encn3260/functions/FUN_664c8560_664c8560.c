/* Module: encn3260.dll
   Function: FUN_664c8560
   Address: 664c8560
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c8560(int *param_1)

{
  undefined4 *puVar1;
  
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  param_1[0x28] = 1;
  if (*(int *)((int)param_1 + 0x2e) == 0) {
    puVar1 = FUN_664cb220(param_1[0x25],0);
    *(undefined4 **)((int)param_1 + 0x2e) = puVar1;
  }
  if (*(void **)((int)param_1 + 0x2e) != (void *)0x0) {
    FUN_664cb6d0(*(void **)((int)param_1 + 0x2e),param_1);
    *(undefined4 *)((int)param_1 + 0x2e) = 0;
  }
  if (param_1[0x23] == 0) {
    FUN_664c85c0((int)param_1);
  }
  return;
}


