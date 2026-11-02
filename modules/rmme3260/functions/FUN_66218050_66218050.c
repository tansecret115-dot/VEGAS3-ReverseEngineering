/* Module: rmme3260.dll
   Function: FUN_66218050
   Address: 66218050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_66218050(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x30) = param_3;
  *(undefined4 *)((int)this + 0x2c) = param_2;
  return 0;
}


