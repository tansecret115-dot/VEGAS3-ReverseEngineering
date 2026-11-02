/* Module: rmto3260.dll
   Function: FUN_662c93a0
   Address: 662c93a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c93a0(int param_1,int *param_2,undefined4 *param_3,undefined1 *param_4,uint param_5)

{
  byte bVar1;
  int *piVar2;
  undefined4 *this;
  bool bVar3;
  undefined4 *puVar4;
  undefined3 extraout_var;
  undefined1 *puVar5;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *this_00;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  this = param_3;
  iVar9 = *(int *)(param_1 + 0x48);
  local_8 = 0;
  if (iVar9 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(undefined4 *)(iVar9 + 0x10);
  }
  local_20 = *(int *)(iVar9 + 4);
  local_c = 0;
  local_1c = 0;
  if ((ushort)local_10 != 0) {
    do {
      iVar9 = local_1c;
      if (local_8 < 0) {
        return local_8;
      }
      puVar4 = (undefined4 *)FUN_662ed930(&local_20);
      piVar2 = (int *)*puVar4;
      if ((short)iVar9 != 0) {
        local_8 = (**(code **)(*piVar2 + 0x30))(piVar2,(int)&param_3 + 2);
        this_00 = extraout_ECX;
        if (-1 < local_8) {
          iVar9 = 0;
          if (param_3._2_2_ != 0) {
            do {
              if (local_c != 0) goto LAB_662c9461;
              if (local_8 < 0) break;
              local_8 = (**(code **)(*piVar2 + 0x38))(piVar2,iVar9,&local_14);
              this_00 = extraout_ECX_00;
              if (-1 < local_8) {
                bVar3 = FUN_662c7240(param_2,local_14);
                local_c = CONCAT31(extraout_var,bVar3);
                this_00 = extraout_ECX_01;
              }
              iVar9 = iVar9 + 1;
            } while ((ushort)iVar9 < param_3._2_2_);
          }
          if (local_c == 0) {
            local_8 = -0x7ffbff7f;
          }
        }
LAB_662c9461:
        if (-1 < local_8) {
          iVar9 = *local_14;
          local_18 = 0;
          FUN_662d0ed0(this_00,iVar9,&local_18);
          if (local_18 != 0) {
            if (*(uint *)((int)this + 0x32) < *(uint *)(iVar9 + 0x32)) {
              if (*(uint *)((int)this + 0x32) == 0x22) {
                uVar6 = this[1] + -0x22 + *(uint *)(iVar9 + 0x32);
                if (param_5 < uVar6) {
                  local_8 = -0x7ffbfff3;
                }
                else {
                  this[1] = uVar6;
                  *(undefined4 *)((int)this + 0x32) = *(undefined4 *)(iVar9 + 0x32);
                  *(undefined4 *)((int)this + 0x36) = *(undefined4 *)(iVar9 + 0x36);
                  *param_4 = (char)((uint)*this >> 0x18);
                  param_4[1] = (char)((uint)*this >> 0x10);
                  param_4[2] = (char)((uint)*this >> 8);
                  param_4[3] = *(undefined1 *)this;
                  param_4[4] = (char)((uint)this[1] >> 0x18);
                  param_4[5] = (char)((uint)this[1] >> 0x10);
                  param_4[6] = (char)((uint)this[1] >> 8);
                  param_4[7] = *(undefined1 *)(this + 1);
                  param_4[8] = *(undefined1 *)((int)this + 9);
                  param_4[9] = *(undefined1 *)(this + 2);
                  if (*(short *)(this + 2) == 0) {
                    param_4[10] = *(undefined1 *)((int)this + 0xb);
                    param_4[0xb] = *(undefined1 *)((int)this + 10);
                    param_4[0xc] = (char)((uint)this[3] >> 0x18);
                    param_4[0xd] = (char)((uint)this[3] >> 0x10);
                    param_4[0xe] = (char)((uint)this[3] >> 8);
                    param_4[0xf] = *(undefined1 *)(this + 3);
                    param_4[0x10] = (char)((uint)this[4] >> 0x18);
                    param_4[0x11] = (char)((uint)this[4] >> 0x10);
                    param_4[0x12] = (char)((uint)this[4] >> 8);
                    param_4[0x13] = *(undefined1 *)(this + 4);
                    param_4[0x14] = (char)((uint)this[5] >> 0x18);
                    param_4[0x15] = (char)((uint)this[5] >> 0x10);
                    param_4[0x16] = (char)((uint)this[5] >> 8);
                    param_4[0x17] = *(undefined1 *)(this + 5);
                    param_4[0x18] = (char)((uint)this[6] >> 0x18);
                    param_4[0x19] = (char)((uint)this[6] >> 0x10);
                    param_4[0x1a] = (char)((uint)this[6] >> 8);
                    param_4[0x1b] = *(undefined1 *)(this + 6);
                    param_4[0x1c] = (char)((uint)this[7] >> 0x18);
                    param_4[0x1d] = (char)((uint)this[7] >> 0x10);
                    param_4[0x1e] = (char)((uint)this[7] >> 8);
                    param_4[0x1f] = *(undefined1 *)(this + 7);
                    param_4[0x20] = (char)((uint)this[8] >> 0x18);
                    param_4[0x21] = (char)((uint)this[8] >> 0x10);
                    param_4[0x22] = (char)((uint)this[8] >> 8);
                    param_4[0x23] = *(undefined1 *)(this + 8);
                    param_4[0x24] = (char)((uint)this[9] >> 0x18);
                    param_4[0x25] = (char)((uint)this[9] >> 0x10);
                    param_4[0x26] = (char)((uint)this[9] >> 8);
                    param_4[0x27] = *(undefined1 *)(this + 9);
                    param_4[0x28] = *(undefined1 *)(this + 10);
                    bVar1 = *(byte *)(this + 10);
                    puVar4 = *(undefined4 **)((int)this + 0x29);
                    puVar8 = (undefined4 *)(param_4 + 0x29);
                    for (uVar6 = (uint)(bVar1 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
                      *puVar8 = *puVar4;
                      puVar4 = puVar4 + 1;
                      puVar8 = puVar8 + 1;
                    }
                    for (uVar6 = bVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                      *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
                      puVar4 = (undefined4 *)((int)puVar4 + 1);
                      puVar8 = (undefined4 *)((int)puVar8 + 1);
                    }
                    puVar5 = (undefined1 *)((int)(param_4 + 0x29) + (uint)*(byte *)(this + 10));
                    *puVar5 = *(undefined1 *)((int)this + 0x2d);
                    bVar1 = *(byte *)((int)this + 0x2d);
                    puVar4 = (undefined4 *)(puVar5 + 1);
                    puVar8 = *(undefined4 **)((int)this + 0x2e);
                    puVar10 = puVar4;
                    for (uVar6 = (uint)(bVar1 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
                      *puVar10 = *puVar8;
                      puVar8 = puVar8 + 1;
                      puVar10 = puVar10 + 1;
                    }
                    for (uVar6 = bVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                      *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
                      puVar8 = (undefined4 *)((int)puVar8 + 1);
                      puVar10 = (undefined4 *)((int)puVar10 + 1);
                    }
                    puVar4 = (undefined4 *)((int)puVar4 + (uint)*(byte *)((int)this + 0x2d));
                    *(char *)puVar4 = (char)((uint)*(undefined4 *)((int)this + 0x32) >> 0x18);
                    *(char *)((int)puVar4 + 1) =
                         (char)((uint)*(undefined4 *)((int)this + 0x32) >> 0x10);
                    *(char *)((int)puVar4 + 2) =
                         (char)((uint)*(undefined4 *)((int)this + 0x32) >> 8);
                    *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)this + 0x32);
                    uVar6 = *(uint *)((int)this + 0x32);
                    puVar8 = *(undefined4 **)((int)this + 0x36);
                    for (uVar7 = uVar6 >> 2; puVar4 = puVar4 + 1, uVar7 != 0; uVar7 = uVar7 - 1) {
                      *puVar4 = *puVar8;
                      puVar8 = puVar8 + 1;
                    }
                    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                      *(undefined1 *)puVar4 = *(undefined1 *)puVar8;
                      puVar8 = (undefined4 *)((int)puVar8 + 1);
                      puVar4 = (undefined4 *)((int)puVar4 + 1);
                    }
                  }
                }
              }
              else {
                local_8 = -0x7ffbfff7;
              }
            }
          }
          if ((uint)this[3] < *(uint *)(iVar9 + 0xc)) {
            this[3] = *(uint *)(iVar9 + 0xc);
          }
          if ((uint)this[4] < *(uint *)(iVar9 + 0x10)) {
            this[4] = *(uint *)(iVar9 + 0x10);
          }
          if ((uint)this[5] < *(uint *)(iVar9 + 0x14)) {
            this[5] = *(uint *)(iVar9 + 0x14);
          }
          if ((uint)this[4] < *(uint *)(iVar9 + 0x10)) {
            this[4] = *(uint *)(iVar9 + 0x10);
          }
          if ((uint)this[8] < *(uint *)(iVar9 + 0x20)) {
            this[8] = *(uint *)(iVar9 + 0x20);
          }
        }
      }
      local_1c = local_1c + 1;
    } while ((ushort)local_1c < (ushort)local_10);
  }
  iVar9 = local_8;
  if (-1 < local_8) {
    param_1 = 0;
    FUN_662c9730(this,param_4,&param_1);
  }
  return iVar9;
}


