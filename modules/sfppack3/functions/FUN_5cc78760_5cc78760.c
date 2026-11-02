/* Module: sfppack3.dll
   Function: FUN_5cc78760
   Address: 5cc78760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cc78760(void *this,int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_5cc7849d(param_2);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 1;
    }
    iVar2 = FUN_5cc784ba((int)puVar1);
    param_1 = (int *)FUN_5cc78705(this,param_1,iVar2);
    if (param_1 == (int *)0x0) break;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)(param_2 + 4);
    }
    else {
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  return 0;
}


