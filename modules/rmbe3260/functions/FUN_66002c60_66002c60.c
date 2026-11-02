/* Module: rmbe3260.dll
   Function: FUN_66002c60
   Address: 66002c60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_66002c60(void *this,ulong param_1,int *param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,char *param_6)

{
  FUN_660010d0(this,param_1,param_2,param_3,param_4,param_6);
  *(undefined ***)this = &PTR_FUN_66062ab8;
  *(undefined4 *)((int)this + 0x152) = 0;
  *(undefined4 *)((int)this + 0x156) = 0;
  return this;
}


