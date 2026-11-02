/* Module: vidcap30.exe
   Function: FUN_0052ab50
   Address: 0052ab50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052ab50(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x114) & 0x20) == 0) {
    if ((*(uint *)(param_1 + 100) & 0x800) != 0) {
      return;
    }
  }
  else if ((*(uint *)(param_1 + 100) & 0x300) == 0x300) {
    return;
  }
  uVar1 = FUN_0054c220(*(undefined4 *)(param_1 + 0x108),param_2,param_3);
  *(undefined4 *)(param_1 + 0x108) = uVar1;
  return;
}


