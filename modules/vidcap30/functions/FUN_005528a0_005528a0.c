/* Module: vidcap30.exe
   Function: FUN_005528a0
   Address: 005528a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005528a0(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  uint unaff_retaddr;
  
  puVar2 = *(undefined4 **)((int)param_1 + 0x51);
  iVar6 = puVar2[1];
  pbVar5 = (byte *)*puVar2;
  if (iVar6 == 0) {
    cVar3 = (*(code *)puVar2[3])(param_1);
    if (cVar3 == '\0') {
      return 0;
    }
    pbVar5 = (byte *)*puVar2;
    iVar6 = puVar2[1];
  }
  iVar6 = iVar6 + -1;
  bVar1 = *pbVar5;
  pbVar5 = pbVar5 + 1;
  if (iVar6 == 0) {
    cVar3 = (*(code *)puVar2[3])(param_1);
    if (cVar3 == '\0') {
      return 0;
    }
    pbVar5 = (byte *)*puVar2;
    iVar6 = puVar2[1];
  }
  uVar4 = (uint)*pbVar5;
  if ((bVar1 != 0xff) || (uVar4 != 0xd8)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x34;
    *(uint *)(*param_1 + 0x18) = (uint)bVar1;
    *(uint *)(*param_1 + 0x1c) = uVar4;
    (**(code **)*param_1)(param_1);
    uVar4 = unaff_retaddr;
  }
  *(uint *)((int)param_1 + 0x1a5) = uVar4;
  puVar2[1] = iVar6 + -1;
  *puVar2 = pbVar5 + 1;
  return 1;
}


