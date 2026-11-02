/* Module: encn3260.dll
   Function: FUN_66490af0
   Address: 66490af0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66490af0(int param_1)

{
  if ((*(int *)(param_1 + 0x30) == 0) && (*(int *)(param_1 + 0x9a) != 0)) {
    *(undefined4 *)(param_1 + 0x9a) = 0;
    (**(code **)(**(int **)(param_1 + 0x10) + 0x14))
              (*(int **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x8e));
    *(undefined4 *)(param_1 + 0x8e) = 0;
  }
  return;
}


