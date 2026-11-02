/* Module: rmto3260.dll
   Function: FUN_662d4a10
   Address: 662d4a10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d4a10(int *param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  void *pvVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  byte *pbVar9;
  int *this;
  byte *pbVar10;
  undefined1 local_74 [10];
  undefined2 local_6a;
  int local_50;
  undefined4 local_38 [2];
  undefined2 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined4 local_20;
  byte *local_1c;
  uint local_18;
  int *local_14;
  byte *local_10;
  void *local_c;
  byte *local_8;
  
  this = (int *)0x0;
  local_c = (void *)0x0;
  local_10 = (byte *)0x0;
  local_14 = (int *)0x0;
  iVar4 = (**(code **)(*param_1 + 0x54))(param_1);
  if (-1 < iVar4) {
    this = FUN_662e2f80((char *)param_1[10]);
    if (this == (int *)0x0) {
      iVar4 = -0x7ffbff7f;
    }
    local_14 = this;
    if (-1 < iVar4) {
      *(short *)(param_1 + 0x15) = (short)param_1[0x15] + 1;
      iVar4 = (**(code **)(*param_1 + 0x5c))(param_1,param_1[10],(short)param_1[0x15],1,1);
      if ((-1 < iVar4) && (iVar4 = (**(code **)(*param_2 + 0x10))(param_2,&local_18), -1 < iVar4)) {
        local_c = operator_new(local_18);
        if (local_c == (void *)0x0) {
          iVar4 = -0x7ff8fff2;
        }
        if (-1 < iVar4) {
          iVar4 = (**(code **)(*param_2 + 0xc))(param_2,&local_1c,&local_8);
          if ((-1 < iVar4) && (local_10 = operator_new((uint)local_8), local_10 == (byte *)0x0)) {
            iVar4 = -0x7ff8fff2;
          }
          pbVar2 = local_10;
          if (-1 < iVar4) {
            *local_10 = (byte)((uint)*(undefined4 *)local_1c >> 0x18);
            local_10[1] = (byte)((uint)*(undefined4 *)local_1c >> 0x10);
            local_10[2] = (byte)((uint)*(undefined4 *)local_1c >> 8);
            local_10[3] = *local_1c;
            local_10[4] = (byte)((uint)*(undefined4 *)(local_1c + 4) >> 0x18);
            local_10[5] = (byte)((uint)*(undefined4 *)(local_1c + 4) >> 0x10);
            local_10[6] = (byte)((uint)*(undefined4 *)(local_1c + 4) >> 8);
            local_10[7] = local_1c[4];
            local_10[8] = local_1c[9];
            local_10[9] = local_1c[8];
            local_8 = local_10 + 10;
            if (*(short *)(local_1c + 8) == 0) {
              local_10[10] = local_1c[0xb];
              local_10[0xb] = local_1c[10];
              local_10[0xc] = (byte)((uint)*(undefined4 *)(local_1c + 0xc) >> 0x18);
              local_10[0xd] = (byte)((uint)*(undefined4 *)(local_1c + 0xc) >> 0x10);
              local_10[0xe] = (byte)((uint)*(undefined4 *)(local_1c + 0xc) >> 8);
              local_10[0xf] = local_1c[0xc];
              local_10[0x10] = (byte)((uint)*(undefined4 *)(local_1c + 0x10) >> 0x18);
              local_10[0x11] = (byte)((uint)*(undefined4 *)(local_1c + 0x10) >> 0x10);
              local_10[0x12] = (byte)((uint)*(undefined4 *)(local_1c + 0x10) >> 8);
              local_10[0x13] = local_1c[0x10];
              local_10[0x14] = (byte)((uint)*(undefined4 *)(local_1c + 0x14) >> 0x18);
              local_10[0x15] = (byte)((uint)*(undefined4 *)(local_1c + 0x14) >> 0x10);
              local_10[0x16] = (byte)((uint)*(undefined4 *)(local_1c + 0x14) >> 8);
              local_10[0x17] = local_1c[0x14];
              local_10[0x18] = (byte)((uint)*(undefined4 *)(local_1c + 0x18) >> 0x18);
              local_10[0x19] = (byte)((uint)*(undefined4 *)(local_1c + 0x18) >> 0x10);
              local_10[0x1a] = (byte)((uint)*(undefined4 *)(local_1c + 0x18) >> 8);
              local_10[0x1b] = local_1c[0x18];
              local_10[0x1c] = (byte)((uint)*(undefined4 *)(local_1c + 0x1c) >> 0x18);
              local_10[0x1d] = (byte)((uint)*(undefined4 *)(local_1c + 0x1c) >> 0x10);
              local_10[0x1e] = (byte)((uint)*(undefined4 *)(local_1c + 0x1c) >> 8);
              local_10[0x1f] = local_1c[0x1c];
              local_10[0x20] = (byte)((uint)*(undefined4 *)(local_1c + 0x20) >> 0x18);
              local_10[0x21] = (byte)((uint)*(undefined4 *)(local_1c + 0x20) >> 0x10);
              local_10[0x22] = (byte)((uint)*(undefined4 *)(local_1c + 0x20) >> 8);
              local_10[0x23] = local_1c[0x20];
              local_10[0x24] = (byte)((uint)*(undefined4 *)(local_1c + 0x24) >> 0x18);
              local_10[0x25] = (byte)((uint)*(undefined4 *)(local_1c + 0x24) >> 0x10);
              local_10[0x26] = (byte)((uint)*(undefined4 *)(local_1c + 0x24) >> 8);
              local_10[0x27] = local_1c[0x24];
              local_10[0x28] = local_1c[0x28];
              pbVar5 = local_10 + 0x29;
              bVar1 = local_1c[0x28];
              pbVar9 = *(byte **)(local_1c + 0x29);
              pbVar10 = pbVar5;
              for (uVar6 = (uint)(bVar1 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined4 *)pbVar10 = *(undefined4 *)pbVar9;
                pbVar9 = pbVar9 + 4;
                pbVar10 = pbVar10 + 4;
              }
              for (uVar6 = bVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *pbVar10 = *pbVar9;
                pbVar9 = pbVar9 + 1;
                pbVar10 = pbVar10 + 1;
              }
              pbVar5 = pbVar5 + local_1c[0x28];
              *pbVar5 = local_1c[0x2d];
              bVar1 = local_1c[0x2d];
              pbVar9 = *(byte **)(local_1c + 0x2e);
              pbVar10 = pbVar5 + 1;
              for (uVar6 = (uint)(bVar1 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined4 *)pbVar10 = *(undefined4 *)pbVar9;
                pbVar9 = pbVar9 + 4;
                pbVar10 = pbVar10 + 4;
              }
              for (uVar6 = bVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *pbVar10 = *pbVar9;
                pbVar9 = pbVar9 + 1;
                pbVar10 = pbVar10 + 1;
              }
              pbVar5 = pbVar5 + 1 + local_1c[0x2d];
              *pbVar5 = (byte)((uint)*(undefined4 *)(local_1c + 0x32) >> 0x18);
              pbVar5[1] = (byte)((uint)*(undefined4 *)(local_1c + 0x32) >> 0x10);
              pbVar5[2] = (byte)((uint)*(undefined4 *)(local_1c + 0x32) >> 8);
              pbVar5[3] = local_1c[0x32];
              uVar6 = *(uint *)(local_1c + 0x32);
              pbVar9 = *(byte **)(local_1c + 0x36);
              pbVar10 = pbVar5 + 4;
              for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined4 *)pbVar10 = *(undefined4 *)pbVar9;
                pbVar9 = pbVar9 + 4;
                pbVar10 = pbVar10 + 4;
              }
              for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *pbVar10 = *pbVar9;
                pbVar9 = pbVar9 + 1;
                pbVar10 = pbVar10 + 1;
              }
              local_8 = pbVar5 + 4 + *(int *)(local_1c + 0x32);
              this = local_14;
            }
            local_8 = local_8 + -(int)local_10;
            FUN_662ca8d0(local_74,local_10,local_8);
            local_50 = param_1[0x13];
            local_6a = 0;
            FUN_662c9730(local_74,pbVar2,(int *)&local_8);
            iVar4 = (**(code **)(*this + 0x1c))(local_8,pbVar2);
            if (-1 < iVar4) {
              if (param_1[0xb] != 0) {
                (**(code **)(*this + 0x1c))(param_1[0xc],param_1[0xb]);
              }
              FUN_662e30f0(this,*(ushort *)((int)param_1 + 0x56));
              iVar4 = (**(code **)(*this + 0x20))();
            }
          }
        }
      }
    }
  }
  FUN_662e2a70(&local_2c);
  do {
    pvVar3 = local_c;
    pvVar8 = pvVar3;
    if (iVar4 < 0) {
LAB_662d4d98:
      if (this != (int *)0x0) {
        (**(code **)(*this + 0x24))();
        (**(code **)*this)(1);
      }
      if (local_10 != (byte *)0x0) {
        operator_delete(local_10);
      }
      if (pvVar8 != (void *)0x0) {
        operator_delete(pvVar8);
      }
      return iVar4;
    }
    iVar4 = (**(code **)(*param_2 + 0x14))(param_2,local_38,local_c,local_18,&local_20);
    if (iVar4 == -0x7ffbfc36) {
      iVar4 = 0;
      goto LAB_662d4d98;
    }
    pvVar8 = local_c;
    if (iVar4 < 0) goto LAB_662d4d98;
    local_2c = local_38[0];
    local_28 = 0;
    local_26 = 0;
    local_24 = local_30;
    iVar4 = (**(code **)(*this + 0x2c))(&local_2c,pvVar3,local_20);
  } while( true );
}


