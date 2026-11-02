/* Module: encn3260.dll
   Function: FUN_664b2a80
   Address: 664b2a80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664b2a80(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[3] = param_1[3];
  FUN_664baab0((void *)((int)this + 0x4fa),puVar1);
  return;
}


