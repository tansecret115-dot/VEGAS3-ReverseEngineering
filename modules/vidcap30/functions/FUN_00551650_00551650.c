/* Module: vidcap30.exe
   Function: FUN_00551650
   Address: 00551650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00551650(int *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  char cVar4;
  int unaff_EBX;
  int iVar5;
  byte *pbVar6;
  
  puVar3 = *(undefined4 **)((int)param_1 + 0x51);
  iVar5 = puVar3[1];
  pbVar6 = (byte *)*puVar3;
  if (iVar5 == 0) {
    cVar4 = (*(code *)puVar3[3])(param_1);
    if (cVar4 == '\0') {
      return 0;
    }
    pbVar6 = (byte *)*puVar3;
    iVar5 = puVar3[1];
  }
  iVar5 = iVar5 + -1;
  bVar1 = *pbVar6;
  pbVar6 = pbVar6 + 1;
  if (iVar5 == 0) {
    cVar4 = (*(code *)puVar3[3])(param_1);
    if (cVar4 == '\0') {
      return 0;
    }
    pbVar6 = (byte *)*puVar3;
    iVar5 = puVar3[1];
  }
  bVar2 = *pbVar6;
  *(undefined4 *)(*param_1 + 0x14) = 0x5a;
  *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0x1a5);
  *(uint *)(*param_1 + 0x1c) = (uint)bVar1 * 0x100 + (uint)bVar2;
  (**(code **)(*param_1 + 4))(param_1,1);
  *puVar3 = pbVar6 + 1;
  puVar3[1] = iVar5 + -1;
  (**(code **)(*(int *)((int)param_1 + 0x51) + 0x10))(param_1,unaff_EBX + -2);
  return 1;
}


