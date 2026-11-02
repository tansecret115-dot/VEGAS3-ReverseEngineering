/* Module: rmme3260.dll
   Function: FUN_66268750
   Address: 66268750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66268750(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x358) = 0;
    (**(code **)**(undefined4 **)(param_1 + 0x14))(*(undefined4 **)(param_1 + 0x14),param_2);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x358) = 5;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(*(int **)(param_1 + 0x10),8);
  return uVar1;
}


