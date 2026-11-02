/* Module: encn3260.dll
   Function: FUN_664bbe00
   Address: 664bbe00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664bbe00(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = param_1;
  puVar2 = FUN_664bbd80(this,param_1,&param_1);
  if (puVar2 == (undefined4 *)0x0) {
    if (*(int *)this == 0) {
      FUN_664bbc50(this,*(uint *)((int)this + 4));
    }
    puVar2 = (undefined4 *)FUN_664bbd00((int)this);
    puVar2[2] = uVar1;
    puVar2[1] = param_1;
    *puVar2 = *(undefined4 *)(*(int *)this + param_1 * 4);
    *(undefined4 **)(*(int *)this + param_1 * 4) = puVar2;
  }
  return puVar2 + 3;
}


