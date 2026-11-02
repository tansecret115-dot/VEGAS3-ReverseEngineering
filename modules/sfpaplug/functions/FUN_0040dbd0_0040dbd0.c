/* Module: sfpaplug.dll
   Function: FUN_0040dbd0
   Address: 0040dbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_0040dbd0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  HGLOBAL pvVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puStack_6c;
  LPVOID pvStack_68;
  int iStack_64;
  LPVOID pvStack_60;
  DWORD DStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  uint uStack_50;
  
  puVar1 = (undefined4 *)(param_1 + 0x7c);
  if (*(int *)(param_1 + 0x7c) != 0) {
    uStack_50 = 0x40dbea;
    FUN_0040dec0(param_1);
  }
  pvStack_60 = *(LPVOID *)(param_1 + 0x58);
  iStack_64 = *(int *)(param_1 + 0x50);
  uStack_50 = 4;
  uStack_54 = 0;
  uStack_58 = 0;
  DStack_5c = 0;
  pvStack_68 = (LPVOID)0x0;
  puStack_6c = puVar1;
  iVar3 = acmStreamOpen();
  if (iVar3 == 0) {
    uStack_54 = (uint)*(ushort *)(*(int *)(param_1 + 0x58) + 0xc);
    iVar4 = acmStreamSize(*puVar1,uStack_54,&DStack_5c,1);
    iVar3 = 0;
    if (iVar4 != 0) {
      uVar6 = 1;
      do {
        iVar3 = *(int *)(param_1 + 0x58);
        puStack_6c = (undefined4 *)
                     ((uint)*(ushort *)(iVar3 + 0xc) *
                     (((*(ushort *)(iVar3 + 0xc) - 1) + *(int *)(iVar3 + 8) * uVar6) /
                     (uint)*(ushort *)(iVar3 + 0xc)));
        iVar3 = acmStreamSize(*puVar1,puStack_6c,&puStack_6c,1);
        if ((iVar3 == 0) &&
           ((undefined4 *)(uint)*(ushort *)(*(int *)(param_1 + 0x50) + 0xc) < puStack_6c)) break;
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x101);
      iVar3 = acmStreamSize(*puVar1,puStack_6c,&iStack_64,0);
      if (iVar3 != 0) goto LAB_0040dea7;
    }
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    SetFilePointer(*(HANDLE *)(*(int *)(param_1 + 4) + 0x214),0,(PLONG)0x0,0);
    FUN_0041bac0(*(HANDLE *)(*(int *)(param_1 + 4) + 0x214),(int *)&stack0xffffffb8,
                 (int *)&stack0xffffffc0);
    iVar4 = FUN_0041bba0(*(HANDLE *)(*(int *)(param_1 + 4) + 0x214),DAT_0044ead8,DAT_0044eadc,
                         DAT_0044eae0,DAT_0044eae4,&uStack_50,(uint *)&stack0xffffffb8);
    if (iVar4 == 0) {
      ReadFile(*(HANDLE *)(*(int *)(param_1 + 4) + 0x214),&uStack_58,8,&DStack_5c,(LPOVERLAPPED)0x0)
      ;
    }
    *(undefined4 *)(param_1 + 0x30) = uStack_58;
    *(uint *)(param_1 + 0x34) = uStack_54;
    if (puStack_6c < (undefined4 *)0x8000) {
      iVar4 = (int)(0x8000 / ZEXT48(puStack_6c));
    }
    else {
      iVar4 = 1;
    }
    pvVar5 = GlobalAlloc(0x42,iVar4 * (int)puStack_6c);
    pvStack_68 = GlobalLock(pvVar5);
    pvVar5 = GlobalAlloc(0x42,iVar4 * iStack_64);
    pvStack_60 = GlobalLock(pvVar5);
    if ((pvStack_60 != (LPVOID)0x0) && (pvStack_68 != (LPVOID)0x0)) {
      puVar2 = (undefined4 *)(param_1 + 0x80);
      puVar7 = puVar2;
      for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(LPVOID *)(param_1 + 0x8c) = pvStack_68;
      *(int *)(param_1 + 0x90) = iVar4 * (int)puStack_6c;
      *(int *)(param_1 + 0x98) = iVar4 * (int)puStack_6c;
      *(undefined4 *)(param_1 + 0x84) = 0;
      *(LPVOID *)(param_1 + 0x9c) = pvStack_60;
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0xa4) = 0;
      *puVar2 = 0x54;
      *(int *)(param_1 + 0xa0) = iVar4 * iStack_64;
      *(int *)(param_1 + 0xa8) = iVar4 * iStack_64;
      iVar3 = acmStreamPrepareHeader(*puVar1,puVar2,0);
      if (iVar3 != 0) {
        acmStreamClose(*puVar1,0);
        pvVar5 = GlobalHandle(pvStack_68);
        GlobalUnlock(pvVar5);
        pvVar5 = GlobalHandle(pvStack_68);
        GlobalFree(pvVar5);
        pvVar5 = GlobalHandle(pvStack_60);
        GlobalUnlock(pvVar5);
        pvVar5 = GlobalHandle(pvStack_60);
        GlobalFree(pvVar5);
      }
    }
    if (*(int *)(param_1 + 0xd8) != 0) {
      FUN_0040d710(param_1);
    }
    FUN_0042baa0((int *)(param_1 + 0xd8),4,-1,-1,0x80000000);
  }
LAB_0040dea7:
  return -(uint)(iVar3 != 0) & 0x8004e011;
}


