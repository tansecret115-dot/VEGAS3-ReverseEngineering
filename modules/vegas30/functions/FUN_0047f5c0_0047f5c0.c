/* Module: vegas30.exe
   Function: FUN_0047f5c0
   Address: 0047f5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0047f5c0(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  uint *puVar2;
  
  if (param_2 == 0) {
    return 1;
  }
  if (param_5 != param_4) {
    *(int *)(param_2 + 4) = param_5 - param_4;
  }
  iVar1 = param_2 + param_4 * 0x18;
  if ((*(int *)(param_2 + 8 + param_4 * 0x18) == 0) || (param_5 != param_4)) {
    *(int *)(iVar1 + 0xc) = param_5;
  }
  *(undefined4 *)(iVar1 + 8) = param_3;
  *(undefined4 *)(iVar1 + 0x10) = param_6;
  *(undefined4 *)(iVar1 + 0x14) = param_7;
  puVar2 = (uint *)(param_2 + (param_4 * 3 + 3) * 8);
  *puVar2 = *puVar2 | (uint)(param_5 == param_4);
  return 0;
}


