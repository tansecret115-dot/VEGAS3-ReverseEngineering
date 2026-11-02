/* Module: vegas30k.dll
   Function: SfCdiGetDataFromLookaside
   Address: 01085160
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiGetDataFromLookaside(void *,unsigned char *,unsigned long) */

long SfCdiGetDataFromLookaside(void *param_1,uchar *param_2,ulong param_3)

{
  LPOVERLAPPED lpOverlapped;
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  DWORD DVar4;
  BOOL BVar5;
  uint uVar6;
  int iVar7;
  uchar *puVar8;
  uchar *puVar9;
  
                    /* 0x85160  302  ?SfCdiGetDataFromLookaside@@YGJPAXPAEK@Z */
  pvVar2 = param_1;
  if (param_1 == (void *)0xffffffff) {
    return -0x7ff8ffa9;
  }
  do {
    iVar1 = *(int *)((int)pvVar2 + 0xb0);
    uVar6 = *(uint *)((int)pvVar2 + iVar1 * 4 + 0x44);
    uVar3 = param_3;
    if (uVar6 < param_3) {
      uVar3 = uVar6;
    }
    *(uint *)((int)pvVar2 + iVar1 * 4 + 0x44) = uVar6 - uVar3;
    puVar8 = *(uchar **)((int)pvVar2 + 0xac);
    puVar9 = param_2;
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)puVar9 = *(undefined4 *)puVar8;
      puVar8 = puVar8 + 4;
      puVar9 = puVar9 + 4;
    }
    param_3 = param_3 - uVar3;
    for (uVar6 = uVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    param_2 = param_2 + uVar3;
    *(ulong *)((int)pvVar2 + 0xac) = *(int *)((int)pvVar2 + 0xac) + uVar3;
    if (*(int *)((int)pvVar2 + iVar1 * 4 + 0x44) == 0) {
      iVar7 = *(int *)((int)pvVar2 + 0xb0) + 1;
      *(int *)((int)pvVar2 + 0xb0) = iVar7;
      if (*(int *)((int)pvVar2 + 8) == iVar7) {
        *(undefined4 *)((int)pvVar2 + 0xb0) = 0;
      }
      DVar4 = WaitForSingleObject(*(HANDLE *)
                                   ((int)pvVar2 + (*(int *)((int)pvVar2 + 0xb0) + 5) * 0x14),
                                  0xffffffff);
      if (DVar4 == 0xffffffff) {
        GetLastError();
        return -0x7ffb1ff8;
      }
      BVar5 = GetOverlappedResult(*(HANDLE *)((int)pvVar2 + 4),
                                  (LPOVERLAPPED)
                                  ((int)pvVar2 + *(int *)((int)pvVar2 + 0xb0) * 0x14 + 0x54),
                                  (LPDWORD)&param_1,0);
      if (BVar5 == 0) {
        return -0x7ffb1ff8;
      }
      *(void **)((int)pvVar2 + *(int *)((int)pvVar2 + 0xb0) * 4 + 0x44) = param_1;
      *(undefined4 *)((int)pvVar2 + 0xac) =
           *(undefined4 *)((int)pvVar2 + *(int *)((int)pvVar2 + 0xb0) * 4 + 0x34);
      if (*(uint *)((int)pvVar2 + 0xa4) < *(uint *)((int)pvVar2 + 0xa8)) {
        lpOverlapped = (LPOVERLAPPED)((int)pvVar2 + iVar1 * 0x14 + 0x54);
        lpOverlapped->Internal = 0;
        *(undefined4 *)((int)pvVar2 + iVar1 * 0x14 + 0x58) = 0;
        *(undefined4 *)((int)pvVar2 + iVar1 * 0x14 + 0x5c) = 0;
        *(undefined4 *)((int)pvVar2 + iVar1 * 0x14 + 0x60) = 0;
        *(undefined4 *)((int)pvVar2 + iVar1 * 0x14 + 100) = 0;
        *(undefined4 *)((int)pvVar2 + iVar1 * 0x14 + 0x5c) = *(undefined4 *)((int)pvVar2 + 0xa4);
        *(undefined4 *)((int)pvVar2 + (iVar1 * 5 + 0x19) * 4) =
             *(undefined4 *)((int)pvVar2 + iVar1 * 4 + 0x14);
        ResetEvent(*(HANDLE *)((int)pvVar2 + iVar1 * 4 + 0x14));
        BVar5 = ReadFile(*(HANDLE *)((int)pvVar2 + 4),*(LPVOID *)((int)pvVar2 + iVar1 * 4 + 0x34),
                         *(DWORD *)((int)pvVar2 + 0x10),(LPDWORD)0x0,lpOverlapped);
        if (((BVar5 == 0) && (DVar4 = GetLastError(), DVar4 != 0x26)) && (DVar4 != 0x3e5)) {
          return -0x7ffb1ff8;
        }
        *(int *)((int)pvVar2 + 0xa4) = *(int *)((int)pvVar2 + 0xa4) + *(int *)((int)pvVar2 + 0x10);
      }
    }
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}


