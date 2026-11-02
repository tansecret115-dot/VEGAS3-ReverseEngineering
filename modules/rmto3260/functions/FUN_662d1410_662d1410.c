/* Module: rmto3260.dll
   Function: FUN_662d1410
   Address: 662d1410
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d1410(int *param_1)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 local_a4 [18];
  int local_5c [3];
  uint local_50;
  uint local_4c;
  short local_48;
  undefined2 local_46;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  byte local_28;
  undefined3 uStack_27;
  undefined1 uStack_24;
  byte local_23;
  undefined3 uStack_22;
  undefined1 uStack_1f;
  uint local_1e;
  byte *local_1a;
  int *local_14;
  byte *local_10;
  int local_c;
  int local_8;
  
  piVar2 = param_1;
  iVar7 = 0;
  local_c = 0;
  local_8 = 0;
  if ((param_1[5] == 0) || (param_1[9] == 0)) {
    iVar7 = -0x7ffbfff9;
  }
  if ((-1 < iVar7) && (iVar7 = (**(code **)(*param_1 + 0x28))(param_1), -1 < iVar7)) {
    local_14 = (int *)(uint)*(ushort *)(param_1[10] + 0x6e);
  }
  param_1 = (int *)0x0;
  if (local_14 != (int *)0x0) {
    do {
      if (iVar7 < 0) break;
      pbVar3 = (byte *)FUN_662e3080((void *)piVar2[10],(uint)param_1,&local_10);
      if (pbVar3 != (byte *)0x0) {
        if (local_10 != (byte *)0x0) {
          local_50 = (uint)*pbVar3 << 0x18 | (uint)pbVar3[1] << 0x10 | (uint)pbVar3[2] << 8 |
                     (uint)pbVar3[3];
          local_4c = (uint)pbVar3[4] << 0x18 | (uint)pbVar3[5] << 0x10 | (uint)pbVar3[6] << 8 |
                     (uint)pbVar3[7];
          local_48 = CONCAT11(pbVar3[8],pbVar3[9]);
          if (local_48 == 0) {
            local_46 = CONCAT11(pbVar3[10],pbVar3[0xb]);
            local_44 = (uint)pbVar3[0xc] << 0x18 | (uint)pbVar3[0xd] << 0x10 |
                       (uint)pbVar3[0xe] << 8 | (uint)pbVar3[0xf];
            local_40 = (uint)pbVar3[0x10] << 0x18 | (uint)pbVar3[0x11] << 0x10 |
                       (uint)pbVar3[0x12] << 8 | (uint)pbVar3[0x13];
            local_3c = (uint)pbVar3[0x14] << 0x18 | (uint)pbVar3[0x15] << 0x10 |
                       (uint)pbVar3[0x16] << 8 | (uint)pbVar3[0x17];
            local_38 = (uint)pbVar3[0x18] << 0x18 | (uint)pbVar3[0x19] << 0x10 |
                       (uint)pbVar3[0x1a] << 8 | (uint)pbVar3[0x1b];
            local_34 = (uint)pbVar3[0x1c] << 0x18 | (uint)pbVar3[0x1d] << 0x10 |
                       (uint)pbVar3[0x1e] << 8 | (uint)pbVar3[0x1f];
            local_30 = (uint)pbVar3[0x20] << 0x18 | (uint)pbVar3[0x21] << 0x10 |
                       (uint)pbVar3[0x22] << 8 | (uint)pbVar3[0x23];
            local_2c = (uint)pbVar3[0x24] << 0x18 | (uint)pbVar3[0x25] << 0x10 |
                       (uint)pbVar3[0x26] << 8 | (uint)pbVar3[0x27];
            bVar1 = pbVar3[0x28];
            pbVar4 = pbVar3 + 0x29;
            _local_28 = CONCAT31(uStack_27,bVar1);
            pbVar6 = pbVar4 + bVar1;
            if ((int)pbVar6 - (int)pbVar3 <= (int)local_10) {
              uStack_27 = SUB43(pbVar4,0);
              _local_28 = CONCAT31(uStack_27,bVar1);
              uStack_24 = (undefined1)((uint)pbVar4 >> 0x18);
              bVar1 = *pbVar6;
              _local_23 = CONCAT31(uStack_22,bVar1);
              pbVar6 = pbVar6 + 1;
              pbVar4 = pbVar6 + bVar1;
              if ((int)pbVar4 - (int)pbVar3 <= (int)local_10) {
                uStack_22 = SUB43(pbVar6,0);
                _local_23 = CONCAT31(uStack_22,bVar1);
                uStack_1f = (undefined1)((uint)pbVar6 >> 0x18);
                local_1e = (uint)*pbVar4 << 0x18 | (uint)pbVar4[1] << 0x10 | (uint)pbVar4[2] << 8 |
                           (uint)pbVar4[3];
                if (pbVar4 + 4 + (local_1e - (int)pbVar3) <= local_10) {
                  local_1a = pbVar4 + 4;
                }
              }
            }
          }
        }
        FUN_662dec30(local_a4);
        iVar7 = FUN_662de510(local_a4,pbVar3,local_10);
        if (-1 < iVar7) {
          FUN_662dedc0(local_a4,local_5c);
          iVar5 = FUN_662ef820(local_5c,s_application_x_pn_realevent_6630a0bc);
          if (iVar5 == 0) {
            iVar7 = (**(code **)(*piVar2 + 0x40))(piVar2,&local_50);
            if (-1 < iVar7) {
              local_c = 1;
            }
          }
          else {
            iVar5 = FUN_662ef820(local_5c,s_application_x_pn_imagemap_6630a0fc);
            if ((iVar5 == 0) &&
               (iVar7 = (**(code **)(*piVar2 + 0x44))(piVar2,&local_50), -1 < iVar7)) {
              local_8 = 1;
            }
          }
          FUN_662ef0f0(local_5c);
        }
        FUN_662dec80(local_a4);
      }
      param_1 = (int *)((int)param_1 + 1);
    } while (param_1 < local_14);
  }
  if (local_c == 0) {
    if (local_8 == 0) {
      iVar7 = -0x7ffbfc2f;
    }
    else {
      iVar7 = -0x7ffbfc2e;
    }
  }
  else if (local_8 == 0) {
    iVar7 = -0x7ffbfc2d;
  }
  if ((undefined4 *)piVar2[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)piVar2[10])(1);
    piVar2[10] = 0;
  }
  return iVar7;
}


