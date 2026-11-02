/* Module: rmto3260.dll
   Function: FUN_662c3780
   Address: 662c3780
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662c3780(int *param_1,undefined4 param_2,uint param_3,uint *param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_34 [10];
  uint local_2a;
  undefined1 local_20 [2];
  uint local_1e;
  int *local_1a;
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar2 = 0;
  iVar1 = 0;
  local_c = 0;
  local_8 = 0;
  if ((int *)param_1[0x13] == (int *)0x0) {
    iVar1 = -0x7ffbfff9;
  }
  piVar4 = param_1;
  if (-1 < iVar1) {
    piVar4 = *(int **)param_1[0x13];
    iVar1 = (**(code **)(*(int *)param_1[6] + 0x20))(param_2,0);
  }
  if ((-1 < iVar1) && (iVar1 = (**(code **)(*param_1 + 0x78))(param_1,local_34), -1 < iVar1)) {
    local_10 = 0;
    piVar6 = piVar4;
    if (local_2a != 0) {
      do {
        if (iVar1 < 0) {
          return;
        }
        if (local_8 != 0) break;
        iVar1 = (**(code **)(*param_1 + 0x7c))(param_1,local_20);
        if (-1 < iVar1) {
          uVar3 = uVar2;
          piVar5 = piVar6;
          if (local_10 == 0) {
            uVar3 = local_1e;
            piVar5 = local_1a;
          }
          if (local_1e == param_3) {
            local_8 = 1;
            local_c = local_1e;
            uVar2 = uVar3;
            piVar4 = local_1a;
            piVar6 = piVar5;
          }
          else {
            uVar2 = local_1e;
            piVar6 = local_1a;
            if (param_3 < local_1e) {
              local_8 = 1;
              uVar2 = uVar3;
              piVar4 = piVar5;
              piVar6 = piVar5;
              local_c = uVar3;
            }
          }
        }
        local_10 = local_10 + 1;
      } while (local_10 < local_2a);
    }
    if (-1 < iVar1) {
      if (local_8 == 0) {
        piVar4 = piVar6;
        local_c = uVar2;
      }
      iVar1 = (**(code **)(*(int *)param_1[6] + 0x20))(piVar4,0);
      if (-1 < iVar1) {
        *(int *)(param_1[0x13] + 0xc) = *(int *)(param_1[0x13] + 4) - (int)piVar4;
        *param_4 = local_c;
        *param_5 = piVar4;
      }
    }
  }
  return;
}


