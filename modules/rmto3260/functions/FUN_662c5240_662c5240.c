/* Module: rmto3260.dll
   Function: FUN_662c5240
   Address: 662c5240
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c5240(int param_1,short *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  pbVar2 = operator_new(0xe);
  if (pbVar2 == (byte *)0x0) {
    iVar6 = -0x7ff8fff2;
  }
  if (-1 < iVar6) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 0x28))(pbVar2,0xe);
    if (iVar3 != 0xe) {
      iVar6 = -0x7ffbff7f;
    }
    if (-1 < iVar6) {
      if (pbVar2 == (byte *)0x0) {
        return iVar6;
      }
      bVar1 = *pbVar2;
      *param_2 = (ushort)bVar1 << 8;
      sVar4 = CONCAT11(bVar1,pbVar2[1]);
      *param_2 = sVar4;
      if (sVar4 == 0) {
        *(uint *)(param_2 + 1) = (uint)pbVar2[2] << 0x18;
        uVar5 = *(uint *)(param_2 + 1) | (uint)pbVar2[3] << 0x10;
        *(uint *)(param_2 + 1) = uVar5;
        uVar5 = uVar5 | (uint)pbVar2[4] << 8;
        *(uint *)(param_2 + 1) = uVar5;
        *(uint *)(param_2 + 1) = uVar5 | pbVar2[5];
        *(uint *)(param_2 + 3) = (uint)pbVar2[6] << 0x18;
        uVar5 = *(uint *)(param_2 + 3) | (uint)pbVar2[7] << 0x10;
        *(uint *)(param_2 + 3) = uVar5;
        uVar5 = uVar5 | (uint)pbVar2[8] << 8;
        *(uint *)(param_2 + 3) = uVar5;
        *(uint *)(param_2 + 3) = uVar5 | pbVar2[9];
        *(uint *)(param_2 + 5) = (uint)pbVar2[10] << 0x18;
        uVar5 = *(uint *)(param_2 + 5) | (uint)pbVar2[0xb] << 0x10;
        *(uint *)(param_2 + 5) = uVar5;
        uVar5 = uVar5 | (uint)pbVar2[0xc] << 8;
        *(uint *)(param_2 + 5) = uVar5;
        *(uint *)(param_2 + 5) = uVar5 | pbVar2[0xd];
      }
    }
  }
  if (pbVar2 != (byte *)0x0) {
    operator_delete(pbVar2);
  }
  return iVar6;
}


