/* Module: sfs4rw.dll
   Function: FUN_00451ec0
   Address: 00451ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00451ec0(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  
  puVar2 = *(undefined4 **)((int)param_1 + 0x51);
  iVar5 = puVar2[1];
  pbVar7 = (byte *)*puVar2;
  if (iVar5 == 0) {
    uVar4 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar4 == '\0') goto LAB_0045201f;
    iVar5 = puVar2[1];
    pbVar7 = (byte *)*puVar2;
  }
  iVar5 = iVar5 + -1;
  bVar3 = *pbVar7;
  pbVar7 = pbVar7 + 1;
  if (iVar5 == 0) {
    uVar4 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar4 == '\0') {
LAB_0045201f:
      return uVar4 & 0xffffff00;
    }
    iVar5 = puVar2[1];
    pbVar7 = (byte *)*puVar2;
  }
  iVar8 = (uint)bVar3 * 0x100 + (uint)*pbVar7;
  do {
    iVar8 = iVar8 + -2;
    pbVar7 = pbVar7 + 1;
    iVar5 = iVar5 + -1;
    if (iVar8 < 1) {
      *puVar2 = pbVar7;
      puVar2[1] = iVar5;
      return CONCAT31((int3)((uint)iVar5 >> 8),1);
    }
    if (iVar5 == 0) {
      uVar4 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_0045201f;
      iVar5 = puVar2[1];
      pbVar7 = (byte *)*puVar2;
    }
    iVar5 = iVar5 + -1;
    bVar3 = *pbVar7;
    uVar6 = (uint)bVar3;
    pbVar7 = pbVar7 + 1;
    if (iVar5 == 0) {
      uVar4 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_0045201f;
      iVar5 = puVar2[1];
      pbVar7 = (byte *)*puVar2;
    }
    bVar1 = *pbVar7;
    uVar4 = (uint)bVar1;
    *(undefined4 *)(*param_1 + 0x14) = 0x4e;
    *(uint *)(*param_1 + 0x18) = uVar6;
    *(uint *)(*param_1 + 0x1c) = uVar4;
    (**(code **)(*param_1 + 4))(param_1,1);
    if (0x1f < bVar3) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1a;
      *(uint *)(*param_1 + 0x18) = uVar6;
      (**(code **)*param_1)(param_1);
    }
    if (bVar3 < 0x10) {
      *(byte *)(uVar6 + 0xfc + (int)param_1) = bVar1 & 0xf;
      bVar3 = (byte)((int)uVar4 >> 4);
      *(byte *)(uVar6 + 0x10c + (int)param_1) = bVar3;
      if (bVar3 < *(byte *)(uVar6 + 0xfc + (int)param_1)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x1b;
        *(uint *)(*param_1 + 0x18) = uVar4;
        (**(code **)*param_1)(param_1);
      }
    }
    else {
      *(byte *)(uVar6 + 0x10c + (int)param_1) = bVar1;
    }
  } while( true );
}


