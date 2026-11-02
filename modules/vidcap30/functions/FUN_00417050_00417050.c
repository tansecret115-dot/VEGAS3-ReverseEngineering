/* Module: vidcap30.exe
   Function: FUN_00417050
   Address: 00417050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00417050(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_004165b0(0x270);
  if (iVar1 == 0) {
    return 0x8007000e;
  }
  *(undefined1 **)(iVar1 + 0x1c) = &LAB_00417010;
  *(undefined4 *)(iVar1 + 0x20) = 0x90;
  *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 0x30;
  *(undefined4 *)(iVar1 + 0x28) = 4;
  puVar4 = (undefined4 *)(iVar1 + 0x30);
  for (iVar3 = 0x90; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar2 = FUN_004169a0(iVar1);
  return uVar2;
}


