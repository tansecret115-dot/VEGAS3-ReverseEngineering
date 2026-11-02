/* Module: vidcap30.exe
   Function: FUN_005527c0
   Address: 005527c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005527c0(int *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  char cVar5;
  int unaff_EBX;
  undefined1 *puVar6;
  byte *pbVar7;
  int iVar8;
  
  puVar4 = *(undefined4 **)((int)param_1 + 0x51);
  iVar8 = puVar4[1];
  puVar6 = (undefined1 *)*puVar4;
  if (iVar8 == 0) {
    cVar5 = (*(code *)puVar4[3])(param_1);
    if (cVar5 == '\0') {
      return 0;
    }
    puVar6 = (undefined1 *)*puVar4;
    iVar8 = puVar4[1];
  }
  iVar8 = iVar8 + -1;
  uVar1 = *puVar6;
  puVar6 = puVar6 + 1;
  if (iVar8 == 0) {
    cVar5 = (*(code *)puVar4[3])(param_1);
    if (cVar5 == '\0') {
      return 0;
    }
    puVar6 = (undefined1 *)*puVar4;
    iVar8 = puVar4[1];
  }
  iVar8 = iVar8 + -1;
  pbVar7 = puVar6 + 1;
  if (CONCAT11(uVar1,*puVar6) != 4) {
    *(undefined4 *)(*param_1 + 0x14) = 9;
    (**(code **)*param_1)(param_1);
  }
  if (iVar8 == 0) {
    cVar5 = (*(code *)puVar4[3])(param_1);
    if (cVar5 == '\0') {
      return 0;
    }
    pbVar7 = (byte *)*puVar4;
    iVar8 = puVar4[1];
  }
  iVar8 = iVar8 + -1;
  bVar2 = *pbVar7;
  pbVar7 = pbVar7 + 1;
  if (iVar8 == 0) {
    cVar5 = (*(code *)puVar4[3])(param_1);
    if (cVar5 == '\0') {
      return 0;
    }
    pbVar7 = (byte *)*puVar4;
    iVar8 = puVar4[1];
  }
  bVar3 = *pbVar7;
  *(undefined4 *)(*param_1 + 0x14) = 0x51;
  *(uint *)(*param_1 + 0x18) = (uint)bVar2 * 0x100 + (uint)bVar3;
  (**(code **)(*param_1 + 4))(param_1,1);
  param_1[0x4b] = unaff_EBX;
  puVar4[1] = iVar8 + -1;
  *puVar4 = pbVar7 + 1;
  return 1;
}


