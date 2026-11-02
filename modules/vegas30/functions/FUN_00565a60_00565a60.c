/* Module: vegas30.exe
   Function: FUN_00565a60
   Address: 00565a60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00565a60(undefined4 param_1,LPCSTR param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004e6c90(0x138);
  if (iVar1 == 0) {
    return 0x8007000e;
  }
  *(undefined1 **)(iVar1 + 0x20) = &LAB_005658d0;
  *(undefined4 *)(iVar1 + 0x2c) = 0x6e31;
  *(undefined1 **)(iVar1 + 0x28) = &LAB_00563c20;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xffffffdf | 0x12;
  *(undefined4 *)(iVar1 + 0x18) = 7;
  *(undefined4 *)(iVar1 + 0x30) = param_1;
  lstrcpynA((LPSTR)(iVar1 + 0x34),param_2,0x104);
  *(undefined1 *)(iVar1 + 0x137) = 0;
  uVar2 = FUN_004e7190(iVar1);
  return uVar2;
}


