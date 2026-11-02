/* Module: sfs4rw.dll
   Function: FUN_004525c0
   Address: 004525c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004525c0(int *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int unaff_EBX;
  undefined1 *puVar7;
  byte *pbVar8;
  int iVar9;
  
  puVar4 = *(undefined4 **)((int)param_1 + 0x51);
  iVar9 = puVar4[1];
  puVar7 = (undefined1 *)*puVar4;
  if (iVar9 == 0) {
    uVar5 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar5 == '\0') goto LAB_00452696;
    puVar7 = (undefined1 *)*puVar4;
    iVar9 = puVar4[1];
  }
  iVar9 = iVar9 + -1;
  uVar1 = *puVar7;
  puVar7 = puVar7 + 1;
  if (iVar9 == 0) {
    uVar5 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar5 == '\0') goto LAB_00452696;
    puVar7 = (undefined1 *)*puVar4;
    iVar9 = puVar4[1];
  }
  iVar9 = iVar9 + -1;
  pbVar8 = puVar7 + 1;
  if (CONCAT11(uVar1,*puVar7) != 4) {
    *(undefined4 *)(*param_1 + 0x14) = 9;
    (**(code **)*param_1)(param_1);
  }
  if (iVar9 == 0) {
    uVar5 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar5 == '\0') goto LAB_00452696;
    pbVar8 = (byte *)*puVar4;
    iVar9 = puVar4[1];
  }
  iVar9 = iVar9 + -1;
  bVar2 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  if (iVar9 == 0) {
    uVar5 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar5 == '\0') {
LAB_00452696:
      return uVar5 & 0xffffff00;
    }
    pbVar8 = (byte *)*puVar4;
    iVar9 = puVar4[1];
  }
  bVar3 = *pbVar8;
  *(undefined4 *)(*param_1 + 0x14) = 0x51;
  *(uint *)(*param_1 + 0x18) = (uint)bVar2 * 0x100 + (uint)bVar3;
  uVar6 = (**(code **)(*param_1 + 4))(param_1,1);
  param_1[0x4b] = unaff_EBX;
  puVar4[1] = iVar9 + -1;
  *puVar4 = pbVar8 + 1;
  return CONCAT31((int3)((uint)uVar6 >> 8),1);
}


