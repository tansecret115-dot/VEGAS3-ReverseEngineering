/* Module: rmme3260.dll
   Function: FUN_662014d0
   Address: 662014d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662014d0(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = (**(code **)(*param_3 + 0x18))(param_3);
    *(int **)(param_1 + 0x20 + (uVar1 & 0xffff) * 4) = param_3;
    (**(code **)(*param_3 + 4))(param_3);
  }
  return param_2;
}


