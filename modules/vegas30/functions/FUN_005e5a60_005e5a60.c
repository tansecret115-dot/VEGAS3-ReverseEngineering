/* Module: vegas30.exe
   Function: FUN_005e5a60
   Address: 005e5a60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005e5a60(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
                int param_6)

{
  LARGE_INTEGER dlibMove;
  IStream *pIVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ULARGE_INTEGER *unaff_EBP;
  int iVar5;
  ULARGE_INTEGER *unaff_ESI;
  int *piVar6;
  ULARGE_INTEGER *unaff_EDI;
  int *piVar7;
  undefined4 *puVar8;
  bool bVar9;
  longlong lVar10;
  LPSTREAM local_3a0;
  IStream *local_39c;
  IStream *local_398;
  undefined4 uStack_394;
  uint local_390;
  int local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined1 auStack_380 [8];
  int local_378 [4];
  undefined4 local_368 [199];
  void *pvStack_4c;
  
  local_3a0 = (IStream *)0x0;
  puVar8 = local_368;
  for (iVar3 = 0xda; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  if ((param_6 < 0) || ((param_6 < 1 && (param_5 == 0)))) {
    return -0x7ffb1ff8;
  }
  riff64_SaveLocation(param_1,&local_388);
  iVar3 = riff64_ReadChunkHeader(param_1,local_378,&local_390);
  if (iVar3 < 0) {
    riff64_RestoreLocation(param_1,local_388,local_384);
  }
  else {
    local_398 = (IStream *)(param_4 + 0x6c0);
    FUN_005d30f0(local_398);
    iVar3 = 4;
    bVar9 = true;
    piVar6 = &DAT_0062ac90;
    piVar7 = local_378;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar9 = *piVar6 == *piVar7;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (bVar9);
    if (bVar9) {
      riff64_RestoreLocation(param_1,local_388,local_384);
      iVar3 = FUN_005e5e50(param_1,param_2,param_4,param_5,param_6);
      goto LAB_005e5de7;
    }
    iVar3 = 4;
    bVar9 = true;
    piVar6 = &DAT_0062ac60;
    piVar7 = local_378;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar9 = *piVar6 == *piVar7;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (bVar9);
    if (bVar9) {
      iVar3 = FUN_005db0d0(param_1,param_3,&local_390,DAT_0062ac60,DAT_0062ac64,DAT_0062ac68,
                           DAT_0062ac6c,local_398);
      if (-1 < iVar3) {
        FUN_005e7290(param_4 + 0x6c0);
        pIVar1 = (IStream *)((param_5 - local_390) - 0x18);
        iVar5 = ((param_6 - local_38c) - (uint)(param_5 < local_390)) -
                (uint)(param_5 - local_390 < 0x18);
        local_398 = pIVar1;
        lVar10 = __allrem(local_390,local_38c,8,0);
        uVar2 = (uint)lVar10;
        if (lVar10 != 0) {
          bVar9 = CARRY4((uint)pIVar1,uVar2 - 8);
          pIVar1 = (IStream *)((int)&pIVar1[-2].lpVtbl + uVar2);
          iVar5 = iVar5 + ((int)((ulonglong)lVar10 >> 0x20) - (uint)(uVar2 < 8)) + (uint)bVar9;
          local_398 = pIVar1;
        }
        local_3a0 = (IStream *)0x0;
        iVar3 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_3a0);
        if (-1 < iVar3) {
          local_39c = (IStream *)0x0;
          iVar3 = (*local_3a0->lpVtbl->Write)(local_3a0,&local_39c,4,(ULONG *)0x0);
          if (-1 < iVar3) {
            if ((-1 < iVar5) && ((0 < iVar5 || (pIVar1 != (IStream *)0x0)))) {
              while (iVar3 = riff64_ReadChunkHeader(param_1,local_378,&local_390), -1 < iVar3) {
                iVar4 = 4;
                bVar9 = true;
                piVar6 = &DAT_0062ac70;
                piVar7 = local_378;
                do {
                  if (iVar4 == 0) break;
                  iVar4 = iVar4 + -1;
                  bVar9 = *piVar6 == *piVar7;
                  piVar6 = piVar6 + 1;
                  piVar7 = piVar7 + 1;
                } while (bVar9);
                if (bVar9) {
                  puVar8 = local_368;
                  for (iVar3 = 0xda; iVar3 != 0; iVar3 = iVar3 + -1) {
                    *puVar8 = 0;
                    puVar8 = puVar8 + 1;
                  }
                  iVar3 = FUN_005db0d0(param_1,param_3,&local_390,DAT_0062ac70,DAT_0062ac74,
                                       DAT_0062ac78,DAT_0062ac7c,local_368);
                  if (iVar3 < 0) break;
                  iVar3 = FUN_005e8430(local_3a0,0,0);
                  if (iVar3 < 0) goto LAB_005e5d32;
                  if (pvStack_4c != (void *)0x0) {
                    free(pvStack_4c);
                  }
                  pvStack_4c = (void *)0x0;
                  local_39c = (IStream *)((int)&local_39c->lpVtbl + 1);
                }
                pIVar1 = (IStream *)((int)local_398 + (-local_390 - 0x18));
                iVar5 = iVar5 + ((-1 - local_38c) - (uint)(0xffffffe8 < local_390)) +
                        (uint)CARRY4((uint)local_398,-local_390 - 0x18);
                local_398 = pIVar1;
                lVar10 = __allrem(local_390,local_38c,8,0);
                uVar2 = (uint)lVar10;
                if (lVar10 != 0) {
                  local_398 = (IStream *)((int)&pIVar1[-2].lpVtbl + uVar2);
                  iVar5 = iVar5 + ((int)((ulonglong)lVar10 >> 0x20) - (uint)(uVar2 < 8)) +
                          (uint)CARRY4((uint)pIVar1,uVar2 - 8);
                }
                if ((iVar5 < 1) && ((iVar5 < 0 || (local_398 == (IStream *)0x0))))
                goto LAB_005e5d32;
              }
              iVar3 = -0x7ffb1ff8;
            }
LAB_005e5d32:
            if (pvStack_4c != (void *)0x0) {
              free(pvStack_4c);
            }
            pvStack_4c = (void *)0x0;
            if (-1 < iVar3) {
              *(LPSTREAM *)(param_4 + 0xc20) = local_3a0;
              iVar3 = (*local_3a0->lpVtbl->Seek)
                                (local_3a0,(LARGE_INTEGER)0x100000000,(DWORD)auStack_380,unaff_EDI);
              if ((((iVar3 < 0) ||
                   (iVar3 = (*local_39c->lpVtbl->Seek)(local_39c,(LARGE_INTEGER)0x0,0,unaff_ESI),
                   iVar3 < 0)) ||
                  (iVar3 = (*local_398->lpVtbl->Write)(local_398,&uStack_394,4,(ULONG *)0x0),
                  iVar3 < 0)) ||
                 (dlibMove.s.HighPart = 0, dlibMove.s.LowPart = local_378[1],
                 iVar3 = (*local_398->lpVtbl->Seek)(local_398,dlibMove,0,unaff_EBP), iVar3 < 0))
              goto LAB_005e5de7;
              uStack_394 = 0;
            }
            iVar3 = 0;
          }
        }
      }
      goto LAB_005e5de7;
    }
  }
  iVar3 = -0x7ffb1ff8;
LAB_005e5de7:
  if (local_3a0 != (IStream *)0x0) {
    (*local_3a0->lpVtbl->Release)(local_3a0);
  }
  return iVar3;
}


