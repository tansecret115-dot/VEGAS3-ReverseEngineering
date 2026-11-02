/* Module: enlv3260.dll
   Function: FUN_661d2c20
   Address: 661d2c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_661d2c20(void *this,int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    FUN_661d2ae0(this);
    return;
  }
  puVar1 = operator_new(param_1 + 0xd);
  *puVar1 = 1;
  *(undefined1 *)((int)puVar1 + param_1 + 0xc) = 0;
  puVar1[1] = param_1;
  puVar1[2] = param_1;
  *(undefined4 **)this = puVar1 + 3;
  return;
}


