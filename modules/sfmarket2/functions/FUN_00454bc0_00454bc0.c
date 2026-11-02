/* Module: sfmarket2.dll
   Function: FUN_00454bc0
   Address: 00454bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00454bc0(int param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x114) & 0x20) == 0) {
    if ((*(uint *)(param_1 + 100) & 0x800) != 0) {
      return;
    }
  }
  else if ((*(uint *)(param_1 + 100) & 0x300) == 0x300) {
    return;
  }
  uVar1 = FUN_004451c0(*(uint *)(param_1 + 0x108),param_2,param_3);
  *(uint *)(param_1 + 0x108) = uVar1;
  return;
}


