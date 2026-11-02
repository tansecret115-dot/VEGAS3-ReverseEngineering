/* Module: vegas30.exe
   Function: FUN_004aa700
   Address: 004aa700
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004aa700(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_2 + 8);
  uVar3 = 0;
  if (0 < iVar1) {
    uVar4 = param_2 + 0x70;
    do {
      pbVar2 = (byte *)(-(uint)(uVar3 < *(uint *)(param_2 + 8)) & uVar4);
      if ((*pbVar2 & 0x40) == 0) {
        FUN_004aa4b0(param_1,pbVar2,*(uint *)(pbVar2 + 0x18) + param_3,
                     *(int *)(pbVar2 + 0x1c) + param_4 +
                     (uint)CARRY4(*(uint *)(pbVar2 + 0x18),param_3));
      }
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 + 0x68;
    } while ((int)uVar3 < iVar1);
  }
  return;
}


