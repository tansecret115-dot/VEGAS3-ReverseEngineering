/* Module: sfppack3.dll
   Function: FUN_5cc76727
   Address: 5cc76727
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5cc76727(int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = param_2;
  if (param_1 == param_2) {
    bVar2 = true;
  }
  else {
    (**(code **)*param_1)(param_1,&DAT_5cc90910,&param_1);
    (**(code **)*piVar1)(piVar1,&DAT_5cc90910,&param_2);
    (**(code **)(*param_1 + 8))(param_1);
    (**(code **)(*param_2 + 8))(param_2);
    bVar2 = param_1 == param_2;
  }
  return bVar2;
}


