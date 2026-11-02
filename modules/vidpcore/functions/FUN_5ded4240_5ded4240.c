/* Module: vidpcore.dll
   Function: FUN_5ded4240
   Address: 5ded4240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ded4240(undefined4 *param_1,int param_2)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  if (param_1[5] != 0) {
    param_1[3] = param_1[3] + param_2;
    DVar1 = GetTickCount();
    if ((uint)param_1[7] <= DVar1) {
      param_1[7] = param_1[6] + DVar1;
      uVar2 = (*(code *)param_1[5])(*param_1,param_1,param_1[3],param_1[4]);
      return uVar2;
    }
  }
  return 1;
}


