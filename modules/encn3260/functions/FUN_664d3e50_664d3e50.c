/* Module: encn3260.dll
   Function: FUN_664d3e50
   Address: 664d3e50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664d3e50(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_1 - 1U < **(uint **)((int)this + 8)) {
    piVar4 = *(int **)((*(uint **)((int)this + 8))[4] + (param_1 - 1U) * 4);
  }
  else {
    piVar4 = (int *)0x0;
  }
  if ((piVar4 != (int *)0x0) && (iVar1 = *piVar4, iVar1 != 0)) {
    pvVar2 = operator_new(0xc);
    if (pvVar2 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_664d8060((int)pvVar2);
    }
    puVar3[2] = param_2;
    FUN_664d80e0(*(void **)(iVar1 + 0x1c),puVar3);
    *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
    return param_1;
  }
  return 0;
}


