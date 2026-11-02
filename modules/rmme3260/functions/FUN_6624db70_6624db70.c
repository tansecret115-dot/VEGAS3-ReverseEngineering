/* Module: rmme3260.dll
   Function: FUN_6624db70
   Address: 6624db70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6624db70(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  BITMAPINFO *pBVar7;
  void *pvVar8;
  undefined4 local_b4 [4];
  undefined4 local_a4;
  undefined4 local_90;
  tagPOINT local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  tagRECT local_2c;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar1 = param_1;
  if (DAT_6627cedc != 0) {
    if (param_1 == (undefined4 *)0x0) {
      return 0x80004005;
    }
    if ((*(byte *)(param_1 + 0x112) & 1) == 0) {
      return 0x80004005;
    }
    if (param_2 == (int *)0x0) {
      return 0x80004005;
    }
    if (*param_2 == 0) {
      return 0x80004005;
    }
    iVar2 = FUN_6624e0b0((int)param_1,(int)param_2);
    if (iVar2 == 0) {
      return 0x80004005;
    }
    if ((param_1[0x110] == 0) && ((*(byte *)(param_1 + 0x112) & 8) != 0)) {
      if ((uint)param_1[0x114] < 2) {
        iVar2 = FUN_6624e360(param_1,(int)param_2,&local_14,&local_2c,&local_48);
        if (iVar2 == 0) {
          return 0;
        }
        local_1c = local_2c.right - local_2c.left;
        local_18 = local_2c.bottom - local_2c.top;
        iVar2 = local_c - local_14;
        local_30 = local_8 - local_10;
        if (((*(byte *)(param_1 + 0x112) & 0x10) == 0) &&
           ((iVar2 != local_1c || (local_30 != local_18)))) {
          if (((param_1[0x10f] == 0) || (local_1c != iVar2 * 2)) || (local_18 != local_30 * 2))
          goto LAB_6624dee7;
          param_1 = (undefined4 *)0x2;
          local_38 = local_c * 2;
          local_40 = local_14 * 2;
          local_34 = local_8 * 2;
          local_3c = local_10 * 2;
          while( true ) {
            puVar6 = local_b4;
            for (iVar5 = 0x1b; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            local_b4[0] = 0x6c;
            iVar5 = (**(code **)(*(int *)puVar1[0x22d] + 100))((int *)puVar1[0x22d],0,local_b4,1,0);
            if (iVar5 == 0) {
              iVar3 = (*(code *)puVar1[0x230])
                                (local_90,local_b4[3],local_b4[2],local_a4,local_40,local_3c,
                                 local_1c,local_18,*param_2,puVar1[2],puVar1[3],puVar1[0x10b],
                                 local_14,local_10,iVar2,local_30);
              iVar5 = (**(code **)(*(int *)puVar1[0x22d] + 0x80))((int *)puVar1[0x22d],0);
              if (iVar5 == 0) {
                if (iVar3 == 0) {
                  iVar5 = FUN_6624e580((int)puVar1,&local_40,&local_2c.left);
                }
                else {
                  iVar5 = -0x7fffbffb;
                }
              }
            }
            if ((iVar5 != -0x7789fe3e) ||
               (param_1 = (undefined4 *)((int)param_1 + -1), param_1 == (undefined4 *)0x0)) break;
            (**(code **)(*(int *)puVar1[0x22c] + 0x6c))((int *)puVar1[0x22c]);
            (**(code **)(*(int *)puVar1[0x22d] + 0x6c))((int *)puVar1[0x22d]);
          }
        }
        else {
          param_1 = (undefined4 *)0x2;
          while( true ) {
            puVar6 = local_b4;
            for (iVar5 = 0x1b; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            local_b4[0] = 0x6c;
            iVar5 = (**(code **)(*(int *)puVar1[0x22d] + 100))((int *)puVar1[0x22d],0,local_b4,1,0);
            if (iVar5 == 0) {
              iVar3 = (*(code *)puVar1[0x230])
                                (local_90,local_b4[3],local_b4[2],local_a4,local_14,local_10,iVar2,
                                 local_30,*param_2,puVar1[2],puVar1[3],puVar1[0x10b],local_14,
                                 local_10,iVar2,local_30);
              iVar5 = (**(code **)(*(int *)puVar1[0x22d] + 0x80))((int *)puVar1[0x22d],0);
              if (iVar5 == 0) {
                if (iVar3 == 0) {
                  iVar5 = FUN_6624e580((int)puVar1,&local_14,&local_2c.left);
                }
                else {
                  iVar5 = -0x7fffbffb;
                }
              }
            }
            if ((iVar5 != -0x7789fe3e) ||
               (param_1 = (undefined4 *)((int)param_1 + -1), param_1 == (undefined4 *)0x0)) break;
            (**(code **)(*(int *)puVar1[0x22c] + 0x6c))((int *)puVar1[0x22c]);
            (**(code **)(*(int *)puVar1[0x22d] + 0x6c))((int *)puVar1[0x22d]);
          }
        }
        if (iVar5 == 0) {
          if (puVar1[0x111] != 0) {
            FUN_6624e6e0(puVar1,(int)param_2);
          }
          if (puVar1[0x114] == 0) {
            return 0;
          }
          puVar1[0x114] = 0;
          return 0;
        }
        iVar2 = puVar1[0x113];
        puVar1[0x113] = iVar2 + 1;
        puVar1[0x114] = (iVar2 + 1) * 10;
      }
      else {
        param_1[0x114] = param_1[0x114] - 1;
      }
    }
  }
LAB_6624dee7:
  iVar2 = FUN_6624e120(puVar1,(int)param_2,&local_14,&local_2c.left);
  if (iVar2 == 0) {
    return 0;
  }
  if ((*(byte *)(puVar1 + 0x112) & 2) == 0) {
    pvVar8 = (void *)*param_2;
    pBVar7 = (BITMAPINFO *)(puVar1 + 1);
  }
  else {
    local_1c = local_2c.right - local_2c.left;
    local_18 = local_2c.bottom - local_2c.top;
    iVar2 = local_c - local_14;
    iVar5 = local_8 - local_10;
    if (((puVar1[0x10f] != 0) && (local_1c == iVar2 * 2)) && (local_18 == iVar5 * 2)) {
      local_38 = local_c * 2;
      local_40 = local_14 * 2;
      local_34 = local_8 * 2;
      local_3c = local_10 * 2;
      iVar3 = (*(code *)puVar1[0x22a])
                        (puVar1[0x229],puVar1[0x11f],puVar1[0x120],puVar1[0x228],local_40,local_3c,
                         local_1c,local_18,*param_2,puVar1[2],puVar1[3],puVar1[0x10b],local_14,
                         local_10,iVar2,iVar5);
      if (iVar3 == 0) {
        uVar4 = FUN_6624e430(puVar1,(BITMAPINFO *)(puVar1 + 0x11e),(void *)puVar1[0x229],&local_40,
                             &local_2c.left);
        if (uVar4 == 0) {
          return 0x80004005;
        }
        return 0;
      }
    }
    iVar2 = (*(code *)puVar1[0x22a])
                      (puVar1[0x229],puVar1[0x11f],puVar1[0x120],puVar1[0x228],local_14,local_10,
                       iVar2,iVar5,*param_2,puVar1[2],puVar1[3],puVar1[0x10b],local_14,local_10,
                       iVar2,iVar5);
    if (iVar2 != 0) {
      return 0x80004005;
    }
    pvVar8 = (void *)puVar1[0x229];
    pBVar7 = (BITMAPINFO *)(puVar1 + 0x11e);
  }
  uVar4 = FUN_6624e430(puVar1,pBVar7,pvVar8,&local_14,&local_2c.left);
  if (uVar4 == 0) {
    return 0x80004005;
  }
  return 0;
}


