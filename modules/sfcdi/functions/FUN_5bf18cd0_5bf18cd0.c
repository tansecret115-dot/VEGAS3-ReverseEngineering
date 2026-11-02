/* Module: sfcdi.dll
   Function: FUN_5bf18cd0
   Address: 5bf18cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf18cd0(uint *param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_4 * 0x134;
  param_1[1] = *(uint *)(&DAT_5bf64860 + iVar3);
  param_1[2] = *(uint *)(&DAT_5bf64864 + iVar3);
  param_1[3] = *(uint *)(&DAT_5bf6486c + iVar3);
  uVar1 = *(uint *)(&DAT_5bf64868 + iVar3);
  param_1[4] = 0x14;
  *param_1 = uVar1 & 0xfffffffb;
  uVar1 = param_1[2];
  param_1[5] = *(uint *)(&DAT_5bf64870 + iVar3);
  param_1[6] = 0x2274;
  param_1[7] = 0;
  uVar2 = param_1[1];
  *param_2 = uVar1 + uVar2;
  *param_2 = (uint)*(ushort *)(param_3 + 0xc) * (uVar1 + uVar2) * 0x24c;
  return;
}


