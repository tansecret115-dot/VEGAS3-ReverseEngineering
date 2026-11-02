/* Module: rmto3260.dll
   Function: FUN_662c5360
   Address: 662c5360
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c5360(int param_1,short *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar2 = (**(code **)(**(int **)(param_1 + 0x18) + 0x24))();
  pbVar3 = operator_new(4);
  if (pbVar3 == (byte *)0x0) {
    iVar5 = -0x7ff8fff2;
  }
  if (-1 < iVar5) {
    iVar4 = (**(code **)(**(int **)(param_1 + 0x18) + 0x28))(pbVar3,4);
    if (iVar4 != 4) {
      iVar5 = -0x7ffbff7f;
    }
    if (-1 < iVar5) {
      if (pbVar3 == (byte *)0x0) goto LAB_662c53e8;
      bVar1 = *pbVar3;
      *param_2 = (ushort)bVar1 << 8;
      *param_2 = CONCAT11(bVar1,pbVar3[1]);
      param_2[1] = (ushort)pbVar3[2] << 8;
      param_2[1] = param_2[1] | (ushort)pbVar3[3];
    }
  }
  if (pbVar3 != (byte *)0x0) {
    operator_delete(pbVar3);
  }
LAB_662c53e8:
  (**(code **)(**(int **)(param_1 + 0x18) + 0x20))(uVar2,0);
  return iVar5;
}


