/* Module: erv23260.dll
   Function: FUN_637f3a70
   Address: 637f3a70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637f3a70(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((*(int *)((int)this + 0xc) == 0x15) || (*(int *)((int)this + 0xc) == 0x16)) {
    puVar2 = (undefined4 *)((int)this + 0xdc);
    for (iVar1 = 0x3b; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}


