/* Module: erv23260.dll
   Function: FUN_63804c50
   Address: 63804c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_63804c50(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_2;
  *param_2 = 0;
  iVar2 = FUN_63802600((void *)((int)this + -0x74),&param_1);
  if (iVar2 == 0) {
    *puVar1 = *(undefined4 *)(param_1 * 0x77c + 0x90 + (int)this);
  }
  return;
}


