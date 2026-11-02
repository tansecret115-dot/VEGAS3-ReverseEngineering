/* Module: erv23260.dll
   Function: FUN_63803ed0
   Address: 63803ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_63803ed0(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_63802600((void *)((int)this + -100),&param_1);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)(param_1 * 0x77c + 0x20 + (int)this);
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}


