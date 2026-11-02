/* Module: vegas30k.dll
   Function: FUN_0119d130
   Address: 0119d130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0119d130(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(param_1 + 0x6b8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6bc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  *(undefined4 *)(param_1 + 0x8bc) = 0;
  if (-1 < param_3) {
    uVar4 = ftol();
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    *(undefined8 *)(param_1 + 0x8a0) = uVar4;
    *(undefined4 *)(param_1 + 0x540) = 0;
    *(undefined4 *)(param_1 + 0x530) = *(undefined4 *)(param_1 + 0x8a0);
    *(undefined4 *)(param_1 + 0x534) = uVar3;
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x530);
    *(undefined4 *)(param_1 + 0x7c) = uVar3;
    *(undefined4 *)(param_1 + 0x544) = 0;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar1 = *(int *)(param_1 + 0x614);
    if (*(int *)(param_1 + 0x6a4) != 0) {
      iVar1 = iVar1 + -1;
    }
    iVar2 = *(int *)(param_1 + 0x618) + 1;
    *(int *)(param_1 + 0x618) = iVar2;
    if (((*(uint *)(param_1 + 0x20) & 0x200) == 0) && (iVar2 == iVar1)) {
      *(undefined4 *)(param_1 + 0x824) = 0;
      ResetEvent(*(HANDLE *)(param_1 + 0x820));
      FUN_0119ad40(*(undefined4 *)(param_1 + 0x820));
      *(undefined4 *)(param_1 + 0x8b0) = 0;
      FUN_011af200();
      return 0;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x618) + 1;
    *(int *)(param_1 + 0x618) = iVar1;
    if (((*(uint *)(param_1 + 0x20) & 0x200) == 0) && (iVar1 == *(int *)(param_1 + 0x614))) {
      *(undefined4 *)(param_1 + 0x824) = 0;
      ResetEvent(*(HANDLE *)(param_1 + 0x820));
      *(undefined4 *)(param_1 + 0x8b0) = 0;
    }
  }
  return 0;
}


