/* Module: mcplugrw.dll
   Function: FUN_0044c550
   Address: 0044c550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044c550(int param_1,byte *param_2,uint param_3)

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
  uVar1 = FUN_0044dfb0(*(uint *)(param_1 + 0x108),param_2,param_3);
  *(uint *)(param_1 + 0x108) = uVar1;
  return;
}


