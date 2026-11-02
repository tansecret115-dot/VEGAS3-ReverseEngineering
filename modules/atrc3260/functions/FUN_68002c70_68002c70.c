/* Module: atrc3260.dll
   Function: FUN_68002c70
   Address: 68002c70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_68002c70(void *this,char *param_1,ushort param_2)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  FUN_68002d00(this,param_1,param_2);
  return this;
}


