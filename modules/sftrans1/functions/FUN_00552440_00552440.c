/* Module: sftrans1.dll
   Function: FUN_00552440
   Address: 00552440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00552440(undefined4 *param_1,undefined4 param_2)

{
  DWORD DVar1;
  
  FUN_00553ee0();
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[9] = 0;
  *param_1 = &PTR_FUN_0056f738;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[10] = 3;
  param_1[0xb] = 1;
  param_1[0xc] = 0x3f800000;
  SetRect((LPRECT)(param_1 + 0xd),-0x20000000,-0x20000000,0x1fffffff,0x1fffffff);
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x20] = 0;
  param_1[0x1e] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  DVar1 = timeGetTime();
  param_1[0x27] = DVar1;
  return param_1;
}


