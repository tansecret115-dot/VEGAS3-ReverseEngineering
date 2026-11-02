/* Module: atrc3260.dll
   Function: FUN_68003200
   Address: 68003200
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_68003200(void *this,int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    FUN_680030c0(this);
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


