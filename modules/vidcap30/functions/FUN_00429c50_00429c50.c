/* Module: vidcap30.exe
   Function: FUN_00429c50
   Address: 00429c50
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_00429c50(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *unaff_EBX;
  int *unaff_EBP;
  int *local_18;
  int *local_14;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_18 = (int *)0x0;
  local_4 = 0;
  local_c = 0;
  local_8 = 0;
  local_14 = (int *)0x0;
  local_10 = (int *)0x0;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x350) + 0x18))
                            (*(int **)(param_1 + 0x350),L"Smart Tee",&local_4);
  if (-1 < (int)piVar3) {
    piVar3 = (int *)FUN_00420930(param_1,0,local_10,&DAT_005a35a8,0,&local_18,&local_14);
    if (-1 < (int)piVar3) {
      puVar4 = (undefined4 *)FUN_00465540(0,&stack0xffffffdc);
      if (-1 < (int)piVar3) {
        puVar1 = (undefined4 *)(param_1 + 0x848);
        piVar3 = (int *)(**(code **)*puVar4)(puVar4,&DAT_005a1ca8,puVar1);
        if (-1 < (int)piVar3) {
          piVar3 = (int *)(**(code **)*puVar4)(puVar4,&DAT_0058a1b8,param_1 + 0x84c);
          if (-1 < (int)piVar3) {
            piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x84c) + 0x24))
                                      (*(int **)(param_1 + 0x84c),DAT_005bb0e8);
            if (-1 < (int)piVar3) {
              piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x350) + 0xc))
                                        (*(int **)(param_1 + 0x350),*puVar1,L"SF:SF Stream Monitor")
              ;
              if (-1 < (int)piVar3) {
                piVar3 = (int *)FUN_004203a0(*puVar1,&stack0xffffffe4,0);
                if (-1 < (int)piVar3) {
                  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x350) + 0x2c))
                                            (*(int **)(param_1 + 0x350),local_18,unaff_EBX);
                  if (-1 < (int)piVar3) {
                    piVar3 = (int *)FUN_004203a0(*puVar1,0,&stack0xffffffe0);
                    if (-1 < (int)piVar3) {
                      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x350) + 0x2c))
                                                (*(int **)(param_1 + 0x350),unaff_EBP,local_14);
                      if (-1 < (int)piVar3) {
                        piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x3dc) + 0x2c))
                                                  (*(int **)(param_1 + 0x3dc),
                                                   *(undefined4 *)(param_1 + 0x84c));
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
  if (unaff_EBP != (int *)0x0) {
    (**(code **)(*unaff_EBP + 8))(unaff_EBP);
  }
  if (unaff_EBX != (int *)0x0) {
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
  }
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))(local_18);
  }
  local_18 = (int *)0x0;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
  }
  piVar2 = local_10;
  local_14 = (int *)0x0;
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))();
    piVar3 = piVar2;
  }
  return piVar3;
}


