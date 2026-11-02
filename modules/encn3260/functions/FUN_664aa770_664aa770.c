/* Module: encn3260.dll
   Function: FUN_664aa770
   Address: 664aa770
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664aa770(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  if (*(int *)(param_1 + 0x6c) != param_1) {
    do {
      param_1 = iVar1;
      iVar1 = *(int *)(param_1 + 0x6c);
    } while (*(int *)(param_1 + 0x6c) != param_1);
  }
  if (*(int *)(param_1 + 0x108) == 0) {
    *(undefined4 *)(param_1 + 0x108) = 1;
    if (*(int *)(param_1 + 0xf0) != 0) {
      if (*(int *)(param_1 + 0x16c) != 0) {
        (**(code **)(**(int **)(param_1 + 0x170) + 0x14))
                  (*(int **)(param_1 + 0x170),*(int *)(param_1 + 0x16c));
        *(undefined4 *)(param_1 + 0x16c) = 0;
      }
      (**(code **)(*(int *)(param_1 + 0x10) + 0xc))(param_1 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  return;
}


