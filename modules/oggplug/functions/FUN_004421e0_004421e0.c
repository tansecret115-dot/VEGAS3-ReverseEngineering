/* Module: oggplug.dll
   Function: FUN_004421e0
   Address: 004421e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_004421e0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*param_1 < param_1[4]) {
    uVar2 = *(byte *)param_1[3] >> (*(byte *)(param_1 + 1) & 0x1f) & 1;
  }
  else {
    uVar2 = 0xffffffff;
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  if (7 < iVar1 + 1) {
    param_1[1] = 0;
    param_1[3] = param_1[3] + 1;
    *param_1 = *param_1 + 1;
  }
  return uVar2;
}


