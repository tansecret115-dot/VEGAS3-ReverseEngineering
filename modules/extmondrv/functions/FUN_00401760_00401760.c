/* Module: extmondrv.dll
   Function: FUN_00401760
   Address: 00401760
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00401760(int param_1,uint param_2,uint param_3,int param_4,uint param_5,int param_6,
                 undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_48 [9];
  int local_24 [9];
  
  iVar2 = param_6;
  uVar1 = param_5;
  iVar6 = param_6 * 12000;
  FUN_00406560(param_4,param_2,param_3,(uint)(param_6 == 6),&param_5);
  if ((param_7._1_1_ & 0xf) != 0xf) {
    param_7 = CONCAT31(param_7._1_3_,
                       (byte)param_7 ^ ((char)param_5 - (char)uVar1 ^ (byte)param_7) & 0x3f);
  }
  if ((param_9._1_1_ & 0xf) != 0xf) {
    param_9 = CONCAT31(param_9._1_3_,
                       (byte)param_9 ^ ((char)param_5 - (char)uVar1 ^ (byte)param_9) & 0x3f);
  }
  param_5 = 0;
  if (0 < iVar2) {
    do {
      param_1 = param_1 + 0x1e0;
      iVar5 = 0;
      puVar4 = (undefined4 *)(iVar6 + 4 + param_1);
      do {
        *(undefined1 *)(iVar2 * -12000 + -1 + (int)puVar4) = 0xff;
        *(undefined4 *)(param_1 + 4) = 0xffffffff;
        puVar7 = puVar4 + iVar2 * -3000 + 1;
        for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        *(int *)((int)local_48 + iVar5) = param_1;
        *(undefined4 **)((int)local_24 + iVar5) = puVar4 + -1;
        *(undefined1 *)((int)puVar4 + -1) = 0xff;
        *puVar4 = 0xffffffff;
        iVar5 = iVar5 + 4;
        param_1 = param_1 + 0x500;
        puVar7 = puVar4 + 0x140;
        for (iVar3 = 0x12; puVar4 = puVar4 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = 0;
        }
        puVar4 = puVar7;
      } while (iVar5 < 0x24);
      iVar5 = local_48[0];
      iVar3 = local_48[1];
      if ((param_5 & 1) == 0) {
        iVar5 = local_48[3];
        iVar3 = local_48[4];
      }
      *(undefined1 *)(iVar5 + 3) = 0x50;
      *(undefined4 *)(iVar5 + 4) = param_7;
      *(undefined1 *)(iVar3 + 3) = 0x51;
      *(undefined4 *)(iVar3 + 4) = param_8;
      iVar5 = local_24[0];
      iVar3 = local_24[1];
      if ((param_5 + param_6 & 1) == 0) {
        iVar5 = local_24[3];
        iVar3 = local_24[4];
      }
      *(undefined1 *)(iVar5 + 3) = 0x50;
      *(undefined4 *)(iVar5 + 4) = param_9;
      param_5 = param_5 + 1;
      *(undefined1 *)(iVar3 + 3) = 0x51;
      *(undefined4 *)(iVar3 + 4) = param_10;
    } while ((int)param_5 < param_6);
  }
  return;
}


