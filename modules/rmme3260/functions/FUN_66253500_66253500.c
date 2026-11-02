/* Module: rmme3260.dll
   Function: FUN_66253500
   Address: 66253500
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66253500(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,&local_8);
  if (iVar1 == 0) {
    local_c = 0;
    param_2 = (int *)0x0;
    iVar2 = (**(code **)(*local_8 + 0xc))(local_8,&local_c,&param_2);
    while (iVar2 == 0) {
      (**(code **)(*param_1 + 0xc))(param_1,local_c,param_2);
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 8))(param_2);
        param_2 = (int *)0x0;
      }
      iVar2 = (**(code **)(*local_8 + 0xc))(local_8,&local_c,&param_2);
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  return iVar1;
}


