/* Module: mp3rw.dll
   Function: FUN_004514d0
   Address: 004514d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004514d0(int *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int unaff_EBX;
  int iVar6;
  byte *pbVar7;
  
  puVar3 = *(undefined4 **)((int)param_1 + 0x51);
  iVar6 = puVar3[1];
  pbVar7 = (byte *)*puVar3;
  if (iVar6 == 0) {
    uVar4 = (*(code *)puVar3[3])(param_1);
    if ((char)uVar4 == '\0') goto LAB_00451560;
    pbVar7 = (byte *)*puVar3;
    iVar6 = puVar3[1];
  }
  iVar6 = iVar6 + -1;
  bVar1 = *pbVar7;
  pbVar7 = pbVar7 + 1;
  if (iVar6 == 0) {
    uVar4 = (*(code *)puVar3[3])(param_1);
    if ((char)uVar4 == '\0') {
LAB_00451560:
      return uVar4 & 0xffffff00;
    }
    pbVar7 = (byte *)*puVar3;
    iVar6 = puVar3[1];
  }
  bVar2 = *pbVar7;
  *(undefined4 *)(*param_1 + 0x14) = 0x5a;
  *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0x1a5);
  *(uint *)(*param_1 + 0x1c) = (uint)bVar1 * 0x100 + (uint)bVar2;
  (**(code **)(*param_1 + 4))(param_1,1);
  *puVar3 = pbVar7 + 1;
  puVar3[1] = iVar6 + -1;
  uVar5 = (**(code **)(*(int *)((int)param_1 + 0x51) + 0x10))(param_1,unaff_EBX + -2);
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


