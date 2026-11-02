/* Module: vegas30k.dll
   Function: FUN_0113b270
   Address: 0113b270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0113b270(int *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_011362b0();
  iVar2 = FUN_01163ac0();
  if (param_1[7] < 1) {
    *(int *)(iVar2 + 0x14) = param_1[4];
  }
  else {
    *(int *)(iVar2 + 0x14) = param_1[8];
  }
  *param_2 = piVar1;
  if (piVar1 != (int *)0x0) {
    piVar1[2] = (int)param_1;
    (**(code **)(*param_1 + 4))(param_1);
    if (param_2 != (undefined4 *)0x0) {
      if (param_3 != 0) {
        (**(code **)(*piVar1 + 0x18))(piVar1,param_2,param_3);
        return 0;
      }
      (**(code **)(*piVar1 + 0x18))(piVar1,param_2,param_2);
    }
    return 0;
  }
  return 0x80004005;
}


