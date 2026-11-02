/* Module: vidcap30.exe
   Function: FUN_00421670
   Address: 00421670
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00421670(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_00420f30(param_1,param_2,param_3,7);
  if (-1 < iVar1) {
    iVar1 = FUN_004216b0(param_3);
    if (-1 < iVar1) {
      *(undefined4 *)(param_3 + 0x160) = param_4;
      *(undefined4 *)(param_3 + 0x164) = param_5;
    }
  }
  return;
}


