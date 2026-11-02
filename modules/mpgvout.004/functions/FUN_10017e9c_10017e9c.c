/* Module: mpgvout.004
   Function: FUN_10017e9c
   Address: 10017e9c
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_10017e9c(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
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
    iVar1 = FUN_10018548(param_1,0);
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
    iVar5 = *(int *)(param_1 + 0x604);
    if (iVar5 < iVar1) {
      *(int *)(param_1 + 0x604) = iVar5 + 1;
      if (iVar5 + 1 < iVar1) {
        *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
      }
      else if (*(int *)(param_1 + 0x60c) == 0) {
        *(int *)(param_1 + 0x618) = iVar5 + 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x618) = 0;
      }
    }
    else {
      if (*(int *)(param_1 + 0x60c) == 0) {
        *(int *)(param_1 + 0x60c) = iVar5 + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x60c) = 0;
      }
      uVar2 = param_3 & 0xf;
      *(uint *)(param_1 + 0x540) = uVar2;
      iVar1 = FUN_10018548(param_1,*(int *)(param_1 + 0x60c));
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = *(int *)(param_1 + 0x24);
      iVar5 = 1;
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
      uVar3 = *(uint *)(param_1 + 0x540);
      if ((int)*(uint *)(param_1 + 0x540) <= (int)uVar2) {
        uVar3 = uVar2;
      }
      *(undefined4 *)(param_1 + 0x540) = 0;
      if (0 < *(int *)(param_1 + 0x604)) {
        iVar1 = 0x28;
        do {
          if ((iVar5 == 1) && ((0xb < (int)uVar3 || (*(int *)(param_1 + 0x6e0) == 0x10)))) {
LAB_1001818a:
            *(undefined4 *)(param_1 + 0x53c) = 1;
          }
          else {
            if ((iVar5 != *(int *)(param_1 + 0x604)) ||
               ((uVar3 != 0xd && (*(int *)(iVar1 + 0x6b8 + param_1) != 0x10)))) {
              if ((int)uVar3 < 0xe) {
                *(undefined4 *)(param_1 + 0x53c) = 0;
                goto LAB_100181ae;
              }
              if (iVar5 <= *(int *)(param_1 + 0x604) >> 1) goto LAB_1001818a;
            }
            *(undefined4 *)(param_1 + 0x53c) = 2;
          }
LAB_100181ae:
          *(int *)(param_1 + 0x608) = iVar5 + -1;
          iVar4 = FUN_10018548(param_1,iVar5);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = *(int *)(param_1 + 0x24);
          iVar1 = iVar1 + 0x28;
          iVar5 = iVar5 + 1;
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
          uVar2 = *(uint *)(*(int *)(param_1 + 0x24) + 0x38) >> 3 |
                  *(int *)(*(int *)(param_1 + 0x24) + 0x3c) << 0x1d;
          *(undefined4 *)(param_1 + 0x5ec) = 0;
          *(uint *)(param_1 + 0x5e8) = uVar2;
          *(uint *)(param_1 + 0x5e4) = uVar2;
          *(uint *)(param_1 + 0x5e0) = uVar2;
        } while (iVar5 <= *(int *)(param_1 + 0x604));
      }
      *(undefined4 *)(param_1 + 0x604) = 0;
      *(undefined4 *)(param_1 + 0x608) = 0;
      *(undefined4 *)(param_1 + 0x618) = 1;
      *param_2 = param_1 + 0x6d4;
    }
  }
  return 0;
}


