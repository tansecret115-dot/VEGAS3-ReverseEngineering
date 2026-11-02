/* Module: vegas30k.dll
   Function: FUN_011bc1d0
   Address: 011bc1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_011bc1d0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x2d4) < *(uint *)(param_1 + 0x2dc)) {
    *(float *)(*(int *)(param_1 + 0x2d0) + 4) = (float)param_3 * _DAT_011ebab8;
    *(undefined4 *)(*(int *)(param_1 + 0x2d0) + 8) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x2d0) + 0xc) = 0;
    iVar1 = *(int *)(param_1 + 0x2d0);
    *(undefined4 *)(iVar1 + 0x20) = param_2;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x2d0) + 0x28) = 0;
    iVar1 = *(int *)(*(int *)(param_1 + 0x2d0) + 0x30);
    *(int *)(param_1 + 0x2d0) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_1 + 0x2c8);
    }
    *(int *)(param_1 + 0x2d4) = *(int *)(param_1 + 0x2d4) + 1;
    *(int *)(param_1 + 0x2d8) = *(int *)(param_1 + 0x2d8) + 1;
  }
  return 0;
}


