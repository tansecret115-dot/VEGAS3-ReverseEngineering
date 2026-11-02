/* Module: rmbe3260.dll
   Function: FUN_66056010
   Address: 66056010
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66056010(void *this,undefined4 param_1,byte param_2)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0xf) = param_1;
  *(undefined ***)this = &PTR_FUN_66068a38;
  *(byte *)((int)this + 0xe) =
       (param_2 ^ *(byte *)((int)this + 0xe)) & 1 ^ *(byte *)((int)this + 0xe);
  return;
}


