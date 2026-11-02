/* Module: sfpaplug.dll
   Function: FUN_00407770
   Address: 00407770
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_00407770(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  HGLOBAL pvVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puStack_54;
  ulong uStack_50;
  int iStack_4c;
  LPVOID pvStack_48;
  LPVOID pvStack_44;
  LONG LStack_40;
  ulong auStack_3c [2];
  
  puVar1 = (undefined4 *)(param_1 + 0x7c);
  if (*(int *)(param_1 + 0x7c) != 0) {
    auStack_3c[1] = 0x40778a;
    FUN_00407a70(param_1);
  }
  pvStack_48 = *(LPVOID *)(param_1 + 0x58);
  iStack_4c = *(int *)(param_1 + 0x50);
  auStack_3c[1] = 4;
  auStack_3c[0] = 0;
  LStack_40 = 0;
  pvStack_44 = (LPVOID)0x0;
  uStack_50 = 0;
  puStack_54 = puVar1;
  iVar4 = acmStreamOpen();
  if (iVar4 != 0) goto LAB_00407a55;
  auStack_3c[0] = (ulong)*(ushort *)(*(int *)(param_1 + 0x58) + 0xc);
  iVar5 = acmStreamSize(*puVar1,auStack_3c[0],&pvStack_44,1);
  iVar4 = 0;
  if (iVar5 != 0) {
    uVar8 = 1;
    do {
      iVar4 = *(int *)(param_1 + 0x58);
      puStack_54 = (undefined4 *)
                   ((uint)*(ushort *)(iVar4 + 0xc) *
                   (((*(ushort *)(iVar4 + 0xc) - 1) + *(int *)(iVar4 + 8) * uVar8) /
                   (uint)*(ushort *)(iVar4 + 0xc)));
      iVar4 = acmStreamSize(*puVar1,puStack_54,&puStack_54,1);
      if ((iVar4 == 0) &&
         ((undefined4 *)(uint)*(ushort *)(*(int *)(param_1 + 0x50) + 0xc) < puStack_54)) break;
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0x101);
    iVar4 = acmStreamSize(*puVar1,puStack_54,&iStack_4c,0);
    if (iVar4 != 0) goto LAB_00407a55;
  }
  uStack_50 = 0;
  pvStack_44 = (LPVOID)0x0;
  LStack_40 = 0;
  SetFilePointer(*(HANDLE *)(*(int *)(param_1 + 4) + 0x214),0,&LStack_40,0);
  FUN_004253f0(*(HANDLE *)(*(int *)(param_1 + 4) + 0x214),(int *)auStack_3c,auStack_3c + 1);
  lVar6 = riffzz_FindChunkHeader
                    (*(void **)(*(int *)(param_1 + 4) + 0x214),0x74636166,&uStack_50,auStack_3c);
  if (lVar6 == 0) {
    ReadFile(*(HANDLE *)(*(int *)(param_1 + 4) + 0x214),&uStack_50,4,(LPDWORD)&stack0xffffffcc,
             (LPOVERLAPPED)0x0);
  }
  if (uStack_50 == 0) {
    iVar4 = acmStreamSize(*puVar1,*(undefined4 *)(param_1 + 0x38),&uStack_50,0);
    if (iVar4 == 0) {
      uStack_50 = uStack_50 / *(ushort *)(*(int *)(param_1 + 0x58) + 0xc);
      goto LAB_004078fa;
    }
  }
  else {
LAB_004078fa:
    *(ulong *)(param_1 + 0x30) = uStack_50;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (puStack_54 < (undefined4 *)0x8000) {
    iVar5 = (int)(0x8000 / ZEXT48(puStack_54));
  }
  else {
    iVar5 = 1;
  }
  pvVar7 = GlobalAlloc(0x42,iVar5 * (int)puStack_54);
  pvStack_48 = GlobalLock(pvVar7);
  pvVar7 = GlobalAlloc(0x42,iVar5 * iStack_4c);
  pvStack_44 = GlobalLock(pvVar7);
  if ((pvStack_44 != (LPVOID)0x0) && (pvStack_48 != (LPVOID)0x0)) {
    puVar2 = (undefined4 *)(param_1 + 0x80);
    puVar9 = puVar2;
    for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(LPVOID *)(param_1 + 0x8c) = pvStack_48;
    *(int *)(param_1 + 0x90) = iVar5 * (int)puStack_54;
    *(int *)(param_1 + 0x98) = iVar5 * (int)puStack_54;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(LPVOID *)(param_1 + 0x9c) = pvStack_44;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *puVar2 = 0x54;
    *(int *)(param_1 + 0xa0) = iVar5 * iStack_4c;
    *(int *)(param_1 + 0xa8) = iVar5 * iStack_4c;
    iVar4 = acmStreamPrepareHeader(*puVar1,puVar2,0);
  }
  if (iVar4 != 0) {
    acmStreamClose(*puVar1,0);
    pvVar3 = pvStack_48;
    if (pvStack_48 != (LPCVOID)0x0) {
      pvVar7 = GlobalHandle(pvStack_48);
      GlobalUnlock(pvVar7);
      pvVar7 = GlobalHandle(pvVar3);
      GlobalFree(pvVar7);
    }
    pvVar3 = pvStack_44;
    if (pvStack_44 != (LPCVOID)0x0) {
      pvVar7 = GlobalHandle(pvStack_44);
      GlobalUnlock(pvVar7);
      pvVar7 = GlobalHandle(pvVar3);
      GlobalFree(pvVar7);
    }
  }
  if (*(int *)(param_1 + 0xd8) != 0) {
    FUN_00407140(param_1);
  }
  FUN_0042baa0((int *)(param_1 + 0xd8),4,-1,-1,0x80000000);
LAB_00407a55:
  return -(uint)(iVar4 != 0) & 0x8004e011;
}


