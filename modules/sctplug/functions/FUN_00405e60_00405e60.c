/* Module: sctplug.dll
   Function: FUN_00405e60
   Address: 00405e60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_00405e60(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  HGLOBAL pvVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puStack_50;
  uint uStack_4c;
  int iStack_48;
  LPVOID pvStack_44;
  LPVOID pvStack_40;
  int iStack_3c;
  uint uStack_38;
  DWORD DStack_34;
  
  puVar1 = (undefined4 *)(param_1 + 0x7c);
  if (*(int *)(param_1 + 0x7c) != 0) {
    DStack_34 = 0x405e7a;
    FUN_00406150(param_1);
  }
  pvStack_44 = *(LPVOID *)(param_1 + 0x58);
  iStack_48 = *(int *)(param_1 + 0x50);
  DStack_34 = 4;
  uStack_38 = 0;
  iStack_3c = 0;
  pvStack_40 = (LPVOID)0x0;
  uStack_4c = 0;
  puStack_50 = puVar1;
  iVar4 = acmStreamOpen();
  if (iVar4 != 0) goto LAB_00406139;
  uStack_38 = (uint)*(ushort *)(*(int *)(param_1 + 0x58) + 0xc);
  iVar5 = acmStreamSize(*puVar1,uStack_38,&pvStack_40,1);
  iVar4 = 0;
  if (iVar5 != 0) {
    uVar7 = 1;
    do {
      iVar4 = *(int *)(param_1 + 0x58);
      puStack_50 = (undefined4 *)
                   ((uint)*(ushort *)(iVar4 + 0xc) *
                   (((*(ushort *)(iVar4 + 0xc) - 1) + *(int *)(iVar4 + 8) * uVar7) /
                   (uint)*(ushort *)(iVar4 + 0xc)));
      iVar4 = acmStreamSize(*puVar1,puStack_50,&puStack_50,1);
      if ((iVar4 == 0) &&
         ((undefined4 *)(uint)*(ushort *)(*(int *)(param_1 + 0x50) + 0xc) < puStack_50)) break;
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0x101);
    iVar4 = acmStreamSize(*puVar1,puStack_50,&iStack_48,0);
    if (iVar4 != 0) goto LAB_00406139;
  }
  uStack_4c = 0;
  SetFilePointer(*(HANDLE *)(*(int *)(param_1 + 4) + 0x214),0,(PLONG)0x0,0);
  FUN_00414450(*(HANDLE *)(*(int *)(param_1 + 4) + 0x214),&iStack_3c,&uStack_38);
  uVar7 = FUN_00414500(*(HANDLE *)(*(int *)(param_1 + 4) + 0x214),0x74636166,&uStack_4c,&iStack_3c);
  if (uVar7 == 0) {
    ReadFile(*(HANDLE *)(*(int *)(param_1 + 4) + 0x214),&uStack_4c,4,&DStack_34,(LPOVERLAPPED)0x0);
  }
  if (uStack_4c == 0) {
    iVar4 = acmStreamSize(*puVar1,*(undefined4 *)(param_1 + 0x38),&uStack_4c,0);
    if (iVar4 == 0) {
      uStack_4c = uStack_4c / *(ushort *)(*(int *)(param_1 + 0x58) + 0xc);
      goto LAB_00405fde;
    }
  }
  else {
LAB_00405fde:
    *(uint *)(param_1 + 0x30) = uStack_4c;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (puStack_50 < (undefined4 *)0x8000) {
    iVar5 = (int)(0x8000 / ZEXT48(puStack_50));
  }
  else {
    iVar5 = 1;
  }
  pvVar6 = GlobalAlloc(0x42,iVar5 * (int)puStack_50);
  pvStack_44 = GlobalLock(pvVar6);
  pvVar6 = GlobalAlloc(0x42,iVar5 * iStack_48);
  pvStack_40 = GlobalLock(pvVar6);
  if ((pvStack_40 != (LPVOID)0x0) && (pvStack_44 != (LPVOID)0x0)) {
    puVar2 = (undefined4 *)(param_1 + 0x80);
    puVar8 = puVar2;
    for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(LPVOID *)(param_1 + 0x8c) = pvStack_44;
    *(int *)(param_1 + 0x90) = iVar5 * (int)puStack_50;
    *(int *)(param_1 + 0x98) = iVar5 * (int)puStack_50;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(LPVOID *)(param_1 + 0x9c) = pvStack_40;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *puVar2 = 0x54;
    *(int *)(param_1 + 0xa0) = iVar5 * iStack_48;
    *(int *)(param_1 + 0xa8) = iVar5 * iStack_48;
    iVar4 = acmStreamPrepareHeader(*puVar1,puVar2,0);
  }
  if (iVar4 != 0) {
    acmStreamClose(*puVar1,0);
    pvVar3 = pvStack_44;
    if (pvStack_44 != (LPCVOID)0x0) {
      pvVar6 = GlobalHandle(pvStack_44);
      GlobalUnlock(pvVar6);
      pvVar6 = GlobalHandle(pvVar3);
      GlobalFree(pvVar6);
    }
    pvVar3 = pvStack_40;
    if (pvStack_40 != (LPCVOID)0x0) {
      pvVar6 = GlobalHandle(pvStack_40);
      GlobalUnlock(pvVar6);
      pvVar6 = GlobalHandle(pvVar3);
      GlobalFree(pvVar6);
    }
  }
  if (*(int *)(param_1 + 0xd8) != 0) {
    FUN_00405790(param_1);
  }
  FUN_0041cba0((int *)(param_1 + 0xd8),4,-1,-1,0x80000000);
LAB_00406139:
  return -(uint)(iVar4 != 0) & 0x8004e011;
}


