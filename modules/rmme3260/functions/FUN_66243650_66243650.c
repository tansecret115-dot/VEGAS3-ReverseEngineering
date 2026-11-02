/* Module: rmme3260.dll
   Function: FUN_66243650
   Address: 66243650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66243650(void *this,int *param_1,undefined4 param_2)

{
  *(int **)this = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  *(undefined4 *)((int)this + 0xc) = param_2;
  (**(code **)*param_1)(param_1,&DAT_6626abe8,(int)this + 4);
  (**(code **)*param_1)(param_1,&DAT_6626ad78,(int)this + 8);
  return this;
}


