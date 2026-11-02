/* Module: mpgvout.001
   Function: FUN_10017998
   Address: 10017998
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_10017998(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int local_28;
  int local_24;
  undefined2 local_20;
  undefined2 local_1e;
  short local_1c;
  short local_1a;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  *(uint *)(param_1 + 0x544) = param_3;
  *(undefined4 *)(param_1 + 0x53c) = 0;
  *(int *)(param_1 + 0x614) = *(int *)(param_1 + 0x618);
  if ((*(int *)(param_1 + 0x5d4) == 0) || (*(int *)(param_1 + 0x38) == 1)) {
    *(undefined4 *)(param_1 + 0x60c) = 0;
    iVar1 = FUN_10018048(param_1,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = *(int *)(param_1 + 0x24);
    local_24 = (*(uint *)(iVar1 + 0x38) >> 3 | *(int *)(iVar1 + 0x3c) << 0x1d) -
               *(int *)(param_1 + 0x5e8);
    local_20 = *(undefined2 *)(param_1 + 0x5bc);
    local_1e = *(undefined2 *)(param_1 + 0x5ec);
    local_1c = *(short *)(param_1 + 0x5e0) - *(short *)(param_1 + 0x5e8);
    local_1a = *(short *)(param_1 + 0x5e4) - *(short *)(param_1 + 0x5e8);
    local_18 = *(undefined4 *)(param_1 + 0x600);
    local_14 = *(undefined4 *)(param_1 + 0x5f0);
    local_10 = *(undefined4 *)(param_1 + 0x5f4);
    local_c = *(undefined4 *)(param_1 + 0x5f8);
    local_8 = *(undefined4 *)(param_1 + 0x5fc);
    (**(code **)(iVar1 + 0x10))(iVar1,&local_24);
    uVar2 = *(uint *)(*(int *)(param_1 + 0x24) + 0x38) >> 3 |
            *(int *)(*(int *)(param_1 + 0x24) + 0x3c) << 0x1d;
    *(undefined4 *)(param_1 + 0x5ec) = 0;
    *(uint *)(param_1 + 0x5e8) = uVar2;
    *(uint *)(param_1 + 0x5e4) = uVar2;
    *(uint *)(param_1 + 0x5e0) = uVar2;
    if (*(int *)(param_1 + 0x604) < *(int *)(param_1 + 0x38) + -1) {
      *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x38) + -1;
    iVar4 = *(int *)(param_1 + 0x604);
    if (iVar4 < iVar1) {
      *(int *)(param_1 + 0x604) = iVar4 + 1;
      if (iVar4 + 1 < iVar1) {
        *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
      }
      else if (*(int *)(param_1 + 0x60c) == 0) {
        *(int *)(param_1 + 0x618) = iVar4 + 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x618) = 0;
      }
    }
    else {
      if (*(int *)(param_1 + 0x60c) == 0) {
        *(int *)(param_1 + 0x60c) = iVar4 + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x60c) = 0;
      }
      uVar2 = param_3 & 0xf;
      *(uint *)(param_1 + 0x540) = uVar2;
      iVar1 = FUN_10018048(param_1,*(int *)(param_1 + 0x60c));
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = *(int *)(param_1 + 0x24);
      local_24 = (*(uint *)(iVar1 + 0x38) >> 3 | *(int *)(iVar1 + 0x3c) << 0x1d) -
                 *(int *)(param_1 + 0x5e8);
      local_20 = *(undefined2 *)(param_1 + 0x5bc);
      local_1e = *(undefined2 *)(param_1 + 0x5ec);
      local_1c = *(short *)(param_1 + 0x5e0) - *(short *)(param_1 + 0x5e8);
      local_1a = *(short *)(param_1 + 0x5e4) - *(short *)(param_1 + 0x5e8);
      local_18 = *(undefined4 *)(param_1 + 0x600);
      local_14 = *(undefined4 *)(param_1 + 0x5f0);
      local_10 = *(undefined4 *)(param_1 + 0x5f4);
      local_c = *(undefined4 *)(param_1 + 0x5f8);
      local_8 = *(undefined4 *)(param_1 + 0x5fc);
      (**(code **)(iVar1 + 0x10))(iVar1,&local_24);
      uVar3 = *(uint *)(*(int *)(param_1 + 0x24) + 0x38) >> 3 |
              *(int *)(*(int *)(param_1 + 0x24) + 0x3c) << 0x1d;
      *(undefined4 *)(param_1 + 0x5ec) = 0;
      *(uint *)(param_1 + 0x5e8) = uVar3;
      *(uint *)(param_1 + 0x5e4) = uVar3;
      *(uint *)(param_1 + 0x5e0) = uVar3;
      if ((int)uVar2 < (int)*(uint *)(param_1 + 0x540)) {
        uVar2 = *(uint *)(param_1 + 0x540);
      }
      *(undefined4 *)(param_1 + 0x540) = 0;
      iVar1 = 1;
      if (0 < *(int *)(param_1 + 0x604)) {
        local_28 = 0x28;
        do {
          if ((iVar1 == 1) && ((0xb < (int)uVar2 || (*(int *)(param_1 + 0x6e0) == 0x10)))) {
LAB_10017c82:
            *(undefined4 *)(param_1 + 0x53c) = 1;
          }
          else {
            if ((iVar1 != *(int *)(param_1 + 0x604)) ||
               ((uVar2 != 0xd && (*(int *)(local_28 + 0x6b8 + param_1) != 0x10)))) {
              if ((int)uVar2 < 0xe) {
                *(undefined4 *)(param_1 + 0x53c) = 0;
                goto LAB_10017ca6;
              }
              if (iVar1 <= *(int *)(param_1 + 0x604) >> 1) goto LAB_10017c82;
            }
            *(undefined4 *)(param_1 + 0x53c) = 2;
          }
LAB_10017ca6:
          *(int *)(param_1 + 0x608) = iVar1 + -1;
          iVar4 = FUN_10018048(param_1,iVar1);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = *(int *)(param_1 + 0x24);
          iVar1 = iVar1 + 1;
          local_24 = (*(uint *)(iVar4 + 0x38) >> 3 | *(int *)(iVar4 + 0x3c) << 0x1d) -
                     *(int *)(param_1 + 0x5e8);
          local_20 = *(undefined2 *)(param_1 + 0x5bc);
          local_1e = *(undefined2 *)(param_1 + 0x5ec);
          local_1c = *(short *)(param_1 + 0x5e0) - *(short *)(param_1 + 0x5e8);
          local_1a = *(short *)(param_1 + 0x5e4) - *(short *)(param_1 + 0x5e8);
          local_18 = *(undefined4 *)(param_1 + 0x600);
          local_14 = *(undefined4 *)(param_1 + 0x5f0);
          local_10 = *(undefined4 *)(param_1 + 0x5f4);
          local_c = *(undefined4 *)(param_1 + 0x5f8);
          local_8 = *(undefined4 *)(param_1 + 0x5fc);
          (**(code **)(iVar4 + 0x10))(iVar4,&local_24);
          uVar3 = *(uint *)(*(int *)(param_1 + 0x24) + 0x38) >> 3 |
                  *(int *)(*(int *)(param_1 + 0x24) + 0x3c) << 0x1d;
          *(undefined4 *)(param_1 + 0x5ec) = 0;
          *(uint *)(param_1 + 0x5e8) = uVar3;
          *(uint *)(param_1 + 0x5e4) = uVar3;
          *(uint *)(param_1 + 0x5e0) = uVar3;
          local_28 = local_28 + 0x28;
        } while (iVar1 <= *(int *)(param_1 + 0x604));
      }
      *(undefined4 *)(param_1 + 0x604) = 0;
      *(undefined4 *)(param_1 + 0x608) = 0;
      *(undefined4 *)(param_1 + 0x618) = 1;
      *param_2 = param_1 + 0x6d4;
    }
  }
  return 0;
}


