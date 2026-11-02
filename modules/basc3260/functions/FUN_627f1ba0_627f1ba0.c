/* Module: basc3260.dll
   Function: FUN_627f1ba0
   Address: 627f1ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_627f1ba0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *local_8;
  
  piVar4 = param_3;
  piVar3 = param_2;
  piVar2 = param_1;
  local_8 = (int *)0x80004005;
  piVar1 = (int *)param_1[8];
  if (piVar1 == (int *)0x0) {
    return (int *)0x80040009;
  }
  if (param_1[0x14] == 0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,0x80040009,0);
    piVar1 = (int *)piVar2[8];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      piVar2[8] = 0;
    }
    return (int *)0x80040009;
  }
  if ((int)param_2 < 0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,param_2,param_1[7]);
    piVar1 = (int *)piVar2[8];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      piVar2[8] = 0;
    }
    return piVar3;
  }
  if (param_3 == (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,0x80004005,param_1[7]);
  }
  else {
    param_1 = (int *)0x0;
    param_2 = (int *)0x0;
    local_8 = (int *)(**(code **)(*param_3 + 0x30))(param_3,s_Password_627f60a8,&param_1);
    if (-1 < (int)local_8) {
      local_8 = (int *)FUN_627f2790(piVar4,param_1,&param_2);
    }
    (**(code **)(*(int *)piVar2[7] + 0xc))((int *)piVar2[7],param_2);
    piVar2[9] = 1;
    (**(code **)(*(int *)piVar2[8] + 0xc))((int *)piVar2[8],0,piVar2[7]);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
      param_1 = (int *)0x0;
    }
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
    }
  }
  piVar1 = (int *)piVar2[8];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar2[8] = 0;
  }
  return local_8;
}


