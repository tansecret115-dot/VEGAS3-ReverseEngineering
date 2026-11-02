/* Module: vegas30.exe
   Function: FUN_00402580
   Address: 00402580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00402580(int *param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int local_3c;
  int local_38;
  int local_34 [3];
  undefined1 local_28 [40];
  
  local_34[0] = 0;
  local_38 = 0;
  iVar6 = *param_1;
  iVar5 = *param_2;
  uVar7 = 1;
  local_3c = iVar6;
  local_34[2] = iVar5;
  if (iVar5 < iVar6) {
    do {
      puVar2 = (uint *)(param_1[1] * iVar5 + param_1[2]);
      uVar1 = *puVar2;
      if (uVar1 < 0x9ca6) {
        if (uVar1 == 0x9ca5) {
          uVar7 = FUN_004ec280(&local_38,puVar2[2],0,0,0,0xffffffff,0xffffffff,0,0xffffffff,0,0,0);
        }
        else {
          switch(uVar1) {
          case 0:
            iVar6 = iVar5 + 1;
            local_3c = iVar6;
            break;
          case 1:
            DAT_0064761c = DAT_0064761c | 0x10;
            break;
          case 2:
            uVar7 = 1;
            DAT_0064761c = DAT_0064761c & 0xffffffbf | 0x80;
            break;
          case 3:
            uVar7 = 1;
            DAT_0064761c = DAT_0064761c | 0xc0;
            break;
          case 5:
            uVar7 = FUN_00402790(puVar2[2]);
          }
        }
      }
      else if (0x9ca7 < uVar1) {
        if (uVar1 < 0x9caa) {
          local_34[0] = 1;
        }
        else if (uVar1 == 0x9cb1) {
          DAT_0064761c = DAT_0064761c | 0x20;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
    if (local_38 != 0) {
      FUN_004ec630(local_38,1,0,0);
      FUN_004ec820(local_38);
    }
    if (local_34[0] != 0) {
      uVar3 = 0;
      uVar4 = 0;
      local_34[0] = 0;
      local_34[1] = 0;
      iVar6 = local_34[2];
      if (local_34[2] < local_3c) {
        do {
          uVar1 = *(uint *)(param_1[1] * iVar6 + param_1[2]);
          iVar5 = param_1[1] * iVar6 + param_1[2];
          if (uVar1 < 0x9ca9) {
            if (uVar1 == 0x9ca8) {
              FUN_005362f0(*(undefined4 *)(iVar5 + 8));
            }
            else if (uVar1 == 10) {
              uVar3 = *(undefined4 *)(iVar5 + 8);
            }
            else if (uVar1 == 0xb) {
              uVar4 = FUN_0042f0c0(local_28,*(undefined4 *)(iVar5 + 8));
            }
          }
          else if (uVar1 == 0x9ca9) {
            FUN_00536050(*(undefined4 *)(iVar5 + 8),0,uVar3,uVar4,local_34,0);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_3c);
        *param_2 = local_3c;
        return uVar7;
      }
      *param_2 = local_3c;
      return uVar7;
    }
  }
  *param_2 = iVar6;
  return uVar7;
}


