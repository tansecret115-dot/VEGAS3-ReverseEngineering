/* Module: rmbe3260.dll
   Function: FUN_6603c2a0
   Address: 6603c2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6603c2a0(void)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  char *pcVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined4 *puVar14;
  bool bVar15;
  undefined2 uStack_26;
  undefined2 local_24;
  undefined4 local_1c;
  int local_14;
  uint local_10;
  uint local_c;
  undefined4 *local_8;
  
  iVar4 = FUN_66043aa0(7);
  uVar9 = 0;
  if (iVar4 != 0) {
    return 0xfff1;
  }
  if (DAT_660752b4 != (int *)0x0) {
    FUN_66043a80(DAT_660752b4);
    DAT_660752b4 = (int *)0x0;
  }
  DAT_660752b4 = FUN_66043a60();
  if (DAT_660752b4 == (int *)0x0) {
    return 0xfff1;
  }
  uVar5 = FUN_66043b00((int)DAT_660752b4);
  DAT_66075278 = CONCAT22(DAT_66075278._2_2_,(short)uVar5);
  if ((short)uVar5 == 0) {
    return 0xfff5;
  }
  DAT_6607527c = operator_new((uVar5 & 0xffff) << 2);
  DAT_66075280 = operator_new((DAT_66075278 & 0xffff) << 3);
  DAT_66075284 = operator_new((DAT_66075278 & 0xffff) << 2);
  DAT_6607528c = operator_new((DAT_66075278 & 0xffff) << 2);
  DAT_66075290 = operator_new((DAT_66075278 & 0xffff) << 2);
  DAT_660752ac = operator_new((DAT_66075278 & 0xffff) << 4);
  DAT_66075288 = operator_new((DAT_66075278 & 0xffff) << 2);
  if ((short)DAT_66075278 != 0) {
    local_14 = 0;
    do {
      FUN_66043ad0((int)DAT_660752b4,uVar9,(uint *)((int)DAT_6607527c + uVar9 * 4));
      local_10 = uVar9;
      FUN_66043b20((int)DAT_660752b4,*(uint *)((int)DAT_6607527c + uVar9 * 4),(char *)&local_1c,
                   (int *)&local_10);
      pbVar10 = &DAT_6606e210;
      pbVar6 = (byte *)&local_1c;
      do {
        bVar2 = *pbVar6;
        bVar15 = bVar2 < *pbVar10;
        if (bVar2 != *pbVar10) {
LAB_6603c454:
          iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
          goto LAB_6603c459;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar6[1];
        bVar15 = bVar2 < pbVar10[1];
        if (bVar2 != pbVar10[1]) goto LAB_6603c454;
        pbVar6 = pbVar6 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_6603c459:
      if (iVar4 == 0) {
        uVar5 = 0xffffffff;
        pcVar11 = &DAT_6606e200;
        do {
          pcVar13 = pcVar11;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar13 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar13;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar11 = pcVar13 + -uVar5;
        pcVar13 = (char *)&local_1c;
        for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      *(undefined4 *)((int)DAT_66075280 + uVar9 * 8) = local_1c;
      *(uint *)((int)DAT_66075280 + uVar9 * 8 + 4) = local_10;
      FUN_66043b50((int)DAT_660752b4,*(uint *)((int)DAT_6607527c + uVar9 * 4),0,(int *)&local_8,
                   (ushort *)&local_c);
      pvVar7 = operator_new(local_c & 0xffff);
      *(void **)((int)DAT_66075284 + uVar9 * 4) = pvVar7;
      puVar12 = local_8;
      puVar14 = *(undefined4 **)((int)DAT_66075284 + uVar9 * 4);
      for (uVar5 = (local_c & 0xffff) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      for (uVar5 = local_c & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      FUN_66043b50((int)DAT_660752b4,*(uint *)((int)DAT_6607527c + uVar9 * 4),4,(int *)&local_8,
                   (ushort *)&local_c);
      pvVar7 = operator_new(local_c & 0xffff);
      *(void **)((int)DAT_66075288 + uVar9 * 4) = pvVar7;
      puVar12 = local_8;
      puVar14 = *(undefined4 **)((int)DAT_66075288 + uVar9 * 4);
      for (uVar5 = (local_c & 0xffff) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      for (uVar5 = local_c & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      iVar4 = strncmp((char *)&local_1c,&DAT_6606e208,4);
      if (iVar4 == 0) {
        *(undefined4 *)((int)DAT_6607528c + uVar9 * 4) = 0x3b60;
      }
      else {
        FUN_66043b50((int)DAT_660752b4,*(uint *)((int)DAT_6607527c + uVar9 * 4),1,(int *)&local_8,
                     (ushort *)&local_c);
        *(undefined4 *)((int)DAT_6607528c + uVar9 * 4) = *local_8;
      }
      FUN_66043b50((int)DAT_660752b4,*(uint *)((int)DAT_6607527c + uVar9 * 4),0x13,(int *)&local_8,
                   (ushort *)&local_c);
      *(undefined4 *)((int)DAT_66075290 + uVar9 * 4) = *local_8;
      FUN_66043b50((int)DAT_660752b4,*(uint *)((int)DAT_6607527c + uVar9 * 4),2,(int *)&local_8,
                   (ushort *)&local_c);
      uStack_26 = (undefined2)((uint)*local_8 >> 0x10);
      local_24 = (undefined2)local_8[1];
      uVar3 = *(ushort *)(local_8 + 2);
      *(uint *)((int)DAT_660752ac + local_14 + 8) = (uint)local_8[1] >> 0x10;
      *(uint *)((int)DAT_660752ac + local_14 + 4) = CONCAT22(local_24,uStack_26);
      uVar9 = uVar9 + 1;
      *(uint *)((int)DAT_660752ac + local_14 + 0xc) = (uint)uVar3;
      local_14 = local_14 + 0x10;
    } while ((int)uVar9 < (int)(DAT_66075278 & 0xffff));
  }
  return 0;
}


