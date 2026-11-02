/* Module: aviplug.dll
   Function: FUN_5f941ad0
   Address: 5f941ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f941ad0(undefined4 *param_1)

{
  int *piVar1;
  LONG LVar2;
  
  LVar2 = InterlockedDecrement(param_1 + 7);
  if (LVar2 == 0) {
    piVar1 = (int *)param_1[8];
    (**(code **)(*piVar1 + 0x5c))(piVar1,param_1[2],param_1[9]);
    (**(code **)(*piVar1 + 8))(piVar1);
    FUN_5f98fe00((int *)param_1[10],param_1);
  }
  return;
}


