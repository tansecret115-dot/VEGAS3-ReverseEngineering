/* Module: vegas30k.dll
   Function: FUN_010b00a0
   Address: 010b00a0
   Source: Ghidra pseudocode (Stage 10 batch) */


char FUN_010b00a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if ((param_2 < iVar1) || (iVar1 = *(int *)(param_1 + 0x50), iVar1 < param_2)) {
    param_2 = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if ((param_3 < *(int *)(param_1 + 0x4c)) ||
     (iVar1 = *(int *)(param_1 + 0x54), *(int *)(param_1 + 0x54) < param_3)) {
    param_3 = iVar1;
  }
  if (param_2 < *(int *)(param_1 + 0xa8)) {
    if ((param_3 < *(int *)(param_1 + 0xac)) && ((*(byte *)(param_1 + 0x98) & 1) != 0)) {
      return '\t';
    }
    if ((*(int *)(param_1 + 0xb4) < param_3) && ((*(byte *)(param_1 + 0x98) & 0x40) != 0)) {
      return '\v';
    }
    return ((*(int *)(param_1 + 200) <= param_2) - 1U & 4) + 1;
  }
  if (param_2 <= *(int *)(param_1 + 0xb0)) {
    if (param_3 < *(int *)(param_1 + 0xac)) {
      return ((*(int *)(param_1 + 0xcc) <= param_3) - 1U & 4) + 3;
    }
    if (*(int *)(param_1 + 0xb4) < param_3) {
      return ((param_3 <= *(int *)(param_1 + 0xd4)) - 1U & 4) + 4;
    }
    return '\0';
  }
  if ((param_3 < *(int *)(param_1 + 0xac)) && ((*(byte *)(param_1 + 0x98) & 4) != 0)) {
    return '\n';
  }
  if ((*(int *)(param_1 + 0xb4) < param_3) && ((*(byte *)(param_1 + 0x98) & 0x10) != 0)) {
    return '\f';
  }
  return ((param_2 <= *(int *)(param_1 + 0xd0)) - 1U & 4) + 2;
}


