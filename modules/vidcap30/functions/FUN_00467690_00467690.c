/* Module: vidcap30.exe
   Function: FUN_00467690
   Address: 00467690
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00467690(undefined4 param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_4;
  if (0 < param_4) {
    do {
      iVar1 = (**(code **)(*(int *)*param_3 + 0x14))((int *)*param_3,param_2,param_1);
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
      param_3 = param_3 + 1;
    } while (iVar2 < param_4);
  }
  if (-1 < iVar1) {
    (**(code **)(*param_2 + 100))(param_2,param_1);
  }
  return iVar1;
}


