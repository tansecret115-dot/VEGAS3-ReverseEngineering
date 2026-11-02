/* Module: rmme3260.dll
   Function: FUN_66202470
   Address: 66202470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66202470(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x18))(1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  piVar1 = FUN_66209220();
  *(int **)(param_1 + 0x18) = piVar1;
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x8007000e;
  }
  return uVar2;
}


