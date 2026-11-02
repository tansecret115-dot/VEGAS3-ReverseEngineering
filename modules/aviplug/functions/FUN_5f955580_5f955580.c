/* Module: aviplug.dll
   Function: FUN_5f955580
   Address: 5f955580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f955580(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_3 == 0) {
    return 0xfffffffa;
  }
  iVar4 = param_2;
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1,param_2,param_3);
  iVar2 = (**(code **)(*param_1 + 0x3c))(param_1,param_2,param_3,&stack0xfffffff8);
  if ((iVar1 == 0) && (iVar2 != 0)) {
    if (*(int *)(param_1[6] + 0x4738) == 0) {
      FUN_5f967330(param_1[6]);
    }
    if (*(int *)(param_1[6] + 0x4738) == 0) {
      return 0xfffffffd;
    }
    param_1[0x12] = iVar2;
    param_1[0x16] = (uint)*(ushort *)(param_2 + 0xe);
    param_1[0x13] = *(int *)(param_2 + 4);
    param_1[0x14] = *(int *)(param_2 + 8);
    param_1[0x15] = *(int *)(param_2 + 0x10);
    param_1[0x17] = iVar4;
    param_1[0x1b] = (uint)*(ushort *)(param_3 + 0xe);
    param_1[0x18] = *(int *)(param_3 + 4);
    param_1[0x19] = *(int *)(param_3 + 8);
    param_1[0x1a] = *(int *)(param_3 + 0x10);
    uVar3 = (uint)*(ushort *)(param_2 + 0xe) * *(int *)(param_2 + 4) + 0x1f;
    param_1[0x1c] = -((int)((uVar3 & 0xffffffe0) + ((int)uVar3 >> 0x1f & 7U)) >> 3);
    return 0;
  }
  return 0xfffffffe;
}


