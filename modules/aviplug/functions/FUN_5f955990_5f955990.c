/* Module: aviplug.dll
   Function: FUN_5f955990
   Address: 5f955990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f955990(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    return 0xfffffffa;
  }
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3);
  iVar2 = (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3,&stack0xfffffffc);
  if ((iVar1 == 0) && (iVar2 != 0)) {
    param_1[7] = iVar2;
    param_1[0xb] = (uint)*(ushort *)(param_2 + 0xe);
    param_1[8] = *(int *)(param_2 + 4);
    param_1[9] = *(int *)(param_2 + 8);
    param_1[10] = *(int *)(param_2 + 0x10);
    param_1[0xc] = 0;
    param_1[0x10] = (uint)*(ushort *)(param_3 + 0xe);
    param_1[0xd] = *(int *)(param_3 + 4);
    param_1[0xe] = *(int *)(param_3 + 8);
    param_1[0xf] = *(int *)(param_3 + 0x10);
    uVar3 = (uint)*(ushort *)(param_3 + 0xe) * *(int *)(param_3 + 4) + 0x1f;
    param_1[0x11] = -((int)((uVar3 & 0xffffffe0) + ((int)uVar3 >> 0x1f & 7U)) >> 3);
    return 0;
  }
  return 0xfffffffe;
}


