/* Module: rmto3260.dll
   Function: FUN_662c4f90
   Address: 662c4f90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c4f90(int param_1,uint *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  iVar4 = 0;
  pbVar2 = operator_new(0x12);
  if (pbVar2 == (byte *)0x0) {
    iVar4 = -0x7ff8fff2;
  }
  bVar6 = iVar4 < 0;
  if (!bVar6) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 0x28))(pbVar2,0x12);
    if (iVar3 != 0x12) {
      iVar4 = -0x7ffbff7f;
    }
    bVar6 = iVar4 < 0;
  }
  if ((!bVar6) && (pbVar2 != (byte *)0x0)) {
    bVar1 = *pbVar2;
    *param_2 = (uint)bVar1 << 0x18;
    *param_2 = (uint)pbVar2[1] << 0x10 | (uint)bVar1 << 0x18;
    uVar5 = *param_2 | (uint)pbVar2[2] << 8;
    *param_2 = uVar5;
    *param_2 = uVar5 | pbVar2[3];
    param_2[1] = (uint)pbVar2[4] << 0x18;
    uVar5 = param_2[1] | (uint)pbVar2[5] << 0x10;
    param_2[1] = uVar5;
    uVar5 = uVar5 | (uint)pbVar2[6] << 8;
    param_2[1] = uVar5;
    param_2[1] = uVar5 | pbVar2[7];
    *(ushort *)(param_2 + 2) = (ushort)pbVar2[8] << 8;
    *(ushort *)(param_2 + 2) = (ushort)param_2[2] | (ushort)pbVar2[9];
    if ((short)param_2[2] == 0) {
      *(uint *)((int)param_2 + 10) = (uint)pbVar2[10] << 0x18;
      uVar5 = *(uint *)((int)param_2 + 10) | (uint)pbVar2[0xb] << 0x10;
      *(uint *)((int)param_2 + 10) = uVar5;
      uVar5 = uVar5 | (uint)pbVar2[0xc] << 8;
      *(uint *)((int)param_2 + 10) = uVar5;
      *(uint *)((int)param_2 + 10) = uVar5 | pbVar2[0xd];
      *(uint *)((int)param_2 + 0xe) = (uint)pbVar2[0xe] << 0x18;
      uVar5 = *(uint *)((int)param_2 + 0xe) | (uint)pbVar2[0xf] << 0x10;
      *(uint *)((int)param_2 + 0xe) = uVar5;
      uVar5 = uVar5 | (uint)pbVar2[0x10] << 8;
      *(uint *)((int)param_2 + 0xe) = uVar5;
      *(uint *)((int)param_2 + 0xe) = uVar5 | pbVar2[0x11];
    }
  }
  if ((-1 < iVar4) && (*param_2 != 0x44415441)) {
    iVar4 = -0x7ffbff7f;
  }
  if (pbVar2 != (byte *)0x0) {
    operator_delete(pbVar2);
  }
  return iVar4;
}


