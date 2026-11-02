/* Module: rmto3260.dll
   Function: FUN_662e4f80
   Address: 662e4f80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662e4f80(void *this,byte *param_1,byte *param_2)

{
  short *psVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  void *pvVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *local_14;
  undefined4 local_10;
  byte *local_c;
  byte *local_8;
  
  pbVar6 = param_1;
  local_8 = (byte *)0x0;
  local_c = (byte *)0x0;
  local_10 = 0;
  if (param_1 == (byte *)0x0) {
    return -1;
  }
  puVar4 = operator_new(10);
  if (puVar4 == (uint *)0x0) {
    return -0x7ff8fff2;
  }
  if (param_2 == (byte *)0x0) {
    pbVar7 = (byte *)0x0;
  }
  else {
    bVar2 = *pbVar6;
    *puVar4 = (uint)bVar2 << 0x18;
    *puVar4 = (uint)pbVar6[1] << 0x10 | (uint)bVar2 << 0x18;
    uVar8 = *puVar4 | (uint)pbVar6[2] << 8;
    *puVar4 = uVar8;
    *puVar4 = uVar8 | pbVar6[3];
    puVar4[1] = (uint)pbVar6[4] << 0x18;
    uVar8 = puVar4[1] | (uint)pbVar6[5] << 0x10;
    puVar4[1] = uVar8;
    uVar8 = uVar8 | (uint)pbVar6[6] << 8;
    puVar4[1] = uVar8;
    puVar4[1] = uVar8 | pbVar6[7];
    *(ushort *)(puVar4 + 2) = (ushort)pbVar6[8] << 8;
    *(ushort *)(puVar4 + 2) = (ushort)puVar4[2] | (ushort)pbVar6[9];
    pbVar7 = pbVar6 + 10;
  }
  if (pbVar7 == (byte *)0x0) {
    local_8 = (byte *)0xffffffff;
  }
  uVar8 = *puVar4;
  operator_delete(puVar4);
  if (local_8 == (byte *)0x0) {
    if (uVar8 == 0x4d445052) {
      local_c = (byte *)0x1;
      goto LAB_662e5088;
    }
    if (uVar8 == 0x434f4e54) {
      local_c = local_8;
      goto LAB_662e5088;
    }
  }
  local_8 = (byte *)0xffffffff;
LAB_662e5088:
  if ((local_8 == (byte *)0x0) && (local_c != (byte *)0x0)) {
    puVar4 = operator_new(0x3a);
    if (puVar4 == (uint *)0x0) {
      return -0x7ff8fff2;
    }
    if (param_2 == (byte *)0x0) {
      pbVar7 = (byte *)0x0;
    }
    else {
      bVar2 = *pbVar6;
      *puVar4 = (uint)bVar2 << 0x18;
      *puVar4 = (uint)pbVar6[1] << 0x10 | (uint)bVar2 << 0x18;
      uVar8 = *puVar4 | (uint)pbVar6[2] << 8;
      *puVar4 = uVar8;
      *puVar4 = uVar8 | pbVar6[3];
      puVar4[1] = (uint)pbVar6[4] << 0x18;
      uVar8 = puVar4[1] | (uint)pbVar6[5] << 0x10;
      puVar4[1] = uVar8;
      uVar8 = uVar8 | (uint)pbVar6[6] << 8;
      puVar4[1] = uVar8;
      puVar4[1] = uVar8 | pbVar6[7];
      *(ushort *)(puVar4 + 2) = (ushort)pbVar6[8] << 8;
      *(ushort *)(puVar4 + 2) = (ushort)puVar4[2] | (ushort)pbVar6[9];
      pbVar7 = pbVar6 + 10;
      if ((short)puVar4[2] == 0) {
        *(ushort *)((int)puVar4 + 10) = (ushort)*pbVar7 << 8;
        *(ushort *)((int)puVar4 + 10) = *(ushort *)((int)puVar4 + 10) | (ushort)pbVar6[0xb];
        puVar4[3] = (uint)pbVar6[0xc] << 0x18;
        uVar8 = puVar4[3] | (uint)pbVar6[0xd] << 0x10;
        puVar4[3] = uVar8;
        uVar8 = uVar8 | (uint)pbVar6[0xe] << 8;
        puVar4[3] = uVar8;
        puVar4[3] = uVar8 | pbVar6[0xf];
        puVar4[4] = (uint)pbVar6[0x10] << 0x18;
        uVar8 = puVar4[4] | (uint)pbVar6[0x11] << 0x10;
        puVar4[4] = uVar8;
        uVar8 = uVar8 | (uint)pbVar6[0x12] << 8;
        puVar4[4] = uVar8;
        puVar4[4] = uVar8 | pbVar6[0x13];
        puVar4[5] = (uint)pbVar6[0x14] << 0x18;
        uVar8 = puVar4[5] | (uint)pbVar6[0x15] << 0x10;
        puVar4[5] = uVar8;
        uVar8 = uVar8 | (uint)pbVar6[0x16] << 8;
        puVar4[5] = uVar8;
        puVar4[5] = uVar8 | pbVar6[0x17];
        puVar4[6] = (uint)pbVar6[0x18] << 0x18;
        uVar8 = puVar4[6] | (uint)pbVar6[0x19] << 0x10;
        puVar4[6] = uVar8;
        uVar8 = uVar8 | (uint)pbVar6[0x1a] << 8;
        puVar4[6] = uVar8;
        puVar4[6] = uVar8 | pbVar6[0x1b];
        puVar4[7] = (uint)pbVar6[0x1c] << 0x18;
        uVar8 = puVar4[7] | (uint)pbVar6[0x1d] << 0x10;
        puVar4[7] = uVar8;
        uVar8 = uVar8 | (uint)pbVar6[0x1e] << 8;
        puVar4[7] = uVar8;
        puVar4[7] = uVar8 | pbVar6[0x1f];
        puVar4[8] = (uint)pbVar6[0x20] << 0x18;
        uVar8 = puVar4[8] | (uint)pbVar6[0x21] << 0x10;
        puVar4[8] = uVar8;
        uVar8 = uVar8 | (uint)pbVar6[0x22] << 8;
        puVar4[8] = uVar8;
        puVar4[8] = uVar8 | pbVar6[0x23];
        puVar4[9] = (uint)pbVar6[0x24] << 0x18;
        uVar8 = puVar4[9] | (uint)pbVar6[0x25] << 0x10;
        puVar4[9] = uVar8;
        uVar8 = uVar8 | (uint)pbVar6[0x26] << 8;
        puVar4[9] = uVar8;
        puVar4[9] = uVar8 | pbVar6[0x27];
        *(byte *)(puVar4 + 10) = pbVar6[0x28];
        pbVar7 = pbVar6 + 0x29 + (byte)puVar4[10];
        if ((int)param_2 < (int)pbVar7 - (int)pbVar6) {
          pbVar7 = (byte *)0x0;
          pbVar6 = param_1;
        }
        else {
          *(byte **)((int)puVar4 + 0x29) = pbVar6 + 0x29;
          *(byte *)((int)puVar4 + 0x2d) = *pbVar7;
          pbVar6 = pbVar7 + 1 + *(byte *)((int)puVar4 + 0x2d);
          if ((int)param_2 < (int)pbVar6 - (int)param_1) {
            pbVar7 = (byte *)0x0;
            pbVar6 = param_1;
          }
          else {
            *(byte **)((int)puVar4 + 0x2e) = pbVar7 + 1;
            *(uint *)((int)puVar4 + 0x32) = (uint)*pbVar6 << 0x18;
            uVar8 = *(uint *)((int)puVar4 + 0x32) | (uint)pbVar6[1] << 0x10;
            *(uint *)((int)puVar4 + 0x32) = uVar8;
            uVar8 = uVar8 | (uint)pbVar6[2] << 8;
            *(uint *)((int)puVar4 + 0x32) = uVar8;
            uVar8 = uVar8 | pbVar6[3];
            *(uint *)((int)puVar4 + 0x32) = uVar8;
            pbVar7 = pbVar6 + 4 + uVar8;
            if (param_2 < pbVar7 + -(int)param_1) {
              pbVar7 = (byte *)0x0;
              pbVar6 = param_1;
            }
            else {
              *(byte **)((int)puVar4 + 0x36) = pbVar6 + 4;
              pbVar6 = param_1;
            }
          }
        }
      }
    }
    if (pbVar7 == (byte *)0x0) {
      local_8 = (byte *)0xffffffff;
    }
    local_10 = CONCAT22((short)((uint)param_2 >> 0x10),*(undefined2 *)((int)puVar4 + 10));
    operator_delete(puVar4);
  }
  uVar8 = 0;
  param_1 = (byte *)0x0;
  if (*(uint *)((int)this + 8) != 0) {
    do {
      if (local_8 != (byte *)0x0) break;
      if (*(byte **)(*(int *)(**(int **)((int)this + 0xc) + uVar8 * 4) + 8) == pbVar6) {
        uVar3 = *(uint *)((int)this + 0x20);
        if (uVar3 == uVar8) {
          *(undefined4 *)((int)this + 0x20) = 0;
        }
        else if (uVar8 < uVar3) {
          *(uint *)((int)this + 0x20) = uVar3 - 1;
        }
        pvVar5 = *(void **)(**(int **)((int)this + 0xc) + uVar8 * 4);
        if (pvVar5 != (void *)0x0) {
          if (*(void **)((int)pvVar5 + 0xc) != (void *)0x0) {
            operator_delete(*(void **)((int)pvVar5 + 0xc));
            *(undefined4 *)((int)pvVar5 + 0xc) = 0;
          }
          operator_delete(pvVar5);
        }
        FUN_662ed6b0(*(void **)((int)this + 0xc),uVar8,1);
        param_1 = (byte *)0x1;
        *(undefined4 *)((int)this + 8) = *(undefined4 *)(*(int *)((int)this + 0xc) + 4);
        break;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)((int)this + 8));
  }
  uVar8 = 0;
  if (*(ushort *)((int)this + 0x6e) != 0) {
    do {
      if (local_c == (byte *)0x0) break;
      if (local_8 != (byte *)0x0) goto LAB_662e57e1;
      if (*(short *)(*(int *)(**(int **)((int)this + 0x6a) + uVar8 * 4) + 0x1a) == (short)local_10)
      {
        FUN_662ed6b0(*(void **)((int)this + 0x6a),uVar8,1);
        *(short *)((int)this + 0x6e) = (short)*(undefined4 *)(*(int *)((int)this + 0x6a) + 4);
        break;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ushort *)((int)this + 0x6e));
  }
  if (local_8 == (byte *)0x0) {
    if (param_1 == (byte *)0x0) {
      local_8 = (byte *)0xffffffff;
    }
    if (((local_8 == (byte *)0x0) && (local_c != (byte *)0x0)) && (*(int *)((int)this + 0x90) != 0))
    {
      param_1 = local_8;
      local_c = (byte *)FUN_662e37f0(this,&param_1);
      puVar4 = *(uint **)((int)this + 0x56);
      local_14 = param_1;
      if ((local_c != (byte *)0x0) && (param_1 != (byte *)0x0)) {
        bVar2 = *local_c;
        *puVar4 = (uint)bVar2 << 0x18;
        *puVar4 = (uint)local_c[1] << 0x10 | (uint)bVar2 << 0x18;
        uVar8 = *puVar4 | (uint)local_c[2] << 8;
        *puVar4 = uVar8;
        *puVar4 = uVar8 | local_c[3];
        puVar4[1] = (uint)local_c[4] << 0x18;
        uVar8 = puVar4[1] | (uint)local_c[5] << 0x10;
        puVar4[1] = uVar8;
        uVar8 = uVar8 | (uint)local_c[6] << 8;
        puVar4[1] = uVar8;
        puVar4[1] = uVar8 | local_c[7];
        *(ushort *)(puVar4 + 2) = (ushort)local_c[8] << 8;
        *(ushort *)(puVar4 + 2) = (ushort)puVar4[2] | (ushort)local_c[9];
        if ((short)puVar4[2] == 0) {
          *(uint *)((int)puVar4 + 10) = (uint)local_c[10] << 0x18;
          uVar8 = *(uint *)((int)puVar4 + 10) | (uint)local_c[0xb] << 0x10;
          *(uint *)((int)puVar4 + 10) = uVar8;
          uVar8 = uVar8 | (uint)local_c[0xc] << 8;
          *(uint *)((int)puVar4 + 10) = uVar8;
          *(uint *)((int)puVar4 + 10) = uVar8 | local_c[0xd];
          *(uint *)((int)puVar4 + 0xe) = (uint)local_c[0xe] << 0x18;
          uVar8 = *(uint *)((int)puVar4 + 0xe) | (uint)local_c[0xf] << 0x10;
          *(uint *)((int)puVar4 + 0xe) = uVar8;
          uVar8 = uVar8 | (uint)local_c[0x10] << 8;
          *(uint *)((int)puVar4 + 0xe) = uVar8;
          *(uint *)((int)puVar4 + 0xe) = uVar8 | local_c[0x11];
          *(uint *)((int)puVar4 + 0x12) = (uint)local_c[0x12] << 0x18;
          uVar8 = *(uint *)((int)puVar4 + 0x12) | (uint)local_c[0x13] << 0x10;
          *(uint *)((int)puVar4 + 0x12) = uVar8;
          uVar8 = uVar8 | (uint)local_c[0x14] << 8;
          *(uint *)((int)puVar4 + 0x12) = uVar8;
          *(uint *)((int)puVar4 + 0x12) = uVar8 | local_c[0x15];
          *(uint *)((int)puVar4 + 0x16) = (uint)local_c[0x16] << 0x18;
          uVar8 = *(uint *)((int)puVar4 + 0x16) | (uint)local_c[0x17] << 0x10;
          *(uint *)((int)puVar4 + 0x16) = uVar8;
          uVar8 = uVar8 | (uint)local_c[0x18] << 8;
          *(uint *)((int)puVar4 + 0x16) = uVar8;
          *(uint *)((int)puVar4 + 0x16) = uVar8 | local_c[0x19];
          *(uint *)((int)puVar4 + 0x1a) = (uint)local_c[0x1a] << 0x18;
          uVar8 = *(uint *)((int)puVar4 + 0x1a) | (uint)local_c[0x1b] << 0x10;
          *(uint *)((int)puVar4 + 0x1a) = uVar8;
          uVar8 = uVar8 | (uint)local_c[0x1c] << 8;
          *(uint *)((int)puVar4 + 0x1a) = uVar8;
          *(uint *)((int)puVar4 + 0x1a) = uVar8 | local_c[0x1d];
          *(uint *)((int)puVar4 + 0x1e) = (uint)local_c[0x1e] << 0x18;
          uVar8 = *(uint *)((int)puVar4 + 0x1e) | (uint)local_c[0x1f] << 0x10;
          *(uint *)((int)puVar4 + 0x1e) = uVar8;
          uVar8 = uVar8 | (uint)local_c[0x20] << 8;
          *(uint *)((int)puVar4 + 0x1e) = uVar8;
          *(uint *)((int)puVar4 + 0x1e) = uVar8 | local_c[0x21];
          *(uint *)((int)puVar4 + 0x22) = (uint)local_c[0x22] << 0x18;
          uVar8 = *(uint *)((int)puVar4 + 0x22) | (uint)local_c[0x23] << 0x10;
          *(uint *)((int)puVar4 + 0x22) = uVar8;
          uVar8 = uVar8 | (uint)local_c[0x24] << 8;
          *(uint *)((int)puVar4 + 0x22) = uVar8;
          *(uint *)((int)puVar4 + 0x22) = uVar8 | local_c[0x25];
          *(uint *)((int)puVar4 + 0x26) = (uint)local_c[0x26] << 0x18;
          uVar8 = *(uint *)((int)puVar4 + 0x26) | (uint)local_c[0x27] << 0x10;
          *(uint *)((int)puVar4 + 0x26) = uVar8;
          uVar8 = uVar8 | (uint)local_c[0x28] << 8;
          *(uint *)((int)puVar4 + 0x26) = uVar8;
          *(uint *)((int)puVar4 + 0x26) = uVar8 | local_c[0x29];
          *(uint *)((int)puVar4 + 0x2a) = (uint)local_c[0x2a] << 0x18;
          uVar8 = *(uint *)((int)puVar4 + 0x2a) | (uint)local_c[0x2b] << 0x10;
          *(uint *)((int)puVar4 + 0x2a) = uVar8;
          uVar8 = uVar8 | (uint)local_c[0x2c] << 8;
          *(uint *)((int)puVar4 + 0x2a) = uVar8;
          *(uint *)((int)puVar4 + 0x2a) = uVar8 | local_c[0x2d];
          *(ushort *)((int)puVar4 + 0x2e) = (ushort)local_c[0x2e] << 8;
          *(ushort *)((int)puVar4 + 0x2e) = *(ushort *)((int)puVar4 + 0x2e) | (ushort)local_c[0x2f];
          *(ushort *)(puVar4 + 0xc) = (ushort)local_c[0x30] << 8;
          *(ushort *)(puVar4 + 0xc) = (ushort)puVar4[0xc] | (ushort)local_c[0x31];
        }
      }
      uVar8 = 0;
      if (*(short *)(*(int *)((int)this + 0x56) + 8) == 0) {
        *(undefined4 *)(*(int *)((int)this + 0x56) + 10) = 0;
        *(undefined4 *)(*(int *)((int)this + 0x56) + 0xe) = 0;
        *(undefined4 *)(*(int *)((int)this + 0x56) + 0x12) = 0;
        *(undefined4 *)(*(int *)((int)this + 0x56) + 0x16) = 0;
        *(undefined4 *)(*(int *)((int)this + 0x56) + 0x22) = 0;
        *(undefined4 *)(*(int *)((int)this + 0x56) + 0x1e) = 0;
        *(undefined2 *)(*(int *)((int)this + 0x56) + 0x2e) = 0;
        local_10 = (uint)*(ushort *)((int)this + 0x6e);
        pvVar5 = operator_new(0x3a);
        if (pvVar5 == (void *)0x0) {
          return -0x7ff8fff2;
        }
        if (local_10 != 0) {
          do {
            pbVar6 = (byte *)FUN_662e3080(this,uVar8,&param_2);
            pbVar6 = FUN_662ca8d0(pvVar5,pbVar6,param_2);
            if (pbVar6 == (byte *)0x0) {
              operator_delete(pvVar5);
              return -1;
            }
            if (*(short *)((int)pvVar5 + 8) == 0) {
              *(int *)(*(int *)((int)this + 0x56) + 10) =
                   *(int *)(*(int *)((int)this + 0x56) + 10) + *(int *)((int)pvVar5 + 0xc);
              *(int *)(*(int *)((int)this + 0x56) + 0xe) =
                   *(int *)(*(int *)((int)this + 0x56) + 0xe) + *(int *)((int)pvVar5 + 0x10);
              if (*(uint *)(*(int *)((int)this + 0x56) + 0x12) < *(uint *)((int)pvVar5 + 0x14)) {
                *(uint *)(*(int *)((int)this + 0x56) + 0x12) = *(uint *)((int)pvVar5 + 0x14);
              }
              if (*(uint *)(*(int *)((int)this + 0x56) + 0x16) < *(uint *)((int)pvVar5 + 0x18)) {
                *(uint *)(*(int *)((int)this + 0x56) + 0x16) = *(uint *)((int)pvVar5 + 0x18);
              }
              if (*(uint *)(*(int *)((int)this + 0x56) + 0x22) < *(uint *)((int)pvVar5 + 0x20)) {
                *(uint *)(*(int *)((int)this + 0x56) + 0x22) = *(uint *)((int)pvVar5 + 0x20);
              }
              if (*(uint *)(*(int *)((int)this + 0x56) + 0x1e) < *(uint *)((int)pvVar5 + 0x24)) {
                *(uint *)(*(int *)((int)this + 0x56) + 0x1e) = *(uint *)((int)pvVar5 + 0x24);
              }
              psVar1 = (short *)(*(int *)((int)this + 0x56) + 0x2e);
              *psVar1 = *psVar1 + 1;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_10);
        }
        operator_delete(pvVar5);
      }
      FUN_662e33a0(*(void **)((int)this + 0x56),local_c,(int *)&local_14);
    }
  }
LAB_662e57e1:
  *(byte **)((int)this + 0x24) = local_8;
  return (int)local_8;
}


