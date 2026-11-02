/* Module: vidcap30.exe
   Function: FUN_0042a790
   Address: 0042a790
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042a790(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  int *local_4;
  
  local_14 = (int *)0x0;
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  local_10 = (int *)0x0;
  local_4 = (int *)0x0;
  iVar2 = FUN_00420930(param_1,0,*(undefined4 *)(param_1 + 0x3d8),&DAT_005a35f8,0,&local_14,&local_c
                      );
  if (-1 < iVar2) {
    iVar2 = FUN_004203a0(*(undefined4 *)(param_1 + 0x3ec),&local_8,0);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x350) + 0x2c))
                        (*(int **)(param_1 + 0x350),local_14,local_8);
      if (-1 < iVar2) {
        iVar2 = FUN_004203a0(*(undefined4 *)(param_1 + 0x3ec),0,&local_10);
        if (-1 < iVar2) {
          if (param_2 == 0) {
            iVar2 = FUN_00420b20(*(undefined4 *)(param_1 + 0x350),&DAT_005a1d78,
                                 (undefined4 *)(param_1 + 1000),"SF:SG-Null Renderer");
            if (-1 < iVar2) {
              iVar2 = FUN_004203a0(*(undefined4 *)(param_1 + 1000),&local_4,0);
              if (-1 < iVar2) {
                iVar2 = (**(code **)(**(int **)(param_1 + 0x350) + 0x2c))
                                  (*(int **)(param_1 + 0x350),local_10,local_4);
                goto LAB_0042a8a8;
              }
            }
          }
          else {
            iVar2 = (**(code **)(**(int **)(param_1 + 0x3b4) + 0x1c))
                              (*(int **)(param_1 + 0x3b4),0,0,local_10,0,0);
            if (-1 < iVar2) {
              iVar2 = FUN_00429860(param_1,iVar2);
LAB_0042a8a8:
              if (-1 < iVar2) {
                *(undefined4 *)(param_1 + 0x820) = 1;
                *(int **)(param_1 + 0x808) = local_14;
                *(int **)(param_1 + 0x814) = local_c;
                goto LAB_0042a908;
              }
            }
          }
        }
      }
    }
  }
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
  }
  local_14 = (int *)0x0;
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  piVar1 = *(int **)(param_1 + 1000);
  local_c = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 1000) = 0;
LAB_0042a908:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  local_8 = (int *)0x0;
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
  }
  local_10 = (int *)0x0;
  if (local_4 != (int *)0x0) {
    (**(code **)(*local_4 + 8))(local_4);
  }
  return iVar2;
}


