/* Module: vegas30k.dll
   Function: FUN_01191570
   Address: 01191570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01191570(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  uVar1 = *(uint *)(param_1 + 0xc);
  if (((uVar1 & 1) != 0) && ((uVar1 & 2) != 0)) {
    *(uint *)(param_1 + 0xc) = uVar1 | 0x300;
    ResetEvent(*(HANDLE *)(param_1 + 0x24));
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x30))(*(int **)(param_1 + 0x3c));
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffd;
    (**(code **)(**(int **)(param_1 + 0x30) + 0x24))(*(int **)(param_1 + 0x30),0,0);
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffb;
    *(undefined1 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x1164) = 0;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    uVar2 = 0;
  }
  return uVar2;
}


