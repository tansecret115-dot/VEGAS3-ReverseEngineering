/* Module: vidcap30.exe
   Function: FUN_0042a040
   Address: 0042a040
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042a040(int *param_1)

{
  int iVar1;
  int iVar2;
  int *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *piStack_8;
  int *local_4;
  
  iVar1 = (int)param_1;
  iVar2 = FUN_0042a180(param_1);
  if (-1 < iVar2) {
    local_4 = (int *)0x0;
    local_c = 0;
    local_10 = 1;
    iVar2 = FUN_00420460(&local_c,3,0,0,0,*(undefined4 *)(iVar1 + 0x850),&local_4,&local_10);
    if (-1 < iVar2) {
      local_14 = (int *)0x0;
      param_1 = (int *)0x0;
      iVar2 = FUN_00420930(iVar1,"Smart Tee",0,&DAT_005a35a8,1,&local_14,&param_1);
      if (-1 < iVar2) {
        iVar2 = (**(code **)(**(int **)(iVar1 + 0x350) + 0x2c))
                          (*(int **)(iVar1 + 0x350),local_14,local_4);
        if (-1 < iVar2) {
          piStack_8 = (int *)0x0;
          local_c = 1;
          local_10 = 1;
          iVar2 = FUN_00420460(&local_c,3,0,0,0,*(undefined4 *)(iVar1 + 0x850),&piStack_8,&local_10)
          ;
          if ((-1 < iVar2) &&
             (iVar2 = (**(code **)(**(int **)(iVar1 + 0x350) + 0x2c))
                                (*(int **)(iVar1 + 0x350),piStack_8,param_1),
             piStack_8 != (int *)0x0)) {
            (**(code **)(*piStack_8 + 8))(piStack_8);
          }
        }
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 8))(param_1);
        }
        param_1 = (int *)0x0;
        if (local_14 != (int *)0x0) {
          (**(code **)(*local_14 + 8))(local_14);
        }
        local_14 = (int *)0x0;
      }
      if (local_4 != (int *)0x0) {
        (**(code **)(*local_4 + 8))(local_4);
      }
    }
  }
  return iVar2;
}


