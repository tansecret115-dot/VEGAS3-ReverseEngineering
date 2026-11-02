/* Module: 28_83260.dll
   Function: FUN_10004530
   Address: 10004530
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_10004530(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 local_cc [40];
  undefined4 local_2c [8];
  int local_c;
  int local_8;
  
  if (*(int *)((int)param_1 + 0x1c48) == 1) {
    if (*(int *)((int)param_1 + 0x880) == 0) {
      iVar7 = *(int *)((int)param_1 + 0x97c);
      if (iVar7 < 0x28) {
        iVar6 = iVar7 + 0x14;
        local_8 = 0;
      }
      else {
        local_8 = iVar7 + -0x28;
        iVar6 = 0x3c;
      }
      iVar3 = 0;
      if (iVar6 < 0x3c) {
        puVar4 = local_cc;
        iVar2 = 0x3c - iVar6;
        puVar5 = (undefined4 *)((int)param_1 + iVar6 * 4 + 0x1a34);
        local_c = iVar2;
        do {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
          iVar2 = iVar2 + -1;
          iVar3 = local_c;
        } while (iVar2 != 0);
      }
      if (local_8 < iVar7) {
        puVar4 = local_cc + iVar3;
        puVar5 = (undefined4 *)((int)param_1 + local_8 * 4 + 0x1a34);
        iVar7 = iVar7 - local_8;
        do {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      *(undefined4 *)((int)param_1 + 0x880) = 1;
      FUN_10001b80(param_1,(int)local_cc,(int)param_1 + 0xbd8,*(int *)((int)param_1 + 0x1c4c));
      iVar7 = *(int *)((int)param_1 + 0x97c) / 5;
      *(undefined4 *)((int)param_1 + 0x1a1c) = 1;
      if (iVar7 < 8) {
        iVar6 = iVar7 + 4;
        local_8 = 0;
      }
      else {
        local_8 = iVar7 + -8;
        iVar6 = 0xc;
      }
      iVar3 = 0;
      if (iVar6 < 0xc) {
        puVar4 = local_2c;
        iVar2 = 0xc - iVar6;
        puVar5 = (undefined4 *)((int)param_1 + iVar6 * 4 + 0x1c14);
        local_c = iVar2;
        do {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
          iVar2 = iVar2 + -1;
          iVar3 = local_c;
        } while (iVar2 != 0);
      }
      if (local_8 < iVar7) {
        puVar4 = local_2c + iVar3;
        puVar5 = (undefined4 *)((int)param_1 + local_8 * 4 + 0x1c14);
        iVar7 = iVar7 - local_8;
        do {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      FUN_10001c20(param_1,(int)local_2c,(int)param_1 + 0xc98);
      return;
    }
    *(undefined4 *)((int)param_1 + 0x880) = 0;
  }
  return;
}


