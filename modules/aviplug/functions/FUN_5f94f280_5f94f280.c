/* Module: aviplug.dll
   Function: FUN_5f94f280
   Address: 5f94f280
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * FUN_5f94f280(HANDLE param_1,int param_2,uint param_3,uint *param_4,int param_5,
                   undefined4 param_6,uint *param_7,uint param_8)

{
  DWORD *pDVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  HGLOBAL pvVar5;
  BOOL BVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint local_48;
  uint local_44;
  uint local_40 [8];
  uint local_20 [8];
  
  puVar8 = param_7;
  param_7[0x14] = 0xffffffff;
  param_7[0x12] = 0xffffffff;
  param_7[0x15] = 0xffffffff;
  param_7[0x13] = 0xffffffff;
  puVar2 = FUN_5f94e230(param_1,param_3,param_4,param_7);
  if ((int)puVar2 < 0) {
    if (puVar2 == (uint *)0x8004e00a) {
      return (uint *)0x8004e00b;
    }
  }
  else {
    pDVar1 = puVar8 + 0x16;
    puVar2 = (uint *)FUN_5f94e530(param_1,param_3,(uint)param_4,(undefined4 *)0x0,0,pDVar1,&local_48
                                 );
    if (puVar2 != (uint *)0x8004e00a) {
      if ((int)puVar2 < 0) {
        return puVar2;
      }
      uVar4 = puVar8[2];
      if (uVar4 == 0x73646976) {
        if (0x428 < *pDVar1) {
          *pDVar1 = 0x428;
        }
      }
      else if ((uVar4 == 0x73647561) && (*pDVar1 < 0x12)) {
        *pDVar1 = 0x12;
      }
      if (((uVar4 == 0x73766169) && (puVar8[3] == 0x64737664)) || ((int)*pDVar1 < 1)) {
        puVar8[0x17] = 0;
        *pDVar1 = 0;
      }
      else {
        pvVar5 = GlobalAlloc(0x42,*pDVar1);
        puVar3 = GlobalLock(pvVar5);
        puVar8[0x17] = (uint)puVar3;
        if (puVar3 == (undefined4 *)0x0) {
          return (uint *)0x8007000e;
        }
        puVar2 = FUN_5f94e370(param_1,-1,local_48,local_44,puVar3,*pDVar1,(DWORD *)0x0,(uint *)0x0);
        if ((int)puVar2 < 0) {
          return puVar2;
        }
      }
      uVar4 = puVar8[2];
      if (((uVar4 == 0x73766169) && (puVar8[3] == 0x64737664)) ||
         ((uVar4 == 0x73646976 && (*(int *)(puVar8[0x17] + 0x10) == 0x64737664)))) {
        if (uVar4 == 0x73766169) {
          puVar2 = FUN_5f94e370(param_1,-1,local_48,local_44,local_40,0x20,(DWORD *)0x0,(uint *)0x0)
          ;
          if ((int)puVar2 < 0) {
            return puVar2;
          }
        }
        else {
          puVar2 = &DAT_5f9d7d20;
          puVar7 = local_40;
          for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar7 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        uVar4 = FUN_5f94e990(param_1,param_8,*(uint *)(param_2 + 0x48),*(int *)(param_2 + 0x4c),
                             local_40);
        if ((uVar4 == 0) || (puVar8[2] == 0x73766169)) {
          pvVar5 = GlobalAlloc(0x42,0x20);
          puVar2 = GlobalLock(pvVar5);
          puVar8[0x18] = (uint)puVar2;
          if (puVar2 == (uint *)0x0) {
            return (uint *)0x8007000e;
          }
          puVar7 = local_40;
          for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar2 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar2 = puVar2 + 1;
          }
        }
      }
    }
    puVar8[0x1a] = param_3;
    puVar8[0x1b] = (uint)param_4;
    puVar8[0x19] = (param_5 - param_3) - 8;
    puVar8[0x10] = param_8;
    uVar4 = FUN_5f94f8d0((int)puVar8);
    puVar8[0x12] = puVar8[10];
    puVar8[0x11] = uVar4;
    puVar8[0x13] = 0;
    puVar2 = FUN_5f94e0f0(param_1,param_3,(uint)param_4,0x78646e69,(uint *)0x0,puVar8 + 0x1e);
    if ((int)puVar2 < 0) {
      if (puVar2 == (uint *)0x8004e00a) {
        return (uint *)0x0;
      }
    }
    else {
      param_4 = (uint *)puVar8[0x1f];
      SetFilePointer(param_1,puVar8[0x1e],(PLONG)&param_4,0);
      BVar6 = ReadFile(param_1,local_20,0x20,(LPDWORD)&param_7,(LPOVERLAPPED)0x0);
      if ((BVar6 != 0) && ((uint *)0x1f < param_7)) {
        if (local_20[3] == 0) {
          return puVar2;
        }
        puVar2 = (uint *)((local_20[2] & 0xffff) * local_20[3] * 4);
        pvVar5 = GlobalAlloc(0x42,(SIZE_T)(puVar2 + 8));
        puVar7 = GlobalLock(pvVar5);
        if (puVar7 == (uint *)0x0) {
          return (uint *)0x8007000e;
        }
        puVar10 = local_20;
        puVar11 = puVar7;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar8[0x1c] = (uint)puVar7;
        puVar8[0x1d] = 0x20;
        BVar6 = ReadFile(param_1,puVar7 + 8,(DWORD)puVar2,(LPDWORD)&param_7,(LPOVERLAPPED)0x0);
        puVar8[0x1d] = puVar8[0x1d] + (int)param_7;
        if ((BVar6 != 0) && (puVar2 <= param_7)) {
          puVar8 = (uint *)FUN_5f94f180((int *)puVar8);
          return puVar8;
        }
      }
      puVar2 = (uint *)0x8004e008;
    }
  }
  return puVar2;
}


