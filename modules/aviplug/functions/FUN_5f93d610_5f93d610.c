/* Module: aviplug.dll
   Function: FUN_5f93d610
   Address: 5f93d610
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

uint * FUN_5f93d610(HANDLE param_1,uint param_2,uint param_3,uint *param_4)

{
  HANDLE pvVar1;
  HANDLE hFile;
  BOOL BVar2;
  uint *puVar3;
  HGLOBAL pvVar4;
  HANDLE pvVar5;
  uint uVar6;
  uint *puVar7;
  uint *unaff_ESI;
  HANDLE lDistanceToMove;
  bool bVar8;
  HANDLE local_3c;
  int local_38;
  int local_34;
  uint local_30;
  HANDLE local_2c;
  uint local_28;
  HANDLE local_24;
  uint local_20;
  HANDLE local_1c;
  uint local_18;
  HANDLE local_14;
  uint local_10 [3];
  undefined4 local_4;
  
  hFile = param_1;
  lDistanceToMove = (HANDLE)(param_2 + (param_2 & 1));
  uVar6 = param_3 + CARRY4(param_2,param_2 & 1);
  *param_4 = 0;
  local_24 = (HANDLE)0x0;
  local_20 = 0;
  param_3 = uVar6;
  SetFilePointer(param_1,0,(PLONG)&local_20,0);
  BVar2 = ReadFile(hFile,local_10 + 1,0xc,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if ((BVar2 == 0) || (param_1 < (HANDLE)0xc)) {
    return unaff_ESI;
  }
  local_10[1] = 0x5453494c;
  local_4 = 0x69766f6d;
  local_14 = (HANDLE)(local_10[2] + 8);
  puVar3 = FUN_5f94e820(hFile,(uint)lDistanceToMove,uVar6,(DWORD)local_14,0,(int *)(local_10 + 1),
                        (uint *)&local_2c);
  if ((int)puVar3 < 0) {
    return unaff_ESI;
  }
  local_3c = (HANDLE)0x0;
  local_38 = 0;
  if ((lDistanceToMove != local_2c) || (uVar6 != local_28)) {
    if (((int)param_3 <= (int)local_28) &&
       ((pvVar5 = lDistanceToMove, (int)param_3 < (int)local_28 || (lDistanceToMove < local_2c)))) {
      do {
        local_24 = pvVar5;
        local_20 = uVar6;
        SetFilePointer(hFile,(LONG)pvVar5,(PLONG)&local_20,0);
        BVar2 = ReadFile(hFile,&local_34,8,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
        if (BVar2 == 0) {
          return unaff_ESI;
        }
        if (param_1 < (HANDLE)0x8) {
          return unaff_ESI;
        }
        local_30 = local_30 + (local_30 & 1);
        if (local_34 == 0x4b4e554a) {
          local_38 = local_38 + 8 + local_30;
        }
        else {
          local_3c = (HANDLE)((int)local_3c + local_30 + 8);
        }
        bVar8 = CARRY4((uint)pvVar5,local_30);
        pvVar5 = (HANDLE)((int)pvVar5 + local_30);
        uVar6 = uVar6 + bVar8;
      } while (((int)uVar6 < (int)local_28) ||
              (((int)uVar6 <= (int)local_28 && (pvVar5 < local_2c))));
    }
    if (local_38 != 0) {
      pvVar4 = GlobalAlloc(0x42,(SIZE_T)local_3c);
      puVar3 = GlobalLock(pvVar4);
      if (puVar3 != (uint *)0x0) {
        local_20 = param_3;
        if (((int)param_3 < 1) &&
           ((pvVar5 = lDistanceToMove, puVar7 = puVar3, (int)param_3 < 0 ||
            (lDistanceToMove < local_14)))) {
          do {
            local_18 = local_20;
            local_1c = pvVar5;
            SetFilePointer(hFile,(LONG)pvVar5,(PLONG)&local_18,0);
            BVar2 = ReadFile(hFile,&local_34,8,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
            if ((BVar2 == 0) || (param_1 < (HANDLE)0x8)) goto LAB_5f93d981;
            uVar6 = (local_30 & 1) + local_30;
            bVar8 = CARRY4((uint)pvVar5,uVar6);
            pvVar5 = (HANDLE)((int)pvVar5 + uVar6);
            local_20 = local_20 + bVar8;
            if (local_34 != 0x4b4e554a) {
              *puVar7 = local_30;
              puVar7[1] = local_30;
              BVar2 = ReadFile(hFile,puVar7 + 2,local_30,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
              if ((BVar2 == 0) || (pvVar1 = (HANDLE)puVar7[1], param_1 < pvVar1)) goto LAB_5f93d981;
              puVar7 = (uint *)((int)pvVar1 + ((uint)pvVar1 & 1) + 8 + (int)puVar7);
            }
          } while (((int)local_20 < 0) || (((int)local_20 < 1 && (pvVar5 < local_14))));
        }
        local_30 = (int)local_2c + (-8 - (int)lDistanceToMove);
        local_34 = 0x4b4e554a;
        local_10[0] = param_3;
        local_14 = lDistanceToMove;
        SetFilePointer(hFile,(LONG)lDistanceToMove,(PLONG)local_10,0);
        BVar2 = WriteFile(hFile,&local_34,8,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
        if ((BVar2 != 0) && ((HANDLE)0x7 < param_1)) {
          local_14 = (HANDLE)((int)local_2c - (int)local_3c);
          local_10[0] = (local_28 - ((int)local_3c >> 0x1f)) - (uint)(local_2c < local_3c);
          SetFilePointer(hFile,(LONG)local_14,(PLONG)local_10,0);
          BVar2 = WriteFile(hFile,puVar3,(DWORD)local_3c,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
          if ((BVar2 != 0) && (local_3c <= param_1)) {
            local_30 = local_30 - (int)local_3c;
            local_10[0] = param_3;
            local_14 = lDistanceToMove;
            SetFilePointer(hFile,(LONG)lDistanceToMove,(PLONG)local_10,0);
            BVar2 = WriteFile(hFile,&local_34,8,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
            if ((BVar2 != 0) && ((HANDLE)0x7 < param_1)) {
              *param_4 = local_30;
            }
          }
        }
      }
LAB_5f93d981:
      if (puVar3 == (uint *)0x0) {
        return unaff_ESI;
      }
      pvVar4 = GlobalHandle(puVar3);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(puVar3);
      GlobalFree(pvVar4);
      return unaff_ESI;
    }
  }
  return unaff_ESI;
}


