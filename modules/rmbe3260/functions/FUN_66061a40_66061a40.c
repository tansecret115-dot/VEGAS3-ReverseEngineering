/* Module: rmbe3260.dll
   Function: FUN_66061a40
   Address: 66061a40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66061a40(int param_1,byte *param_2,int param_3,int *param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  undefined2 extraout_var;
  byte *pbVar8;
  int *local_8;
  
  puVar2 = operator_new(0x28);
  if (puVar2 == (undefined4 *)0x0) {
    local_8 = (int *)0x0;
  }
  else {
    local_8 = (int *)FUN_6605c060(puVar2);
  }
  (**(code **)(*local_8 + 4))(local_8);
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    *(ushort *)(param_1 + 0x66) = (ushort)bVar1 << 8;
    sVar7 = CONCAT11(bVar1,param_2[1]);
    *(short *)(param_1 + 0x66) = sVar7;
    if (sVar7 == 1) {
      *(ushort *)(param_1 + 0x68) = (ushort)param_2[2] << 8;
      *(ushort *)(param_1 + 0x68) = *(ushort *)(param_1 + 0x68) | (ushort)param_2[3];
      *(ushort *)(param_1 + 0x6a) = (ushort)param_2[4] << 8;
      *(ushort *)(param_1 + 0x6a) = *(ushort *)(param_1 + 0x6a) | (ushort)param_2[5];
      bVar1 = param_2[6];
      *(uint *)(param_1 + 0x6c) = (uint)bVar1 << 0x18;
      *(uint *)(param_1 + 0x6c) = (uint)bVar1 << 0x18 | (uint)param_2[7] << 0x10;
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | (uint)param_2[8] << 8;
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | (uint)param_2[9];
      *(ushort *)(param_1 + 0x70) = (ushort)param_2[10] << 8;
      *(ushort *)(param_1 + 0x70) = *(ushort *)(param_1 + 0x70) | (ushort)param_2[0xb];
      *(byte *)(param_1 + 0x72) = param_2[0xc];
    }
  }
  *(uint *)(param_1 + 0x52) = param_3 - 0xdU;
  pbVar3 = operator_new(param_3 - 0xdU);
  *(byte **)(param_1 + 0x4e) = pbVar3;
  if (pbVar3 == (byte *)0x0) {
    uVar4 = 0x8007000e;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x52);
    pbVar8 = param_2 + 0xd;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar3 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar3 = pbVar3 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar3 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar3 = pbVar3 + 1;
    }
    (**(code **)(*local_8 + 0x10))
              (local_8,*(undefined4 *)(param_1 + 0x4e),*(undefined4 *)(param_1 + 0x52));
    uVar4 = CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x70));
    uVar4 = (**(code **)(*param_4 + 0x2c))
                      (param_4,local_8,*(undefined4 *)(param_1 + 0x6c),
                       CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x6a)),
                       CONCAT31((int3)((uint)uVar4 >> 8),*(undefined1 *)(param_1 + 0x72)),uVar4);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return uVar4;
}


