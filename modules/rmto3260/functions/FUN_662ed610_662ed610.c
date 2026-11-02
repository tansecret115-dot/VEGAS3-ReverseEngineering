/* Module: rmto3260.dll
   Function: FUN_662ed610
   Address: 662ed610
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662ed610(void *this,int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (param_1 < iVar1) {
    FUN_662ed470(this,param_3 + iVar1,0xffffffff);
    memmove((void *)(*(int *)this + (param_3 + param_1) * 4),(void *)(*(int *)this + param_1 * 4),
            (param_1 * 0x3fffffff + iVar1) * 4);
    puVar2 = (undefined4 *)(*(int *)this + param_1 * 4);
    for (iVar1 = param_3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  else {
    FUN_662ed470(this,param_3 + param_1,0xffffffff);
  }
  if (param_3 != 0) {
    iVar1 = param_1 * 4;
    do {
      iVar1 = iVar1 + 4;
      param_3 = param_3 + -1;
      *(undefined4 *)(*(int *)this + -4 + iVar1) = param_2;
    } while (param_3 != 0);
  }
  return;
}


