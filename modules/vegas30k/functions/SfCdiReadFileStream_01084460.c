/* Module: vegas30k.dll
   Function: SfCdiReadFileStream
   Address: 01084460
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiReadFileStream(void *,unsigned char *,unsigned long,unsigned long *) */

long SfCdiReadFileStream(void *param_1,uchar *param_2,ulong param_3,ulong *param_4)

{
  int iVar1;
  void *pvVar2;
  BOOL BVar3;
  ulong uVar4;
  DWORD DVar5;
  uint uVar6;
  int iVar7;
  uchar *puVar8;
  uchar *puVar9;
  long local_c;
  uint local_8;
  
  uVar4 = param_3;
                    /* 0x84460  311  ?SfCdiReadFileStream@@YGJPAXPAEKPAK@Z */
  pvVar2 = param_1;
  if ((param_1 == (void *)0xffffffff) || (param_1 == (void *)0x0)) {
    return -0x7ff8ffa9;
  }
  local_c = 0;
  local_8 = 0;
  if ((*(uint *)((int)param_1 + 4) & 1) == 0) {
    BVar3 = ReadFile(*(HANDLE *)param_1,param_2,param_3,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    if ((BVar3 != 0) && (param_1 == (void *)uVar4)) {
      *param_4 = (ulong)param_1;
      return 0;
    }
    return -0x7ffb1ff8;
  }
  do {
    iVar1 = *(int *)((int)pvVar2 + 0x34);
    uVar6 = *(uint *)((int)pvVar2 + iVar1 * 0x1c + 0x44);
    uVar4 = param_3;
    if (uVar6 < param_3) {
      uVar4 = uVar6;
    }
    *(uint *)((int)pvVar2 + iVar1 * 0x1c + 0x44) = uVar6 - uVar4;
    puVar8 = *(uchar **)((int)pvVar2 + 0x30);
    puVar9 = param_2;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)puVar9 = *(undefined4 *)puVar8;
      puVar8 = puVar8 + 4;
      puVar9 = puVar9 + 4;
    }
    param_2 = param_2 + uVar4;
    for (uVar6 = uVar4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    param_3 = param_3 - uVar4;
    *(ulong *)((int)pvVar2 + 0x30) = *(int *)((int)pvVar2 + 0x30) + uVar4;
    local_8 = local_8 + uVar4;
    if (*(int *)((int)pvVar2 + iVar1 * 0x1c + 0x44) == 0) {
      if ((*(int *)((int)pvVar2 + 0x18) == *(int *)((int)pvVar2 + 0x28)) &&
         (*(int *)((int)pvVar2 + 0x1c) == *(int *)((int)pvVar2 + 0x2c))) {
        local_c = 0;
        goto LAB_0108467d;
      }
      iVar7 = *(int *)((int)pvVar2 + 0x34) + 1;
      *(int *)((int)pvVar2 + 0x34) = iVar7;
      if (*(int *)((int)pvVar2 + 0x10) == iVar7) {
        *(undefined4 *)((int)pvVar2 + 0x34) = 0;
      }
      WaitForSingleObject(*(HANDLE *)((int)pvVar2 + *(int *)((int)pvVar2 + 0x34) * 0x1c + 0x58),
                          0xffffffff);
      BVar3 = GetOverlappedResult(*(HANDLE *)pvVar2,
                                  (LPOVERLAPPED)
                                  ((int)pvVar2 + *(int *)((int)pvVar2 + 0x34) * 0x1c + 0x48),
                                  (LPDWORD)&param_1,0);
      if (BVar3 == 0) {
LAB_01084675:
        local_c = -0x7ffb1ff8;
        goto LAB_0108467d;
      }
      *(void **)((int)pvVar2 + *(int *)((int)pvVar2 + 0x34) * 0x1c + 0x44) = param_1;
      uVar6 = *(uint *)((int)pvVar2 + 0x18);
      *(uint *)((int)pvVar2 + 0x18) = uVar6 + (int)param_1;
      *(uint *)((int)pvVar2 + 0x1c) =
           *(int *)((int)pvVar2 + 0x1c) + (uint)CARRY4(uVar6,(uint)param_1);
      *(undefined4 *)((int)pvVar2 + 0x30) =
           *(undefined4 *)((int)pvVar2 + *(int *)((int)pvVar2 + 0x34) * 0x1c + 0x40);
      if ((*(uint *)((int)pvVar2 + 0x24) <= *(uint *)((int)pvVar2 + 0x2c)) &&
         ((*(uint *)((int)pvVar2 + 0x24) < *(uint *)((int)pvVar2 + 0x2c) ||
          (*(uint *)((int)pvVar2 + 0x20) < *(uint *)((int)pvVar2 + 0x28))))) {
        *(undefined4 *)((int)pvVar2 + iVar1 * 0x1c + 0x50) = *(undefined4 *)((int)pvVar2 + 0x20);
        *(undefined4 *)((int)pvVar2 + (iVar1 + 3) * 0x1c) = *(undefined4 *)((int)pvVar2 + 0x24);
        ResetEvent(*(HANDLE *)((int)pvVar2 + iVar1 * 0x1c + 0x58));
        BVar3 = ReadFile(*(HANDLE *)pvVar2,*(LPVOID *)((int)pvVar2 + iVar1 * 0x1c + 0x40),
                         *(DWORD *)((int)pvVar2 + 0xc),(LPDWORD)0x0,
                         (LPOVERLAPPED)((int)pvVar2 + iVar1 * 0x1c + 0x48));
        if ((BVar3 == 0) && ((DVar5 = GetLastError(), DVar5 != 0x3e5 && (DVar5 != 0x26))))
        goto LAB_01084675;
        uVar6 = *(uint *)((int)pvVar2 + 0x20);
        *(uint *)((int)pvVar2 + 0x20) = uVar6 + *(uint *)((int)pvVar2 + 0xc);
        *(uint *)((int)pvVar2 + 0x24) =
             *(int *)((int)pvVar2 + 0x24) + (uint)CARRY4(uVar6,*(uint *)((int)pvVar2 + 0xc));
      }
    }
    if (param_3 == 0) {
LAB_0108467d:
      uVar6 = *(uint *)((int)pvVar2 + 0x38);
      *(uint *)((int)pvVar2 + 0x38) = uVar6 + local_8;
      *(uint *)((int)pvVar2 + 0x3c) = *(int *)((int)pvVar2 + 0x3c) + (uint)CARRY4(uVar6,local_8);
      *param_4 = local_8;
      return local_c;
    }
  } while( true );
}


