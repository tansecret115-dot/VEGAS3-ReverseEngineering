/* Module: encn3260.dll
   Function: FUN_664db740
   Address: 664db740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664db740(void *this,byte *param_1,void *param_2)

{
  int *piVar1;
  
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  piVar1 = FUN_664db6a0(this,param_1,(uint *)&param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  FUN_664bb570(param_2,piVar1 + 5);
  return 1;
}


