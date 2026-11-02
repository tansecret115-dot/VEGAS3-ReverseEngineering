/* Module: rmme3260.dll
   Function: FUN_66206cd0
   Address: 66206cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66206cd0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x18))(1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  piVar1 = FUN_662091d0();
  *(int **)(param_1 + 0x18) = piVar1;
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x8007000e;
  }
  return uVar2;
}


