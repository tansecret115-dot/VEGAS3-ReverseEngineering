/* Module: vegas30.exe
   Function: FUN_0058ee50
   Address: 0058ee50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0058ee50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_0058ed50(param_1,0);
  iVar1 = _SfQueueRemove_8(param_1 + 0x3c,0);
  while (iVar1 != 0) {
    if (((param_2 == 0) || (param_2 == *(int *)(iVar1 + 0x18))) &&
       (*(int *)(*(int *)(iVar1 + 0x18) + 0x5c) == 0)) {
      if (*(int *)(iVar1 + 0xbc) != 0) {
        FUN_0058e0a0(iVar1);
      }
      puVar3 = (undefined4 *)(iVar1 + 0x14);
      for (iVar2 = 0x37; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      _SfQueueInsertHead_8(param_1 + 0x18,iVar1);
    }
    iVar1 = _SfQueueRemove_8(param_1 + 0x3c,0);
  }
  return;
}


