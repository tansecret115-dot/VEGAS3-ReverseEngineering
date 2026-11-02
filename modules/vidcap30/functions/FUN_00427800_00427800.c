/* Module: vidcap30.exe
   Function: FUN_00427800
   Address: 00427800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00427800(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_004165b0(0x90);
  if (iVar1 == 0) {
    return 0x8007000e;
  }
  *(undefined1 **)(iVar1 + 0x1c) = &LAB_004278d0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) & 0xffffffdf | 0x12;
  *(undefined1 **)(iVar1 + 0x24) = &LAB_00428870;
  *(int *)(iVar1 + 0x2c) = param_1;
  uVar2 = 10;
  if ((*(uint *)(param_1 + 0x14c) & 0x20) == 0) {
    uVar2 = 0xc;
  }
  uVar3 = __allmul(uVar2,0,param_2,param_3);
  *(int *)(iVar1 + 0x30) = (int)uVar3;
  *(undefined4 *)(iVar1 + 0x38) = param_2;
  *(int *)(iVar1 + 0x34) = (int)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)(iVar1 + 0x3c) = param_3;
  *(undefined4 *)(iVar1 + 0x88) = 1;
  if ((((*(uint *)(param_1 + 0x14c) & 0x400) != 0) && (*(int *)(param_1 + 0x858) == 0)) ||
     ((*(uint *)(param_1 + 0x14c) & 0x800) != 0)) {
    *(undefined4 *)(iVar1 + 0x88) = 0;
  }
  uVar2 = FUN_004169a0(iVar1);
  return uVar2;
}


