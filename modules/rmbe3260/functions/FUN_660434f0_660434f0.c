/* Module: rmbe3260.dll
   Function: FUN_660434f0
   Address: 660434f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_660434f0(void *this,undefined1 param_1,undefined1 param_2,undefined1 param_3,uint param_4,
            uint param_5,undefined4 param_6)

{
  *(undefined1 *)this = param_1;
  *(undefined1 *)((int)this + 0x16) = param_3;
  *(undefined1 *)((int)this + 1) = param_2;
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xe) = 0;
  *(uint *)((int)this + 2) = param_4;
  *(uint *)((int)this + 6) = param_5;
  *(undefined4 *)((int)this + 0x12) = param_6;
  if ((param_4 < 0x40000000) && (param_5 < 0x40000000)) {
    return 0;
  }
  return 0x80004005;
}


