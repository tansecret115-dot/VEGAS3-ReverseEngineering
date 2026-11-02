/* Module: aviplug.dll
   Function: FUN_5f965140
   Address: 5f965140
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f965140(int *param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_60 [10];
  int local_38 [7];
  int *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_18 = param_3;
  if (param_4 < 0) {
    local_18 = (int *)((int)param_3 + param_4 * -0xef);
  }
  param_3 = param_2;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_10 = 0;
  do {
    local_8 = 0;
    param_3 = param_3 + 0x78;
    local_38[4] = 0;
    local_c = 0;
    do {
      param_3 = param_3 + 0x14;
      if (local_c == 8) {
        local_38[4] = param_4 * 4 + -0x18;
      }
      local_38[5] = 3;
      do {
        FUN_5f977270(local_10,local_8,local_60);
        piVar3 = param_1 + 0x1c0;
        FUN_5f974550(param_3,(int)piVar3);
        local_1c = local_38;
        piVar4 = local_60;
        local_38[6] = 5;
        do {
          piVar5 = param_1;
          for (iVar2 = 0x180; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar5 = 0;
            piVar5 = piVar5 + 1;
          }
          FUN_5f971b10((int)piVar3,param_1);
          piVar5 = piVar3 + 2;
          param_2 = param_1;
          local_14 = 6;
          do {
            if ((*(uint *)*piVar5 & 4) == 0) {
              FUN_5f971520((undefined8 *)param_2);
            }
            else {
              FUN_5f971690((undefined8 *)param_2);
            }
            piVar1 = local_1c;
            piVar5 = piVar5 + 1;
            param_2 = param_2 + 0x40;
            local_14 = local_14 + -1;
          } while (local_14 != 0);
          FUN_5f969d60((undefined8 *)
                       ((int)local_18 + (*piVar4 >> 1) * 3 + (piVar4[1] * param_4 >> 1)),
                       (undefined8 *)param_1,param_4,*local_1c);
          piVar3 = piVar3 + 0x12;
          local_1c = piVar1 + 1;
          piVar4 = piVar4 + 2;
          local_38[6] = local_38[6] + -1;
        } while (local_38[6] != 0);
        param_3 = param_3 + 100;
        local_8 = local_8 + 1;
        local_38[5] = local_38[5] + -1;
        local_38[6] = 0;
      } while (local_38[5] != 0);
      local_c = local_c + 1;
    } while (local_c < 9);
    local_10 = local_10 + 1;
  } while (local_10 < 10);
  return;
}


