/* Module: vegas30.exe
   Function: FUN_005c8a20
   Address: 005c8a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005c8a20(int param_1)

{
  *(uint *)**(undefined4 **)(param_1 + 8) = *(uint *)**(undefined4 **)(param_1 + 8) | 0x80000;
  _SfList_Sort_12(*(undefined4 *)(param_1 + 0x24),0,&LAB_005c8a50);
  return;
}


