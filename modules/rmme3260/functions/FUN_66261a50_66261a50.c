/* Module: rmme3260.dll
   Function: FUN_66261a50
   Address: 66261a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66261a50(void *this,char *param_1,undefined4 *param_2)

{
  int iVar1;
  char *local_10 [3];
  
  FUN_66250280(local_10,param_1);
  FUN_662509d0((int *)local_10);
  iVar1 = FUN_662619c0(this,(byte *)0x0,local_10[0]);
  if (iVar1 == 0) {
    FUN_66250210((int *)local_10);
    return 1;
  }
  *param_2 = *(undefined4 *)(*(int *)(iVar1 + 4) + 8);
  FUN_66250210((int *)local_10);
  return 0;
}


