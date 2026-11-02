/* Module: rmme3260.dll
   Function: FUN_66223760
   Address: 66223760
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66223834) */
/* WARNING: Removing unreachable block (ram,0x66223793) */

int __fastcall FUN_66223760(void *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  char *pcVar15;
  char *pcVar16;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_10 = 2;
  piVar6 = *(int **)((int)param_1 + 4);
  iVar10 = piVar6[5];
  if ((uint)piVar6[6] < iVar10 + 2U) {
    puVar8 = (undefined1 *)(**(code **)(*piVar6 + 0x24))(&local_10);
  }
  else {
    *(int *)(piVar6[8] + 0x14) = *(int *)(piVar6[8] + 0x14) + 1;
    puVar8 = (undefined1 *)piVar6[5];
    piVar6[5] = iVar10 + 2U;
  }
  local_8 = FUN_6620af60(param_1,(int)puVar8,2,local_10);
  if (local_8 == 0x40040) {
    *(undefined4 *)((int)param_1 + 0x88) = 0;
    return 0x40040;
  }
  this = extraout_ECX;
  if (local_8 == 0) {
    piVar6 = *(int **)((int)param_1 + 4);
    uVar2 = *puVar8;
    uVar3 = puVar8[1];
    if (puVar8 != (undefined1 *)0x0) {
      puVar7 = *(undefined1 **)(piVar6[8] + 0xc);
      if ((puVar7 == puVar8) || ((puVar7 < puVar8 && (puVar8 < (undefined1 *)piVar6[6])))) {
        piVar6 = (int *)(piVar6[8] + 0x14);
        *piVar6 = *piVar6 + -1;
      }
      else {
        (**(code **)(*piVar6 + 0x28))(puVar8);
      }
    }
    *(short *)((int)param_1 + 0x14a) = CONCAT11(uVar2,uVar3) + 8;
    (**(code **)(**(int **)((int)param_1 + 4) + 8))(0,0);
    piVar6 = *(int **)((int)param_1 + 4);
    local_10 = (uint)*(ushort *)((int)param_1 + 0x14a);
    iVar10 = piVar6[5];
    if ((uint)piVar6[6] < local_10 + iVar10) {
      iVar9 = (**(code **)(*piVar6 + 0x24))(&local_10);
    }
    else {
      *(int *)(piVar6[8] + 0x14) = *(int *)(piVar6[8] + 0x14) + 1;
      if (local_10 == 0) {
        iVar9 = *(int *)(piVar6[8] + 0xc);
      }
      else {
        iVar9 = piVar6[5];
        piVar6[5] = local_10 + iVar10;
      }
    }
    *(int *)((int)param_1 + 0x14c) = iVar9;
    local_8 = FUN_6620af60(param_1,iVar9,(uint)*(ushort *)((int)param_1 + 0x14a),local_10);
    this = extraout_ECX_00;
    if (local_8 == 0x40040) {
      *(undefined4 *)((int)param_1 + 0x88) = 0;
      return 0x40040;
    }
  }
  if (local_8 == 0) {
    uVar5 = *(ushort *)(*(int *)((int)param_1 + 0x14c) + 8);
    *(ushort *)((int)param_1 + 0x103) = uVar5;
    iVar10 = FUN_66264760(this,uVar5);
    *(short *)((int)param_1 + 0x103) = (short)iVar10;
    uVar12 = *(uint *)(*(int *)((int)param_1 + 0x14c) + 10);
    *(uint *)((int)param_1 + 0x105) = uVar12;
    iVar10 = FUN_662647b0(uVar12);
    *(int *)((int)param_1 + 0x105) = iVar10;
    uVar12 = *(uint *)(*(int *)((int)param_1 + 0x14c) + 0xe);
    *(uint *)((int)param_1 + 0x109) = uVar12;
    iVar10 = FUN_662647b0(uVar12);
    *(int *)((int)param_1 + 0x109) = iVar10;
    uVar12 = *(uint *)(*(int *)((int)param_1 + 0x14c) + 0x12);
    *(uint *)((int)param_1 + 0x111) = uVar12;
    iVar10 = FUN_662647b0(uVar12);
    *(int *)((int)param_1 + 0x111) = iVar10;
    bVar4 = *(byte *)(*(int *)((int)param_1 + 0x14c) + 0x16);
    local_c = 0x17;
    *(byte *)((int)param_1 + 0x136) = bVar4;
    puVar11 = operator_new(bVar4 + 1);
    *(undefined4 **)((int)param_1 + 0x137) = puVar11;
    if (puVar11 == (undefined4 *)0x0) {
      local_8 = -0x7ff8fff2;
    }
    else {
      bVar4 = *(byte *)((int)param_1 + 0x136);
      puVar14 = (undefined4 *)(*(int *)((int)param_1 + 0x14c) + 0x17);
      for (uVar12 = (uint)(bVar4 >> 2); uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar11 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar12 = bVar4 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar14;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      *(undefined1 *)(*(int *)((int)param_1 + 0x137) + (uint)*(byte *)((int)param_1 + 0x136)) = 0;
    }
    if (local_8 == 0) {
      local_c = local_c + *(byte *)((int)param_1 + 0x136);
      uVar12 = local_c + 1;
      bVar4 = *(byte *)((local_c & 0xffff) + *(int *)((int)param_1 + 0x14c));
      *(byte *)((int)param_1 + 0x13b) = bVar4;
      local_c = uVar12;
      puVar11 = operator_new(bVar4 + 1);
      *(undefined4 **)((int)param_1 + 0x13c) = puVar11;
      if (puVar11 == (undefined4 *)0x0) {
        local_8 = -0x7ff8fff2;
      }
      else {
        bVar4 = *(byte *)((int)param_1 + 0x13b);
        puVar14 = (undefined4 *)((uVar12 & 0xffff) + *(int *)((int)param_1 + 0x14c));
        for (uVar13 = (uint)(bVar4 >> 2); uVar13 != 0; uVar13 = uVar13 - 1) {
          *puVar11 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar12 = bVar4 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar14;
          puVar14 = (undefined4 *)((int)puVar14 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        *(undefined1 *)(*(int *)((int)param_1 + 0x13c) + (uint)*(byte *)((int)param_1 + 0x13b)) = 0;
        uVar12 = local_c;
      }
      if (local_8 == 0) {
        uVar12 = uVar12 + *(byte *)((int)param_1 + 0x13b);
        uVar13 = uVar12 + 1;
        bVar4 = *(byte *)((uVar12 & 0xffff) + *(int *)((int)param_1 + 0x14c));
        *(byte *)((int)param_1 + 0x140) = bVar4;
        local_c = uVar13;
        puVar11 = operator_new(bVar4 + 1);
        *(undefined4 **)((int)param_1 + 0x141) = puVar11;
        if (puVar11 == (undefined4 *)0x0) {
          local_8 = -0x7ff8fff2;
        }
        else {
          bVar4 = *(byte *)((int)param_1 + 0x140);
          puVar14 = (undefined4 *)((uVar13 & 0xffff) + *(int *)((int)param_1 + 0x14c));
          for (uVar12 = (uint)(bVar4 >> 2); uVar12 != 0; uVar12 = uVar12 - 1) {
            *puVar11 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar12 = bVar4 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar14;
            puVar14 = (undefined4 *)((int)puVar14 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          *(undefined1 *)(*(int *)((int)param_1 + 0x141) + (uint)*(byte *)((int)param_1 + 0x140)) =
               0;
          uVar13 = local_c;
        }
        if (local_8 == 0) {
          uVar13 = uVar13 + *(byte *)((int)param_1 + 0x140);
          uVar12 = uVar13 + 1;
          bVar4 = *(byte *)((uVar13 & 0xffff) + *(int *)((int)param_1 + 0x14c));
          *(byte *)((int)param_1 + 0x145) = bVar4;
          local_c = uVar12;
          puVar11 = operator_new(bVar4 + 1);
          *(undefined4 **)((int)param_1 + 0x146) = puVar11;
          if (puVar11 == (undefined4 *)0x0) {
            local_8 = -0x7ff8fff2;
          }
          else {
            bVar4 = *(byte *)((int)param_1 + 0x145);
            puVar14 = (undefined4 *)((uVar12 & 0xffff) + *(int *)((int)param_1 + 0x14c));
            for (uVar13 = (uint)(bVar4 >> 2); uVar13 != 0; uVar13 = uVar13 - 1) {
              *puVar11 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar11 = puVar11 + 1;
            }
            for (uVar12 = bVar4 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined1 *)puVar11 = *(undefined1 *)puVar14;
              puVar14 = (undefined4 *)((int)puVar14 + 1);
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
            *(undefined1 *)(*(int *)((int)param_1 + 0x146) + (uint)*(byte *)((int)param_1 + 0x145))
                 = 0;
            uVar12 = local_c;
          }
          if (local_8 == 0) {
            if ((ushort)uVar12 < *(ushort *)((int)param_1 + 0x14a)) {
              *(undefined1 *)((int)param_1 + 0x12e) =
                   *(undefined1 *)(*(int *)((int)param_1 + 0x14c) + (uVar12 & 0xffff));
            }
            else {
              *(undefined1 *)((int)param_1 + 0x12e) = 0;
            }
            uVar12 = 0xffffffff;
            pcVar15 = &DAT_6626f808;
            do {
              pcVar16 = pcVar15;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar16 = pcVar15 + 1;
              cVar1 = *pcVar15;
              pcVar15 = pcVar16;
            } while (cVar1 != '\0');
            uVar12 = ~uVar12;
            pcVar15 = pcVar16 + -uVar12;
            pcVar16 = (char *)((int)param_1 + 0xda);
            for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar16 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar16 = pcVar16 + 1;
            }
          }
        }
      }
    }
  }
  if (local_8 == 0) {
    if (*(ushort *)((int)param_1 + 0xf7) != 0) {
      *(uint *)((int)param_1 + 0x130) =
           *(uint *)((int)param_1 + 0x111) / (uint)*(ushort *)((int)param_1 + 0xf7);
    }
    iVar10 = *(int *)(*(int *)((int)param_1 + 4) + 0x20);
    *(int *)((int)param_1 + 0xdf) =
         (*(int *)(*(int *)((int)param_1 + 4) + 0x14) + *(int *)(iVar10 + 4)) -
         *(int *)(iVar10 + 0xc);
  }
  return local_8;
}


