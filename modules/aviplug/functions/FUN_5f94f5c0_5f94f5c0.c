/* Module: aviplug.dll
   Function: FUN_5f94f5c0
   Address: 5f94f5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * FUN_5f94f5c0(HANDLE param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  HGLOBAL hMem;
  LPVOID pvVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  bool bVar8;
  uint local_64;
  uint *local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  int local_4c;
  uint local_48;
  undefined4 local_44;
  uint local_40 [8];
  int local_20;
  
  *param_2 = 0;
  puVar2 = FUN_5f94ded0(param_1,local_40);
  if ((int)puVar2 < 0) goto LAB_5f94f7fd;
  if (local_20 < 1) {
LAB_5f94f7e0:
    puVar2 = (uint *)0x8004e00b;
  }
  else {
    hMem = GlobalAlloc(0x42,local_20 * 0x80 + 0x68);
    pvVar3 = GlobalLock(hMem);
    *param_2 = (int)pvVar3;
    if (pvVar3 == (LPVOID)0x0) {
      puVar2 = (uint *)0x8007000e;
      goto LAB_5f94f7fd;
    }
    puVar2 = FUN_5f94dda0(param_1,(uint *)0x0,&local_64,(int *)&local_5c);
    if ((int)puVar2 < 0) goto LAB_5f94f7fd;
    puVar2 = local_40;
    puVar6 = (uint *)*param_2;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar5 = *param_2;
    *(uint *)(iVar5 + 0x40) = local_64;
    *(uint **)(iVar5 + 0x44) = local_60;
    local_4c = 0x5453494c;
    local_44 = 0x69766f6d;
    puVar2 = FUN_5f94e820(param_1,local_5c,local_58,0xffffffff,-1,&local_4c,
                          (uint *)(*param_2 + 0x48));
    if ((int)puVar2 < 0) {
      if (puVar2 == (uint *)0x8004e00a) goto LAB_5f94f7e0;
    }
    else {
      bVar8 = 0xfffffff3 < local_64;
      local_64 = local_64 + 0xc;
      local_4c = 0x5453494c;
      local_60 = (uint *)((int)local_60 + (uint)bVar8);
      local_44 = 0x6c727473;
      uVar7 = 0;
      if (*(int *)(*param_2 + 0x20) != 0) {
        do {
          puVar2 = FUN_5f94e820(param_1,local_64,(uint)local_60,local_5c,local_58,&local_4c,
                                &local_64);
          if ((int)puVar2 < 0) {
            if (puVar2 == (uint *)0x8004e00a) {
              puVar2 = (uint *)0x8004e00b;
              goto LAB_5f94f7fd;
            }
            break;
          }
          iVar5 = *param_2;
          puVar2 = FUN_5f94f280(param_1,iVar5,local_64,local_60,local_48 + local_64 + 8,
                                (int)local_60 +
                                (uint)(0xfffffff7 < local_48 + local_64) +
                                (uint)CARRY4(local_48,local_64),
                                (uint *)(*(int *)(iVar5 + 0x60) * 0x80 + 0x68 + iVar5),uVar7);
          *(int *)(*param_2 + 0x60) = *(int *)(*param_2 + 0x60) + 1;
          if ((int)puVar2 < 0) goto LAB_5f94f7fd;
          uVar1 = (local_48 & 1) + 8 + local_48;
          bVar8 = CARRY4(local_64,uVar1);
          local_64 = local_64 + uVar1;
          local_60 = (uint *)((int)local_60 + (uint)bVar8);
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(*param_2 + 0x20));
      }
      if ((int)puVar2 < 0) goto LAB_5f94f7fd;
      uVar4 = FUN_5f94e5c0(param_1);
      *(undefined4 *)(*param_2 + 0x5c) = uVar4;
      iVar5 = *param_2;
      if ((*(uint *)(iVar5 + 0x14) & 0x10) == 0) {
        *(undefined4 *)(iVar5 + 0x50) = 0xffffffff;
        *(undefined4 *)(iVar5 + 0x54) = 0xffffffff;
        *(undefined4 *)(*param_2 + 0x58) = 0;
      }
      else {
        local_54 = 0x31786469;
        local_50 = 0;
        puVar2 = FUN_5f94e680(param_1,*(uint *)(iVar5 + 0x48),*(uint *)(iVar5 + 0x4c),0xffffffff,
                              0xffffffff,&local_54,1,(uint *)(iVar5 + 0x50));
        if (puVar2 == (uint *)0x8004e00a) {
          puVar2 = (uint *)0x8004e00b;
        }
        *(undefined4 *)(*param_2 + 0x58) = local_50;
      }
    }
    if (-1 < (int)puVar2) {
      return puVar2;
    }
  }
LAB_5f94f7fd:
  FUN_5f94f820((LPCVOID)*param_2);
  *param_2 = 0;
  return puVar2;
}


