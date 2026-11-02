/* Module: vegas30.exe
   Function: FUN_005c7de0
   Address: 005c7de0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005c7de0(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 != (*(uint *)(param_1 + 0x10) >> 0x19 & 7)) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 != 0) {
      FUN_005b83b0(*(undefined4 *)(iVar1 + 8),1);
    }
    *(uint *)(param_1 + 0x10) = (param_2 & 7) << 0x19 | *(uint *)(param_1 + 0x10) & 0xf1ffffff;
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x200000;
      *(uint *)**(undefined4 **)(iVar1 + 8) = *(uint *)**(undefined4 **)(iVar1 + 8) | 0x2000;
      *(uint *)**(undefined4 **)(iVar1 + 8) = *(uint *)**(undefined4 **)(iVar1 + 8) | 0x80;
      *(uint *)**(undefined4 **)(iVar1 + 8) = *(uint *)**(undefined4 **)(iVar1 + 8) | 0x100;
      FUN_005b84d0(*(undefined4 *)(iVar1 + 8),1);
    }
    return 0;
  }
  return 1;
}


