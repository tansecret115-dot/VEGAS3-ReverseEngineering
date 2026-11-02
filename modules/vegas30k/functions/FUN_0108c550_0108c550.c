/* Module: vegas30k.dll
   Function: FUN_0108c550
   Address: 0108c550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0108c550(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_30 [16];
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
    _SFHSL_To_SFDIBPIXEL_8(local_30,local_20);
    FUN_0108c4d0(local_30,param_2,param_3);
    return 1;
  }
  return 0;
}


