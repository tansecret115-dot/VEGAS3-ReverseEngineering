/* Module: vegas30.exe
   Function: FUN_0041c4d0
   Address: 0041c4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0041c4d0(int *param_1,int *param_2)

{
  int iVar1;
  
  switch(param_1[0x23]) {
  case 2:
    iVar1 = FUN_005d15e0(param_1[0x25],param_2);
    return iVar1 == 0;
  case 3:
  case 4:
    FUN_0041aa30(param_1,param_2,&param_2);
    if ((param_2 != (int *)0x0) && (iVar1 = (**(code **)(*param_2 + 0x50))(param_2), iVar1 != 0)) {
      (**(code **)(*param_2 + 8))(param_2);
      return true;
    }
    break;
  case 5:
    FUN_0041aa30(param_1,param_2,&param_2);
    if (param_2 != (int *)0x0) {
      iVar1 = (**(code **)(*param_2 + 0x50))(param_2);
      if (iVar1 == 0) {
        (**(code **)(*param_1 + 8))(param_1);
        return false;
      }
      (**(code **)(*param_1 + 8))(param_1);
      return true;
    }
    break;
  default:
    goto switchD_0041c4e9_default;
  }
  (**(code **)(*param_2 + 8))(param_2);
switchD_0041c4e9_default:
  return false;
}


