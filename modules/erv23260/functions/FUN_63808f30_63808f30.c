/* Module: erv23260.dll
   Function: FUN_63808f30
   Address: 63808f30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_63808f30(void *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int local_8;
  
  local_8 = 0;
  iVar4 = *(int *)((int)param_1 + 4);
  if ((iVar4 == 0x80) && (*(int *)((int)param_1 + 8) == 0x60)) {
    *(undefined4 *)((int)param_1 + 0x6d8) = 1;
  }
  else if ((iVar4 == 0xb0) && (*(int *)((int)param_1 + 8) == 0x90)) {
    *(undefined4 *)((int)param_1 + 0x6d8) = 2;
  }
  else if ((iVar4 == 0x160) && (*(int *)((int)param_1 + 8) == 0x120)) {
    *(undefined4 *)((int)param_1 + 0x6d8) = 3;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x6d8) = 6;
  }
  if (*(int *)(*(int *)((int)param_1 + 0x5c0) + 0x828) != 2) {
    *(undefined4 *)((int)param_1 + 0x6d8) = 6;
  }
  uVar1 = iVar4 + 0xfU >> 4;
  uVar6 = *(int *)((int)param_1 + 8) + 0xfU >> 4;
  *(uint *)((int)param_1 + 0x6e0) = uVar1;
  *(uint *)((int)param_1 + 0x6dc) = uVar6;
  *(uint *)((int)param_1 + 0x6e4) = uVar1 * uVar6;
  if (uVar6 < 0x33) {
    if (uVar6 < 0x1a) {
      *(undefined4 *)((int)param_1 + 0x6e8) = 1;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x6e8) = 2;
    }
  }
  else {
    *(undefined4 *)((int)param_1 + 0x6e8) = 4;
  }
  pvVar2 = (void *)FUN_637f2000(0x24);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_63809340(pvVar2,0,*(uint *)((int)param_1 + 4),*(int *)((int)param_1 + 8),
                          *(undefined4 *)(*(int *)((int)param_1 + 0x5c0) + 0x8bc),&local_8);
  }
  *(undefined4 **)((int)param_1 + 0x6ec) = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    return 2;
  }
  if (local_8 != 0) {
    if (puVar3 != (undefined4 *)0x0) {
      FUN_63809470(puVar3);
      FUN_637f2010(puVar3);
    }
    *(undefined4 *)((int)param_1 + 0x6ec) = 0;
    return local_8;
  }
  *(undefined4 **)((int)param_1 + 0x6f0) = puVar3;
  pvVar2 = (void *)FUN_637f2000(0x24);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_63809340(pvVar2,0x800,*(uint *)((int)param_1 + 4),*(int *)((int)param_1 + 8),
                          *(undefined4 *)(*(int *)((int)param_1 + 0x5c0) + 0x8bc),&local_8);
  }
  *(undefined4 **)((int)param_1 + 0x6f4) = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    return 2;
  }
  if (local_8 != 0) {
    if (puVar3 != (undefined4 *)0x0) {
      FUN_63809470(puVar3);
      FUN_637f2010(puVar3);
    }
    *(undefined4 *)((int)param_1 + 0x6f4) = 0;
    return local_8;
  }
  *(undefined4 **)((int)param_1 + 0x6f8) = puVar3;
  pvVar2 = (void *)FUN_637f2000(0x24);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_63809340(pvVar2,0,*(uint *)((int)param_1 + 4),*(int *)((int)param_1 + 8),
                          *(undefined4 *)(*(int *)((int)param_1 + 0x5c0) + 0x8bc),&local_8);
  }
  *(undefined4 **)((int)param_1 + 0x6fc) = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    return 2;
  }
  if (local_8 != 0) {
    if (puVar3 != (undefined4 *)0x0) {
      FUN_63809470(puVar3);
      FUN_637f2010(puVar3);
    }
    *(undefined4 *)((int)param_1 + 0x6fc) = 0;
    return local_8;
  }
  *(undefined4 **)((int)param_1 + 0x700) = puVar3;
  if ((*(int **)((int)param_1 + 0x5c0))[0x22c] == 0) {
    iVar4 = (**(code **)(**(int **)((int)param_1 + 0x5c0) + 0x5c))
                      (*(undefined4 *)((int)param_1 + 4),*(undefined4 *)((int)param_1 + 8));
    if (*(int *)(*(int *)((int)param_1 + 0x5c0) + 0x808) != 0) {
      iVar5 = FUN_637ffff0(iVar4);
      iVar4 = iVar4 + iVar5;
    }
    puVar3 = FUN_637f1030(iVar4 * 2,1);
    *(undefined4 **)((int)param_1 + 0x730) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      return 2;
    }
    *(uint *)(*(int *)((int)param_1 + 0x5c0) + 0x8ac) = (int)puVar3 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x5c0) + 0x8b0) = 1;
  }
  if (*(int *)((int)param_1 + 0xbc) != 4) {
    *(undefined1 *)((int)param_1 + 0x740) = 1;
  }
  *(undefined1 *)((int)param_1 + 0x742) = 0;
  *(undefined4 *)((int)param_1 + 0x748) = 0;
  *(undefined4 *)((int)param_1 + 0x744) = 0;
  *(undefined4 *)((int)param_1 + 0x6d0) = 0;
  *(undefined4 *)((int)param_1 + 0x6d4) = 0;
  if (*(int *)((int)param_1 + 0x20) == 1) {
    *(undefined4 *)((int)param_1 + 0x6c8) = *(undefined4 *)((int)param_1 + 0x24);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x6c8) = 0;
  }
  if ((*(int *)((int)param_1 + 0x8c) == 0) || (*(int *)((int)param_1 + 0x90) == 0)) {
    uVar1 = 0x10;
    uVar6 = 0x10;
  }
  else {
    uVar1 = *(uint *)((int)param_1 + 0xa4);
    uVar6 = *(uint *)((int)param_1 + 0xa8);
  }
  FUN_6380bca0(param_1,uVar1 & 0xff,uVar6 & 0xff);
  if (*(int *)((int)param_1 + 0x720) == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = *(undefined4 *)((int)param_1 + 0x6dc);
  }
  (**(code **)(**(int **)((int)param_1 + 0x5c4) + 0xc))
            (*(undefined4 *)((int)param_1 + 0x6e0),uVar7,*(undefined4 *)((int)param_1 + 0x6e0),
             *(undefined4 *)((int)param_1 + 0x6dc),*(undefined4 *)((int)param_1 + 0x6f0),
             *(undefined4 *)((int)param_1 + 0x6f8));
  iVar4 = FUN_637f2000(*(int *)((int)param_1 + 0x6e4) << 2);
  *(int *)((int)param_1 + 0x74c) = iVar4;
  if (iVar4 == 0) {
    return 2;
  }
  uVar1 = 0;
  if (*(int *)((int)param_1 + 0x6e4) != 0) {
    do {
      *(uint *)(*(int *)((int)param_1 + 0x74c) + uVar1 * 4) = uVar1 & 0xf;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)param_1 + 0x6e4));
  }
  return local_8;
}


