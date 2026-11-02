/* Module: encn3260.dll
   Function: FUN_6648cb20
   Address: 6648cb20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6648cb20(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int local_28 [3];
  char *local_1c [3];
  int *local_10;
  int *local_c;
  int *local_8;
  
  *param_2 = 0;
  piVar2 = *(int **)((int)this + 8);
  local_10 = (int *)0x0;
  local_8 = (int *)0x0;
  if (((piVar2 != (int *)0x0) &&
      (iVar1 = (**(code **)(*piVar2 + 0xc))(piVar2,&DAT_664dd5a0,&local_10), iVar1 == 0)) &&
     (iVar1 = (**(code **)*local_10)(local_10,&DAT_664dd5a0,&local_8), iVar1 == 0)) {
    iVar1 = FUN_664bd7a0(param_1);
    while (iVar1 != 0) {
      piVar2 = (int *)FUN_664be4b0(iVar1);
      FUN_664bb2c0(local_1c);
      while (piVar2 != (int *)0x0) {
        FUN_664bb2c0(local_28);
        (**(code **)(*piVar2 + 4))(local_28);
        FUN_664bb870(local_1c,local_28);
        piVar2 = (int *)FUN_664be4d0(iVar1);
        if (piVar2 != (int *)0x0) {
          FUN_664bb810(local_1c,&DAT_664e2358);
        }
        FUN_664bb3e0(local_28);
      }
      local_c = (int *)0x0;
      FUN_664bb0e0(local_1c[0],&local_c);
      (**(code **)(*local_8 + 0xc))(local_8,*(undefined4 *)(iVar1 + 4),local_c);
      if (local_c != (int *)0x0) {
        (**(code **)(*local_c + 8))(local_c);
        local_c = (int *)0x0;
      }
      iVar1 = FUN_664bd7c0(param_1);
      FUN_664bb3e0((int *)local_1c);
    }
    iVar1 = (**(code **)*local_8)(local_8,&DAT_664dcf90,param_2);
    if (iVar1 != 0) {
      *param_2 = 0;
    }
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
  }
  return;
}


