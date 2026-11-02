/* Module: rmme3260.dll
   Function: FUN_66202a40
   Address: 66202a40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_66202a40(int param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,undefined2 param_5
            )

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x14) == (int *)0x0) {
    return 0x80040007;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x80))(param_2,param_3,param_4,param_5);
  return uVar1;
}


