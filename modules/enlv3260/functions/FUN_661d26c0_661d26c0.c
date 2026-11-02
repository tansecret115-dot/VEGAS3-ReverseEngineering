/* Module: enlv3260.dll
   Function: FUN_661d26c0
   Address: 661d26c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_661d26c0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int *piVar1;
  
  if ((byte)param_2 < 4) {
    if (param_3 != -0x7ffbff32) {
      *(int *)(param_1 + 0x52) = param_3;
    }
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x34))(piVar1);
    }
  }
  piVar1 = *(int **)(param_1 + 0x56);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,param_2,param_3,param_4,param_5,param_6);
  }
  return 0;
}


