/* Module: rmbe3260.dll
   Function: FUN_66008460
   Address: 66008460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_66008460(void *this,ulong param_1,char *param_2,undefined4 param_3,undefined4 param_4,
            char *param_5,undefined4 param_6)

{
  FUN_66006e30(this,param_1,param_2,param_3,param_4,param_5,param_6);
  *(undefined ***)this = &PTR_FUN_66063a20;
  *(undefined4 *)((int)this + 0x114) = 5;
  return this;
}


