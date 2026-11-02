/* Module: vegas30k.dll
   Function: FUN_011b4a30
   Address: 011b4a30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011b4a30(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x34))(*(int **)(param_1 + 0x10));
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 0x248) = 0;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffff7;
    *(undefined4 *)(param_1 + 0x24c) = 0;
    (**(code **)(param_1 + 0x14))
              (param_1,5,*(undefined4 *)(param_1 + 0x18),0xffffffff,0,0,0,0,0,0,0);
  }
  return;
}


