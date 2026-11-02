/* Module: rmme3260.dll
   Function: FUN_66253620
   Address: 66253620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66253620(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 local_c;
  int *local_8;
  
  piVar1 = param_2;
  local_c = 0;
  local_8 = (int *)0x0;
  iVar2 = (**(code **)(*param_2 + 0x34))(param_2,&local_c,&local_8);
  while (iVar2 == 0) {
    (**(code **)(*param_1 + 0xc))(param_1,local_c,local_8);
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
      local_8 = (int *)0x0;
    }
    iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,&local_c,&local_8);
  }
  iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,&local_c,&param_2);
  if (iVar2 == 0) {
    do {
      (**(code **)(param_1[1] + 0xc))(param_1 + 1,local_c,param_2);
      iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,&local_c,&param_2);
    } while (iVar2 == 0);
  }
  iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,&local_c,&local_8);
  if (iVar2 == 0) {
    do {
      (**(code **)(param_1[1] + 0x1c))(param_1 + 1,local_c,local_8);
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
      iVar2 = (**(code **)(*piVar1 + 0x28))(piVar1,&local_c,&local_8);
    } while (iVar2 == 0);
  }
  return 0;
}


