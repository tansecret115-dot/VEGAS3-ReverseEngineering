/* Module: encn3260.dll
   Function: FUN_664d24a0
   Address: 664d24a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664d24a0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  *param_3 = 0;
  iVar1 = (**(code **)(*(int *)(param_1 + -4) + 0xc))(param_1 + -4,param_2);
  if (iVar1 == 0) {
    *param_3 = *(undefined4 *)(param_1 + 0xc);
  }
  return;
}


