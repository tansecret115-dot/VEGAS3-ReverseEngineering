/* Module: vidcap30.exe
   Function: FUN_005551c0
   Address: 005551c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005551c0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_1 + 0x18) = param_2;
  *(uint *)(param_1 + 0x1c) = param_3;
  if ((uVar1 < param_3) || ((uVar1 <= param_3 && (*(uint *)(param_1 + 0x28) <= param_2)))) {
    param_3 = uVar1;
    param_2 = *(uint *)(param_1 + 0x28);
  }
  *(uint *)(param_1 + 0x28) = param_2;
  *(uint *)(param_1 + 0x2c) = param_3;
  return;
}


