/* Module: erv13260.dll
   Function: FUN_635f6ce0
   Address: 635f6ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_635f6ce0(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  
  param_1[1] = 10000;
  iVar3 = ftol();
  param_1[4] = iVar3;
  iVar3 = *param_1;
  param_1[3] = 0x10003000;
  uVar1 = param_2[3];
  *(undefined1 *)(param_1 + 7) = 0x32;
  *(undefined1 *)((int)param_1 + 0x25) = 100;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *param_1 = 0x34bc;
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  fVar2 = (float)uVar1 * _DAT_636041c4;
  param_1[2] = (uint)(iVar3 * 10000) / 1000;
  param_1[5] = (int)fVar2;
  *(undefined4 *)((int)param_1 + 0x1d) = 1;
  *(undefined4 *)((int)param_1 + 0x2a) = 1;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = *param_2;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  *(undefined4 *)((int)param_1 + 0x42) = 0;
  *(undefined4 *)((int)param_1 + 0x32) = 0x41700000;
  *(undefined4 *)((int)param_1 + 0x36) = 0x42;
  return;
}


