/* Module: basc3260.dll
   Function: FUN_627f1cd0
   Address: 627f1cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627f1cd0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  char *_Str1;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *local_8;
  
  piVar2 = param_3;
  piVar1 = param_2;
  piVar4 = param_1;
  if ((param_2 == (int *)0x0) || (param_3 == (int *)0x0)) {
    return 0x80040009;
  }
  param_1[8] = (int)param_3;
  (**(code **)(*param_3 + 4))(param_3);
  (*(code *)**(undefined4 **)piVar4[8])((undefined4 *)piVar4[8],&DAT_627f5270,piVar4 + 0x15);
  piVar4[9] = (int)piVar1;
  (**(code **)(*piVar1 + 4))(piVar1);
  param_2 = (int *)0x0;
  (**(code **)(*(int *)piVar4[8] + 0x18))((int *)piVar4[8],&param_2);
  if (param_2 == (int *)0x0) {
    (**(code **)(*(int *)piVar4[9] + 0xc))((int *)piVar4[9],0x80040009,piVar2);
    piVar1 = (int *)piVar4[9];
    if (piVar1 == (int *)0x0) {
      return 0x80040009;
    }
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar4[9] = 0;
    return 0x80040009;
  }
  local_8 = (int *)0x0;
  uVar5 = 0x80004005;
  (**(code **)(*param_2 + 0x30))(param_2,s_WWW_Authenticate_627f60bc,&local_8);
  if (local_8 == (int *)0x0) {
    (**(code **)(*(int *)piVar4[9] + 0xc))((int *)piVar4[9],0x80004005,0);
    piVar1 = (int *)piVar4[9];
  }
  else {
    _Str1 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
    iVar3 = _strnicmp(_Str1,s_Basic_627f60b4,5);
    if (iVar3 == 0) {
      param_3 = (int *)0x0;
      param_1 = (int *)0x0;
      FUN_627f1f90(param_2,&param_1);
      (*(code *)**(undefined4 **)piVar4[9])((undefined4 *)piVar4[9],&DAT_627f53e0,&param_3);
      if (piVar4 == (int *)0x1c) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = piVar4 + 1;
      }
      uVar5 = (**(code **)(*param_3 + 0xc))(param_3,piVar4,param_1);
      if (param_3 != (int *)0x0) {
        (**(code **)(*param_3 + 8))(param_3);
        param_3 = (int *)0x0;
      }
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
      }
      goto LAB_627f1e34;
    }
    (**(code **)(*(int *)piVar4[9] + 0xc))((int *)piVar4[9],0x80004005,0);
    piVar1 = (int *)piVar4[9];
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar4[9] = 0;
  }
LAB_627f1e34:
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
    param_2 = (int *)0x0;
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return uVar5;
}


