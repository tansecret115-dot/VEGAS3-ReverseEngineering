/* Module: aviplug.dll
   Function: FUN_5f963be0
   Address: 5f963be0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f963be0(int *param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_60 [10];
  int local_38 [7];
  int *local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = param_3;
  if (param_4 < 0) {
    local_14 = (int *)((int)param_3 + param_4 * -0xef);
  }
  param_3 = param_2;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_c = 0;
  do {
    param_2 = (int *)0x0;
    param_3 = param_3 + 0x78;
    local_38[4] = 0;
    local_8 = 0;
    do {
      param_3 = param_3 + 0x14;
      if (local_8 == 8) {
        local_38[4] = param_4 * 4 + -0x18;
      }
      local_38[5] = 3;
      do {
        FUN_5f977270(local_c,(int)param_2,local_60);
        piVar4 = param_1 + 0x1c0;
        FUN_5f974550(param_3,(int)piVar4);
        local_1c = local_60;
        local_18 = local_38;
        local_38[6] = 5;
        do {
          piVar5 = param_1;
          for (iVar3 = 0x180; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar5 = 0;
            piVar5 = piVar5 + 1;
          }
          FUN_5f971b10((int)piVar4,param_1);
          piVar5 = piVar4 + 2;
          local_10 = 4;
          piVar6 = param_1;
          do {
            if ((*(uint *)*piVar5 & 4) == 0) {
              FUN_5f970a10(piVar6);
            }
            else {
              FUN_5f970c40(piVar6);
            }
            piVar5 = piVar5 + 1;
            piVar6 = piVar6 + 0x40;
            local_10 = local_10 + -1;
          } while (local_10 != 0);
          piVar5 = piVar4 + 6;
          local_10 = 2;
          piVar6 = param_1 + 0x100;
          do {
            if ((*(uint *)*piVar5 & 4) == 0) {
              FUN_5f970e10(piVar6);
            }
            else {
              FUN_5f971040(piVar6);
            }
            piVar2 = local_18;
            piVar1 = local_1c;
            piVar5 = piVar5 + 1;
            piVar6 = piVar6 + 0x40;
            local_10 = local_10 + -1;
          } while (local_10 != 0);
          FUN_5f968f60((undefined4 *)
                       ((int)local_14 + (*local_1c >> 1) * 3 + (local_1c[1] * param_4 >> 1)),
                       (undefined8 *)param_1,param_4,*local_18);
          piVar4 = piVar4 + 0x12;
          local_18 = piVar2 + 1;
          local_1c = piVar1 + 2;
          local_38[6] = local_38[6] + -1;
        } while (local_38[6] != 0);
        param_3 = param_3 + 100;
        param_2 = (int *)((int)param_2 + 1);
        local_38[5] = local_38[5] + -1;
        local_38[6] = 0;
      } while (local_38[5] != 0);
      local_8 = local_8 + 1;
    } while (local_8 < 9);
    local_c = local_c + 1;
  } while (local_c < 10);
  return;
}


