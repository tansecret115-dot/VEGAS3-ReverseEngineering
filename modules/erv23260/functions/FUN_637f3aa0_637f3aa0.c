/* Module: erv23260.dll
   Function: FUN_637f3aa0
   Address: 637f3aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637f3aa0(void *this,int param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0xe0) = 7;
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0x80) && (*(int *)(param_1 + 8) == 0x60)) {
    *(undefined4 *)((int)this + 0x108) = 1;
    return;
  }
  if ((iVar1 == 0xb0) && (*(int *)(param_1 + 8) == 0x90)) {
    *(undefined4 *)((int)this + 0x108) = 2;
    return;
  }
  if ((iVar1 == 0x160) && (*(int *)(param_1 + 8) == 0x120)) {
    *(undefined4 *)((int)this + 0x108) = 3;
    return;
  }
  if ((iVar1 == 0x2c0) && (*(int *)(param_1 + 8) == 0x240)) {
    *(undefined4 *)((int)this + 0x108) = 4;
    return;
  }
  if ((iVar1 == 0x580) && (*(int *)(param_1 + 8) == 0x480)) {
    *(undefined4 *)((int)this + 0x108) = 5;
    return;
  }
  if ((iVar1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    *(undefined4 *)((int)this + 0x108) = 6;
    *(undefined4 *)((int)this + 0x15c) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)((int)this + 0x160) = *(undefined4 *)(param_1 + 8);
    *(undefined1 *)((int)this + 0x158) = 1;
    return;
  }
  *(undefined4 *)((int)this + 0x108) = 0;
  return;
}


