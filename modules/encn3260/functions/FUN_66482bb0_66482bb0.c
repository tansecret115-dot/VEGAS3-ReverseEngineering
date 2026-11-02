/* Module: encn3260.dll
   Function: FUN_66482bb0
   Address: 66482bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66482bb0(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = param_1;
  if (param_2 < 0) {
    FUN_66483190(param_1 + -6,param_2,s_Unable_to_WWW_authenticate_664e21c4);
  }
  else if ((param_3 != (int *)0x0) && (param_1[4] != 0)) {
    param_1 = (int *)0x0;
    (**(code **)(*param_3 + 0x10))(param_3,&param_1);
    piVar1 = (int *)piVar2[4];
    (**(code **)(*piVar1 + 0xc))(piVar1,param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
      param_1 = (int *)0x0;
    }
    FUN_664831e0(piVar2 + -6);
    return 0;
  }
  return 0;
}


