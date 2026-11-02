/* Module: rmme3260.dll
   Function: FUN_66207340
   Address: 66207340
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66207340(int param_1)

{
  void *this;
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    this = operator_new(0xc);
    if (this == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_66232aa0(this,(int *)0x0);
    }
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_6626a7d8,param_1 + 0x5c);
    if ((iVar2 < 0) && (puVar1 != (undefined4 *)0x0)) {
      FUN_66232ad0(puVar1);
      operator_delete(puVar1);
      return iVar2;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}


