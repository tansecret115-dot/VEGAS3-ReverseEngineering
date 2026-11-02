/* Module: stl2plg.dll
   Function: FUN_00418a80
   Address: 00418a80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00418a80(int param_1,byte *param_2,uint param_3)

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
  uVar1 = FUN_0044fd70(*(uint *)(param_1 + 0x108),param_2,param_3);
  *(uint *)(param_1 + 0x108) = uVar1;
  return;
}


