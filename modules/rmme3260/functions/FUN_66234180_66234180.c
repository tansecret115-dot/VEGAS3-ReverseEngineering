/* Module: rmme3260.dll
   Function: FUN_66234180
   Address: 66234180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66234180(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x18) + 0x18))(param_2,0);
  if (iVar1 == 0) {
    return 0x80070057;
  }
  (**(code **)(*(int *)(param_1 + 0x18) + 0xc))(iVar1);
  (**(code **)(*param_2 + 8))(param_2);
  if (*(int *)(param_1 + 0x28) == 0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x10))(*(int **)(param_1 + 0x14));
    *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xfe;
  }
  return 0;
}


