/* Module: encn3260.dll
   Function: FUN_664d9b50
   Address: 664d9b50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined2 * __thiscall FUN_664d9b50(void *this,uint param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined2 *local_8;
  
  local_8 = (undefined2 *)0x0;
  iVar1 = FUN_664bbdc0((void *)((int)this + 0xc),param_1,&local_8);
  if (iVar1 == 0) {
    puVar2 = operator_new(0x2e);
    if (puVar2 == (undefined2 *)0x0) {
      puVar2 = (undefined2 *)0x0;
    }
    else {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)(puVar2 + 3) = 0;
      *(undefined4 *)(puVar2 + 5) = 0;
      *(undefined4 *)(puVar2 + 7) = 0;
      *(undefined4 *)(puVar2 + 9) = 0;
      *(undefined4 *)(puVar2 + 0xb) = 0;
      *(undefined4 *)(puVar2 + 0xd) = 0;
      *(undefined4 *)(puVar2 + 0xf) = 0;
      *(undefined4 *)(puVar2 + 0x11) = 0;
      *(undefined4 *)(puVar2 + 0x13) = 0;
      *(undefined4 *)(puVar2 + 0x15) = 0;
    }
    if (puVar2 == (undefined2 *)0x0) {
      return (undefined2 *)0x0;
    }
    local_8 = puVar2;
    puVar3 = FUN_664bbe00((void *)((int)this + 0xc),param_1);
    *puVar3 = puVar2;
  }
  return local_8;
}


