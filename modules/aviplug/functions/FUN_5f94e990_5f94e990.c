/* Module: aviplug.dll
   Function: FUN_5f94e990
   Address: 5f94e990
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f94e990(HANDLE param_1,uint param_2,uint param_3,int param_4,uint *param_5)

{
  byte bVar1;
  char cVar2;
  BOOL BVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  int local_ac;
  uint local_a8 [4];
  uint local_98 [4];
  int local_88;
  int local_84;
  uint local_80;
  int local_7c;
  uint local_78 [5];
  uint local_64;
  uint local_60;
  uint local_5c [3];
  byte local_50;
  byte local_4f;
  undefined2 uStack_4e;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  
  local_7c = 0;
  local_a8[0] = param_3;
  local_a8[1] = param_4;
  SetFilePointer(param_1,param_3,(PLONG)(local_a8 + 1),0);
  BVar3 = ReadFile(param_1,local_98 + 2,0xc,&local_b4,(LPOVERLAPPED)0x0);
  if ((BVar3 == 0) || (local_b4 < 0xc)) {
    return 0x8004e008;
  }
  if ((local_98[2] != 0x5453494c) || (local_88 != 0x69766f6d)) {
    return 0x80070057;
  }
  local_b0 = param_3 + 0xc;
  local_ac = param_4 + (uint)(0xfffffff3 < param_3);
  local_a8[0] = local_98[3] + param_3 + 8;
  local_a8[1] = param_4 + (uint)CARRY4(local_98[3],param_3) +
                (uint)(0xfffffff7 < local_98[3] + param_3);
  cVar2 = (char)(param_2 & 0xf);
  cVar5 = cVar2 + '7';
  if ((param_2 & 0xf) < 10) {
    cVar5 = cVar2 + '0';
  }
  bVar1 = (byte)((int)param_2 >> 4);
  if ((param_2 & 0xf0) < 0x91) {
    cVar2 = (bVar1 & 0xf) + 0x30;
  }
  else {
    cVar2 = (bVar1 & 0xf) + 0x37;
  }
  if ((local_ac <= (int)local_a8[1]) && ((local_ac < (int)local_a8[1] || (local_b0 < local_a8[0]))))
  {
    while( true ) {
      local_98[0] = local_b0;
      local_98[1] = local_ac;
      SetFilePointer(param_1,local_b0,(PLONG)(local_98 + 1),0);
      BVar3 = ReadFile(param_1,local_98 + 2,0xc,&local_b4,(LPOVERLAPPED)0x0);
      if ((BVar3 == 0) || (local_b4 < 0xc)) break;
      if ((local_98[2] == 0x5453494c) && (local_88 == 0x20636572)) {
        uVar6 = local_98[3] + local_b0;
        iVar7 = local_ac + (uint)CARRY4(local_98[3],local_b0) + (uint)(0xfffffff7 < uVar6);
        uVar11 = local_b0 + 0xc;
        iVar8 = local_ac + (uint)(0xfffffff3 < local_b0);
        if (iVar8 <= iVar7) {
          if (iVar8 < iVar7) goto LAB_5f94eb43;
          do {
            if (uVar6 + 8 <= uVar11) break;
LAB_5f94eb43:
            do {
              BVar3 = ReadFile(param_1,&local_84,8,&local_b4,(LPOVERLAPPED)0x0);
              if ((BVar3 == 0) || (8 < local_b4)) goto LAB_5f94ec13;
              if ((short)local_84 == CONCAT11(cVar5,cVar2)) {
                local_98[2] = local_84;
                local_98[3] = local_80;
                local_b0 = uVar11;
                local_ac = iVar8;
                goto LAB_5f94ec13;
              }
              bVar12 = CARRY4(uVar11,local_98[3] + 8);
              uVar11 = uVar11 + local_98[3] + 8;
              iVar8 = iVar8 + (uint)bVar12;
              local_a8[2] = uVar11;
              local_a8[3] = iVar8;
              SetFilePointer(param_1,uVar11,(PLONG)(local_a8 + 3),0);
            } while (iVar8 < iVar7);
          } while (iVar8 <= iVar7);
        }
      }
      else if ((short)local_98[2] == CONCAT11(cVar5,cVar2)) break;
      uVar11 = (local_98[3] & 1) + 8 + local_98[3];
      bVar12 = CARRY4(local_b0,uVar11);
      local_b0 = local_b0 + uVar11;
      local_ac = local_ac + (uint)bVar12;
      if (((int)local_a8[1] < local_ac) ||
         (((int)local_a8[1] <= local_ac && (local_a8[0] <= local_b0)))) break;
    }
  }
LAB_5f94ec13:
  if ((local_98[3] != 0x23280) && (local_98[3] != 120000)) {
    return 0x8004e00b;
  }
  uVar11 = local_b0 + 8;
  iVar8 = local_ac + (uint)(0xfffffff7 < local_b0);
  local_b0 = uVar11;
  local_ac = iVar8;
  local_a8[0] = uVar11;
  local_a8[1] = iVar8;
  SetFilePointer(param_1,uVar11,(PLONG)(local_a8 + 1),0);
  BVar3 = ReadFile(param_1,&local_50,0x50,&local_b4,(LPOVERLAPPED)0x0);
  if ((BVar3 == 0) || (local_b4 < 0x50)) {
    return 0x8004e008;
  }
  if ((local_50 & 0xe0) != 0) {
    return 0x8004e00b;
  }
  if ((local_4f & 0xf0) != 0) {
    return 0x8004e00b;
  }
  if ((char)uStack_4e != '\0') {
    return 0x8004e00b;
  }
  local_bc = 0;
  local_b8 = 0;
  uVar6 = 0;
  local_a8[3] = iVar8;
  local_84 = (-(uint)((uStack_4e & 0x8000) != 0) & 2) + 10;
  local_78[2] = 9;
  local_78[3] = 0;
  local_78[0] = 10;
  local_78[1] = 1;
  local_a8[0] = 5;
  local_a8[1] = 3;
  if (local_84 != 0) {
    do {
      uVar9 = uVar6 & 1;
      uVar10 = local_a8[uVar9];
      uVar4 = uVar10 * 0x50;
      local_98[0] = uVar4 + uVar11;
      local_98[1] = ((int)uVar4 >> 0x1f) + local_a8[3] + (uint)CARRY4(uVar4,uVar11);
      SetFilePointer(param_1,local_98[0],(PLONG)(local_98 + 1),0);
      BVar3 = ReadFile(param_1,&local_50,0x50,&local_b4,(LPOVERLAPPED)0x0);
      if ((((BVar3 == 0) || (local_b4 < 0x50)) || ((local_50 & 0xe0) != 0x40)) ||
         ((uVar6 != (CONCAT21(uStack_4e,local_4f) & 0xff) >> 4 ||
          (uVar10 - 3 != (CONCAT12(uStack_4c,uStack_4e) & 0xff))))) break;
      if ((*(char *)((int)&uStack_4e + local_78[uVar9 + 2] * 5 + 1) == '`') &&
         (local_bc = *(uint *)(&uStack_4c + local_78[uVar9 + 2] * 5), local_b8 != 0))
      goto LAB_5f94ee12;
      if ((*(char *)((int)&uStack_4e + local_78[uVar9] * 5 + 1) == 'a') &&
         (local_b8 = *(uint *)(&uStack_4c + local_78[uVar9] * 5), local_bc != 0)) break;
      bVar12 = 0xffffd11f < uVar11;
      uVar11 = uVar11 + 12000;
      uVar6 = uVar6 + 1;
      local_a8[3] = local_a8[3] + bVar12;
    } while ((int)uVar6 < local_84);
    if (local_b8 != 0) {
LAB_5f94ee12:
      param_5[5] = local_b8;
      goto LAB_5f94ee2c;
    }
  }
  local_7c = 1;
LAB_5f94ee2c:
  if (local_bc == 0) {
    local_7c = 1;
  }
  else {
    param_5[4] = local_bc;
  }
  local_b8 = 5;
  if ((local_bc & 0x200000) != 0) {
    local_b8 = 6;
  }
  local_78[0] = 0x10e0;
  local_78[1] = 0x1e0;
  local_5c[1] = 3;
  local_5c[2] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_bc = 0;
  uVar11 = 0;
  do {
    local_a8[2] = local_b0;
    local_a8[3] = local_ac;
    local_84 = 0;
    if (local_b8 != 0) {
      do {
        uVar6 = local_78[uVar11 & 1];
        uVar10 = uVar6 + local_a8[2];
        local_78[2] = local_5c[(uVar11 & 1) + 1];
        uVar6 = ((int)uVar6 >> 0x1f) + local_a8[3] + (uint)CARRY4(uVar6,local_a8[2]);
        if (*(int *)((int)local_98 + local_bc) == 0) {
          local_60 = uVar10;
          local_5c[0] = uVar6;
          SetFilePointer(param_1,uVar10,(PLONG)local_5c,0);
          BVar3 = ReadFile(param_1,&local_50,0x50,&local_b4,(LPOVERLAPPED)0x0);
          if ((((BVar3 == 0) || (local_b4 < 0x50)) || ((local_50 & 0xe0) != 0x60)) ||
             ((uVar11 != (CONCAT21(uStack_4e,local_4f) & 0xff) >> 4 ||
              (local_78[2] != (CONCAT12(uStack_4c,uStack_4e) & 0xff))))) goto LAB_5f94f0b4;
          if (((char)(uStack_4e >> 8) == 'P') &&
             (*(uint *)((int)local_98 + local_bc) =
                   CONCAT22(uStack_4a,CONCAT11(uStack_4b,uStack_4c)),
             *(int *)((int)local_a8 + local_bc) != 0)) break;
        }
        if (*(int *)((int)local_a8 + local_bc) == 0) {
          local_78[4] = uVar10 + 0x500;
          local_64 = uVar6 + (0xfffffaff < uVar10);
          SetFilePointer(param_1,local_78[4],(PLONG)(local_78 + 5),0);
          BVar3 = ReadFile(param_1,&local_50,0x50,&local_b4,(LPOVERLAPPED)0x0);
          if (((BVar3 == 0) || (local_b4 < 0x50)) ||
             (((local_50 & 0xe0) != 0x60 ||
              ((uVar11 != (CONCAT21(uStack_4e,local_4f) & 0xff) >> 4 ||
               (local_78[2] + 1 != (CONCAT12(uStack_4c,uStack_4e) & 0xff))))))) goto LAB_5f94f0b4;
          if (((char)(uStack_4e >> 8) == 'Q') &&
             (*(uint *)((int)local_a8 + local_bc) =
                   CONCAT22(uStack_4a,CONCAT11(uStack_4b,uStack_4c)),
             *(int *)((int)local_98 + local_bc) != 0)) break;
        }
        bVar12 = 0xffffd11f < local_a8[2];
        local_a8[2] = local_a8[2] + 12000;
        uVar11 = uVar11 + 1;
        local_84 = local_84 + 1;
        local_a8[3] = local_a8[3] + bVar12;
      } while (local_84 < (int)local_b8);
    }
    bVar12 = CARRY4(local_b0,local_b8 * 12000);
    local_b0 = local_b0 + local_b8 * 12000;
    local_ac = local_ac + (uint)bVar12;
    local_bc = local_bc + 4;
    uVar11 = local_b8;
    if (7 < (int)local_bc) {
LAB_5f94f0b4:
      if (local_98[0] == 0) {
        local_7c = 1;
      }
      else {
        *param_5 = local_98[0];
      }
      if (local_a8[0] == 0) {
        local_7c = 1;
      }
      else {
        param_5[1] = local_a8[0];
      }
      if (local_98[1] == 0) {
        local_7c = 1;
      }
      else {
        param_5[2] = local_98[1];
      }
      if (local_a8[1] != 0) {
        param_5[3] = local_a8[1];
        return (uint)(local_7c != 0);
      }
      return 1;
    }
  } while( true );
}


