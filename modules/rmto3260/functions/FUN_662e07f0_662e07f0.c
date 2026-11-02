/* Module: rmto3260.dll
   Function: FUN_662e07f0
   Address: 662e07f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662e07f0(void *this,undefined1 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = (**(code **)(*(int *)this + 0xc))();
  if (param_2 < uVar1) {
    uVar2 = 0x8007000e;
  }
  else {
    *param_1 = (char)((uint)*(undefined4 *)((int)this + 8) >> 0x18);
    param_1[1] = (char)((uint)*(undefined4 *)((int)this + 8) >> 0x10);
    param_1[2] = (char)((uint)*(undefined4 *)((int)this + 8) >> 8);
    param_1[3] = *(undefined1 *)((int)this + 8);
    param_1[4] = (char)((uint)*(undefined4 *)((int)this + 0xc) >> 0x18);
    param_1[5] = (char)((uint)*(undefined4 *)((int)this + 0xc) >> 0x10);
    param_1[6] = (char)((uint)*(undefined4 *)((int)this + 0xc) >> 8);
    param_1[7] = *(undefined1 *)((int)this + 0xc);
    param_1[8] = *(undefined1 *)((int)this + 0x11);
    param_1[9] = *(undefined1 *)((int)this + 0x10);
    if (*(short *)((int)this + 0x10) == 0) {
      param_1[10] = (char)((uint)*(undefined4 *)((int)this + 0x12) >> 0x18);
      param_1[0xb] = (char)((uint)*(undefined4 *)((int)this + 0x12) >> 0x10);
      param_1[0xc] = (char)((uint)*(undefined4 *)((int)this + 0x12) >> 8);
      param_1[0xd] = *(undefined1 *)((int)this + 0x12);
      param_1[0xe] = (char)((uint)*(undefined4 *)((int)this + 0x16) >> 0x18);
      param_1[0xf] = (char)((uint)*(undefined4 *)((int)this + 0x16) >> 0x10);
      param_1[0x10] = (char)((uint)*(undefined4 *)((int)this + 0x16) >> 8);
      param_1[0x11] = *(undefined1 *)((int)this + 0x16);
      param_1[0x12] = (char)((uint)*(undefined4 *)((int)this + 0x1a) >> 0x18);
      param_1[0x13] = (char)((uint)*(undefined4 *)((int)this + 0x1a) >> 0x10);
      param_1[0x14] = (char)((uint)*(undefined4 *)((int)this + 0x1a) >> 8);
      param_1[0x15] = *(undefined1 *)((int)this + 0x1a);
      param_1[0x16] = (char)((uint)*(undefined4 *)((int)this + 0x1e) >> 0x18);
      param_1[0x17] = (char)((uint)*(undefined4 *)((int)this + 0x1e) >> 0x10);
      param_1[0x18] = (char)((uint)*(undefined4 *)((int)this + 0x1e) >> 8);
      param_1[0x19] = *(undefined1 *)((int)this + 0x1e);
      param_1[0x1a] = (char)((uint)*(undefined4 *)((int)this + 0x22) >> 0x18);
      param_1[0x1b] = (char)((uint)*(undefined4 *)((int)this + 0x22) >> 0x10);
      param_1[0x1c] = (char)((uint)*(undefined4 *)((int)this + 0x22) >> 8);
      param_1[0x1d] = *(undefined1 *)((int)this + 0x22);
      param_1[0x1e] = (char)((uint)*(undefined4 *)((int)this + 0x26) >> 0x18);
      param_1[0x1f] = (char)((uint)*(undefined4 *)((int)this + 0x26) >> 0x10);
      param_1[0x20] = (char)((uint)*(undefined4 *)((int)this + 0x26) >> 8);
      param_1[0x21] = *(undefined1 *)((int)this + 0x26);
      param_1[0x22] = (char)((uint)*(undefined4 *)((int)this + 0x2a) >> 0x18);
      param_1[0x23] = (char)((uint)*(undefined4 *)((int)this + 0x2a) >> 0x10);
      param_1[0x24] = (char)((uint)*(undefined4 *)((int)this + 0x2a) >> 8);
      param_1[0x25] = *(undefined1 *)((int)this + 0x2a);
      param_1[0x26] = (char)((uint)*(undefined4 *)((int)this + 0x2e) >> 0x18);
      param_1[0x27] = (char)((uint)*(undefined4 *)((int)this + 0x2e) >> 0x10);
      param_1[0x28] = (char)((uint)*(undefined4 *)((int)this + 0x2e) >> 8);
      param_1[0x29] = *(undefined1 *)((int)this + 0x2e);
      param_1[0x2a] = (char)((uint)*(undefined4 *)((int)this + 0x32) >> 0x18);
      param_1[0x2b] = (char)((uint)*(undefined4 *)((int)this + 0x32) >> 0x10);
      param_1[0x2c] = (char)((uint)*(undefined4 *)((int)this + 0x32) >> 8);
      param_1[0x2d] = *(undefined1 *)((int)this + 0x32);
      param_1[0x2e] = *(undefined1 *)((int)this + 0x37);
      param_1[0x2f] = *(undefined1 *)((int)this + 0x36);
      param_1[0x30] = *(undefined1 *)((int)this + 0x39);
      param_1[0x31] = *(undefined1 *)((int)this + 0x38);
      return 0;
    }
  }
  return uVar2;
}


