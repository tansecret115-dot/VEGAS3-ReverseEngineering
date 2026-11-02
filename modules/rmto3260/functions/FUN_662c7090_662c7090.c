/* Module: rmto3260.dll
   Function: FUN_662c7090
   Address: 662c7090
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662c7090(void *this,undefined1 *param_1,undefined4 *param_2)

{
  *param_1 = (char)((uint)*(undefined4 *)this >> 0x18);
  param_1[1] = (char)((uint)*(undefined4 *)this >> 0x10);
  param_1[2] = (char)((uint)*(undefined4 *)this >> 8);
  param_1[3] = *(undefined1 *)this;
  param_1[4] = (char)((uint)*(undefined4 *)((int)this + 4) >> 0x18);
  param_1[5] = (char)((uint)*(undefined4 *)((int)this + 4) >> 0x10);
  param_1[6] = (char)((uint)*(undefined4 *)((int)this + 4) >> 8);
  param_1[7] = *(undefined1 *)((int)this + 4);
  param_1[8] = (char)((uint)*(undefined4 *)((int)this + 8) >> 0x18);
  param_1[9] = (char)((uint)*(undefined4 *)((int)this + 8) >> 0x10);
  param_1[10] = (char)((uint)*(undefined4 *)((int)this + 8) >> 8);
  param_1[0xb] = *(undefined1 *)((int)this + 8);
  param_1[0xc] = *(undefined1 *)((int)this + 0xd);
  param_1[0xd] = *(undefined1 *)((int)this + 0xc);
  param_1[0xe] = *(undefined1 *)((int)this + 0xf);
  param_1[0xf] = *(undefined1 *)((int)this + 0xe);
  param_1[0x10] = *(undefined1 *)((int)this + 0x11);
  param_1[0x11] = *(undefined1 *)((int)this + 0x10);
  param_1[0x12] = *(undefined1 *)((int)this + 0x13);
  param_1[0x13] = *(undefined1 *)((int)this + 0x12);
  param_1[0x14] = *(undefined1 *)((int)this + 0x15);
  param_1[0x15] = *(undefined1 *)((int)this + 0x14);
  param_1[0x16] = (char)((uint)*(undefined4 *)((int)this + 0x16) >> 0x18);
  param_1[0x17] = (char)((uint)*(undefined4 *)((int)this + 0x16) >> 0x10);
  param_1[0x18] = (char)((uint)*(undefined4 *)((int)this + 0x16) >> 8);
  param_1[0x19] = *(undefined1 *)((int)this + 0x16);
  *param_2 = 0x1a;
  return;
}


