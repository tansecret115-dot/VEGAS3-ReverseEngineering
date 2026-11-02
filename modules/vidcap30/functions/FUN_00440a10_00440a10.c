/* Module: vidcap30.exe
   Function: FUN_00440a10
   Address: 00440a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00440a10(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(int *)(param_2 + 8) != 0) {
    if (DAT_005bb7cc == 0) {
      *(undefined1 *)(param_2 + 0x2d8) = 0;
    }
    uVar1 = _SfList_AllocAndInsertItem_20
                      (*(undefined4 *)(param_1 + 0x1c64),param_2,1000,0xffffffff,0);
  }
  return uVar1;
}


