/* Module: rmme3260.dll
   Function: FUN_66202360
   Address: 66202360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_66202360(int param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,undefined2 param_5
            )

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) == (int *)0x0) {
    return 0x80040007;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x7c))(param_2,param_3,param_4,param_5);
  return uVar1;
}


