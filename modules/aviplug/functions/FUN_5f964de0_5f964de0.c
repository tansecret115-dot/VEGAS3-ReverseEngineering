/* Module: aviplug.dll
   Function: FUN_5f964de0
   Address: 5f964de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f964de0(int *param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  int local_64 [10];
  int local_3c [7];
  int *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  piVar1 = param_1;
  local_18 = param_3;
  if (param_4 < 0) {
    local_18 = (int *)((int)param_3 + param_4 * -0x1df);
  }
  param_3 = param_2;
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_3c[2] = 0;
  local_3c[3] = 0;
  local_14 = 0;
  do {
    local_c = 0;
    param_3 = param_3 + 0x78;
    local_3c[4] = 0;
    local_10 = 0;
    do {
      param_3 = param_3 + 0x14;
      if (local_10 == 8) {
        local_3c[4] = param_4 * 8 + -0x30;
      }
      local_3c[5] = 3;
      do {
        FUN_5f977270(local_14,local_c,local_64);
        param_2 = piVar1 + 0x1c0;
        FUN_5f974550(param_3,(int)param_2);
        local_8 = local_64;
        local_20 = local_3c;
        local_3c[6] = 5;
        do {
          piVar5 = piVar1;
          for (iVar3 = 0x180; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar5 = 0;
            piVar5 = piVar5 + 1;
          }
          puVar4 = (undefined8 *)((int)local_18 + *local_8 * 3 + local_8[1] * param_4);
          FUN_5f971b10((int)param_2,piVar1);
          local_1c = 6;
          piVar5 = param_2 + 2;
          param_1 = piVar1;
          do {
            if ((*(uint *)*piVar5 & 4) == 0) {
              FUN_5f9702c0((undefined8 *)param_1);
            }
            else {
              FUN_5f970430((undefined8 *)param_1);
            }
            piVar2 = local_20;
            piVar5 = piVar5 + 1;
            param_1 = param_1 + 0x40;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
          FUN_5f969ac0(puVar4,(undefined8 *)piVar1,param_4,*local_20);
          param_2 = param_2 + 0x12;
          local_8 = local_8 + 2;
          local_3c[6] = local_3c[6] + -1;
          local_20 = piVar2 + 1;
        } while (local_3c[6] != 0);
        param_3 = param_3 + 100;
        local_c = local_c + 1;
        local_3c[5] = local_3c[5] + -1;
      } while (local_3c[5] != 0);
      local_10 = local_10 + 1;
    } while (local_10 < 9);
    local_14 = local_14 + 1;
  } while (local_14 < 10);
  return;
}


