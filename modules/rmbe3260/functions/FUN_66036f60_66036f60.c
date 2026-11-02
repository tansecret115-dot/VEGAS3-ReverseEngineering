/* Module: rmbe3260.dll
   Function: FUN_66036f60
   Address: 66036f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66036f60(void *this,undefined1 *param_1,uint param_2)

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
      return 0;
    }
  }
  return uVar2;
}


