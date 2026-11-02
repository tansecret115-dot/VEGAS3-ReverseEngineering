/* Module: vfplugs.dll
   Function: FUN_00419fd0
   Address: 00419fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00419fd0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  float local_30 [4];
  undefined4 local_20 [8];
  
  if ((param_2 != 0) && (param_1 != (undefined4 *)0x0)) {
    puVar2 = local_20;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)(param_2 + 0x148) = local_20[0];
    *(undefined4 *)(param_2 + 0x14c) = local_20[1];
    *(undefined4 *)(param_2 + 0x150) = local_20[2];
    *(undefined4 *)(param_2 + 0x154) = local_20[3];
    FUN_004507f0(local_30,(int)local_20);
    FUN_00419f50(local_30,param_2,param_3);
    return 1;
  }
  return 0;
}


