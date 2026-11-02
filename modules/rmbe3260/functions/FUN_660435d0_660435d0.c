/* Module: rmbe3260.dll
   Function: FUN_660435d0
   Address: 660435d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_660435d0(void *this,uint param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined1 *)((int)this + 0x16) = param_3;
  *(undefined1 *)this = 1;
  *(undefined1 *)((int)this + 1) = 1;
  *(uint *)((int)this + 2) = param_1;
  *(undefined4 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 10) = param_2;
  *(undefined4 *)((int)this + 0xe) = 3;
  *(undefined4 *)((int)this + 0x12) = 0;
  return -(uint)(0x3fffffff < param_1) & 0x80004005;
}


