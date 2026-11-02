/* Module: vegas30.exe
   Function: FUN_004aad40
   Address: 004aad40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_004aad40(undefined4 *param_1)

{
  uint uVar1;
  HGLOBAL hMem;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  bool bVar9;
  uint local_8;
  int local_4;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = param_1[2];
    uVar2 = 0;
    uVar6 = uVar1;
    if (0 < (int)uVar1) {
      puVar5 = param_1 + 0x1c;
      bVar9 = uVar1 != 0;
      do {
        if ((*(byte *)(-(uint)bVar9 & (uint)puVar5) & 0x40) != 0) {
          uVar6 = uVar6 - 1;
        }
        uVar2 = uVar2 + 1;
        puVar5 = puVar5 + 0x1a;
        bVar9 = uVar2 < uVar1;
      } while ((int)uVar2 < (int)uVar1);
    }
    puVar5 = (undefined4 *)0x0;
    if (0 < (int)uVar6) {
      uVar2 = uVar6 * 0x68 + 0xd8;
      hMem = GlobalAlloc(0x40,uVar2);
      puVar5 = GlobalLock(hMem);
      if (puVar5 != (undefined4 *)0x0) {
        puVar4 = puVar5;
        for (uVar2 = uVar2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        puVar4 = param_1;
        puVar8 = puVar5;
        for (iVar3 = 0x36; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar5[2] = uVar6;
        uVar6 = 0;
        local_8 = 0;
        if (0 < (int)uVar1) {
          puVar4 = puVar5 + 0x1c;
          local_4 = 0;
          do {
            if (local_8 < (uint)param_1[2]) {
              pbVar7 = (byte *)(local_4 + 0x70 + (int)param_1);
            }
            else {
              pbVar7 = (byte *)0x0;
            }
            if ((*pbVar7 & 0x40) == 0) {
              bVar9 = uVar6 < (uint)puVar5[2];
              uVar6 = uVar6 + 1;
              puVar8 = (undefined4 *)(-(uint)bVar9 & (uint)puVar4);
              for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *(undefined4 *)pbVar7;
                pbVar7 = pbVar7 + 4;
                puVar8 = puVar8 + 1;
              }
              puVar4 = puVar4 + 0x1a;
            }
            local_8 = local_8 + 1;
            local_4 = local_4 + 0x68;
          } while ((int)local_8 < (int)uVar1);
        }
      }
    }
    FUN_004abac0(&param_1);
    return puVar5;
  }
  return (undefined4 *)0x0;
}


