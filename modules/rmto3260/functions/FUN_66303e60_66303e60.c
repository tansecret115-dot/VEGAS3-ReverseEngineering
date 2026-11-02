/* Module: rmto3260.dll
   Function: FUN_66303e60
   Address: 66303e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66303e60(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = operator_new(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_662eeb70(puVar1);
  }
  (**(code **)(*piVar2 + 4))(piVar2);
  (**(code **)(*piVar2 + 0x14))(piVar2,param_3);
  (**(code **)(*piVar2 + 0x10))(piVar2,param_2,param_3);
  (**(code **)(*(int *)(param_1 + -4) + 0x1c))(param_1 + -4,piVar2,0,param_3,0);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return 0;
}


