/* Module: vegas30.exe
   Function: FUN_0049d000
   Address: 0049d000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0049d000(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0xcd0);
  puVar2 = *(undefined4 **)(param_1 + 0xbc8);
  iVar4 = _SfList_FindSpecificItemRange_16(uVar1,0,0xffffffff,param_2);
  if (-1 < iVar4) {
    _SfList_DeleteList_16(uVar1,iVar4,1,0);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) & 0xffffffef;
    puVar3 = (uint *)*puVar2;
    *puVar3 = *puVar3 | 0x80;
    return;
  }
  puVar3 = (uint *)*puVar2;
  *puVar3 = *puVar3 | 0x80;
  return;
}


