/* Module: vegas30.exe
   Function: FUN_00536b50
   Address: 00536b50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00536b50(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004e6c90(0x30);
  if (iVar1 == 0) {
    return 0x8007000e;
  }
  *(undefined1 **)(iVar1 + 0x20) = &LAB_00536aa0;
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x12;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  uVar2 = FUN_004e7190(iVar1);
  return uVar2;
}


