/* Module: vegas30.exe
   Function: FUN_004584e0
   Address: 004584e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004584e0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_00452e00(param_1);
  *(undefined4 *)(param_1 + 0xb38) = *(undefined4 *)(param_1 + 0xb88);
  *(undefined4 *)(param_1 + 0xb3c) = *(undefined4 *)(param_1 + 0xb8c);
  *(undefined4 *)(param_1 + 0xb40) = *(undefined4 *)(param_1 + 0xb70);
  *(undefined4 *)(param_1 + 0xb44) = *(undefined4 *)(param_1 + 0xb74);
  *(undefined4 *)(param_1 + 0xb2c) = 0;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffffeb | 0xa2;
  if (*(int *)(param_1 + 0xab0) != 0) {
    (**(code **)(*(int *)(param_1 + 0xab0) + 0x14))(param_1,1);
  }
  if (-1 < param_3) {
    iVar2 = *(int *)(param_1 + 0xb8c);
    uVar1 = *(uint *)(param_1 + 0xb88);
    if ((iVar2 <= param_3) && ((iVar2 < param_3 || (uVar1 <= param_2)))) {
      iVar2 = *(int *)(param_1 + 0xb94) + iVar2 + (uint)CARRY4(*(uint *)(param_1 + 0xb90),uVar1);
      if ((param_3 < iVar2) ||
         ((param_3 <= iVar2 && (param_2 <= *(uint *)(param_1 + 0xb90) + uVar1)))) goto LAB_004585a0;
    }
    FUN_004543c0(param_1,param_2,param_3,*(undefined4 *)(param_1 + 0xb90),
                 *(undefined4 *)(param_1 + 0xb94),3);
  }
LAB_004585a0:
  uStack_8 = 8;
  uStack_4 = 1;
  FUN_00568d40(&uStack_8,8);
  return;
}


