/* Module: vegas30k.dll
   Function: FUN_0115c290
   Address: 0115c290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0115c290(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  uint unaff_EBX;
  int iVar5;
  byte *pbVar6;
  
  puVar2 = *(undefined4 **)((int)param_1 + 0x51);
  pbVar6 = (byte *)*puVar2;
  iVar5 = puVar2[1];
  while( true ) {
    if (iVar5 == 0) {
      cVar3 = (*(code *)puVar2[3])(param_1);
      if (cVar3 == '\0') {
        return 0;
      }
      pbVar6 = (byte *)*puVar2;
      iVar5 = puVar2[1];
    }
    bVar1 = *pbVar6;
    while( true ) {
      pbVar6 = pbVar6 + 1;
      iVar5 = iVar5 + -1;
      if (bVar1 == 0xff) break;
      *(int *)(*(int *)((int)param_1 + 0x1bd) + 0x56) =
           *(int *)(*(int *)((int)param_1 + 0x1bd) + 0x56) + 1;
      *puVar2 = pbVar6;
      puVar2[1] = iVar5;
      if (iVar5 == 0) {
        cVar3 = (*(code *)puVar2[3])(param_1);
        if (cVar3 == '\0') {
          return 0;
        }
        pbVar6 = (byte *)*puVar2;
        iVar5 = puVar2[1];
      }
      bVar1 = *pbVar6;
    }
    do {
      if (iVar5 == 0) {
        cVar3 = (*(code *)puVar2[3])(param_1);
        if (cVar3 == '\0') {
          return 0;
        }
        pbVar6 = (byte *)*puVar2;
        iVar5 = puVar2[1];
      }
      iVar5 = iVar5 + -1;
      uVar4 = (uint)*pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (uVar4 == 0xff);
    if (uVar4 != 0) break;
    *(int *)(*(int *)((int)param_1 + 0x1bd) + 0x56) =
         *(int *)(*(int *)((int)param_1 + 0x1bd) + 0x56) + 2;
    *puVar2 = pbVar6;
    puVar2[1] = iVar5;
  }
  if (*(int *)(*(int *)((int)param_1 + 0x1bd) + 0x56) != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x70;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(*(int *)((int)param_1 + 0x1bd) + 0x56);
    *(uint *)(*param_1 + 0x1c) = uVar4;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    *(undefined4 *)(*(int *)((int)param_1 + 0x1bd) + 0x56) = 0;
    uVar4 = unaff_EBX;
  }
  *(uint *)((int)param_1 + 0x1a5) = uVar4;
  *puVar2 = pbVar6;
  puVar2[1] = iVar5;
  return 1;
}


