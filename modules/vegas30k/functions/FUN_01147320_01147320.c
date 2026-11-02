/* Module: vegas30k.dll
   Function: FUN_01147320
   Address: 01147320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01147320(int param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_EDI;
  uint *puVar2;
  uint local_20 [3];
  uint *local_14;
  
  if ((param_1 == 0) || (param_2 == (uint *)0x0)) {
    return 0;
  }
  puVar2 = local_20;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_20[1] = *(undefined4 *)(param_1 + 4);
  local_20[0] = ((byte)~(byte)*(undefined4 *)(param_1 + 0x4a4) & 4 | 0x48) >> 2;
  local_20[2] = param_3;
  local_14 = param_2;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),local_20);
  if (-1 < iVar1) {
    return local_20[2];
  }
  if ((unaff_EDI == 0x13) && ((*param_2 & 0x10000) != 0)) {
    _SfList_FindItemRange_20(local_20[0],0,0xffffffff,param_2[3],&LAB_01131ad0);
  }
  return 1;
}


