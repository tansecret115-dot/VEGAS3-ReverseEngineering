/* Module: encn3260.dll
   Function: FUN_66483840
   Address: 66483840
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_66483840(void *this,undefined4 param_1,undefined4 param_2,uint param_3,undefined2 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x20);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_66483610(puVar1);
  }
  puVar1[1] = param_2;
  *puVar1 = param_1;
  FUN_66483680(puVar1,param_3);
  *(undefined2 *)(puVar1 + 2) = param_4;
  FUN_664baab0((void *)((int)this + 0xd),puVar1);
  return;
}


