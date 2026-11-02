/* Module: vegas30.exe
   Function: FUN_00479980
   Address: 00479980
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00479980(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x54) + 0x20);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
    uVar3 = puVar1[2];
    _SfList_DeleteList_16(*(undefined4 *)(param_2 + 0x30),0,0xffffffff,0);
    _SfList_InsertList_16(*(undefined4 *)(param_2 + 0x30),0,uVar3,uVar2);
  }
  return;
}


