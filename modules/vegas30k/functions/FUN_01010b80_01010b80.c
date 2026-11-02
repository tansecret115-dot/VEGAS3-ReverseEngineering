/* Module: vegas30k.dll
   Function: FUN_01010b80
   Address: 01010b80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01010b80(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  longlong lVar8;
  uint local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  undefined8 local_38;
  
  uVar2 = param_1;
  FUN_0100ff10(param_1);
  puVar3 = param_2;
  param_2 = (undefined4 *)0x0;
  bVar1 = false;
  puVar3[3] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[4] = 0xffffffff;
  *puVar3 = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 3;
  puVar3[9] = 0;
  do {
    if ((param_2 != (undefined4 *)0x0) && (bVar1)) {
      iVar4 = 0;
LAB_01010f84:
      FUN_0100ff40();
      return iVar4;
    }
    iVar4 = FUN_01010010(&local_54,0x18);
    if (iVar4 < 0) goto LAB_01010f84;
    if (local_54 != 1) {
LAB_01010f7f:
      iVar4 = -0x7fffbffb;
      goto LAB_01010f84;
    }
    iVar4 = FUN_0100ffe0(&local_58,8);
    if (iVar4 < 0) goto LAB_01010f84;
    uVar5 = local_58 & 0xff;
    if (uVar5 == 0xba) {
      iVar4 = FUN_0100ff80(&local_44,2);
      if (iVar4 < 0) goto LAB_01010f84;
      FUN_010101e0(&local_40);
      if (local_44 == 0) {
        bVar7 = 0xffffffc1 < local_40;
        local_40 = local_40 + 0x3e;
      }
      else {
        bVar7 = 0xffffffb1 < local_40;
        local_40 = local_40 + 0x4e;
      }
      local_3c = local_3c + (uint)bVar7;
      FUN_01010200(local_40,local_3c);
    }
    else if ((uVar5 == 0xc0) || (uVar5 == 0xe0)) {
      iVar4 = FUN_0100ffb0(&local_4c,0x10);
      if (iVar4 < 0) goto LAB_01010f84;
      FUN_010101e0(&local_38);
      lVar8 = __allmul(local_4c & 0xffff,0,8,0);
      local_38 = lVar8 + local_38;
      iVar4 = FUN_0100ffe0(&param_1,8);
      if (iVar4 < 0) goto LAB_01010f84;
      while ((char)param_1 == -1) {
        iVar4 = FUN_0100ffe0(&param_1,8);
        if (iVar4 < 0) goto LAB_01010f84;
      }
      FUN_010101e0(&local_40);
      FUN_01010200(local_40 - 8,local_3c - (uint)(local_40 < 8));
      iVar4 = FUN_0100ffe0(&param_1,2);
      if (iVar4 < 0) goto LAB_01010f84;
      if ((char)param_1 == '\x02') {
        FUN_010101e0(&local_40);
        FUN_01010200(local_40 + 0xe,local_3c + (uint)(0xfffffff1 < local_40));
        iVar4 = FUN_0100ffe0(&local_48,8);
        if (iVar4 < 0) goto LAB_01010f84;
        FUN_010101e0(&local_40);
        uVar5 = (local_48 & 0xff) * 8;
        bVar7 = CARRY4(local_40,uVar5);
        local_40 = local_40 + uVar5;
        local_3c = local_3c + (uint)bVar7;
      }
      else {
        if ((char)param_1 == '\x01') {
          FUN_010101e0(&local_40);
          iVar4 = local_40 + 0xe;
          iVar6 = local_3c + (uint)(0xfffffff1 < local_40);
        }
        else {
          FUN_010101e0(&local_40);
          iVar4 = local_40 - 2;
          iVar6 = local_3c - (uint)(local_40 < 2);
        }
        FUN_01010200(iVar4,iVar6);
        iVar4 = FUN_0100ffe0(&param_1,4);
        if (iVar4 < 0) goto LAB_01010f84;
        FUN_010101e0(&local_40);
        if ((char)param_1 == '\x02') {
          bVar7 = 0xffffffdb < local_40;
          local_40 = local_40 + 0x24;
        }
        else if ((char)param_1 == '\x03') {
          bVar7 = 0xffffffb3 < local_40;
          local_40 = local_40 + 0x4c;
        }
        else {
          if ((char)param_1 != '\0') goto LAB_01010f7f;
          bVar7 = 0xfffffffb < local_40;
          local_40 = local_40 + 4;
        }
        local_3c = local_3c + (uint)bVar7;
      }
      FUN_01010200(local_40,local_3c);
      if ((param_2 == (undefined4 *)0x0) && ((char)local_58 == -0x20)) {
        iVar4 = FUN_01010240(puVar3,uVar2,local_40,local_3c,local_38);
        if (iVar4 < 0) goto LAB_01010f84;
        if (iVar4 == 0) {
          param_2 = (undefined4 *)0x1;
        }
      }
      else if ((!bVar1) && ((char)local_58 == -0x40)) {
        iVar4 = FUN_01010a50(puVar3,uVar2,local_40,local_3c,local_38);
        if (iVar4 < 0) goto LAB_01010f84;
        if (iVar4 == 0) {
          bVar1 = true;
        }
      }
      FUN_01010200(local_38);
    }
    else {
      if ((byte)local_58 < 0xbb) goto LAB_01010f7f;
      iVar4 = FUN_0100ffb0(&local_50,0x10);
      if (iVar4 < 0) goto LAB_01010f84;
      FUN_010101e0(&local_40);
      uVar5 = (local_50 & 0xffff) * 8;
      FUN_01010200(uVar5 + local_40,local_3c + (uint)CARRY4(uVar5,local_40));
    }
  } while( true );
}


