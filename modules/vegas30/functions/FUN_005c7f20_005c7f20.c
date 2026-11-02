/* Module: vegas30.exe
   Function: FUN_005c7f20
   Address: 005c7f20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005c7f20(int param_1,uint param_2,double param_3)

{
  int iVar1;
  int iVar2;
  
  if ((*(float *)(param_1 + 100) == (float)param_3) &&
     ((*(uint *)(param_1 + 0x10) >> 9 & 1) == (uint)(param_2 != 0))) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    FUN_005b83b0(*(undefined4 *)(iVar1 + 8),1);
  }
  iVar2 = *(int *)(param_1 + 0x3c) + 1;
  *(uint *)(param_1 + 0x10) = (param_2 & 1) << 9 | *(uint *)(param_1 + 0x10) & 0xfffffdff;
  *(float *)(param_1 + 100) = (float)param_3;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(int *)(param_1 + 0x3c) = iVar2;
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x200000;
    *(uint *)**(undefined4 **)(iVar1 + 8) = *(uint *)**(undefined4 **)(iVar1 + 8) | 0x2000;
    *(uint *)**(undefined4 **)(iVar1 + 8) = *(uint *)**(undefined4 **)(iVar1 + 8) | 0x80;
    *(uint *)**(undefined4 **)(iVar1 + 8) = *(uint *)**(undefined4 **)(iVar1 + 8) | 0x100;
    FUN_005b84d0(*(undefined4 *)(iVar1 + 8),1);
  }
  return 0;
}


