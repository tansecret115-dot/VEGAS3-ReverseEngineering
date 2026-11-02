/* Module: vegas30k.dll
   Function: FUN_0118e250
   Address: 0118e250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0118e250(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x4e001;
  if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x48))(*(int **)(param_1 + 0x18),0xfc);
    if (*(int *)(param_1 + 0xb4) == 0) {
      uVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x3c))(*(int **)(param_1 + 0x18));
    }
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffeb;
    if (*(int *)(param_1 + 0xb4) == 0) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      (**(code **)(**(int **)(param_1 + 0x18) + 0x40))(*(int **)(param_1 + 0x18),0,0);
    }
  }
  return uVar1;
}


