/* Module: sfppack2.dll
   Function: FUN_5cd01e40
   Address: 5cd01e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cd01e40(void *this,int param_1,int param_2)

{
  FUN_5cd03a40(this,param_1);
  if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x124) = 0;
    *(undefined4 *)((int)this + 300) = 0;
    *(undefined4 *)((int)this + 0x120) = 0;
    *(undefined4 *)((int)this + 0x88) = 0;
    *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)((int)this + 0xb0);
    *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)((int)this + 0xb4);
    *(undefined4 *)((int)this + 0xf4) = *(undefined4 *)((int)this + 0x8c);
  }
  *(undefined4 *)((int)this + 0x4c) = 1;
  return 0;
}


