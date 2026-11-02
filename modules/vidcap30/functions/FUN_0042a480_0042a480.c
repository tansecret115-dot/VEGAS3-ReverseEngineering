/* Module: vidcap30.exe
   Function: FUN_0042a480
   Address: 0042a480
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042a480(int param_1,int param_2)

{
  LPVOID *ppv;
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  int *local_4;
  
  local_10 = (int *)0x0;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  if (param_2 == 0) {
    ppv = (LPVOID *)(param_1 + 0x3ac);
    iVar1 = CoCreateInstance((IID *)&DAT_005a2de8,(LPUNKNOWN)0x0,1,(IID *)&DAT_005a1ca8,ppv);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0xc))
                        (*(int **)(param_1 + 0x350),*ppv,L"SF:DV Video Decoder");
      if (-1 < iVar1) {
        iVar1 = (**(code **)(**(int **)(param_1 + 0x3b4) + 0x1c))
                          (*(int **)(param_1 + 0x3b4),&DAT_005a2428,&DAT_005a35a8,
                           *(undefined4 *)(param_1 + 0x360),0,0);
        if (-1 < iVar1) {
          iVar1 = FUN_00420930(param_1,0,*ppv,0,1,&local_1c,&local_10);
          if (-1 < iVar1) {
            iVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0x18))
                              (*(int **)(param_1 + 0x350),L"Video Renderer",&local_8);
            if (-1 < iVar1) {
              iVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0x10))
                                (*(int **)(param_1 + 0x350),local_8);
              if (-1 < iVar1) {
                iVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0x18))
                                  (*(int **)(param_1 + 0x350),L"Audio Renderer",&local_4);
                if (-1 < iVar1) {
                  iVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0x10))
                                    (*(int **)(param_1 + 0x350),local_4);
                  if (iVar1 < 0) goto LAB_0042a6e6;
                }
                iVar1 = FUN_004203a0(*(undefined4 *)(param_1 + 0x3ec),&local_18,0);
                if (-1 < iVar1) {
                  iVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0x2c))
                                    (*(int **)(param_1 + 0x350),local_1c,local_18);
                  if (-1 < iVar1) {
                    iVar1 = FUN_004203a0(*(undefined4 *)(param_1 + 0x3ec),0,&local_14);
                    if (-1 < iVar1) {
                      iVar1 = FUN_00420b20(*(undefined4 *)(param_1 + 0x350),&DAT_005a1d78,
                                           (undefined4 *)(param_1 + 1000),"SF:SG-Null Renderer");
                      if (-1 < iVar1) {
                        iVar1 = FUN_004203a0(*(undefined4 *)(param_1 + 1000),&local_c,0);
                        if (-1 < iVar1) {
                          piVar2 = *(int **)(param_1 + 0x350);
                          iVar1 = *piVar2;
                          piVar3 = local_c;
                          goto LAB_0042a6d6;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = FUN_00420930(param_1,0,*(undefined4 *)(param_1 + 0x3ac),0,1,&local_1c,&local_10);
    if (-1 < iVar1) {
      iVar1 = FUN_004203a0(*(undefined4 *)(param_1 + 0x3ec),&local_18,0);
      if (-1 < iVar1) {
        iVar1 = (**(code **)(**(int **)(param_1 + 0x350) + 0x2c))
                          (*(int **)(param_1 + 0x350),local_1c,local_18);
        if (-1 < iVar1) {
          iVar1 = FUN_004203a0(*(undefined4 *)(param_1 + 0x3ec),0,&local_14);
          if (-1 < iVar1) {
            piVar2 = *(int **)(param_1 + 0x350);
            iVar1 = *piVar2;
            piVar3 = local_10;
LAB_0042a6d6:
            iVar1 = (**(code **)(iVar1 + 0x2c))(piVar2,local_14,piVar3);
            if (-1 < iVar1) goto LAB_0042a6fc;
          }
        }
      }
    }
  }
LAB_0042a6e6:
  piVar2 = *(int **)(param_1 + 1000);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined4 *)(param_1 + 1000) = 0;
LAB_0042a6fc:
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
  }
  local_10 = (int *)0x0;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))(local_1c);
  }
  local_1c = (int *)0x0;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))(local_18);
  }
  local_18 = (int *)0x0;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
  }
  local_14 = (int *)0x0;
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  local_c = (int *)0x0;
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  local_8 = (int *)0x0;
  if (local_4 != (int *)0x0) {
    (**(code **)(*local_4 + 8))(local_4);
  }
  return iVar1;
}


