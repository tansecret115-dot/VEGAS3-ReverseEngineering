/* Module: vegas30k.dll
   Function: FUN_0100e640
   Address: 0100e640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_0100e640(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 1;
  *puVar1 = &PTR_LAB_011db558;
  param_1[6] = param_3;
  param_1[7] = param_3;
  param_1[0x13] = param_4;
  param_1[0x14] = param_4;
  param_1[2] = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR_LAB_011db518;
  *puVar1 = &PTR_LAB_011db50c;
  if (param_2 == 0) {
    param_2 = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar1;
  }
  param_1[3] = param_2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
  return param_1;
}


