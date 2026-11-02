/* Module: cook3260.dll
   Function: FUN_633a6bf0
   Address: 633a6bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_633a6bf0(void *this,int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    FUN_633a6ab0(this);
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


