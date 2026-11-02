/* Module: 28_83260.dll
   Function: FUN_10003ba0
   Address: 10003ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_10003ba0(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  iVar7 = DAT_1000c568;
  if (*(int *)((int)param_1 + 0x1c44) == 1) {
    iVar2 = 0;
    if (DAT_1000c9e0 == 0) {
      DAT_1000c9e0 = 1;
      if (DAT_1000c568 < 0x28) {
        local_8 = 0;
        iVar6 = DAT_1000c568 + 0x14;
      }
      else {
        local_8 = DAT_1000c568 + -0x28;
        iVar6 = 0x3c;
      }
      if (iVar6 < 0x3c) {
        puVar4 = &DAT_1000c928;
        iVar2 = 0x3c - iVar6;
        puVar3 = (undefined4 *)((int)param_1 + iVar6 * 4 + 0x14e0);
        iVar6 = iVar2;
        do {
          uVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (local_8 < iVar7) {
        iVar7 = iVar7 - local_8;
        puVar4 = (undefined4 *)((int)param_1 + local_8 * 4 + 0x14e0);
        puVar3 = &DAT_1000c928 + iVar2;
        do {
          uVar1 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar3 = uVar1;
          puVar3 = puVar3 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      FUN_100032b0(param_1,(float *)&DAT_1000c928,(int)param_1 + 0xb44);
      *(undefined4 *)((int)param_1 + 0x14c8) = 1;
      iVar7 = DAT_1000c568;
      iVar2 = 0;
      if (DAT_1000c568 < 0x28) {
        local_8 = 0;
        iVar6 = DAT_1000c568 + 0x14;
      }
      else {
        local_8 = DAT_1000c568 + -0x28;
        iVar6 = 0x3c;
      }
      if (iVar6 < 0x3c) {
        iVar2 = 0x3c - iVar6;
        puVar3 = &DAT_1000c3a8 + iVar6;
        puVar4 = &DAT_1000c4b0;
        for (iVar5 = iVar2; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      if (local_8 < iVar7) {
        puVar3 = &DAT_1000c3a8 + local_8;
        puVar4 = &DAT_1000c4b0 + iVar2;
        for (iVar7 = iVar7 - local_8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      FUN_100031a0(param_1,(float *)&DAT_1000c4b0,(int)param_1 + 0x125c,(int)param_1 + 0x1288);
      *(undefined4 *)((int)param_1 + 0x14d0) = 1;
      *(undefined4 *)((int)param_1 + 0x14d4) = 1;
      FUN_10003ea0((int)param_1 + 0xb44,(int)param_1 + 0x125c,(int)param_1 + 0x1288,
                   (undefined4 *)((int)param_1 + 0x14b4));
      FUN_10003f80((float *)((int)param_1 + 0x14b4),(float *)((int)param_1 + 0x12b4));
      *(undefined4 *)((int)param_1 + 0x14d8) = 1;
      *(undefined4 *)((int)param_1 + 0x14dc) = 1;
      iVar7 = DAT_1000c568 / 5;
      iVar2 = 0;
      if (iVar7 < 8) {
        iVar6 = iVar7 + 4;
        local_8 = 0;
      }
      else {
        local_8 = iVar7 + -8;
        iVar6 = 0xc;
      }
      if (iVar6 < 0xc) {
        puVar4 = &DAT_1000c388;
        iVar2 = 0xc - iVar6;
        puVar3 = (undefined4 *)((int)param_1 + iVar6 * 4 + 0x16c0);
        iVar6 = iVar2;
        do {
          uVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (local_8 < iVar7) {
        puVar3 = &DAT_1000c388 + iVar2;
        puVar4 = (undefined4 *)((int)param_1 + local_8 * 4 + 0x16c0);
        iVar7 = iVar7 - local_8;
        do {
          uVar1 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar3 = uVar1;
          puVar3 = puVar3 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      FUN_10003330(param_1,(float *)&DAT_1000c388,(int)param_1 + 0x1230);
      *(undefined4 *)((int)param_1 + 0x14cc) = 1;
      return;
    }
    DAT_1000c9e0 = 0;
  }
  return;
}


