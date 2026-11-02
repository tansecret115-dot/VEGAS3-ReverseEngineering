/* Module: aviplug.dll
   Function: FUN_5f9639c0
   Address: 5f9639c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9639c0(int *param_1,int *param_2,int *param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_64 [10];
  int local_3c [7];
  ulonglong *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_18 = param_3;
  if (param_4 < 0) {
    local_18 = (int *)((int)param_3 + param_4 * -0x1df);
  }
  local_3c[0] = 0;
  param_3 = param_2;
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
        local_3c[4] = param_4 * 8 + -0x40;
      }
      local_3c[5] = 3;
      do {
        FUN_5f977270(local_14,local_c,local_64);
        FUN_5f974550(param_3,(int)(param_1 + 0x1c0));
        param_2 = local_3c;
        piVar4 = param_1 + 0x1c2;
        local_8 = local_64;
        local_3c[6] = 5;
        do {
          local_20 = (ulonglong *)((int)local_18 + *local_8 * 4 + local_8[1] * param_4);
          uVar1 = *(uint *)piVar4[4];
          if ((uVar1 & 4) == (*(uint *)piVar4[5] & 4)) {
            FUN_5f971bd0((int)(piVar4 + -2),param_1);
            if ((uVar1 & 4) == 0) {
              FUN_5f96ff30((undefined8 *)(param_1 + 0x100));
            }
            else {
              FUN_5f9700b0((undefined8 *)(param_1 + 0x100));
            }
            local_1c = 4;
            piVar2 = param_1;
            piVar3 = piVar4;
            do {
              if ((*(uint *)*piVar3 & 4) == 0) {
                FUN_5f96fb20(piVar2);
              }
              else {
                FUN_5f96fc90(piVar2);
              }
              piVar3 = piVar3 + 1;
              piVar2 = piVar2 + 0x40;
              local_1c = local_1c + -1;
            } while (local_1c != 0);
            FUN_5f968e50(local_20,(undefined8 *)param_1,param_4,*param_2);
          }
          else {
            FUN_5f971b10((int)(piVar4 + -2),param_1);
            local_1c = 6;
            piVar2 = param_1;
            piVar3 = piVar4;
            do {
              if ((*(uint *)*piVar3 & 4) == 0) {
                FUN_5f96fb20(piVar2);
              }
              else {
                FUN_5f96fc90(piVar2);
              }
              piVar3 = piVar3 + 1;
              piVar2 = piVar2 + 0x40;
              local_1c = local_1c + -1;
            } while (local_1c != 0);
            FUN_5f968d20(local_20,(undefined8 *)param_1,param_4,*param_2);
          }
          piVar4 = piVar4 + 0x12;
          local_8 = local_8 + 2;
          param_2 = param_2 + 1;
          local_3c[6] = local_3c[6] + -1;
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


