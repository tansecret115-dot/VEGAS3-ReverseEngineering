/* Module: auth3260.dll
   Function: FUN_627a52f0
   Address: 627a52f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_627a52f0(void *this,uint param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    *(undefined4 *)this = 0;
  }
  if (param_2 != 0) {
    puVar1 = operator_new(param_1 * 4);
    *(undefined4 **)this = puVar1;
    for (uVar2 = param_1 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
  }
  *(uint *)((int)this + 4) = param_1;
  return;
}


