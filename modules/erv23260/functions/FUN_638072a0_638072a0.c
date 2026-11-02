/* Module: erv23260.dll
   Function: FUN_638072a0
   Address: 638072a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_638072a0(byte *param_1,byte *param_2,byte *param_3,uint param_4,byte *param_5,byte *param_6
                 ,byte *param_7,byte *param_8,byte *param_9,byte *param_10,byte *param_11,
                 byte *param_12,byte *param_13)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar2 = param_10;
  pbVar1 = param_6;
  if (param_5 != (byte *)0x0) {
    param_10 = param_5;
    pbVar5 = param_7;
    do {
      pbVar4 = param_1;
      pbVar6 = pbVar5;
      for (uVar3 = param_4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pbVar6 = *(undefined4 *)pbVar4;
        pbVar4 = pbVar4 + 4;
        pbVar6 = pbVar6 + 4;
      }
      for (uVar3 = param_4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pbVar6 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        pbVar6 = pbVar6 + 1;
      }
      param_1 = param_1 + (int)param_6;
      pbVar5 = pbVar5 + (int)pbVar2;
      param_10 = param_10 + -1;
    } while (param_10 != (byte *)0x0);
  }
  pbVar5 = (byte *)((uint)param_5 >> 1);
  param_1 = param_8;
  if (pbVar5 != (byte *)0x0) {
    param_6 = pbVar5;
    do {
      pbVar4 = param_2;
      pbVar6 = param_1;
      for (uVar3 = param_4 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pbVar6 = *(undefined4 *)pbVar4;
        pbVar4 = pbVar4 + 4;
        pbVar6 = pbVar6 + 4;
      }
      param_1 = param_1 + (int)pbVar2;
      for (uVar3 = param_4 >> 1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pbVar6 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        pbVar6 = pbVar6 + 1;
      }
      param_2 = param_2 + (int)pbVar1;
      param_6 = param_6 + -1;
    } while (param_6 != (byte *)0x0);
  }
  param_1 = param_9;
  if (pbVar5 != (byte *)0x0) {
    param_6 = pbVar5;
    do {
      pbVar4 = param_3;
      pbVar6 = param_1;
      for (uVar3 = param_4 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pbVar6 = *(undefined4 *)pbVar4;
        pbVar4 = pbVar4 + 4;
        pbVar6 = pbVar6 + 4;
      }
      param_1 = param_1 + (int)pbVar2;
      for (uVar3 = param_4 >> 1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pbVar6 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        pbVar6 = pbVar6 + 1;
      }
      param_3 = param_3 + (int)pbVar1;
      param_6 = param_6 + -1;
    } while (param_6 != (byte *)0x0);
  }
  FUN_637fd730((int)param_7,param_4,(int)param_5,(int)pbVar2,0x10);
  uVar3 = param_4 >> 1;
  FUN_637fd730((int)param_8,uVar3,(int)pbVar5,(int)pbVar2,8);
  FUN_637fd730((int)param_9,uVar3,(int)pbVar5,(int)pbVar2,8);
  if (param_11 != (byte *)0x0) {
    FUN_63806f00(param_7,param_11,param_4,param_5,(int)pbVar2,(int)pbVar2,0,0,0,0);
    FUN_63806f00(param_8,param_12,uVar3,pbVar5,(int)pbVar2,(int)pbVar2,0,0,0,0);
    FUN_63806f00(param_9,param_13,uVar3,pbVar5,(int)pbVar2,(int)pbVar2,0,0,0,0);
  }
  return;
}


