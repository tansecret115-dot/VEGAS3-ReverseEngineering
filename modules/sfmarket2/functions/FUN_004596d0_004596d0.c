/* Module: sfmarket2.dll
   Function: FUN_004596d0
   Address: 004596d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004596d0(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint unaff_EBX;
  int iVar4;
  byte *pbVar5;
  
  puVar2 = *(undefined4 **)((int)param_1 + 0x51);
  pbVar5 = (byte *)*puVar2;
  iVar4 = puVar2[1];
  do {
    if (iVar4 == 0) {
      uVar3 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar3 == '\0') {
LAB_00459771:
        return uVar3 & 0xffffff00;
      }
      pbVar5 = (byte *)*puVar2;
      iVar4 = puVar2[1];
    }
    bVar1 = *pbVar5;
    while( true ) {
      pbVar5 = pbVar5 + 1;
      iVar4 = iVar4 + -1;
      if (bVar1 == 0xff) break;
      *(int *)(*(int *)((int)param_1 + 0x1bd) + 0x56) =
           *(int *)(*(int *)((int)param_1 + 0x1bd) + 0x56) + 1;
      *puVar2 = pbVar5;
      puVar2[1] = iVar4;
      if (iVar4 == 0) {
        uVar3 = (*(code *)puVar2[3])(param_1);
        if ((char)uVar3 == '\0') goto LAB_00459771;
        pbVar5 = (byte *)*puVar2;
        iVar4 = puVar2[1];
      }
      bVar1 = *pbVar5;
    }
    do {
      if (iVar4 == 0) {
        uVar3 = (*(code *)puVar2[3])(param_1);
        if ((char)uVar3 == '\0') goto LAB_00459771;
        pbVar5 = (byte *)*puVar2;
        iVar4 = puVar2[1];
      }
      iVar4 = iVar4 + -1;
      uVar3 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (uVar3 == 0xff);
    if (uVar3 != 0) {
      if (*(int *)(*(int *)((int)param_1 + 0x1bd) + 0x56) != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x70;
        *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(*(int *)((int)param_1 + 0x1bd) + 0x56);
        *(uint *)(*param_1 + 0x1c) = uVar3;
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
        *(undefined4 *)(*(int *)((int)param_1 + 0x1bd) + 0x56) = 0;
        uVar3 = unaff_EBX;
      }
      *(uint *)((int)param_1 + 0x1a5) = uVar3;
      *puVar2 = pbVar5;
      puVar2[1] = iVar4;
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
    *(int *)(*(int *)((int)param_1 + 0x1bd) + 0x56) =
         *(int *)(*(int *)((int)param_1 + 0x1bd) + 0x56) + 2;
    *puVar2 = pbVar5;
    puVar2[1] = iVar4;
  } while( true );
}


