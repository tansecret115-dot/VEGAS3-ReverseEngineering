/* Module: rmbe3260.dll
   Function: FUN_66044820
   Address: 66044820
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66044820(void *this,char *param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  byte *pbVar12;
  char *pcVar13;
  bool bVar14;
  int local_c;
  
  local_c = 0;
  if ((*(int *)((int)this + 0x52) == 0) ||
     (((*(int *)((int)this + 0x56) == 0 && (*(int *)((int)this + 0x5e) == 0)) &&
      (*(int *)((int)this + 0x5a) == 0)))) {
    *(undefined4 *)((int)this + 0x487) = 0x80040007;
    return -0x7ffbfff9;
  }
  if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 4))(1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (param_1 != (char *)0x0) {
    if (*(void **)((int)this + 0x466) != (void *)0x0) {
      operator_delete(*(void **)((int)this + 0x466));
    }
    uVar9 = 0xffffffff;
    pcVar4 = param_1;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar4 = operator_new(~uVar9);
    *(char **)((int)this + 0x466) = pcVar4;
    uVar9 = 0xffffffff;
    pcVar11 = param_1;
    do {
      pcVar13 = pcVar11;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar13;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar11 = pcVar13 + -uVar9;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar4 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar4 = pcVar4 + 1;
    }
  }
  pbVar12 = &DAT_6606e210;
  pbVar7 = (byte *)(*(int *)this + 0x218);
  pbVar5 = pbVar7;
  do {
    bVar2 = *pbVar5;
    bVar14 = bVar2 < *pbVar12;
    if (bVar2 != *pbVar12) {
LAB_660448f9:
      iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_660448fe;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    bVar14 = bVar2 < pbVar12[1];
    if (bVar2 != pbVar12[1]) goto LAB_660448f9;
    pbVar5 = pbVar5 + 2;
    pbVar12 = pbVar12 + 2;
  } while (bVar2 != 0);
  iVar6 = 0;
LAB_660448fe:
  if (iVar6 == 0) {
    *(undefined2 *)((int)this + 0x50) = 3;
  }
  else {
    pbVar12 = &DAT_6606e208;
    pbVar5 = pbVar7;
    do {
      bVar2 = *pbVar5;
      bVar14 = bVar2 < *pbVar12;
      if (bVar2 != *pbVar12) {
LAB_6604493b:
        iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_66044940;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar14 = bVar2 < pbVar12[1];
      if (bVar2 != pbVar12[1]) goto LAB_6604493b;
      pbVar5 = pbVar5 + 2;
      pbVar12 = pbVar12 + 2;
    } while (bVar2 != 0);
    iVar6 = 0;
LAB_66044940:
    if (iVar6 == 0) {
      *(undefined2 *)((int)this + 0x50) = 4;
    }
    else {
      pbVar12 = &DAT_6606e614;
      pbVar5 = pbVar7;
      do {
        bVar2 = *pbVar5;
        bVar14 = bVar2 < *pbVar12;
        if (bVar2 != *pbVar12) {
LAB_6604497d:
          iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto LAB_66044982;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar14 = bVar2 < pbVar12[1];
        if (bVar2 != pbVar12[1]) goto LAB_6604497d;
        pbVar5 = pbVar5 + 2;
        pbVar12 = pbVar12 + 2;
      } while (bVar2 != 0);
      iVar6 = 0;
LAB_66044982:
      if (iVar6 == 0) {
        *(undefined2 *)((int)this + 0x50) = 4;
      }
      else {
        pbVar12 = &DAT_6606e60c;
        pbVar5 = pbVar7;
        do {
          bVar2 = *pbVar5;
          bVar14 = bVar2 < *pbVar12;
          if (bVar2 != *pbVar12) {
LAB_660449bf:
            iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_660449c4;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar5[1];
          bVar14 = bVar2 < pbVar12[1];
          if (bVar2 != pbVar12[1]) goto LAB_660449bf;
          pbVar5 = pbVar5 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar2 != 0);
        iVar6 = 0;
LAB_660449c4:
        if (iVar6 == 0) {
          *(undefined2 *)((int)this + 0x50) = 4;
        }
        else {
          pbVar12 = &DAT_6606cc30;
          pbVar5 = pbVar7;
          do {
            bVar2 = *pbVar5;
            bVar14 = bVar2 < *pbVar12;
            if (bVar2 != *pbVar12) {
LAB_66044a01:
              iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto LAB_66044a06;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar5[1];
            bVar14 = bVar2 < pbVar12[1];
            if (bVar2 != pbVar12[1]) goto LAB_66044a01;
            pbVar5 = pbVar5 + 2;
            pbVar12 = pbVar12 + 2;
          } while (bVar2 != 0);
          iVar6 = 0;
LAB_66044a06:
          if (iVar6 == 0) {
            *(undefined2 *)((int)this + 0x50) = 4;
          }
          else {
            pbVar5 = &DAT_6606e604;
            do {
              bVar2 = *pbVar7;
              bVar14 = bVar2 < *pbVar5;
              if (bVar2 != *pbVar5) {
LAB_66044a40:
                iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                goto LAB_66044a45;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar7[1];
              bVar14 = bVar2 < pbVar5[1];
              if (bVar2 != pbVar5[1]) goto LAB_66044a40;
              pbVar7 = pbVar7 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar2 != 0);
            iVar6 = 0;
LAB_66044a45:
            if (iVar6 == 0) {
              *(undefined2 *)((int)this + 0x50) = 4;
            }
            else {
              *(undefined2 *)((int)this + 0x50) = 5;
            }
          }
        }
      }
    }
  }
  if (*(int *)((int)this + 0x56) == 0) {
    piVar8 = FUN_66047020(*(short *)((int)this + 0x50));
    *(int **)((int)this + 4) = piVar8;
    if ((piVar8 != (int *)0x0) && (param_1 != (char *)0x0)) {
      local_c = (**(code **)(*piVar8 + 0x8c))(param_1);
    }
  }
  else {
    piVar8 = FUN_66046f10(param_1,*(short *)((int)this + 0x50));
    *(int **)((int)this + 4) = piVar8;
  }
  puVar3 = *(undefined4 **)((int)this + 4);
  if (puVar3 == (undefined4 *)0x0) {
    local_c = -0x7ffbfdb8;
  }
  if (local_c != 0) {
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
      *(undefined4 *)((int)this + 4) = 0;
    }
    if (local_c != 0) {
      *(int *)((int)this + 0x487) = local_c;
    }
  }
  return local_c;
}


