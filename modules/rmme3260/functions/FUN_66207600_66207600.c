/* Module: rmme3260.dll
   Function: FUN_66207600
   Address: 66207600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66207600(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (param_2 != 0) {
    if ((*(uint *)(param_2 + 8) & 1) != 0) {
      uVar1 = (**(code **)(*(int *)(param_1 + -0x10) + 0x28))((int *)(param_1 + -0x10),param_2);
      return uVar1;
    }
    if ((*(uint *)(param_2 + 8) & 2) != 0) {
      uVar1 = (**(code **)(*(int *)(param_1 + -0x10) + 0x2c))((int *)(param_1 + -0x10),param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}


