/* Module: vidcap30.exe
   Function: FUN_00459d80
   Address: 00459d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00459d80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0044c6e0(*(undefined4 *)(param_1 + 0x28));
  *(int *)(param_1 + 0x2c) = iVar2;
  lstrcpynA((LPSTR)(param_1 + 0x30),*(LPCSTR *)(iVar2 + 0x10),0x80);
  *(undefined1 *)(param_1 + 0xaf) = 0;
  lstrcpynA((LPSTR)(param_1 + 0xb0),*(LPCSTR *)(*(int *)(*(int *)(param_1 + 0x2c) + 4) + 0xc),0x80);
  *(undefined1 *)(param_1 + 0x12f) = 0;
  lstrcpynA((LPSTR)(param_1 + 0x194),*(LPCSTR *)(*(int *)(param_1 + 0x2c) + 0x3c),500);
  *(undefined1 *)(param_1 + 0x387) = 0;
  lstrcpynA((LPSTR)(param_1 + 0x130),*(LPCSTR *)(*(int *)(param_1 + 0x2c) + 0x18),100);
  *(undefined1 *)(param_1 + 0x193) = 0;
  _SfGetPathNameFromFilePath_12
            (*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x14),param_1 + 0x388,0x104);
  *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x30);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x34);
  *(undefined4 *)(param_1 + 0x498) = 0;
  *(undefined4 *)(param_1 + 0x494) = uVar1;
  _SfLoadString_16(DAT_005ba2a0,0xc521,param_1 + 4,0x20);
  return 1;
}


