/* Module: rmbe3260.dll
   Function: FUN_660032e0
   Address: 660032e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_660032e0(void *this,ulong param_1,int *param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,char *param_6)

{
  FUN_660010d0(this,param_1,param_2,param_3,param_4,param_6);
  *(undefined4 *)((int)this + 0x152) = 0;
  *(undefined4 *)((int)this + 0x156) = 0;
  *(undefined4 *)((int)this + 0x15a) = 0;
  *(undefined4 *)((int)this + 0x15e) = 0;
  *(undefined ***)this = &PTR_FUN_66062c48;
  *(undefined4 *)((int)this + 0x162) = param_5;
  return this;
}


