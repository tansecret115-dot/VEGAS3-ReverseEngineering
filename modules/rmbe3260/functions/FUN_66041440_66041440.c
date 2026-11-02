/* Module: rmbe3260.dll
   Function: FUN_66041440
   Address: 66041440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66041440(int *param_1)

{
  FUN_660412b0((int)param_1);
  (**(code **)(*param_1 + 0x40))();
  if (*(int *)((int)param_1 + 0xa6) != 0) {
    FUN_660427a0(*(void **)(param_1[0x4a] + 8),*(int *)((int)param_1 + 0xa6));
    *(undefined4 *)((int)param_1 + 0xa6) = 0;
  }
  return 0;
}


