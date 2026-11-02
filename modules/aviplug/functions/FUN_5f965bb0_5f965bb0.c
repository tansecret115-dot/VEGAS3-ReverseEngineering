/* Module: aviplug.dll
   Function: FUN_5f965bb0
   Address: 5f965bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f965bb0(int *param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_40;
  int *local_3c;
  int *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28 [10];
  
  piVar1 = param_1;
  local_3c = param_3;
  if (param_4 < 0) {
    local_3c = (int *)((int)param_3 + param_4 * -0x11f);
  }
  param_3 = param_2;
  param_1 = (int *)0x0;
  do {
    param_2 = (int *)0x0;
    param_3 = param_3 + 0x78;
    local_2c = 9;
    do {
      local_30 = 3;
      param_3 = param_3 + 0x14;
      do {
        FUN_5f977380((int)param_1,(int)param_2,local_28);
        piVar3 = piVar1 + 0x1c0;
        FUN_5f975010(param_3,(int)piVar3);
        local_38 = local_28;
        local_34 = 5;
        do {
          piVar4 = piVar1;
          for (iVar2 = 0x180; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar4 = 0;
            piVar4 = piVar4 + 1;
          }
          FUN_5f971a00((int)piVar3,piVar1);
          piVar4 = piVar3 + 2;
          local_40 = 4;
          piVar5 = piVar1;
          do {
            if ((*(uint *)*piVar4 & 4) == 0) {
              FUN_5f96d8e0(piVar5);
            }
            else {
              FUN_5f96d920(piVar5);
            }
            piVar4 = piVar4 + 1;
            piVar5 = piVar5 + 0x40;
            local_40 = local_40 + -1;
          } while (local_40 != 0);
          piVar5 = piVar1 + 0x100;
          piVar4 = piVar3 + 6;
          local_40 = 2;
          do {
            if ((*(uint *)*piVar4 & 4) == 0) {
              FUN_5f96d4b0(piVar5);
            }
            else {
              FUN_5f96d4f0(piVar5);
            }
            piVar4 = piVar4 + 1;
            piVar5 = piVar5 + 0x40;
            local_40 = local_40 + -1;
          } while (local_40 != 0);
          FUN_5f96a7f0((undefined1 *)
                       ((int)local_3c + (*local_38 >> 1) * 3 + (local_38[1] * param_4 >> 1)),piVar1,
                       param_4);
          piVar3 = piVar3 + 0x12;
          local_38 = local_38 + 2;
          local_34 = local_34 + -1;
        } while (local_34 != 0);
        param_3 = param_3 + 100;
        param_2 = (int *)((int)param_2 + 1);
        local_30 = local_30 + -1;
      } while (local_30 != 0);
      local_2c = local_2c + -1;
    } while (local_2c != 0);
    param_1 = (int *)((int)param_1 + 1);
  } while ((int)param_1 < 0xc);
  return;
}


