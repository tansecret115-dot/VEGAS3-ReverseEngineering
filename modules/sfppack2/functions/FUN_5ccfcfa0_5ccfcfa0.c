/* Module: sfppack2.dll
   Function: FUN_5ccfcfa0
   Address: 5ccfcfa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5ccfcfa0(void *this,int param_1,int param_2)

{
  if (*(int *)((int)this + 0x130) == 0) {
    return 0x8007000e;
  }
  FUN_5ccfef70(this,param_1);
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x140) = 0;
    *(undefined4 *)((int)this + 0x118) = 0;
    *(undefined4 *)((int)this + 0xf8) = 0;
    *(undefined4 *)((int)this + 0x14c) = 0;
    *(undefined4 *)((int)this + 0x154) = 0;
    *(undefined4 *)((int)this + 0x148) = 0;
    *(undefined4 *)((int)this + 0x144) = 0;
    *(undefined4 *)((int)this + 0x110) = 0;
    *(undefined4 *)((int)this + 0xf0) = 0;
    *(undefined4 *)((int)this + 0x11c) = 0x3ff00000;
    *(undefined4 *)((int)this + 0xfc) = 0x3ff00000;
  }
  *(undefined4 *)((int)this + 0xe0) = 1;
  return 0;
}


