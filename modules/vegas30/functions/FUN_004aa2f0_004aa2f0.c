/* Module: vegas30.exe
   Function: FUN_004aa2f0
   Address: 004aa2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


byte * FUN_004aa2f0(int param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = param_1;
  uVar4 = 0;
  iVar1 = *(int *)(param_1 + 8);
  param_1 = 0;
  if (0 < iVar1) {
    uVar5 = iVar2 + 0x70;
    do {
      pbVar3 = (byte *)(-(uint)(uVar4 < *(uint *)(iVar2 + 8)) & uVar5);
      if (*(int *)(pbVar3 + 8) == param_2) {
        if (param_1 == param_3) {
          if (param_4 != (uint *)0x0) {
            *param_4 = uVar4;
          }
          if ((*pbVar3 & 0x40) == 0) {
            return pbVar3;
          }
        }
        param_1 = param_1 + 1;
        if (param_3 < param_1) {
          return (byte *)0x0;
        }
      }
      uVar4 = uVar4 + 1;
      uVar5 = uVar5 + 0x68;
    } while ((int)uVar4 < iVar1);
  }
  return (byte *)0x0;
}


