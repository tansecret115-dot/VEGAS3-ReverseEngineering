/* Module: vegas30.exe
   Function: FUN_00454940
   Address: 00454940
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00454940(int param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (int)(*param_2 + (*param_2 >> 0x1f & 0x1ffU)) >> 9;
  uVar1 = (*(int *)(param_1 + 0xbc4) -
          ((int)(*(int *)(param_1 + 0xbac) + (*(int *)(param_1 + 0xbac) >> 0x1f & 0x1ffU)) >> 9)) +
          1;
  uVar1 = uVar1 & ((int)uVar1 < 0) - 1;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if ((int)uVar1 < (int)uVar2) {
    uVar2 = uVar1;
  }
  *param_2 = *(int *)(param_1 + 0xbc0) << 9;
  *param_3 = 0x200;
  return uVar2;
}


