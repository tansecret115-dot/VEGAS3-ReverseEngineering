/* Module: sfppack2.dll
   Function: FUN_5cd406c5
   Address: 5cd406c5
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cd406c5(int *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    if ((param_3 == (int *)0x0) || (*param_3 == 0)) {
      uVar1 = 0x80004003;
    }
    else {
      param_1[10] = 1;
      uVar1 = (**(code **)(*param_1 + 0x38))(*param_3);
    }
  }
  else if (param_2 == 0) {
    param_1[10] = 0;
    uVar1 = (**(code **)(*param_1 + 0x3c))();
  }
  else {
    uVar1 = 0x8000ffff;
  }
  return uVar1;
}


