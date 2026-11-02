/* Module: mp3rw.dll
   Function: FUN_00477530
   Address: 00477530
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00477530(int *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_00475b50(param_1,"Missing IHDR before tEXt");
  }
  if ((param_1[0x18] & 4U) != 0) {
    param_1[0x18] = param_1[0x18] | 8;
  }
  pbVar3 = FUN_00475a80(param_1,param_3 + 1);
  FUN_00475d90(param_1,pbVar3,param_3);
  iVar4 = FUN_00475dc0(param_1,0);
  if (iVar4 == 0) {
    pbVar3[param_3] = 0;
    bVar2 = *pbVar3;
    pbVar6 = pbVar3;
    while (bVar2 != 0) {
      pbVar1 = pbVar6 + 1;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    if (pbVar6 != pbVar3 + param_3) {
      pbVar6 = pbVar6 + 1;
    }
    puVar5 = FUN_00475a80(param_1,0x10);
    *puVar5 = 0xffffffff;
    puVar5[1] = pbVar3;
    puVar5[2] = pbVar6;
    FUN_0044db80(param_1,param_2,(int)puVar5,1);
    FUN_00475ac0((int)param_1,puVar5);
    return;
  }
  FUN_00475ac0((int)param_1,pbVar3);
  return;
}


