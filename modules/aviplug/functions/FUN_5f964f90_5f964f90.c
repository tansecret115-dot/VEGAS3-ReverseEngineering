/* Module: aviplug.dll
   Function: FUN_5f964f90
   Address: 5f964f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f964f90(int *param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_64 [10];
  int local_3c [5];
  undefined8 *local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = param_3;
  if (param_4 < 0) {
    local_14 = (int *)((int)param_3 + param_4 * -0x1df);
  }
  param_3 = param_2;
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_3c[2] = 0;
  local_3c[3] = 0;
  local_10 = 0;
  do {
    local_8 = 0;
    param_3 = param_3 + 0x78;
    local_3c[4] = 0;
    local_c = 0;
    do {
      param_3 = param_3 + 0x14;
      if (local_c == 8) {
        local_3c[4] = param_4 * 8 + -0x40;
      }
      local_24 = 3;
      do {
        FUN_5f977270(local_10,local_8,local_64);
        piVar4 = param_1 + 0x1c0;
        FUN_5f974550(param_3,(int)piVar4);
        piVar3 = local_64;
        local_1c = local_3c;
        local_20 = 5;
        do {
          piVar5 = param_1;
          for (iVar2 = 0x180; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar5 = 0;
            piVar5 = piVar5 + 1;
          }
          local_28 = (undefined8 *)((int)local_14 + *piVar3 * 4 + piVar3[1] * param_4);
          FUN_5f971b10((int)piVar4,param_1);
          piVar5 = piVar4 + 2;
          param_2 = param_1;
          local_18 = 6;
          do {
            if ((*(uint *)*piVar5 & 4) == 0) {
              FUN_5f9702c0((undefined8 *)param_2);
            }
            else {
              FUN_5f970430((undefined8 *)param_2);
            }
            piVar1 = local_1c;
            piVar5 = piVar5 + 1;
            param_2 = param_2 + 0x40;
            local_18 = local_18 + -1;
          } while (local_18 != 0);
          FUN_5f969c10(local_28,(undefined8 *)param_1,param_4,*local_1c);
          piVar4 = piVar4 + 0x12;
          piVar3 = piVar3 + 2;
          local_20 = local_20 + -1;
          local_1c = piVar1 + 1;
        } while (local_20 != 0);
        param_3 = param_3 + 100;
        local_8 = local_8 + 1;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
      local_c = local_c + 1;
    } while (local_c < 9);
    local_10 = local_10 + 1;
  } while (local_10 < 10);
  return;
}


