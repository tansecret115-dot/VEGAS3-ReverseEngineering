/* Module: vegas30.exe
   Function: FUN_005d3ac0
   Address: 005d3ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d3ac0(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  bool bVar11;
  bool bVar12;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48 [4];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar2 = *(int *)(param_1 + 0x230);
  uVar8 = 0;
  if ((*(int *)(param_1 + 0xd4c) != 0) || (*(int *)(param_1 + 0xd50) != 0)) {
    if (*(int *)(param_1 + 0xd38) != 0) {
      uVar8 = FUN_005e2290(iVar2,param_1);
      goto LAB_005d3eb9;
    }
    if (*(int *)(param_1 + 0xd3c) != 0) {
      *(undefined4 *)(param_1 + 0xd3c) = 0;
      if ((DAT_0065ae58 & 8) == 0) {
        FUN_004eaad0(iVar2,0,0x23,1);
        DAT_0065ae58 = DAT_0065ae58 | 8;
      }
      FUN_004266c0();
      iVar4 = *(int *)(iVar2 + 0xc58) + 1;
      if (iVar4 < 2) {
        iVar4 = 1;
      }
      *(int *)(iVar2 + 0xc58) = iVar4;
      uVar3 = FUN_005ba4b0(iVar2,0);
      iVar4 = FUN_005b9fc0(iVar2,uVar3,1);
      uVar1 = *(undefined8 *)(param_1 + 0xda0);
      uVar8 = *(undefined4 *)(param_1 + 0xd84);
      puVar7 = local_48;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_48[3] = *(undefined4 *)(param_1 + 0xd7c);
      local_30 = *(undefined4 *)(param_1 + 0xd80);
      local_28 = *(undefined4 *)(param_1 + 0xda8);
      local_24 = *(undefined4 *)(param_1 + 0xdac);
      uStack_4c = (undefined4)((ulonglong)uVar1 >> 0x20);
      local_50 = (undefined4)uVar1;
      local_38 = uVar1;
      local_2c = uVar8;
      FUN_005ba6d0(iVar2,uVar3,*(undefined4 *)(param_1 + 0xdc0),local_48,param_1 + 0xd74,local_50,
                   uStack_4c,0);
      FUN_005ba7d0(iVar2,uVar3,*(undefined4 *)(param_1 + 0xd8c),*(undefined4 *)(param_1 + 0xd90),
                   *(undefined4 *)(param_1 + 0xd94),*(undefined4 *)(param_1 + 0xd98));
      FUN_005ba920(iVar2,uVar3,*(undefined4 *)(param_1 + 0xdc4));
      FUN_00428fa0(iVar2,0);
      iVar5 = param_1 + 0xdb0;
      uVar3 = 0;
      uVar8 = FUN_005ba4b0(iVar2,0);
      FUN_005b8d10(iVar2,uVar8,uVar3,iVar5);
      *(undefined4 *)(iVar4 + 0xb8) = *(undefined4 *)(param_1 + 0xd88);
      FUN_005ba030(iVar2,iVar4,1,1);
      if (*(double *)(param_1 + 0xda0) != (double)CONCAT44(DAT_0064b11c,DAT_0064b118)) {
        FUN_005b83b0(iVar2,1);
        DAT_0064b118 = *(undefined4 *)(param_1 + 0xda0);
        DAT_0064b11c = *(undefined4 *)(param_1 + 0xda4);
        FUN_005b8ca0(iVar2,*(undefined4 *)(param_1 + 0xda0),*(undefined4 *)(param_1 + 0xda4));
        FUN_005b84d0(iVar2,1);
        DAT_0064767c = DAT_0064767c | 2;
      }
      iVar4 = lstrcmpA((LPCSTR)(param_1 + 0x128),(LPCSTR)(iVar2 + 0x238));
      if (iVar4 != 0) {
        if ((DAT_0065ae58 & 8) == 0) {
          FUN_004eaad0(iVar2,0,0x23,1);
          DAT_0065ae58 = DAT_0065ae58 | 8;
        }
        _mbscpy((uchar *)(iVar2 + 0x238),(uchar *)(param_1 + 0x128));
        *(undefined4 *)(param_1 + 0xd4c) = 0;
        *(undefined4 *)(param_1 + 0xd50) = 1;
      }
      FUN_00426710();
      uVar8 = 1;
      DAT_0064767c = DAT_0064767c | 0x1000;
      FUN_00427f90(0xffffffff,0xffffffff,0,1);
      *(undefined4 *)(param_1 + 0xd4c) = 0;
      *(undefined4 *)(param_1 + 0xd50) = 1;
      goto LAB_005d3eb9;
    }
    if (*(int *)(param_1 + 0xd40) != 0) {
      *(undefined4 *)(param_1 + 0xd40) = 0;
      iVar5 = 0x28;
      bVar11 = false;
      iVar4 = 0;
      bVar12 = true;
      pbVar6 = (byte *)(iVar2 + 0x458);
      pbVar9 = (byte *)(param_1 + 0xd08);
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar11 = *pbVar6 < *pbVar9;
        bVar12 = *pbVar6 == *pbVar9;
        pbVar6 = pbVar6 + 1;
        pbVar9 = pbVar9 + 1;
      } while (bVar12);
      if (!bVar12) {
        iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      }
      if (iVar4 != 0) {
        if ((DAT_0065ae58 & 8) == 0) {
          FUN_004eaad0(iVar2,0,0x11,1);
          DAT_0065ae58 = DAT_0065ae58 | 8;
        }
        puVar7 = (undefined4 *)(param_1 + 0xd08);
        puVar10 = (undefined4 *)(iVar2 + 0x458);
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        }
        if (iVar2 == DAT_0064b138) {
          puVar7 = (undefined4 *)(param_1 + 0xd08);
          puVar10 = &DAT_0064b110;
          for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar10 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar10 = puVar10 + 1;
          }
          DAT_0064767c = DAT_0064767c | 2;
        }
        *(undefined4 *)(param_1 + 0xd4c) = 0;
        *(undefined4 *)(param_1 + 0xd50) = 1;
      }
      uVar8 = 1;
      goto LAB_005d3eb9;
    }
    if (*(int *)(param_1 + 0xd44) == 0) {
      if (*(int *)(param_1 + 0xd48) != 0) {
        *(undefined4 *)(param_1 + 0xd48) = 0;
        _mbscpy((uchar *)(iVar2 + 0x340),(uchar *)(param_1 + 0xdd0));
        uVar8 = 1;
        *(undefined4 *)(iVar2 + 0x444) = *(undefined4 *)(param_1 + 0xed4);
        *(undefined4 *)(param_1 + 0xd4c) = 0;
        *(undefined4 *)(param_1 + 0xd50) = 1;
      }
      goto LAB_005d3eb9;
    }
    *(undefined4 *)(param_1 + 0xd44) = 0;
    iVar4 = iVar2 + 0x1bc;
    iVar5 = _SfSummary_Compare_8(iVar4,param_1 + 0x234);
    if (iVar5 == 0) {
      if ((DAT_0065ae58 & 1) == 0) {
        FUN_004eaad0(iVar2,0,0x12,1);
        DAT_0065ae58 = DAT_0065ae58 | 1;
      }
      _SfSummary_Free_4(iVar4);
      _SfSummary_Copy_8(iVar4,param_1 + 0x234);
      *(undefined4 *)(param_1 + 0xd4c) = 0;
      *(undefined4 *)(param_1 + 0xd50) = 1;
    }
  }
  uVar8 = 1;
LAB_005d3eb9:
  if ((*(int *)(param_1 + 0xd50) != 0) && (iVar2 == DAT_0064b138)) {
    FUN_00401160();
  }
  return uVar8;
}


