/* Module: vegas30k.dll
   Function: FUN_011bc440
   Address: 011bc440
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011bc440(LPVOID param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  HANDLE pvVar7;
  HGLOBAL hMem;
  LPVOID pvVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  int local_24;
  int *local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar10 = 0;
  local_20 = (int *)0x0;
  if (((*(int *)((int)param_1 + 0x218) == 0) ||
      (uVar5 = *(uint *)((int)param_1 + 8), (uVar5 & 1) == 0)) || ((uVar5 & 2) == 0)) {
    return -0x7fff0001;
  }
  if ((uVar5 & 4) != 0) {
    return 0;
  }
  local_24 = (**(code **)((int)param_1 + 0x21c))
                       (param_1,0x28,*(undefined4 *)((int)param_1 + 0x220),0,
                        (-(uint)(param_2 != 0) & 0x80000000) + 0x80000000,0xffffffff,0xffffffff,
                        0xffffffff,0xffffffff);
  if (local_24 == 0) {
    puVar1 = (uint *)((int)param_1 + 0x234);
    *(undefined4 *)((int)param_1 + 0x238) = 0x20;
    *puVar1 = 3;
    pvVar4 = calloc(1,0xc);
    *(void **)((int)param_1 + 0x23c) = pvVar4;
    pvVar4 = calloc(1,*puVar1 << 2);
    *(void **)((int)param_1 + 0x240) = pvVar4;
    uVar5 = 0;
    if (*puVar1 != 0) {
      do {
        uVar5 = uVar5 + 1;
        *(undefined4 *)(*(int *)((int)param_1 + 0x240) + -4 + uVar5 * 4) = 0;
      } while (uVar5 < *puVar1);
    }
    *(undefined4 *)((int)param_1 + 0x244) = 0;
    *(undefined4 *)((int)param_1 + 0x248) = 0;
    local_24 = (**(code **)(**(int **)((int)param_1 + 0x218) + 0x24))
                         (*(int **)((int)param_1 + 0x218),*(undefined4 *)((int)param_1 + 0x23c),
                          (int)param_1 + 0x238,puVar1,&LAB_011bd230,param_1);
    if ((local_24 < 0) ||
       (local_24 = (**(code **)(**(int **)((int)param_1 + 0x214) + 0x10))
                             (*(int **)((int)param_1 + 0x214),&DAT_011ef560,&local_20), local_24 < 0
       )) goto LAB_011bc7b8;
    uStack_14 = DAT_011eec90;
    uStack_1c = 0x1c;
    uStack_18 = 0;
    uStack_10 = DAT_011eec94;
    uStack_c = DAT_011eec98;
    uStack_8 = DAT_011eec9c;
    uStack_4 = 0x200;
    *(undefined4 *)((int)param_1 + 0x2ac) = 4;
    puVar12 = (undefined4 *)((int)param_1 + 0x24c);
    do {
      *puVar12 = 0;
      puVar12[1] = 1;
      puVar12[2] = 0;
      iVar6 = (**(code **)(*local_20 + 0x10))(local_20,&uStack_1c,puVar12,0);
      if (iVar6 < 0) break;
      pvVar7 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
      puVar12[2] = pvVar7;
      SetEvent(pvVar7);
      uVar10 = uVar10 + 1;
      puVar12 = puVar12 + 3;
    } while (uVar10 < *(uint *)((int)param_1 + 0x2ac));
    *(undefined4 *)((int)param_1 + 0x2b4) = 0;
    *(undefined4 *)((int)param_1 + 0x2b0) = 0;
    pvVar7 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    *(HANDLE *)((int)param_1 + 700) = pvVar7;
    ResetEvent(pvVar7);
    *(uint *)((int)param_1 + 8) = *(uint *)((int)param_1 + 8) | 4;
    *(undefined4 *)((int)param_1 + 0x2b8) = 0xffffffff;
    pvVar7 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_011bd260,param_1,0,
                          (LPDWORD)((int)param_1 + 0x2c4));
    piVar13 = (int *)0xffffffff;
    *(HANDLE *)((int)param_1 + 0x2c0) = pvVar7;
    (**(code **)((int)param_1 + 0x21c))
              (param_1,0x29,*(undefined4 *)((int)param_1 + 0x220),0,
               -(uint)(param_2 != 0) & 0x80000000,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    (**(code **)(*piVar13 + 8))(piVar13);
    local_20 = (int *)0x0;
    iVar6 = *(int *)(*(int *)((int)param_1 + 0x214) + 0x804);
    if (iVar6 != -1) {
      piVar13 = *(int **)(*(int *)((int)param_1 + 0x214) + 0x7f4);
      if (piVar13 == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *piVar13;
      }
      iVar11 = 0;
      if (0 < iVar9) {
        piVar13 = (int *)piVar13[2];
        do {
          iVar2 = *piVar13;
          if (((~(byte)*(undefined4 *)(iVar2 + 0xc) & 8) == 0) && (*(int *)(iVar2 + 0x250) == iVar6)
             ) {
            (**(code **)(**(int **)((int)param_1 + 0x218) + 0x40))
                      (*(int **)((int)param_1 + 0x218),*(undefined4 *)(iVar2 + 0x10));
            break;
          }
          iVar11 = iVar11 + 1;
          piVar13 = piVar13 + 1;
        } while (iVar11 < iVar9);
      }
    }
    if (*(int *)((int)param_1 + 0x2c8) == 0) {
      *(undefined4 *)((int)param_1 + 0x2dc) = 100;
      hMem = GlobalAlloc(2,0x15e0);
      pvVar8 = GlobalLock(hMem);
      if (pvVar8 == (LPVOID)0x0) {
        *(undefined4 *)((int)param_1 + 0x2cc) = 0;
        *(undefined4 *)((int)param_1 + 0x2c8) = 0;
        goto LAB_011bc7ae;
      }
      *(LPVOID *)((int)param_1 + 0x2c8) = pvVar8;
      *(undefined4 *)((int)param_1 + 0x2cc) = 0;
      *(undefined4 *)((int)param_1 + 0x2d4) = 0;
      if (*(int *)((int)param_1 + 0x2dc) != 0) {
        do {
          *(undefined4 *)((int)pvVar8 + 0x34) = *(undefined4 *)((int)param_1 + 0x2cc);
          *(LPVOID *)((int)param_1 + 0x2cc) = pvVar8;
          pvVar8 = (LPVOID)((int)pvVar8 + 0x38);
          *(LPVOID *)(*(int *)((int)param_1 + 0x2cc) + 0x30) = pvVar8;
          uVar10 = *(int *)((int)param_1 + 0x2d4) + 1;
          *(uint *)((int)param_1 + 0x2d4) = uVar10;
        } while (uVar10 < *(uint *)((int)param_1 + 0x2dc));
      }
      *(undefined4 *)(*(int *)((int)param_1 + 0x2c8) + 0x34) = *(undefined4 *)((int)param_1 + 0x2cc)
      ;
      *(undefined4 *)(*(int *)((int)param_1 + 0x2cc) + 0x30) = *(undefined4 *)((int)param_1 + 0x2c8)
      ;
      *(undefined4 *)((int)param_1 + 0x2cc) = *(undefined4 *)((int)param_1 + 0x2c8);
      *(undefined4 *)((int)param_1 + 0x2d0) = *(undefined4 *)((int)param_1 + 0x2c8);
      *(undefined4 *)((int)param_1 + 0x2d4) = 0;
    }
    FUN_011bc1a0();
  }
LAB_011bc7ae:
  if (-1 < local_24) {
    return local_24;
  }
LAB_011bc7b8:
  if (*(void **)((int)param_1 + 0x23c) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x23c));
  }
  *(undefined4 *)((int)param_1 + 0x23c) = 0;
  if (*(void **)((int)param_1 + 0x240) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x240));
  }
  *(undefined4 *)((int)param_1 + 0x240) = 0;
  *(undefined4 *)((int)param_1 + 0x2b4) = 0;
  *(undefined4 *)((int)param_1 + 0x2b0) = 0;
  *(undefined4 *)((int)param_1 + 0x2ac) = 0;
  if (*(HANDLE *)((int)param_1 + 700) != (HANDLE)0x0) {
    *(uint *)((int)param_1 + 8) = *(uint *)((int)param_1 + 8) & 0xfffffffb;
    SetEvent(*(HANDLE *)((int)param_1 + 700));
    WaitForSingleObject(*(HANDLE *)((int)param_1 + 700),0xffffffff);
    CloseHandle(*(HANDLE *)((int)param_1 + 700));
    CloseHandle(*(HANDLE *)((int)param_1 + 0x2c0));
    *(undefined4 *)((int)param_1 + 700) = 0;
    *(undefined4 *)((int)param_1 + 0x2c0) = 0;
  }
  uVar10 = 0;
  if (*(int *)((int)param_1 + 0x2ac) != 0) {
    piVar13 = (int *)((int)param_1 + 0x24c);
    do {
      piVar3 = (int *)*piVar13;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      *piVar13 = 0;
      if ((HANDLE)piVar13[2] != (HANDLE)0x0) {
        CloseHandle((HANDLE)piVar13[2]);
      }
      piVar13[2] = 0;
      uVar10 = uVar10 + 1;
      piVar13 = piVar13 + 3;
    } while (uVar10 < *(uint *)((int)param_1 + 0x2ac));
  }
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))(local_20);
  }
  return local_24;
}


