/* Module: mpgvout.002
   Function: FUN_10003f18
   Address: 10003f18
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10003f18(int param_1,int *param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  undefined4 uStack0000001c;
  undefined4 in_stack_00000020;
  int local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (*(int *)(param_1 + 0x53c) == 0) {
    *(undefined4 *)(param_1 + 0x3a0) = 0;
    *(undefined4 *)(param_1 + 0x3a4) = 0;
    local_1c = *param_2;
    local_18 = param_2[1];
    local_14 = param_2[2];
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    *(undefined4 *)(param_1 + 0x418) = 0;
    *(undefined4 *)(param_1 + 0x41c) = 0;
    iVar3 = *(int *)(param_1 + 0x538) * 0x20;
    *(undefined4 *)(param_1 + 0x420) = 0;
    *(undefined4 *)(param_1 + 0x428) = 0;
    *(undefined4 *)(param_1 + 0x42c) = 0;
    *(undefined4 *)(param_1 + 0x430) = 0;
    *(undefined4 *)(param_1 + 0x434) = 0;
    *(undefined4 *)(param_1 + 0x438) = 0;
    *(undefined4 *)(param_1 + 0x43c) = 0;
    uStack00000010 = *(undefined4 *)(iVar3 + 0xac + param_1);
    uStack00000014 = *(undefined4 *)(iVar3 + 0xb0 + param_1);
    uStack00000018 = *(undefined4 *)(iVar3 + 0xbc + param_1);
    uStack0000001c = *(undefined4 *)(iVar3 + 0xc0 + param_1);
    puVar7 = *(undefined1 **)(param_1 + 0x6a8);
    if (*(int *)(param_1 + 0x2dc) == 0) {
      local_38 = *(int *)(param_1 + 0x5a8) * 2;
      local_3c = *(int *)(param_1 + 0x5ac) * 2;
      local_40 = *(int *)(param_1 + 0x5b0) * 2;
      local_44 = *(int *)(param_1 + 0x5b4) * 2;
    }
    else if (*(int *)(param_1 + 0x590) == 3) {
      local_48 = 0;
      local_20 = 0;
      if (0 < *(int *)(param_1 + 0x56c)) {
        do {
          local_4c = 0;
          iVar3 = local_20 + 0x10;
          if (0 < *(int *)(param_1 + 0x560)) {
            do {
              _DAT_1003f8f0 = *(int *)(param_1 + 0x54c) * 0x40 * local_48 + *param_2 + 0x180;
              iVar6 = local_4c << 4;
              *(int *)(param_1 + 0x530) = param_3;
              *(undefined1 *)(param_3 + 1) = 0;
              uVar4 = FUN_10003724(param_1,param_3,(int *)(param_1 + 0x670),iVar6,local_20);
              puVar1 = (uint *)(param_1 + 0x3a0);
              uVar5 = *puVar1;
              *puVar1 = *puVar1 + uVar4;
              *(int *)(param_1 + 0x3a4) = *(int *)(param_1 + 0x3a4) + (uint)CARRY4(uVar5,uVar4);
              (**(code **)(param_1 + 0x51c))
                        (param_1,*(undefined4 *)(param_1 + 0x638),*(undefined4 *)(param_1 + 0x654),
                         *(int *)(param_1 + 0x644),*(int *)(param_1 + 0x660),
                         *(int *)(param_1 + 0x670),iVar6,local_20,uStack00000010,uStack00000014,
                         uStack00000018,uStack0000001c,param_3);
              if ((*(byte *)(param_3 + 1) & 8) != 0) {
                uVar5 = (int)*(short *)(param_3 + 0xc) ^ (int)*(short *)(param_3 + 0xc) >> 0xf;
                if ((int)uVar5 <= (int)local_38) {
                  uVar5 = local_38;
                }
                uVar4 = (int)*(short *)(param_3 + 0xe) ^ (int)*(short *)(param_3 + 0xe) >> 0xf;
                if ((int)uVar4 <= (int)local_3c) {
                  uVar4 = local_3c;
                }
                local_3c = uVar4;
                local_38 = uVar5;
                if (*(char *)(param_3 + 2) == '\x01') {
                  local_38 = (int)*(short *)(param_3 + 0x14) ^
                             (int)*(short *)(param_3 + 0x14) >> 0xf;
                  if ((int)local_38 <= (int)uVar5) {
                    local_38 = uVar5;
                  }
                  local_3c = (int)*(short *)(param_3 + 0x16) ^
                             (int)*(short *)(param_3 + 0x16) >> 0xf;
                  if ((int)local_3c <= (int)uVar4) {
                    local_3c = uVar4;
                  }
                }
              }
              if ((*(byte *)(param_3 + 1) & 4) != 0) {
                uVar5 = (int)*(short *)(param_3 + 0x10) ^ (int)*(short *)(param_3 + 0x10) >> 0xf;
                if ((int)uVar5 <= (int)local_40) {
                  uVar5 = local_40;
                }
                uVar4 = (int)*(short *)(param_3 + 0x12) ^ (int)*(short *)(param_3 + 0x12) >> 0xf;
                if ((int)uVar4 <= (int)local_44) {
                  uVar4 = local_44;
                }
                local_44 = uVar4;
                local_40 = uVar5;
                if (*(char *)(param_3 + 2) == '\x01') {
                  local_40 = (int)*(short *)(param_3 + 0x18) ^
                             (int)*(short *)(param_3 + 0x18) >> 0xf;
                  if ((int)local_40 <= (int)uVar5) {
                    local_40 = uVar5;
                  }
                  local_44 = (int)*(short *)(param_3 + 0x1a) ^
                             (int)*(short *)(param_3 + 0x1a) >> 0xf;
                  if ((int)local_44 <= (int)uVar4) {
                    local_44 = uVar4;
                  }
                }
              }
              if ((*(byte *)(param_3 + 1) & 1) == 0) {
                if ((*(byte *)(param_3 + 1) & 0xc) == 0xc) {
                  *(int *)(param_1 + 0x420) = *(int *)(param_1 + 0x420) + 1;
                  uVar4 = *(uint *)(param_3 + 0x34);
                  puVar1 = (uint *)(param_1 + 0x438);
                  uVar5 = *puVar1;
                  *puVar1 = *puVar1 + uVar4;
                  *(int *)(param_1 + 0x43c) = *(int *)(param_1 + 0x43c) + (uint)CARRY4(uVar5,uVar4);
                }
                else {
                  *(int *)(param_1 + 0x41c) = *(int *)(param_1 + 0x41c) + 1;
                  uVar4 = *(uint *)(param_3 + 0x34);
                  puVar1 = (uint *)(param_1 + 0x430);
                  uVar5 = *puVar1;
                  *puVar1 = *puVar1 + uVar4;
                  *(int *)(param_1 + 0x434) = *(int *)(param_1 + 0x434) + (uint)CARRY4(uVar5,uVar4);
                }
              }
              else {
                *(int *)(param_1 + 0x418) = *(int *)(param_1 + 0x418) + 1;
                uVar4 = *(uint *)(param_3 + 0x34);
                puVar1 = (uint *)(param_1 + 0x428);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 + uVar4;
                *(int *)(param_1 + 0x42c) = *(int *)(param_1 + 0x42c) + (uint)CARRY4(uVar5,uVar4);
              }
              if ((*(byte *)(param_3 + 1) & 1) == 0) {
                local_1c = *(int *)(param_1 + 0x54c) * 0x40 * local_48 + *param_2;
                local_18 = local_1c + 0x100;
                local_14 = local_1c + 0x140;
                FUN_1001a4d4(param_1,(int *)(param_1 + 0x644),(int *)(param_1 + 0x660),&local_1c,
                             *(int *)(param_1 + 0x550),iVar6,local_20,*(int *)(param_1 + 0x5bc),
                             *(undefined4 *)(param_1 + 0x590),in_stack_00000020,param_3);
              }
              if (*(int *)(param_1 + 0x5bc) == 2) {
                *puVar7 = *(undefined1 *)(param_3 + 1);
                puVar7[1] = *(undefined1 *)(param_3 + 2);
                *(undefined2 *)(puVar7 + 2) = *(undefined2 *)(param_3 + 0xc);
                *(undefined2 *)(puVar7 + 4) = *(undefined2 *)(param_3 + 0xe);
                *(undefined2 *)(puVar7 + 6) = *(undefined2 *)(param_3 + 0x10);
                *(undefined2 *)(puVar7 + 8) = *(undefined2 *)(param_3 + 0x12);
                *(undefined2 *)(puVar7 + 10) = *(undefined2 *)(param_3 + 0x1c);
                *(undefined2 *)(puVar7 + 0xc) = *(undefined2 *)(param_3 + 0x1e);
              }
              else if (*(int *)(param_1 + 0x5bc) == 1) {
                *puVar7 = 0;
              }
              local_4c = local_4c + 1;
              puVar7 = puVar7 + 0xe;
              param_3 = param_3 + 0x3c;
              local_48 = local_48 + 1;
            } while (local_4c < *(int *)(param_1 + 0x560));
          }
          local_20 = iVar3;
        } while (iVar3 < *(int *)(param_1 + 0x56c));
      }
    }
    else {
      printf("FIELD_PICTURE : UNSUPPORTED");
    }
    FUN_10003414();
    if (*(int *)(param_1 + 0x5bc) - 2U < 2) {
      uVar2 = 1;
      if ((((((0xf < (int)local_38) && (uVar2 = 2, 0x1f < (int)local_38)) &&
            (uVar2 = 3, 0x3f < (int)local_38)) &&
           ((uVar2 = 4, 0x7f < (int)local_38 && (uVar2 = 5, 0xff < (int)local_38)))) &&
          ((uVar2 = 6, 0x1ff < (int)local_38 &&
           ((uVar2 = 7, 0x3ff < (int)local_38 && (uVar2 = 8, 0x7ff < (int)local_38)))))) &&
         (uVar2 = 1, (int)local_38 < 0x1000)) {
        uVar2 = 9;
      }
      *(undefined4 *)(param_1 + 0x598) = uVar2;
      iVar3 = 1;
      if (((((0xf < (int)local_3c) && (iVar3 = 2, 0x1f < (int)local_3c)) &&
           (iVar3 = 3, 0x3f < (int)local_3c)) &&
          (((iVar3 = 4, 0x7f < (int)local_3c && (iVar3 = 5, 0xff < (int)local_3c)) &&
           ((iVar3 = 6, 0x1ff < (int)local_3c &&
            ((iVar3 = 7, 0x3ff < (int)local_3c && (iVar3 = 8, 0x7ff < (int)local_3c)))))))) &&
         (iVar3 = 1, (int)local_3c < 0x1000)) {
        iVar3 = 9;
      }
      *(int *)(param_1 + 0x59c) = iVar3;
      if (*(int *)(param_1 + 0x28) < 2) {
        iVar6 = *(int *)(param_1 + 0x598);
        if (*(int *)(param_1 + 0x598) <= iVar3) {
          iVar6 = iVar3;
        }
        *(int *)(param_1 + 0x59c) = iVar6;
        *(int *)(param_1 + 0x598) = iVar6;
      }
    }
    if (*(int *)(param_1 + 0x5bc) == 3) {
      uVar2 = 1;
      if ((((0xf < (int)local_40) && (uVar2 = 2, 0x1f < (int)local_40)) &&
          (uVar2 = 3, 0x3f < (int)local_40)) &&
         (((uVar2 = 4, 0x7f < (int)local_40 && (uVar2 = 5, 0xff < (int)local_40)) &&
          (((uVar2 = 6, 0x1ff < (int)local_40 &&
            ((uVar2 = 7, 0x3ff < (int)local_40 && (uVar2 = 8, 0x7ff < (int)local_40)))) &&
           (uVar2 = 1, (int)local_40 < 0x1000)))))) {
        uVar2 = 9;
      }
      *(undefined4 *)(param_1 + 0x5a0) = uVar2;
      iVar3 = 1;
      if ((((((0xf < (int)local_44) && (iVar3 = 2, 0x1f < (int)local_44)) &&
            (iVar3 = 3, 0x3f < (int)local_44)) &&
           ((iVar3 = 4, 0x7f < (int)local_44 && (iVar3 = 5, 0xff < (int)local_44)))) &&
          ((iVar3 = 6, 0x1ff < (int)local_44 &&
           ((iVar3 = 7, 0x3ff < (int)local_44 && (iVar3 = 8, 0x7ff < (int)local_44)))))) &&
         (iVar3 = 1, (int)local_44 < 0x1000)) {
        iVar3 = 9;
      }
      *(int *)(param_1 + 0x5a4) = iVar3;
      if (*(int *)(param_1 + 0x28) < 2) {
        iVar6 = *(int *)(param_1 + 0x5a0);
        if (*(int *)(param_1 + 0x5a0) <= iVar3) {
          iVar6 = iVar3;
        }
        *(int *)(param_1 + 0x5a4) = iVar6;
        *(int *)(param_1 + 0x5a0) = iVar6;
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_10003a48(param_1,param_2,param_3);
  }
  return uVar2;
}


