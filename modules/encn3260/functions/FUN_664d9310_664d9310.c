/* Module: encn3260.dll
   Function: FUN_664d9310
   Address: 664d9310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664d9310(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)((int)this + 8) = 0;
  FUN_664db520((void *)((int)this + 0xc),10);
  FUN_664db520((void *)((int)this + 0x24),10);
  *(undefined4 *)((int)this + 0x3c) = 0x80;
  *(undefined4 *)((int)this + 0x40) = 1;
  if (param_1 == 0) {
    puVar1 = operator_new(4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      *(undefined4 **)this = puVar1;
      *puVar1 = param_3;
      return this;
    }
    *(undefined4 *)this = 0;
    uRam00000000 = param_3;
    return this;
  }
  puVar1 = operator_new(0x16);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined2 *)(puVar1 + 1) = 0;
    *(undefined4 *)((int)puVar1 + 6) = 0;
    *(undefined4 *)((int)puVar1 + 10) = 0;
    *(undefined4 *)((int)puVar1 + 0xe) = 0;
    *(undefined4 *)((int)puVar1 + 0x12) = 0;
    *(undefined4 **)((int)this + 8) = puVar1;
    *puVar1 = param_3;
    return this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  uRam00000000 = param_3;
  return this;
}


