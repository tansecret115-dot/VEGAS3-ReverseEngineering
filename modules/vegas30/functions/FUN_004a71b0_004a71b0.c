/* Module: vegas30.exe
   Function: FUN_004a71b0
   Address: 004a71b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004a71b0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  iVar3 = 0;
  if (param_3 == 2) {
    puVar5 = (undefined4 *)(param_2 + 0x110);
  }
  else if (param_3 == 3) {
    puVar5 = (undefined4 *)(param_2 + 0x120);
  }
  else {
    if (param_3 != 4) {
      return -0x7fffbfff;
    }
    puVar5 = (undefined4 *)(param_2 + 0x130);
  }
  if (puVar5 != (undefined4 *)0x0) {
    local_20 = *puVar5;
    local_2c = *(undefined4 *)(param_1 + 0xbc8);
    local_1c = puVar5[1];
    local_18 = puVar5[2];
    uVar2 = *(undefined4 *)(param_2 + 0x3c);
    local_14 = puVar5[3];
    local_28 = param_2;
    local_10 = *puVar5;
    local_c = puVar5[1];
    local_8 = puVar5[2];
    local_4 = puVar5[3];
    local_24 = param_3;
    FUN_004e9f70(local_2c,0x39,0);
    FUN_004ea250(*(undefined4 *)(param_1 + 0xbc8),uVar1,1,0);
    iVar3 = FUN_00438480(*(undefined4 *)(param_1 + 4),&local_20,&local_2c,&LAB_004a7190,0,0);
    if (iVar3 == 0) {
      iVar3 = FUN_005c9310(*(undefined4 *)(param_1 + 0xbc8),param_2,param_3,&local_20);
      *(undefined4 *)(param_2 + 0x3c) = uVar2;
      iVar6 = 0x10;
      bVar9 = false;
      iVar4 = 0;
      bVar10 = true;
      pbVar7 = (byte *)&local_20;
      pbVar8 = (byte *)&local_10;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        bVar9 = *pbVar7 < *pbVar8;
        bVar10 = *pbVar7 == *pbVar8;
        pbVar7 = pbVar7 + 1;
        pbVar8 = pbVar8 + 1;
      } while (bVar10);
      if (!bVar10) {
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      }
      if (iVar4 != 0) {
        FUN_004eb2b0(*(undefined4 *)(param_1 + 0xbc8));
        iVar4 = *(int *)(param_2 + 0x3c) + 1;
        if (iVar4 < 2) {
          iVar4 = 1;
        }
        *(int *)(param_2 + 0x3c) = iVar4;
      }
      FUN_004ea040(*(undefined4 *)(param_1 + 0xbc8),0);
    }
    *(uint *)**(undefined4 **)(param_1 + 0xbc8) =
         *(uint *)**(undefined4 **)(param_1 + 0xbc8) | 0x200000;
  }
  return iVar3;
}


