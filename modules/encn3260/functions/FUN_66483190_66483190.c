/* Module: encn3260.dll
   Function: FUN_66483190
   Address: 66483190
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66483190(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x5e);
  *(undefined4 *)((int)this + 0x8a) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,3,param_1,0,param_2,s_http___www_real_com_664e2294);
  }
  piVar1 = *(int **)((int)this + 0x30);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,param_1);
  }
  FUN_66483250((int)this);
  return;
}


