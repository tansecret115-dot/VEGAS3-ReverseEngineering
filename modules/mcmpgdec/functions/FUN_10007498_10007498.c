/* Module: mcmpgdec.dll
   Function: FUN_10007498
   Address: 10007498
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10007498(int param_1,int param_2,int *param_3,ushort *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  undefined1 *puVar10;
  int iVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort *puVar15;
  undefined4 uVar16;
  ushort local_97c [6];
  uint local_970;
  ushort *local_96c;
  uint local_968;
  uint local_964;
  int local_960;
  uint local_95c;
  uint local_958;
  uint local_954;
  uint local_950;
  uint local_94c;
  uint uStack_948;
  undefined1 *local_93c;
  undefined1 *local_938;
  undefined1 *local_934;
  ushort auStack_928 [776];
  undefined1 auStack_318 [256];
  undefined1 auStack_218 [64];
  undefined1 auStack_1d8 [64];
  undefined1 auStack_198 [128];
  undefined1 auStack_118 [280];
  
  local_93c = auStack_318;
  local_938 = auStack_218;
  if (*(int *)(param_1 + 0x590) == 1) {
    local_934 = auStack_1d8;
  }
  else if (*(int *)(param_1 + 0x590) == 2) {
    local_934 = auStack_198;
  }
  else {
    local_934 = auStack_118;
  }
  iVar4 = *(int *)(param_1 + 0x678);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  do {
    if ((iVar4 + *(int *)(param_1 + 0x66c)) - *(int *)(param_1 + 0x670) < 0x301) {
      return 0x300;
    }
    FUN_10009fb8(param_1,&local_970,(uint *)&local_96c,&local_968,&local_964,&local_960,&local_95c,
                 &local_958,&local_954,&local_950);
    if (*(int *)(param_1 + 0x5c) != 0) {
      return 0;
    }
    if ((local_970 & 0x10) != 0) {
      uVar2 = FUN_10003a04((int *)(param_1 + 0x66c),5);
      if (*(int *)(param_1 + 0x70) != 0) {
        if (*(int *)(param_1 + 0x658) == 0) {
          uVar2 = uVar2 * 2;
        }
        else {
          uVar2 = *(uint *)(&DAT_10027200 + uVar2 * 4);
        }
      }
      *(uint *)(param_1 + 0x660) = uVar2;
    }
    if (((local_970 & 8) != 0) || (((local_970 & 1) != 0 && (*(int *)(param_1 + 0x5fc) != 0)))) {
      if (*(int *)(param_1 + 0x70) == 0) {
        iVar4 = *(int *)(param_1 + 0x5d0) + -1;
        FUN_1000b714(param_1,(int *)param_5,(undefined4 *)local_97c,iVar4,iVar4,0,0,
                     *(int *)(param_1 + 0x5cc));
      }
      else {
        FUN_1000b5f4(param_1,(int)param_5,(undefined4 *)local_97c,(int)&local_94c,0,local_960,
                     local_95c,*(int *)(param_1 + 0x5dc) + -1,*(int *)(param_1 + 0x5e0) + -1,
                     local_958,local_954);
      }
      if (*(int *)(param_1 + 0x5c) != 0) {
        return 0;
      }
    }
    if ((local_970 & 4) != 0) {
      if (*(int *)(param_1 + 0x70) == 0) {
        iVar4 = *(int *)(param_1 + 0x5d8) + -1;
        FUN_1000b714(param_1,(int *)(param_5 + 2),(undefined4 *)local_97c,iVar4,iVar4,0,0,
                     *(int *)(param_1 + 0x5d4));
      }
      else {
        FUN_1000b5f4(param_1,(int)param_5,(undefined4 *)local_97c,(int)&local_94c,1,local_960,
                     local_95c,*(int *)(param_1 + 0x5e4) + -1,*(int *)(param_1 + 0x5e8) + -1,0,
                     local_954);
      }
      if (*(int *)(param_1 + 0x5c) != 0) {
        return 0;
      }
    }
    if (((local_970 & 1) != 0) && (*(int *)(param_1 + 0x5fc) != 0)) {
      FUN_10003858((int *)(param_1 + 0x66c),1);
    }
    if ((local_970 & 2) == 0) {
      if ((local_970 & 1) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (1 << ((byte)*(undefined4 *)(param_1 + 0x10c) & 0x1f)) - 1;
      }
    }
    else {
      uVar2 = FUN_1000a4f8(param_1);
      if (*(int *)(param_1 + 0x590) == 2) {
        iVar11 = 2;
        iVar4 = 2;
      }
      else {
        if (*(int *)(param_1 + 0x590) != 3) goto LAB_1000776a;
        iVar11 = 6;
        iVar4 = 6;
      }
      uVar3 = FUN_10003a04((int *)(param_1 + 0x66c),iVar11);
      uVar2 = uVar2 << iVar4 | uVar3;
    }
LAB_1000776a:
    if (*(int *)(param_1 + 0x5c) != 0) {
      return 0;
    }
    puVar14 = *(ushort **)(param_1 + 0x10c);
    puVar13 = auStack_928;
    FUN_1000a158(param_1,(undefined8 *)auStack_928,(int)puVar14);
    puVar9 = (ushort *)0x0;
    while (puVar12 = puVar9, (int)puVar12 < *(int *)(param_1 + 0x10c)) {
      puVar15 = auStack_928 + (int)puVar12 * 0x40;
      puVar9 = (ushort *)((int)puVar12 + 1);
      if ((uVar2 >> (*(int *)(param_1 + 0x10c) - (int)puVar9 & 0x1fU) & 1) != 0) {
        if ((local_970 & 1) == 0) {
          if (*(int *)(param_1 + 0x70) == 0) {
            FUN_10003fd0(param_1,puVar12,puVar15);
          }
          else {
            FUN_1000474c(param_1,(int)puVar12,(short *)puVar15);
          }
        }
        else if (*(int *)(param_1 + 0x70) == 0) {
          puVar13 = param_4;
          FUN_10003cc8(param_1,(int)puVar12,(int *)param_4,puVar15);
          puVar15 = puVar13;
        }
        else {
          puVar13 = param_4;
          FUN_100042a0(param_1,(uint)puVar12,(int *)param_4,puVar15);
          puVar15 = puVar13;
        }
        puVar13 = puVar12;
        puVar14 = puVar15;
        if (*(int *)(param_1 + 0x5c) != 0) {
          return 0;
        }
      }
    }
    if (*(int *)(param_1 + 0x5c0) == 4) {
      puVar13 = (ushort *)0x1;
      FUN_10003a04((int *)(param_1 + 0x66c),1);
    }
    if ((local_970 & 1) == 0) {
      param_4[4] = 0;
      param_4[5] = 0;
      param_4[2] = 0;
      param_4[3] = 0;
      param_4[0] = 0;
      param_4[1] = 0;
LAB_10007865:
      if (local_968 == 4) goto LAB_1000786c;
    }
    else {
      if (*(int *)(param_1 + 0x5fc) != 0) goto LAB_10007865;
LAB_1000786c:
      param_5[5] = 0;
      param_5[4] = 0;
      param_5[1] = 0;
      *param_5 = 0;
      param_5[7] = 0;
      param_5[6] = 0;
      param_5[3] = 0;
      param_5[2] = 0;
    }
    if ((*(int *)(param_1 + 0x5c0) == 2) && ((local_970 & 9) == 0)) {
      param_5[5] = 0;
      param_5[4] = 0;
      param_5[1] = 0;
      *param_5 = 0;
      if (*(int *)(param_1 + 0x5f0) == 3) {
        local_964 = 2;
      }
      else {
        local_94c = (uint)(*(int *)(param_1 + 0x5f0) == 2);
        local_964 = 1;
      }
    }
    iVar11 = *param_3 % *(int *)(param_1 + 0x11c) << 4;
    iVar4 = *param_3 / *(int *)(param_1 + 0x11c) << 4;
    if ((local_970 & 1) == 0) {
      puVar13 = local_97c;
      puVar14 = local_96c;
      FUN_1000ddfc(param_1,(int *)&local_93c,0x10,iVar11,iVar4,local_970,local_964,param_5,
                   &local_94c,(int *)puVar13,(int)local_96c);
    }
    iVar8 = *(int *)(param_1 + 0x10c);
    iVar7 = 0;
    if (0 < iVar8) {
      do {
        iVar1 = iVar7 + 1;
        if ((uVar2 >> (iVar8 - iVar1 & 0x1fU) & 1) != 0) {
          FUN_1000b148((undefined8 *)(auStack_928 + iVar7 * 0x40));
        }
        iVar8 = *(int *)(param_1 + 0x10c);
        iVar7 = iVar1;
      } while (iVar1 < iVar8);
    }
    uVar2 = 0;
    puVar9 = auStack_928;
    if (0 < iVar8) {
      do {
        uVar3 = uVar2 + 1;
        FUN_10009c4c(param_1,(int *)&local_93c,0x10,uVar2,iVar11,iVar4,local_950,
                     (byte)((byte)local_970 ^ 1) & 1,(undefined8 *)puVar9);
        uVar2 = uVar3;
        puVar9 = puVar9 + 0x40;
      } while ((int)uVar3 < *(int *)(param_1 + 0x10c));
    }
    if (((*(byte *)(param_1 + 0x694) & 0x10) == 0) || (*(int *)(param_1 + 0x5c0) == 3)) {
      pcVar6 = *(code **)(param_1 + 8);
      puVar10 = local_93c;
LAB_10007a71:
      (*pcVar6)(param_1 + 0x20,param_1 + 0x30,iVar11,iVar4,puVar10,puVar13,puVar14);
    }
    else if (*(int *)(param_1 + 0x9c) != 0) {
      puVar14 = *(ushort **)(param_1 + 8);
      puVar13 = (ushort *)(param_1 + 0x74);
      puVar10 = (undefined1 *)(param_1 + 0x90);
      pcVar6 = *(code **)(param_1 + 0xc);
      goto LAB_10007a71;
    }
    iVar4 = *param_3;
    *param_3 = iVar4 + 1;
    if (param_2 <= iVar4 + 1) {
      return 0xffffffff;
    }
    uVar2 = FUN_10003828(param_1 + 0x66c,'\x17');
    if ((uVar2 == 0) ||
       (puVar5 = FUN_10007d00(param_1,((*(int *)(param_1 + 0x678) + *(int *)(param_1 + 0x66c)) -
                                      *(int *)(param_1 + 0x670)) * 8),
       puVar5 == (undefined *)0xffffffff)) {
      return 0;
    }
    while (1 < (int)puVar5) {
      puVar5 = puVar5 + -1;
      param_4[4] = 0;
      param_4[5] = 0;
      param_4[2] = 0;
      param_4[3] = 0;
      param_4[0] = 0;
      param_4[1] = 0;
      if (*(int *)(param_1 + 0x5c0) == 2) {
        param_5[5] = 0;
        param_5[4] = 0;
        param_5[1] = 0;
        *param_5 = 0;
      }
      iVar4 = 2;
      if (*(int *)(param_1 + 0x5f0) != 3) {
        iVar4 = 1;
        local_94c = (uint)(*(int *)(param_1 + 0x5f0) == 2);
        uStack_948 = local_94c;
      }
      iVar11 = *param_3 % *(int *)(param_1 + 0x11c) << 4;
      iVar8 = *param_3 / *(int *)(param_1 + 0x11c) << 4;
      FUN_1000ddfc(param_1,(int *)&local_93c,0x10,iVar11,iVar8,local_970,iVar4,param_5,&local_94c,
                   (int *)local_97c,(uint)(*(int *)(param_1 + 0x5c0) == 1) * 8);
      uVar16 = 1;
      puVar9 = auStack_928;
      FUN_1000a158(param_1,(undefined8 *)auStack_928,1);
      if (0 < *(int *)(param_1 + 0x10c)) {
        uVar2 = 0;
        do {
          uVar3 = uVar2 + 1;
          FUN_10009c4c(param_1,(int *)&local_93c,0x10,uVar2,iVar11,iVar8,0,1,
                       (undefined8 *)auStack_928);
          uVar2 = uVar3;
        } while ((int)uVar3 < *(int *)(param_1 + 0x10c));
      }
      if ((*(int *)(param_1 + 0x5c0) == 3) || ((*(byte *)(param_1 + 0x694) & 0x10) == 0)) {
        pcVar6 = *(code **)(param_1 + 8);
        puVar10 = local_93c;
LAB_10007c64:
        (*pcVar6)(param_1 + 0x20,param_1 + 0x30,iVar11,iVar8,puVar10,puVar9,uVar16);
      }
      else if (*(int *)(param_1 + 0x9c) != 0) {
        uVar16 = *(undefined4 *)(param_1 + 8);
        puVar9 = (ushort *)(param_1 + 0x74);
        puVar10 = (undefined1 *)(param_1 + 0x90);
        pcVar6 = *(code **)(param_1 + 0xc);
        goto LAB_10007c64;
      }
      iVar4 = *param_3;
      *param_3 = iVar4 + 1;
      if (param_2 <= iVar4 + 1) {
        return 0xffffffff;
      }
    }
    iVar4 = *(int *)(param_1 + 0x678);
  } while( true );
}


