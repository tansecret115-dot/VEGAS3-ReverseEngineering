/* Module: vegas30k.dll
   Function: FUN_011b49e0
   Address: 011b49e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011b49e0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x30))
                    (*(int **)(param_1 + 0x10),4,*(undefined4 *)(param_1 + 0x238),
                     *(undefined4 *)(param_1 + 0x23c),&LAB_011b5100,param_1);
  if (-1 < iVar1) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 8;
    (**(code **)(param_1 + 0x14))
              (param_1,4,*(undefined4 *)(param_1 + 0x18),0xffffffff,0,0,0,0,0,0,0);
  }
  return;
}


