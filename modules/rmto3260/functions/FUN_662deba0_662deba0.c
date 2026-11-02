/* Module: rmto3260.dll
   Function: FUN_662deba0
   Address: 662deba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662deba0(int param_1)

{
  if ((*(void **)(param_1 + 0x35) != (void *)0x0) && (*(char *)(param_1 + 0x34) != '\0')) {
    operator_delete(*(void **)(param_1 + 0x35));
    *(undefined4 *)(param_1 + 0x35) = 0;
  }
  if ((*(void **)(param_1 + 0x3a) != (void *)0x0) && (*(char *)(param_1 + 0x39) != '\0')) {
    operator_delete(*(void **)(param_1 + 0x3a));
    *(undefined4 *)(param_1 + 0x3a) = 0;
  }
  if (((*(int *)(param_1 + 8) != 0) && (*(void **)(param_1 + 0x42) != (void *)0x0)) &&
     (*(int *)(param_1 + 0x3e) != 0)) {
    operator_delete(*(void **)(param_1 + 0x42));
    *(undefined4 *)(param_1 + 0x42) = 0;
  }
  FUN_662c1020();
  return;
}


