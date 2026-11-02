/* Module: rmto3260.dll
   Function: FUN_662d0720
   Address: 662d0720
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662d0720(void *this,short *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  
  iVar4 = 0;
  pbVar2 = operator_new(0xe);
  if (pbVar2 == (byte *)0x0) {
    iVar4 = -0x7ff8fff2;
  }
  if (-1 < iVar4) {
    iVar3 = (**(code **)(**(int **)((int)this + 0x24) + 0x28))(pbVar2,0xe);
    if (iVar3 != 0xe) {
      iVar4 = -0x7ffbff7f;
    }
    if (-1 < iVar4) {
      if (pbVar2 == (byte *)0x0) {
        return iVar4;
      }
      bVar1 = *pbVar2;
      *param_1 = (ushort)bVar1 << 8;
      sVar5 = CONCAT11(bVar1,pbVar2[1]);
      *param_1 = sVar5;
      if (sVar5 == 0) {
        *(uint *)(param_1 + 1) = (uint)pbVar2[2] << 0x18;
        uVar6 = *(uint *)(param_1 + 1) | (uint)pbVar2[3] << 0x10;
        *(uint *)(param_1 + 1) = uVar6;
        uVar6 = uVar6 | (uint)pbVar2[4] << 8;
        *(uint *)(param_1 + 1) = uVar6;
        *(uint *)(param_1 + 1) = uVar6 | pbVar2[5];
        *(uint *)(param_1 + 3) = (uint)pbVar2[6] << 0x18;
        uVar6 = *(uint *)(param_1 + 3) | (uint)pbVar2[7] << 0x10;
        *(uint *)(param_1 + 3) = uVar6;
        uVar6 = uVar6 | (uint)pbVar2[8] << 8;
        *(uint *)(param_1 + 3) = uVar6;
        *(uint *)(param_1 + 3) = uVar6 | pbVar2[9];
        *(uint *)(param_1 + 5) = (uint)pbVar2[10] << 0x18;
        uVar6 = *(uint *)(param_1 + 5) | (uint)pbVar2[0xb] << 0x10;
        *(uint *)(param_1 + 5) = uVar6;
        uVar6 = uVar6 | (uint)pbVar2[0xc] << 8;
        *(uint *)(param_1 + 5) = uVar6;
        *(uint *)(param_1 + 5) = uVar6 | pbVar2[0xd];
      }
    }
  }
  if (pbVar2 != (byte *)0x0) {
    operator_delete(pbVar2);
  }
  return iVar4;
}


