/* Module: vegas30.exe
   Function: FUN_004c8210
   Address: 004c8210
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004c8210(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  iVar2 = 0;
  uVar6 = 0;
  if (param_3 == 1) {
    puVar4 = (undefined4 *)(param_2 + 0x48);
  }
  else if (param_3 == 3) {
    uVar6 = 0x69b7;
    puVar4 = (undefined4 *)(param_2 + 0x58);
  }
  else {
    if (param_3 != 4) {
      return -0x7fffbfff;
    }
    uVar6 = 0x69b8;
    puVar4 = (undefined4 *)(param_2 + 0x68);
  }
  if (puVar4 != (undefined4 *)0x0) {
    local_24 = param_3;
    local_20 = *puVar4;
    local_1c = puVar4[1];
    local_2c = *(undefined4 *)(param_1 + 0xbc8);
    local_18 = puVar4[2];
    uVar1 = *(undefined4 *)(param_2 + 0x15c);
    local_14 = puVar4[3];
    local_10 = *puVar4;
    local_c = puVar4[1];
    local_8 = puVar4[2];
    local_4 = puVar4[3];
    local_28 = param_2;
    FUN_004e9f70(local_2c,0x246,0);
    FUN_004ea250(*(undefined4 *)(param_1 + 0xbc8),param_2,0x29,0);
    iVar2 = FUN_00438480(*(undefined4 *)(param_1 + 4),&local_20,&local_2c,&LAB_004c81f0,uVar6,0);
    if (iVar2 == 0) {
      iVar2 = FUN_005cb300(*(undefined4 *)(param_1 + 0xbc8),param_2,param_3,&local_20);
      *(undefined4 *)(param_2 + 0x15c) = uVar1;
      iVar5 = 0x10;
      bVar9 = false;
      iVar3 = 0;
      bVar10 = true;
      pbVar7 = (byte *)&local_20;
      pbVar8 = (byte *)&local_10;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar9 = *pbVar7 < *pbVar8;
        bVar10 = *pbVar7 == *pbVar8;
        pbVar7 = pbVar7 + 1;
        pbVar8 = pbVar8 + 1;
      } while (bVar10);
      if (!bVar10) {
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      }
      if (iVar3 != 0) {
        FUN_004eb2b0(*(undefined4 *)(param_1 + 0xbc8));
        iVar3 = *(int *)(param_2 + 0x15c) + 1;
        if (iVar3 < 2) {
          iVar3 = 1;
        }
        *(int *)(param_2 + 0x15c) = iVar3;
      }
    }
    FUN_004ea040(*(undefined4 *)(param_1 + 0xbc8),0);
    *(uint *)**(undefined4 **)(param_1 + 0xbc8) =
         *(uint *)**(undefined4 **)(param_1 + 0xbc8) | 0x200000;
  }
  return iVar2;
}


