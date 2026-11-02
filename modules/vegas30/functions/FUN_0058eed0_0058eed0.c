/* Module: vegas30.exe
   Function: FUN_0058eed0
   Address: 0058eed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0058eed0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = DAT_0065a070;
  if (DAT_0065a070 != 0) {
    iVar4 = DAT_0065a070 + 0x3c;
    while( true ) {
      iVar2 = _SfQueueFindAndRemove_12(iVar4,&LAB_0058ef30,param_1);
      if (iVar2 == 0) break;
      if (*(int *)(iVar2 + 0xbc) != 0) {
        FUN_0058e0a0(iVar2);
      }
      puVar5 = (undefined4 *)(iVar2 + 0x14);
      for (iVar3 = 0x37; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      _SfQueueInsertHead_8(iVar1 + 0x18,iVar2);
    }
  }
  return;
}


