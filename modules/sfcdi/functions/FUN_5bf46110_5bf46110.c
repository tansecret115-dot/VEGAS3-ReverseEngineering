/* Module: sfcdi.dll
   Function: FUN_5bf46110
   Address: 5bf46110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf46110(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  BOOL BVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_c;
  uint local_8;
  
  puVar8 = param_3;
  puVar3 = param_1;
  if ((param_1 == (undefined4 *)0xffffffff) || (param_1 == (undefined4 *)0x0)) {
    return 0x80070057;
  }
  local_c = 0;
  local_8 = 0;
  if ((param_1[1] & 1) == 0) {
    BVar4 = ReadFile((HANDLE)*param_1,param_2,(DWORD)param_3,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    if ((BVar4 != 0) && (param_1 == puVar8)) {
      *param_4 = (uint)param_1;
      return 0;
    }
    return 0x8004e008;
  }
  do {
    iVar1 = puVar3[0xd];
    puVar8 = (undefined4 *)puVar3[iVar1 * 7 + 0x11];
    puVar5 = param_3;
    if (puVar8 < param_3) {
      puVar5 = puVar8;
    }
    puVar3[iVar1 * 7 + 0x11] = (int)puVar8 - (int)puVar5;
    puVar8 = (undefined4 *)puVar3[0xc];
    puVar9 = param_2;
    for (uVar7 = (uint)puVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    param_2 = (undefined4 *)((int)param_2 + (int)puVar5);
    for (uVar7 = (uint)puVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    param_3 = (undefined4 *)((int)param_3 - (int)puVar5);
    puVar3[0xc] = puVar3[0xc] + (int)puVar5;
    local_8 = local_8 + (int)puVar5;
    if (puVar3[iVar1 * 7 + 0x11] == 0) {
      if ((puVar3[6] == puVar3[10]) && (puVar3[7] == puVar3[0xb])) {
        local_c = 0;
        goto LAB_5bf4632d;
      }
      iVar2 = puVar3[0xd];
      puVar3[0xd] = iVar2 + 1;
      if (puVar3[4] == iVar2 + 1) {
        puVar3[0xd] = 0;
      }
      WaitForSingleObject((HANDLE)puVar3[puVar3[0xd] * 7 + 0x16],0xffffffff);
      BVar4 = GetOverlappedResult((HANDLE)*puVar3,(LPOVERLAPPED)(puVar3 + puVar3[0xd] * 7 + 0x12),
                                  (LPDWORD)&param_1,0);
      if (BVar4 == 0) {
LAB_5bf46325:
        local_c = 0x8004e008;
        goto LAB_5bf4632d;
      }
      puVar3[puVar3[0xd] * 7 + 0x11] = param_1;
      uVar7 = puVar3[6];
      puVar3[6] = uVar7 + (int)param_1;
      puVar3[7] = puVar3[7] + (uint)CARRY4(uVar7,(uint)param_1);
      puVar3[0xc] = puVar3[puVar3[0xd] * 7 + 0x10];
      if (((uint)puVar3[9] <= (uint)puVar3[0xb]) &&
         (((uint)puVar3[9] < (uint)puVar3[0xb] || ((uint)puVar3[8] < (uint)puVar3[10])))) {
        puVar3[iVar1 * 7 + 0x14] = puVar3[8];
        puVar3[(iVar1 + 3) * 7] = puVar3[9];
        ResetEvent((HANDLE)puVar3[iVar1 * 7 + 0x16]);
        BVar4 = ReadFile((HANDLE)*puVar3,(LPVOID)puVar3[iVar1 * 7 + 0x10],puVar3[3],(LPDWORD)0x0,
                         (LPOVERLAPPED)(puVar3 + iVar1 * 7 + 0x12));
        if ((BVar4 == 0) && ((DVar6 = GetLastError(), DVar6 != 0x3e5 && (DVar6 != 0x26))))
        goto LAB_5bf46325;
        uVar7 = puVar3[8];
        puVar3[8] = uVar7 + puVar3[3];
        puVar3[9] = puVar3[9] + (uint)CARRY4(uVar7,puVar3[3]);
      }
    }
    if (param_3 == (undefined4 *)0x0) {
LAB_5bf4632d:
      uVar7 = puVar3[0xe];
      puVar3[0xe] = uVar7 + local_8;
      puVar3[0xf] = puVar3[0xf] + (uint)CARRY4(uVar7,local_8);
      *param_4 = local_8;
      return local_c;
    }
  } while( true );
}


