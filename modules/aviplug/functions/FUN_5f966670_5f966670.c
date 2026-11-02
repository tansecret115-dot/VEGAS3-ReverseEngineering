/* Module: aviplug.dll
   Function: FUN_5f966670
   Address: 5f966670
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f966670(int *param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_48 [10];
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  local_10 = param_3;
  if (param_4 < 0) {
    local_10 = (int *)((int)param_3 + param_4 * -0x11f);
  }
  param_3 = param_2;
  local_8 = 0;
  do {
    param_2 = (int *)0x0;
    param_3 = param_3 + 0x78;
    local_20 = 9;
    do {
      local_1c = 3;
      param_3 = param_3 + 0x14;
      do {
        FUN_5f977380(local_8,(int)param_2,local_48);
        piVar3 = param_1 + 0x1c0;
        FUN_5f974550(param_3,(int)piVar3);
        local_14 = local_48;
        local_18 = 5;
        do {
          piVar4 = param_1;
          for (iVar2 = 0x180; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar4 = 0;
            piVar4 = piVar4 + 1;
          }
          FUN_5f971b10((int)piVar3,param_1);
          piVar4 = piVar3 + 2;
          local_c = 4;
          piVar5 = param_1;
          do {
            if ((*(uint *)*piVar4 & 4) == 0) {
              FUN_5f970a10(piVar5);
            }
            else {
              FUN_5f970c40(piVar5);
            }
            piVar4 = piVar4 + 1;
            piVar5 = piVar5 + 0x40;
            local_c = local_c + -1;
          } while (local_c != 0);
          piVar4 = piVar3 + 6;
          local_c = 2;
          piVar5 = param_1 + 0x100;
          do {
            if ((*(uint *)*piVar4 & 4) == 0) {
              FUN_5f970e10(piVar5);
            }
            else {
              FUN_5f971040(piVar5);
            }
            piVar1 = local_14;
            piVar4 = piVar4 + 1;
            piVar5 = piVar5 + 0x40;
            local_c = local_c + -1;
          } while (local_c != 0);
          FUN_5f96b140((undefined4 *)
                       ((int)local_10 + (*local_14 >> 1) * 3 + (local_14[1] * param_4 >> 1)),
                       (undefined8 *)param_1,param_4);
          piVar3 = piVar3 + 0x12;
          local_14 = piVar1 + 2;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
        param_3 = param_3 + 100;
        param_2 = (int *)((int)param_2 + 1);
        local_1c = local_1c + -1;
        local_18 = 0;
      } while (local_1c != 0);
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    local_8 = local_8 + 1;
  } while (local_8 < 0xc);
  return;
}


