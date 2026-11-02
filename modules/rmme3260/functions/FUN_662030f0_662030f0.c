/* Module: rmme3260.dll
   Function: FUN_662030f0
   Address: 662030f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662030f0(void *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = operator_new(0x5e);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_66206380(puVar1);
  }
  if (param_2 == (int *)0x0) {
    return -0x7ff8fff2;
  }
  iVar2 = FUN_66206440(puVar1,*(undefined4 **)((int)param_1 + 0x38));
  if (-1 < iVar2) {
    iVar2 = FUN_66217f00(puVar1,param_2);
    if (-1 < iVar2) {
      iVar2 = FUN_662031d0(param_1,puVar1,(int *)((int)param_1 + 0x10));
    }
  }
  return iVar2;
}


