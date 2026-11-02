/* Module: vegas30.exe
   Function: FUN_005e0220
   Address: 005e0220
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005e0220(undefined4 param_1,int param_2,int *param_3)

{
  LPCSTR lpString1;
  uint *puVar1;
  uchar *_Dest;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  int local_e8 [4];
  int local_d8;
  LPCSTR local_d4;
  uchar *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  longlong local_30;
  undefined4 local_28 [6];
  int local_10;
  LPCSTR local_c;
  int local_8;
  
  local_38 = **(int **)(param_2 + 0x108);
  local_10 = 0;
  lVar13 = 0;
  if (0 < local_38) {
    do {
      iVar9 = *(int *)(*(int *)(param_2 + 0x108) + 4) * local_10 +
              *(int *)(*(int *)(param_2 + 0x108) + 8);
      local_8 = iVar9;
      if (local_10 == 0) {
        local_30 = lVar13;
        lVar13 = _SFSMPTE_SMPTEToNanos_4(iVar9 + 0xcc);
      }
      lpString1 = (LPCSTR)(iVar9 + 0x2a);
      local_c = lpString1;
      local_30 = lVar13;
      iVar5 = lstrcmpA(lpString1,"AA/V");
      if (iVar5 == 0) {
LAB_005e0312:
        local_c = (LPCSTR)0x2;
      }
      else {
        iVar5 = lstrcmpA(lpString1,"A2/V");
        if (iVar5 == 0) goto LAB_005e0312;
        iVar5 = lstrcmpA(lpString1,"B");
        if (iVar5 == 0) goto LAB_005e0312;
        FUN_0060ac30();
        FUN_0060ac30();
        lstrcpynA(&stack0xffffff0c,local_c,3);
        lstrcpynA(&stack0xffffff0c,"VA",3);
        iVar5 = lstrcmpA(&stack0xffffff0c,&stack0xffffff0c);
        iVar9 = local_8;
        if (iVar5 == 0) goto LAB_005e0312;
        local_c = (LPCSTR)0x1;
      }
      local_8 = 0;
      if (local_c != (LPCSTR)0x0) {
        do {
          bVar4 = false;
          piVar11 = local_e8;
          for (iVar5 = 0x2c; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar11 = 0;
            piVar11 = piVar11 + 1;
          }
          local_e8[1] = local_10;
          local_e8[3] = iVar9 + 0xc;
          iVar5 = local_8;
          if (local_c == (LPCSTR)0x1) {
            iVar5 = lstrcmpA((LPCSTR)(iVar9 + 0x2a),"V");
          }
          local_e8[2] = 3 - (uint)(iVar5 != 0);
          local_d4 = (LPCSTR)(iVar9 + 0x48);
          if (local_e8[2] == 3) {
            iVar5 = lstrcmpA(local_d4,"C");
            if (iVar5 != 0) {
              iVar5 = lstrcmpA(local_d4,"K");
              if (iVar5 != 0) {
                bVar4 = true;
              }
            }
          }
          if (local_e8[2] == 2) {
            iVar5 = lstrcmpA(local_d4,"D");
            if (iVar5 != 0) goto LAB_005e03e2;
LAB_005e03ea:
            local_28[0] = 1;
            _SFSMPTE_FrameCountToSMPTE_8(local_28,*(undefined4 *)(iVar9 + 0x68));
            uVar14 = _SFSMPTE_SMPTEToNanos_4(local_28);
            iVar8 = (int)((ulonglong)uVar14 >> 0x20);
            uVar6 = (uint)uVar14;
            iVar5 = *param_3;
            if (0 < iVar5) {
              iVar7 = (iVar5 + -1) * param_3[1] + param_3[2];
              local_34 = *(int *)(iVar7 + 4);
              puVar1 = (uint *)(iVar7 + 0x30);
              uVar2 = *puVar1;
              *puVar1 = *puVar1 + uVar6;
              *(uint *)(iVar7 + 0x34) = *(int *)(iVar7 + 0x34) + iVar8 + (uint)CARRY4(uVar2,uVar6);
              puVar1 = (uint *)(iVar7 + 0x40);
              uVar2 = *puVar1;
              *puVar1 = *puVar1 + uVar6;
              *(uint *)(iVar7 + 0x44) = *(int *)(iVar7 + 0x44) + iVar8 + (uint)CARRY4(uVar2,uVar6);
              if ((1 < iVar5 + -1) &&
                 (iVar5 = (iVar5 + -2) * param_3[1], iVar7 = iVar5 + param_3[2],
                 local_34 == *(int *)(iVar5 + 4 + param_3[2]))) {
                uVar2 = *(uint *)(iVar7 + 0x30);
                *(uint *)(iVar7 + 0x30) = uVar2 + uVar6;
                uVar3 = *(uint *)(iVar7 + 0x40);
                *(uint *)(iVar7 + 0x34) = *(int *)(iVar7 + 0x34) + iVar8 + (uint)CARRY4(uVar2,uVar6)
                ;
                *(uint *)(iVar7 + 0x40) = uVar3 + uVar6;
                *(uint *)(iVar7 + 0x44) = *(int *)(iVar7 + 0x44) + iVar8 + (uint)CARRY4(uVar3,uVar6)
                ;
              }
            }
            _Dest = (uchar *)(iVar9 + 0xfc);
            local_c8 = uVar14;
            iVar5 = lstrcmpA((LPCSTR)_Dest,"");
            if (iVar5 == 0) {
              _mbscpy(_Dest,(uchar *)"ADDITIVE DISSOLVE");
            }
          }
          else {
LAB_005e03e2:
            _Dest = local_d0;
            if (bVar4) goto LAB_005e03ea;
          }
          local_d0 = _Dest;
          local_d8 = iVar9 + 0x11a;
          puVar10 = local_28;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          puVar10 = (undefined4 *)(iVar9 + 0xcc);
          puVar12 = local_28;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          if (local_e8[2] == 2) {
            iVar5 = iVar9 + 0x6c;
LAB_005e0526:
            _SFSMPTE_AddSMPTE_8(local_28,iVar5);
          }
          else if (local_e8[2] == 3) {
            iVar5 = iVar9 + 0x84;
            goto LAB_005e0526;
          }
          lVar13 = _SFSMPTE_SMPTEToNanos_4(local_28);
          local_c0 = lVar13 - local_30;
          lVar13 = _SFSMPTE_SMPTEToNanos_4(iVar9 + 0xe4);
          lVar15 = _SFSMPTE_SMPTEToNanos_4(iVar9 + 0xcc);
          local_b8 = lVar13 - lVar15;
          puVar10 = local_28;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          puVar10 = (undefined4 *)(iVar9 + 0x9c);
          puVar12 = local_28;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          if (local_e8[2] == 2) {
            iVar5 = iVar9 + 0x6c;
LAB_005e05b7:
            _SFSMPTE_AddSMPTE_8(local_28,iVar5);
          }
          else if (local_e8[2] == 3) {
            iVar5 = iVar9 + 0x84;
            goto LAB_005e05b7;
          }
          uVar14 = _SFSMPTE_SMPTEToNanos_4(local_28);
          puVar10 = local_28;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          puVar10 = (undefined4 *)(iVar9 + 0xb4);
          puVar12 = local_28;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          local_b0 = uVar14;
          _SFSMPTE_SubtractSMPTE_8(local_28,iVar9 + 0x9c);
          if (local_e8[2] == 2) {
            iVar5 = iVar9 + 0x6c;
LAB_005e0622:
            _SFSMPTE_AddSMPTE_8(local_28,iVar5);
          }
          else if (local_e8[2] == 3) {
            iVar5 = iVar9 + 0x84;
            goto LAB_005e0622;
          }
          uVar14 = _SFSMPTE_SMPTEToNanos_4(local_28);
          local_50 = 0;
          local_4c = 0;
          local_48 = 0;
          local_44 = 0;
          local_40 = 0;
          local_90 = 0;
          local_a0 = 0;
          local_9c = 0;
          local_98 = 0;
          local_94 = 0;
          local_88 = 0;
          local_70 = 1;
          local_6c = 1;
          local_68 = 1;
          local_64 = 1;
          local_3c = 1;
          local_60 = 0;
          local_5c = 0x3ff00000;
          local_84 = 0x3ff00000;
          local_80 = 0;
          local_7c = 0;
          local_78 = 0;
          local_74 = 0;
          local_54 = 0xffffffff;
          local_a8 = uVar14;
          _SfList_InsertList_16(param_3,0xffffffff,local_e8,1);
          local_8 = local_8 + 1;
        } while (local_8 < (int)local_c);
      }
      local_10 = local_10 + 1;
      lVar13 = local_30;
    } while (local_10 < local_38);
  }
  return;
}


