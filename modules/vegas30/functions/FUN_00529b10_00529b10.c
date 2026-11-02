/* Module: vegas30.exe
   Function: FUN_00529b10
   Address: 00529b10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00529b10(undefined4 *param_1)

{
  SIZE_T SVar1;
  undefined4 *puVar2;
  int iVar3;
  HGLOBAL pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int local_c;
  undefined4 *local_4;
  
  iVar3 = FUN_0052b130(*param_1);
  if (iVar3 != 0) {
    local_c = 0;
    *(undefined4 *)(iVar3 + 4) = param_1[1];
    if (0 < (int)param_1[1]) {
      do {
        _SfList_AllocItem_12(*(undefined4 *)(iVar3 + 8),0x124,&local_4);
        puVar2 = local_4;
        puVar9 = *(undefined4 **)(*(int *)(param_1[2] + 8) + local_c * 4);
        *local_4 = *puVar9;
        local_4[1] = puVar9[1];
        local_4[2] = puVar9[2];
        local_4[3] = puVar9[3];
        _mbscpy((uchar *)(local_4 + 4),(uchar *)(puVar9 + 4));
        SVar1 = puVar9[0x45];
        puVar2[0x45] = SVar1;
        if (puVar9[0x46] != 0) {
          pvVar4 = GlobalAlloc(0x40,SVar1);
          puVar5 = GlobalLock(pvVar4);
          uVar8 = puVar2[0x45];
          puVar2[0x46] = puVar5;
          puVar6 = (undefined4 *)puVar9[0x46];
          for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar5 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar5 = puVar5 + 1;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar5 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar5 = (undefined4 *)((int)puVar5 + 1);
          }
        }
        SVar1 = puVar9[0x47];
        puVar2[0x47] = SVar1;
        if (puVar9[0x48] != 0) {
          pvVar4 = GlobalAlloc(0x40,SVar1);
          puVar6 = GlobalLock(pvVar4);
          uVar8 = puVar2[0x47];
          puVar2[0x48] = puVar6;
          puVar9 = (undefined4 *)puVar9[0x48];
          for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar6 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar6 = puVar6 + 1;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar6 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
        }
        _SfList_InsertList_16(*(undefined4 *)(iVar3 + 8),0xffffffff,0,0xffffffff);
        local_c = local_c + 1;
      } while (local_c < (int)param_1[1]);
      return iVar3;
    }
  }
  return iVar3;
}


