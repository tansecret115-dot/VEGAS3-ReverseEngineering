/* Module: aviplug.dll
   Function: FUN_5f964960
   Address: 5f964960
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f964960(int *param_1,int *param_2,int *param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_68 [10];
  int local_40 [7];
  undefined8 *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_1c = param_3;
  if (param_4 < 0) {
    local_1c = (int *)((int)param_3 + param_4 * -0x1df);
  }
  local_40[0] = 0;
  param_3 = param_2;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_18 = 0;
  do {
    local_10 = 0;
    param_3 = param_3 + 0x78;
    local_40[4] = 0;
    local_14 = 0;
    do {
      param_3 = param_3 + 0x14;
      if (local_14 == 8) {
        local_40[4] = param_4 * 8 + -0x30;
      }
      local_40[5] = 3;
      do {
        FUN_5f977270(local_18,local_10,local_68);
        FUN_5f974550(param_3,(int)(param_1 + 0x1c0));
        param_2 = local_40;
        piVar3 = param_1 + 0x1c2;
        local_c = local_68;
        local_40[6] = 5;
        do {
          local_24 = (undefined8 *)((int)local_1c + *local_c * 3 + local_c[1] * param_4);
          uVar1 = *(uint *)piVar3[4];
          if ((uVar1 & 4) == (*(uint *)piVar3[5] & 4)) {
            FUN_5f971bd0((int)(piVar3 + -2),param_1);
            local_20 = 4;
            local_8 = param_1;
            piVar2 = piVar3;
            do {
              if ((*(uint *)*piVar2 & 4) == 0) {
                FUN_5f9702c0((undefined8 *)local_8);
              }
              else {
                FUN_5f970430((undefined8 *)local_8);
              }
              piVar2 = piVar2 + 1;
              local_8 = local_8 + 0x40;
              local_20 = local_20 + -1;
            } while (local_20 != 0);
            if ((uVar1 & 4) == 0) {
              FUN_5f9706c0((undefined8 *)(param_1 + 0x100));
            }
            else {
              FUN_5f970830((undefined8 *)(param_1 + 0x100));
            }
            FUN_5f9696a0(local_24,(undefined8 *)param_1,param_4,*param_2);
          }
          else {
            FUN_5f971b10((int)(piVar3 + -2),param_1);
            local_20 = 6;
            piVar2 = param_1;
            piVar4 = piVar3;
            do {
              if ((*(uint *)*piVar4 & 4) == 0) {
                FUN_5f9702c0((undefined8 *)piVar2);
              }
              else {
                FUN_5f970430((undefined8 *)piVar2);
              }
              piVar4 = piVar4 + 1;
              piVar2 = piVar2 + 0x40;
              local_20 = local_20 + -1;
            } while (local_20 != 0);
            FUN_5f969540(local_24,(undefined8 *)param_1,param_4,*param_2);
          }
          piVar3 = piVar3 + 0x12;
          local_c = local_c + 2;
          param_2 = param_2 + 1;
          local_40[6] = local_40[6] + -1;
        } while (local_40[6] != 0);
        param_3 = param_3 + 100;
        local_10 = local_10 + 1;
        local_40[5] = local_40[5] + -1;
      } while (local_40[5] != 0);
      local_14 = local_14 + 1;
    } while (local_14 < 9);
    local_18 = local_18 + 1;
  } while (local_18 < 10);
  return;
}


