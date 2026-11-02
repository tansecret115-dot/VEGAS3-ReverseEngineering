/* Module: sfpublish.dll
   Function: FUN_0040e150
   Address: 0040e150
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0040e150(void *this,int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x44) = 0xfefefefe;
  *(undefined4 *)((int)this + 0x20) = DAT_0043cb40;
  *(undefined4 *)((int)this + 0x24) = DAT_0043cb44;
  *(undefined4 *)((int)this + 0x28) = DAT_0043cb48;
  *(undefined4 *)((int)this + 0x2c) = DAT_0043cb4c;
  *(undefined4 *)((int)this + 0x30) = DAT_0043cb30;
  *(undefined4 *)((int)this + 0x34) = DAT_0043cb34;
  *(undefined4 *)((int)this + 0x38) = DAT_0043cb38;
  uVar1 = DAT_0043cb3c;
  *(undefined2 *)((int)this + 0x40) = 1;
  *(undefined2 *)((int)this + 0x42) = 0;
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(int **)((int)this + 0x60) = param_2;
  *(int *)((int)this + 0x5c) = param_1;
  *(undefined4 *)((int)this + 100) = param_3;
  *(undefined ***)this = &PTR_LAB_004360fc;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_004360dc;
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(*(int *)(param_1 + 8) + *param_2 * 4);
  return;
}


