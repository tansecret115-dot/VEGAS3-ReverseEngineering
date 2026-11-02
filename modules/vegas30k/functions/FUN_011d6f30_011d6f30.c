/* Module: vegas30k.dll
   Function: FUN_011d6f30
   Address: 011d6f30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011d6f30(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  
  switch(param_2) {
  case 0x3c7:
    *(undefined4 *)(param_1 + 0x14) = 0x3c7;
    SetEvent(*(HANDLE *)(param_1 + 600));
    return;
  case 0x3c8:
    *(undefined4 *)(param_1 + 0x14) = 0x3c8;
    SetEvent(*(HANDLE *)(param_1 + 600));
    return;
  case 0x3c9:
    break;
  case 0x3ca:
    *(undefined4 *)(param_1 + 0x14) = 0x3c9;
    SetEvent(*(HANDLE *)(param_1 + 600));
  default:
    return;
  }
  bVar1 = 0;
  if (*(int *)(param_1 + 0x230) == param_3) {
    bVar1 = 1;
  }
  else {
    *(undefined4 *)(param_3 + 8) = 0;
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) & 0xfffffffe;
    if (*(int *)(param_1 + 0x244) != 0) {
      *(int *)(param_1 + 0x244) = *(int *)(param_1 + 0x244) + -1;
    }
  }
  if ((*(byte *)(param_1 + 8) & 4) == 0) {
    *(undefined4 *)(param_3 + 8) = 0;
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) & 0xfffffffe;
    SetEvent(*(HANDLE *)(param_1 + 0x26c));
    return;
  }
  *(uint *)(param_1 + 0x14) = (-(uint)bVar1 & 0xfffffc3a) + 0x3c9;
  SetEvent(*(HANDLE *)(param_1 + 600));
  return;
}


