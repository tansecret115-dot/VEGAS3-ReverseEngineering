/* Module: oggplug.dll
   Function: FUN_004368b0
   Address: 004368b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004368b0(int *param_1,uint param_2)

{
  size_t _Count;
  void *pvVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar3 = *(int *)(*(int *)(param_2 + 0x1c) + 0xe24);
  _Count = iVar2 * 4;
  param_1[1] = *(int *)(iVar3 + 8);
  fVar5 = (float10)1.4426950408889634 * (float10)*(float *)(iVar3 + 0x2c) * (float10)_DAT_0044d7b0;
  fVar4 = ROUND(fVar5);
  fVar5 = (float10)f2xm1(fVar5 - fVar4);
  fVar4 = (float10)fscale((float10)1 + fVar5,fVar4);
  param_1[3] = (int)(float)fVar4;
  pvVar1 = calloc(_Count,0x18);
  param_1[4] = (int)pvVar1;
  pvVar1 = calloc(_Count,4);
  param_1[5] = (int)pvVar1;
  *param_1 = iVar2;
  param_1[6] = 0x80;
  if (0 < (int)_Count) {
    iVar2 = 8;
    iVar3 = 0x30;
    param_2 = _Count + 3 >> 2;
    do {
      FUN_00436a90((uint *)(param_1[4] + -0x30 + iVar3),DAT_00452c64,DAT_00452ca4,
                   (undefined4 *)&DAT_00452ca8,(undefined4 *)&DAT_00452c68);
      FUN_00436a90((uint *)(param_1[4] + -0x18 + iVar3),DAT_00452c84,DAT_00452cc0,
                   (undefined4 *)&DAT_00452cc4,(undefined4 *)&DAT_00452c88);
      FUN_00436a90((uint *)(param_1[4] + iVar3),DAT_00452c84,DAT_00452cdc,
                   (undefined4 *)&DAT_00452ce0,(undefined4 *)&DAT_00452c88);
      FUN_00436a90((uint *)(param_1[4] + 0x18 + iVar3),DAT_00452c84,DAT_00452cf8,
                   (undefined4 *)&DAT_00452cfc,(undefined4 *)&DAT_00452c88);
      pvVar1 = calloc(param_1[6],4);
      *(void **)(iVar2 + -8 + param_1[5]) = pvVar1;
      pvVar1 = calloc(param_1[6],4);
      *(void **)(iVar2 + -4 + param_1[5]) = pvVar1;
      pvVar1 = calloc(param_1[6],4);
      *(void **)(iVar2 + param_1[5]) = pvVar1;
      pvVar1 = calloc(param_1[6],4);
      iVar3 = iVar3 + 0x60;
      *(void **)(iVar2 + 4 + param_1[5]) = pvVar1;
      iVar2 = iVar2 + 0x10;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}


