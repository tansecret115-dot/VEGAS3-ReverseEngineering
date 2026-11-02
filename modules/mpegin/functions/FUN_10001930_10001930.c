/* Module: mpegin.dll
   Function: FUN_10001930
   Address: 10001930
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10001930(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_10007d70(param_1,&DAT_10018050);
    FUN_10007d70(param_1,(byte *)s_Searching_for_audio_samples_____10018030);
  }
  iVar1 = *(int *)(param_1 + 0x12e54);
  FUN_10005520((int *)(iVar1 + 0x200),*(uint *)(iVar1 + 0xf8),*(int *)(iVar1 + 0xfc),0);
  *(undefined4 *)(param_1 + 0x4d24) = 0;
  *(undefined4 *)(param_1 + 0x4d28) = 0;
  iVar1 = FUN_10004070(param_1);
  if (iVar1 == 0) {
    *(double *)(*(int *)(param_1 + 0x12e54) + 0xe0) =
         _DAT_10016108 / (double)*(uint *)(param_1 + 0x8c);
    *(double *)(*(int *)(param_1 + 0x12e54) + 0xe8) =
         (double)*(int *)(param_1 + 0xcb0) * *(double *)(*(int *)(param_1 + 0x12e54) + 0xe0);
    iVar1 = *(int *)(param_1 + 0x12e54);
    *(undefined4 *)(iVar1 + 0x100) = *(undefined4 *)(iVar1 + 0x248);
    *(undefined4 *)(iVar1 + 0x104) = *(undefined4 *)(iVar1 + 0x24c);
    iVar1 = *(int *)(param_1 + 0x12e54);
    uVar2 = __alldiv(*(uint *)(iVar1 + 0x248) - *(uint *)(iVar1 + 0xf8),
                     (*(int *)(iVar1 + 0x24c) - *(int *)(iVar1 + 0xfc)) -
                     (uint)(*(uint *)(iVar1 + 0x248) < *(uint *)(iVar1 + 0xf8)),
                     *(uint *)(param_1 + 0xcac),(int)*(uint *)(param_1 + 0xcac) >> 0x1f);
    *(undefined8 *)(param_1 + 0x4d2c) = uVar2;
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0xcb0) * *(int *)(param_1 + 0x4d2c);
    FUN_1000dfdc((double)*(longlong *)(param_1 + 0x4d2c) * *(double *)(iVar1 + 0xe8));
    lVar3 = __ftol();
    *(longlong *)(param_1 + 0x4d2c) = lVar3;
  }
  return;
}


