/* Module: vidcap30.exe
   Function: FUN_0040dd80
   Address: 0040dd80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040dd80(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = _SfList_FindSpecificItemRange_16(*(undefined4 *)(param_1 + 0x88),0,0xffffffff,param_2);
    if (-1 < iVar1) {
      _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x88),iVar1,1,0);
      FUN_0040dbf0(param_1,param_2);
      FUN_0040d120(param_1,0,0,1);
    }
  }
  return;
}


