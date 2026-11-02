/* Module: sfs4rw.dll
   Function: FUN_00474530
   Address: 00474530
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00474530(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x18);
  *(undefined4 **)(param_1 + 0x179) = puVar1;
  *puVar1 = FUN_00474590;
  *(code **)(*(int *)(param_1 + 0x179) + 4) = FUN_00474670;
  *(code **)(*(int *)(param_1 + 0x179) + 8) = FUN_004747e0;
  *(undefined1 **)(*(int *)(param_1 + 0x179) + 0xc) = &LAB_00474a50;
  *(undefined1 **)(*(int *)(param_1 + 0x179) + 0x10) = &LAB_00474cd0;
  *(code **)(*(int *)(param_1 + 0x179) + 0x14) = FUN_00474cf0;
  return;
}


