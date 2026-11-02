/* Module: rmbe3260.dll
   Function: FUN_6602bfe0
   Address: 6602bfe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6602bfe0(int param_1)

{
  void *this;
  undefined4 *puVar1;
  char local_104 [256];
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_6602e290(*(int *)(param_1 + 0xf4) << 0x10 | 0x23,local_104,0xff);
    this = operator_new(0x1ec);
    if (this != (void *)0x0) {
      puVar1 = FUN_66008460(this,*(int *)(param_1 + 0xf4) << 0x10 | 0xc2,local_104,param_1,
                            param_1 + 0x70,*(char **)(param_1 + 0xe4),
                            *(undefined4 *)(param_1 + 0xf0));
      *(undefined4 **)(param_1 + 0x30) = puVar1;
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x158))(puVar1);
      return;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x158))(0);
  }
  return;
}


