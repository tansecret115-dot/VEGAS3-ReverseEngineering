/* Module: aviplug.dll
   Function: FUN_5f966510
   Address: 5f966510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f966510(int *param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_48 [10];
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = param_3;
  if (param_4 < 0) {
    local_14 = (int *)((int)param_3 + param_4 * -0x23f);
  }
  param_3 = param_2;
  local_c = 0;
  do {
    local_8 = 0;
    param_3 = param_3 + 0x78;
    local_20 = 9;
    do {
      local_1c = 3;
      param_3 = param_3 + 0x14;
      do {
        FUN_5f977380(local_c,local_8,local_48);
        piVar2 = param_1 + 0x1c0;
        FUN_5f974550(param_3,(int)piVar2);
        piVar1 = local_48;
        local_18 = 5;
        do {
          FUN_5f971b10((int)piVar2,param_1);
          piVar3 = piVar2 + 2;
          local_10 = 6;
          piVar4 = param_1;
          do {
            if ((*(uint *)*piVar3 & 4) == 0) {
              FUN_5f96fb20(piVar4);
            }
            else {
              FUN_5f96fc90(piVar4);
            }
            piVar3 = piVar3 + 1;
            piVar4 = piVar4 + 0x40;
            local_10 = local_10 + -1;
          } while (local_10 != 0);
          FUN_5f96af70((undefined8 *)((int)local_14 + *piVar1 * 4 + piVar1[1] * param_4),
                       (undefined8 *)param_1,param_4);
          piVar2 = piVar2 + 0x12;
          piVar1 = piVar1 + 2;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
        param_3 = param_3 + 100;
        local_8 = local_8 + 1;
        local_1c = local_1c + -1;
        local_18 = 0;
      } while (local_1c != 0);
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    local_c = local_c + 1;
  } while (local_c < 0xc);
  return;
}


