/* Module: sfcdi.dll
   Function: FUN_5bf163c0
   Address: 5bf163c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5bf163c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[0x778] = 0xffffffff;
  param_1[0x779] = 0xffffffff;
  param_1[1] = 1;
  *param_1 = &PTR_LAB_5bf561e4;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar2 = param_1 + 0xc;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x14;
  for (iVar1 = 0x764; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)(param_1 + 0x780) = 0;
  *(undefined2 *)(param_1 + 0x77c) = 1;
  *(undefined2 *)((int)param_1 + 0x1df2) = 2;
  param_1[0x77d] = 0xac44;
  *(undefined2 *)((int)param_1 + 0x1dfe) = 0x10;
  *(undefined2 *)(param_1 + 0x77f) = 4;
  param_1[0x77e] = 0x2b110;
  return param_1;
}


