/* Module: encn3260.dll
   Function: FUN_6649d420
   Address: 6649d420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6649d420(void *this,int param_1)

{
  FUN_664c0580(this,param_1);
  *(undefined4 *)((int)this + 0x828) = 0;
  *(undefined2 *)((int)this + 0x82c) = 0;
  *(undefined2 *)((int)this + 0x82e) = 0x32;
  *(undefined4 *)((int)this + 0x830) = 0;
  *(undefined ***)this = &PTR_FUN_664debe0;
  FUN_664bbfc0((undefined4 *)((int)this + 0x830));
  return this;
}


