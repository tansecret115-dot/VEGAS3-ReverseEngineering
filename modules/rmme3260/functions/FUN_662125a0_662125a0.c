/* Module: rmme3260.dll
   Function: FUN_662125a0
   Address: 662125a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662125a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  *param_2 = uVar1;
  return 0;
}


