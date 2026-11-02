/* Module: vegas30.exe
   Function: FUN_005628b0
   Address: 005628b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005628b0(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1[0x5c];
  param_1[0x5c] = uVar1 + 1;
  if (((uVar1 + 1 == 1) && ((*param_1 & 0x100) == 0)) && (param_1[0x5a] == 0)) {
    iVar2 = (**(code **)(*(int *)param_1[0x46] + 0x1c))((int *)param_1[0x46],param_2);
    *param_1 = (uint)(iVar2 == 0) << 8 | *param_1 & 0xfffffeff;
    param_1[0x5d] = param_1[0x5d] + 1;
    if (iVar2 < 0) {
      param_1[0x5b] = 1;
    }
  }
  param_1[0x5c] = param_1[0x5c] - 1;
  return;
}


