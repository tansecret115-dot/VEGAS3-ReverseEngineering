/* Module: encn3260.dll
   Function: FUN_664c7b90
   Address: 664c7b90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_664c7b90(void *this,byte *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x50))();
  if (iVar1 < 0) {
    iVar1 = (**(code **)(*(int *)this + 0x10))(0,0,param_3);
    if (iVar1 != 0) {
      if (iVar1 == -0x7ffbffb0) {
        return;
      }
      *(undefined4 *)((int)this + 0xc) = 0x80040044;
      return;
    }
  }
  FUN_664c6020(this,param_1,param_2,(short)param_3,param_4);
  return;
}


