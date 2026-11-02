/* Module: rmme3260.dll
   Function: FUN_662334b0
   Address: 662334b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662334b0(void *this,int param_1)

{
  FUN_662542b0(this,param_1);
  *(undefined4 *)((int)this + 0x828) = 0;
  *(undefined2 *)((int)this + 0x82c) = 0;
  *(undefined2 *)((int)this + 0x82e) = 0x32;
  *(undefined4 *)((int)this + 0x830) = 0;
  *(undefined ***)this = &PTR_FUN_6626c0d0;
  FUN_66254ca0((undefined4 *)((int)this + 0x830));
  return this;
}


