/* Module: rmto3260.dll
   Function: FUN_662d8830
   Address: 662d8830
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_662d8830(void *this,uint *param_1,uint param_2)

{
  byte bVar1;
  double dVar2;
  int iVar3;
  byte *pbVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 uVar7;
  void *pvVar8;
  uint uVar9;
  undefined2 uVar10;
  ushort uVar11;
  byte *pbVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  undefined2 uStack_46;
  undefined2 local_44;
  undefined2 local_2c;
  undefined2 local_2a;
  uint local_28;
  double local_24;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 0xb6) != 0) {
    FUN_662d8590((int)this);
    *(undefined4 *)((int)this + 0xb6) = 0;
  }
  if (param_2 == 0) {
    iVar3 = 0;
    uVar10 = (undefined2)local_28;
  }
  else {
    uVar10 = CONCAT11((char)param_1[1],*(undefined1 *)((int)param_1 + 5));
    iVar3 = (int)param_1 + 6;
    local_28 = CONCAT22(local_28._2_2_,uVar10);
  }
  if (iVar3 == 0) {
    local_8 = -0x7ff8ffa9;
  }
  if (local_8 < 0) goto LAB_662d8c30;
  *(undefined2 *)((int)this + 0x6e) = uVar10;
  *(undefined4 *)((int)this + 0xb2) = 0;
  if ((local_28 & 0xffff) == 4) {
    local_8 = FUN_662d8d80(this,(byte *)param_1,param_2);
  }
  else if ((local_28 & 0xffff) == 5) {
    local_8 = FUN_662d8e40(this,(byte *)param_1,param_2);
  }
  else {
    local_8 = -0x7ffbfff1;
  }
  if (local_8 < 0) goto LAB_662d8c30;
  local_18 = FUN_662f65b0(*(int *)((int)this + 4));
  if ((short)local_18 == 0) {
    local_8 = -0x7ffbfdae;
  }
  local_18 = local_18 & 0xffff;
  local_10 = 0;
  if (local_18 != 0) {
    while (uVar9 = local_10, -1 < local_8) {
      local_2c = DAT_66311cd4;
      local_2a = 0;
      local_c = 0;
      local_14 = 0;
      local_28 = local_28 & 0xffffff00;
      local_8 = FUN_662f6580(*(int *)((int)this + 4),local_10,&local_c);
      if (-1 < local_8) {
        local_8 = FUN_662f65d0(*(int *)((int)this + 4),local_c,(char *)&local_2c,(int *)&local_14);
        if (-1 < local_8) {
          pbVar12 = (byte *)((int)this + 0x20);
          pbVar4 = (byte *)&local_2c;
          do {
            bVar1 = *pbVar4;
            bVar13 = bVar1 < *pbVar12;
            if (bVar1 != *pbVar12) {
LAB_662d898a:
              iVar3 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_662d898f;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar13 = bVar1 < pbVar12[1];
            if (bVar1 != pbVar12[1]) goto LAB_662d898a;
            pbVar4 = pbVar4 + 2;
            pbVar12 = pbVar12 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_662d898f:
          uVar9 = local_10;
          if ((iVar3 == 0) && (local_14 == *(ushort *)((int)this + 0x70))) {
            uVar9 = 0;
            param_1 = (uint *)0x0;
            puVar5 = (uint *)0x0;
            if (-1 < local_8) {
              local_8 = FUN_662f6600(*(int *)((int)this + 4),local_c,0xe,(int *)&param_1,
                                     (ushort *)((int)&param_2 + 2));
              puVar5 = param_1;
            }
            if (puVar5 == (uint *)0x0) {
              local_8 = -0x7ffbfdad;
            }
            if (-1 < local_8) {
              uVar9 = *puVar5;
            }
            if (uVar9 == 0) {
              local_8 = -0x7ffbfdad;
            }
            param_1 = (uint *)0x0;
            if (-1 < local_8) {
              local_8 = FUN_662f6600(*(int *)((int)this + 4),local_c,0x14,(int *)&param_1,
                                     (ushort *)((int)&param_2 + 2));
            }
            if (param_1 == (uint *)0x0) {
              local_8 = -0x7ffbfdad;
            }
            if (-1 < local_8) {
              uVar6 = *param_1;
              if ((uVar6 & 7) != 0) {
                *(undefined4 *)((int)this + 0xc2) = 1;
              }
              uVar11 = (ushort)uVar6;
              *(ushort *)((int)this + 0x42) = uVar11;
              *(ushort *)((int)this + 0x44) = uVar11 >> 3;
            }
            if (*(short *)((int)this + 0x42) == 0) {
              local_8 = -0x7ffbfdad;
            }
            if ((-1 < local_8) &&
               (local_8 = FUN_662f6600(*(int *)((int)this + 4),local_c,2,(int *)&param_1,
                                       (ushort *)((int)&param_2 + 2)), -1 < local_8)) {
              uStack_46 = (undefined2)(*param_1 >> 0x10);
              local_44 = (undefined2)param_1[1];
              pbVar4 = &DAT_6630af78;
              pbVar12 = (byte *)((int)this + 0x20);
              goto LAB_662d8ab2;
            }
            break;
          }
        }
      }
      local_10 = uVar9 + 1;
      if ((int)local_18 <= (int)local_10) break;
    }
  }
  goto LAB_662d8c15;
  while( true ) {
    bVar1 = pbVar12[1];
    bVar13 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_662d8ad6;
    pbVar12 = pbVar12 + 2;
    pbVar4 = pbVar4 + 2;
    if (bVar1 == 0) break;
LAB_662d8ab2:
    bVar1 = *pbVar12;
    bVar13 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_662d8ad6:
      iVar3 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_662d8adb;
    }
    if (bVar1 == 0) break;
  }
  iVar3 = 0;
LAB_662d8adb:
  uVar6 = 16000;
  if (iVar3 != 0) {
    uVar6 = CONCAT22(local_44,uStack_46);
  }
  local_1c = (uint)(ushort)param_1[2];
  dVar15 = (double)local_1c;
  local_24 = (double)(ulonglong)uVar9;
  dVar2 = (double)(longlong)local_24;
  dVar14 = _DAT_663073c8 / (((double)uVar6 * dVar15) / dVar2);
  *(double *)((int)this + 0x32) = dVar14;
  local_24 = *(double *)((int)this + 0x32);
  dVar14 = floor(dVar14);
  if ((local_24 - dVar14 < _DAT_663073d0) && (_DAT_663073d8 < local_24 - dVar14)) {
    dVar14 = ceil(local_24);
    *(double *)((int)this + 0x32) = dVar14;
  }
  local_1c = (uint)*(ushort *)((int)this + 0x46);
  *(double *)((int)this + 0x3a) =
       (double)*(ushort *)((int)this + 0x6a) * *(double *)((int)this + 0x32);
  dVar14 = (double)*(ushort *)((int)this + 0x42) * *(double *)((int)this + 0x32) * _DAT_663073e0;
  *(short *)((int)this + 0x6c) =
       (short)(((uint)*(ushort *)((int)this + 0x48) << 3) / (uint)*(ushort *)((int)this + 0x42));
  *(double *)((int)this + 0x2a) = dVar14 / (double)local_1c;
  dVar2 = ((double)local_1c * (double)uVar6 * dVar15 * _DAT_663073e8) / dVar2;
  local_24 = dVar2;
  dVar15 = floor(dVar2);
  if (local_24 - dVar15 <= _DAT_663073f0) {
    floor(dVar2);
  }
  else {
    ceil(dVar2);
  }
  uVar7 = ftol();
  *(undefined4 *)((int)this + 0xa6) = uVar7;
LAB_662d8c15:
  if (local_10 == local_18) {
    local_8 = -0x7ffbfdae;
  }
  if (-1 < local_8) {
    local_8 = FUN_662d8660((int)this);
  }
LAB_662d8c30:
  if (-1 < local_8) {
    *(undefined4 *)((int)this + 0x4a) = 0;
    *(undefined4 *)((int)this + 0x62) = 0;
    *(undefined4 *)((int)this + 0x66) = 0;
    *(undefined4 *)((int)this + 0x4e) = 0;
    *(undefined2 *)((int)this + 0x72) = 0;
    *(undefined2 *)((int)this + 0x74) = 0;
    *(undefined4 *)((int)this + 0xb6) = 1;
    *(undefined4 *)((int)this + 0xba) = 1;
    if ((-1 < local_8) && (*(ushort *)((int)this + 0x6a) != 0)) {
      pvVar8 = operator_new((uint)*(ushort *)((int)this + 0x6a) << 2);
      *(void **)((int)this + 0x1c) = pvVar8;
      if (pvVar8 == (void *)0x0) {
        local_8 = -0x7ff8fff2;
      }
      else {
        uVar9 = 0;
        if (*(short *)((int)this + 0x6a) != 0) {
          do {
            *(undefined4 *)(*(int *)((int)this + 0x1c) + uVar9 * 4) = 1;
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(ushort *)((int)this + 0x6a));
          return local_8;
        }
      }
    }
  }
  return local_8;
}


