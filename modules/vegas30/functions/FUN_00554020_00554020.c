/* Module: vegas30.exe
   Function: FUN_00554020
   Address: 00554020
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00554020(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  FUN_00553590(param_1,0);
  piVar1 = (int *)FUN_00553480(param_1,0);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,param_1);
    bVar3 = true;
    if (iVar2 == 0) goto LAB_0055405d;
  }
  iVar2 = FUN_00553020(param_1,param_2);
  bVar3 = iVar2 == 0;
LAB_0055405d:
  FUN_00553500(param_1,0);
  FUN_00553da0(param_1,param_2);
  return bVar3;
}


