/* Module: encn3260.dll
   Function: FUN_664aeaa0
   Address: 664aeaa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664aeaa0(int param_1,char *param_2)

{
  int *piVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x40) + 4);
  (**(code **)(*piVar1 + 0x34))(piVar1,&local_c);
  FUN_664bb5e0((void *)(param_1 + 0x84),param_2);
  piVar1 = (int *)(*(int *)(param_1 + 0x40) + 4);
  (**(code **)(*piVar1 + 0x38))(piVar1,0,0,local_c,local_8);
  (**(code **)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x40))(*(int *)(param_1 + 0x40) + 4);
  return 0;
}


