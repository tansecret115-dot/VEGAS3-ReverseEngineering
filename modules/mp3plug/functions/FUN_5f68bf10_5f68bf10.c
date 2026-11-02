/* Module: mp3plug.dll
   Function: FUN_5f68bf10
   Address: 5f68bf10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f68bf10(void *this,uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  ushort local_c [2];
  uint local_8;
  uint local_4;
  
  if (*(int *)((int)this + 0x896) == 3) {
    bVar8 = param_1 < 0x2d00;
    param_1 = param_1 - 0x2d00;
    param_2 = param_2 - bVar8;
    if (((int)param_2 < 1) && ((int)param_2 < 0)) {
      param_1 = 0;
      param_2 = 0;
    }
  }
  if (((int)param_2 < *(int *)((int)this + 0x1704)) ||
     (((int)param_2 <= *(int *)((int)this + 0x1704) && (param_1 < *(uint *)((int)this + 0x1700)))))
  {
    *param_3 = *(uint *)((int)this + 0x16f8);
    param_3[1] = *(uint *)((int)this + 0x16fc);
    *param_4 = *(uint *)((int)this + 0x16f0);
    param_4[1] = *(uint *)((int)this + 0x16f4);
  }
  else {
    *param_3 = *(uint *)((int)this + 0x1708);
    param_3[1] = *(uint *)((int)this + 0x170c);
    *param_4 = *(uint *)((int)this + 0x1700);
    param_4[1] = *(uint *)((int)this + 0x1704);
  }
  uVar7 = *param_4;
  if (((param_1 != uVar7) || (param_2 != param_4[1])) &&
     (iVar4 = *(int *)((int)this + 0x1718), 0 < iVar4)) {
    if (iVar4 < 2) {
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
      puVar2 = *(uint **)((int)this + 0x1720);
      do {
        if (((int)param_2 < (int)puVar2[5]) ||
           (((int)param_2 <= (int)puVar2[5] && (param_1 < puVar2[4])))) break;
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 4;
      } while (iVar3 < iVar4);
      iVar3 = iVar3 + -1;
    }
    iVar3 = iVar3 * 0x10;
    puVar2 = (uint *)(iVar3 + *(int *)((int)this + 0x1720));
    uVar5 = *puVar2;
    uVar1 = puVar2[1];
    if (((int)uVar1 <= (int)param_2) && (((int)uVar1 < (int)param_2 || (uVar5 <= param_1)))) {
      iVar4 = (param_2 - uVar1) - (uint)(param_1 < uVar5);
      iVar6 = (param_2 - param_4[1]) - (uint)(param_1 < uVar7);
      if ((iVar4 <= iVar6) && ((iVar4 < iVar6 || (param_1 - uVar5 < param_1 - uVar7)))) {
        *param_4 = uVar5;
        param_4[1] = uVar1;
        iVar4 = *(int *)((int)this + 0x1720);
        *param_3 = *(uint *)(iVar3 + 8 + iVar4);
        param_3[1] = *(uint *)(iVar3 + 0xc + iVar4);
      }
    }
  }
  uVar7 = *param_4;
  local_18 = param_4[1];
  if ((param_1 == uVar7) && (param_2 == local_18)) {
    return 0;
  }
  local_24 = *param_3;
  local_20 = param_3[1];
  if ((local_24 != *(uint *)((int)this + 0x16f8)) ||
     (local_28 = 1, local_20 != *(uint *)((int)this + 0x16fc))) {
    local_28 = 0;
  }
  iVar4 = 0;
  local_c[0] = 0;
  local_c[1] = 0;
  local_8 = 0;
  local_4 = 0;
  local_1c = uVar7;
  do {
    if ((int)param_2 < (int)local_18) {
      return iVar4;
    }
    if (((int)param_2 <= (int)local_18) && (param_1 <= uVar7)) {
      return iVar4;
    }
    local_14 = local_24;
    local_10 = local_20;
    SetFilePointer(*(HANDLE *)((int)this + 4),local_24,(PLONG)&local_10,0);
    iVar4 = FUN_5f688530(*(HANDLE *)((int)this + 4),local_c,local_28,&local_24);
    if (iVar4 < 0) {
      if ((*(byte *)((int)this + 0x82c) & 1) != 0) {
        iVar3 = 0;
        do {
          if (0x3ff < iVar3) goto LAB_5f68c1c9;
          bVar8 = 0xfffffffe < local_24;
          local_24 = local_24 + 1;
          local_20 = local_20 + bVar8;
          local_14 = local_24;
          local_10 = local_20;
          SetFilePointer(*(HANDLE *)((int)this + 4),local_24,(PLONG)&local_10,0);
          iVar4 = FUN_5f688530(*(HANDLE *)((int)this + 4),local_c,0,&local_24);
          iVar3 = iVar3 + 1;
        } while (iVar4 < 0);
        goto LAB_5f68c1d1;
      }
LAB_5f68c1c9:
      if (-1 < iVar4) goto LAB_5f68c1d1;
    }
    else {
LAB_5f68c1d1:
      if (local_28 != 0) {
        *(undefined4 *)((int)this + 0x16f0) = 0;
        *(uint *)((int)this + 0x16f8) = local_24;
        *(undefined4 *)((int)this + 0x16f4) = 0;
        *(uint *)((int)this + 0x16fc) = local_20;
      }
      *param_3 = local_24;
      param_3[1] = local_20;
      *param_4 = uVar7;
      param_4[1] = local_18;
      bVar8 = CARRY4(local_8,uVar7);
      uVar7 = local_8 + uVar7;
      uVar5 = local_18 + bVar8;
      if (((int)param_2 < (int)uVar5) || (((int)param_2 <= (int)uVar5 && (param_1 < uVar7)))) {
        *(uint *)((int)this + 0x1708) = local_24;
        bVar8 = CARRY4(local_24,local_4);
        local_24 = local_24 + local_4;
        *(uint *)((int)this + 0x170c) = local_20;
        local_20 = local_20 + bVar8;
        *(uint *)((int)this + 0x1700) = local_1c;
        *(uint *)((int)this + 0x1704) = local_18;
        FUN_5f68c2e0(this,local_8 + local_1c,local_18 + CARRY4(local_8,local_1c),local_24,local_20);
        return iVar4;
      }
      bVar8 = CARRY4(local_24,local_4);
      local_24 = local_24 + local_4;
      local_20 = local_20 + bVar8;
      local_1c = uVar7;
      local_18 = uVar5;
      FUN_5f68c2e0(this,uVar7,uVar5,local_24,local_20);
    }
    local_28 = 0;
    if (iVar4 < 0) {
      return iVar4;
    }
  } while( true );
}


