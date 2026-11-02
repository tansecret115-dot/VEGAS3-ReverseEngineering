/* Module: encn3260.dll
   Function: FUN_664d8140
   Address: 664d8140
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664d8140(void *this,char *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  pvVar1 = operator_new(0x1d);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_664d7e80(param_1,'.');
  }
  *(undefined4 **)((int)this + 4) = puVar2;
  return (-(uint)(puVar2 != (undefined4 *)0x0) & 0x7fffbffb) + 0x80004005;
}


