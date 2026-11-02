/* Module: rmme3260.dll
   Function: FUN_662620b0
   Address: 662620b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662620b0(void *this,void *param_1,int param_2)

{
  undefined4 *puVar1;
  int *this_00;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = operator_new(8);
  if (puVar1 == (undefined4 *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = (int *)FUN_662621b0(puVar1);
  }
  if (this_00 == (int *)0x0) {
    return 2;
  }
  if (param_2 == 0) {
    iVar3 = FUN_662621f0(this_00,param_1);
  }
  else {
    *this_00 = param_2;
    this_00[1] = (int)param_1;
    FUN_66263520((int)param_1);
  }
  if (iVar3 == 0) {
    FUN_66250b60(*(void **)this,this_00);
    piVar2 = FUN_662529a0(*(void **)((int)this + 8),(byte *)*this_00);
    *piVar2 = (int)this_00;
  }
  return iVar3;
}


