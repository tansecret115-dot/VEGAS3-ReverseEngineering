/* Module: vidcap30.exe
   Function: FUN_004d01d0
   Address: 004d01d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004d01d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = _SfList_Sort_12(*(int *)(param_1 + 0xc),param_2,&LAB_004d01a0);
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  return uVar1;
}


