/* Module: sfs4rw.dll
   Function: FUN_004526a0
   Address: 004526a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004526a0(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint unaff_retaddr;
  
  puVar2 = *(undefined4 **)((int)param_1 + 0x51);
  iVar5 = puVar2[1];
  pbVar4 = (byte *)*puVar2;
  if (iVar5 == 0) {
    uVar3 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar3 == '\0') goto LAB_0045272d;
    pbVar4 = (byte *)*puVar2;
    iVar5 = puVar2[1];
  }
  iVar5 = iVar5 + -1;
  bVar1 = *pbVar4;
  pbVar4 = pbVar4 + 1;
  if (iVar5 == 0) {
    uVar3 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar3 == '\0') {
LAB_0045272d:
      return uVar3 & 0xffffff00;
    }
    pbVar4 = (byte *)*puVar2;
    iVar5 = puVar2[1];
  }
  uVar3 = (uint)*pbVar4;
  if ((bVar1 != 0xff) || (uVar3 != 0xd8)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x34;
    *(uint *)(*param_1 + 0x18) = (uint)bVar1;
    *(uint *)(*param_1 + 0x1c) = uVar3;
    (**(code **)*param_1)(param_1);
    uVar3 = unaff_retaddr;
  }
  *(uint *)((int)param_1 + 0x1a5) = uVar3;
  puVar2[1] = iVar5 + -1;
  *puVar2 = pbVar4 + 1;
  return CONCAT31((int3)(uVar3 >> 8),1);
}


