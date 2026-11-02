/* Module: rmto3260.dll
   Function: FUN_662cff20
   Address: 662cff20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662cff20(void *this,uint *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int local_8;
  
  iVar5 = 0;
  local_8 = 0;
  uVar2 = (**(code **)(**(int **)((int)this + 0x24) + 0x24))();
  pbVar3 = operator_new(10);
  if (pbVar3 == (byte *)0x0) {
    iVar5 = -0x7ff8fff2;
    local_8 = -0x7ff8fff2;
  }
  if (-1 < iVar5) {
    uVar4 = (**(code **)(**(int **)((int)this + 0x24) + 0x28))(pbVar3,10);
    if (uVar4 < 10) {
      iVar5 = -0x7ffbff7f;
      local_8 = -0x7ffbff7f;
    }
    if (-1 < iVar5) {
      if (pbVar3 == (byte *)0x0) goto LAB_662cfff8;
      bVar1 = *pbVar3;
      *param_1 = (uint)bVar1 << 0x18;
      uVar4 = (uint)pbVar3[1] << 0x10 | (uint)bVar1 << 0x18;
      *param_1 = uVar4;
      uVar4 = uVar4 | (uint)pbVar3[2] << 8;
      *param_1 = uVar4;
      *param_1 = uVar4 | pbVar3[3];
      param_1[1] = (uint)pbVar3[4] << 0x18;
      uVar4 = param_1[1] | (uint)pbVar3[5] << 0x10;
      param_1[1] = uVar4;
      uVar4 = uVar4 | (uint)pbVar3[6] << 8;
      param_1[1] = uVar4;
      param_1[1] = uVar4 | pbVar3[7];
      *(ushort *)(param_1 + 2) = (ushort)pbVar3[8] << 8;
      *(ushort *)(param_1 + 2) = (ushort)param_1[2] | (ushort)pbVar3[9];
      iVar5 = local_8;
    }
  }
  if (pbVar3 != (byte *)0x0) {
    operator_delete(pbVar3);
  }
LAB_662cfff8:
  (**(code **)(**(int **)((int)this + 0x24) + 0x20))(uVar2,0);
  return iVar5;
}


