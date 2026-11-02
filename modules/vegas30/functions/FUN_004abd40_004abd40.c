/* Module: vegas30.exe
   Function: FUN_004abd40
   Address: 004abd40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004abd40(undefined4 param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  byte *pbVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar3 = param_2;
  if ((param_2 != (uint *)0x0) && ((*param_2 & 0x200000) == 0)) {
    if (param_3 == 0) {
      param_2 = (uint *)FUN_004aac00(param_1);
    }
    else {
      param_2 = (uint *)param_3;
    }
    uVar1 = puVar3[2];
    uVar2 = puVar3[0x12];
    uVar5 = 0;
    if (0 < (int)uVar1) {
      puVar6 = puVar3 + 0x1c;
      do {
        pbVar4 = (byte *)(-(uint)(uVar5 < puVar3[2]) & (uint)puVar6);
        if (((*pbVar4 & 1) != 0) && (*(code **)(pbVar4 + 100) != (code *)0x0)) {
          (**(code **)(pbVar4 + 100))(param_2,pbVar4 + 0x54,uVar2,pbVar4);
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 0x1a;
      } while ((int)uVar5 < (int)uVar1);
    }
    if (param_2 != (uint *)param_3) {
      FUN_004aac70(param_1,param_2);
    }
  }
  return;
}


