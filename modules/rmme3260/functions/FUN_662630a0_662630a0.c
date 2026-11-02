/* Module: rmme3260.dll
   Function: FUN_662630a0
   Address: 662630a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662630a0(void *this,void *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = operator_new(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)FUN_662539b0(puVar1);
  }
  if (puVar1 == (undefined4 *)0x0) {
    return 2;
  }
  if (param_2 == 0) {
    iVar3 = FUN_662631d0(puVar1,param_1);
  }
  else {
    puVar1[1] = param_2;
    *puVar1 = param_1;
    FUN_66263520((int)param_1);
  }
  if (iVar3 == 0) {
    FUN_66250b60(*(void **)this,puVar1);
    piVar2 = FUN_662529a0(*(void **)((int)this + 8),(byte *)puVar1[1]);
    *piVar2 = (int)puVar1;
  }
  return iVar3;
}


