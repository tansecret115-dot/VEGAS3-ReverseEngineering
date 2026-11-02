/* Module: pngu3266.dll
   Function: FUN_60619810
   Address: 60619810
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_60619810(void *this,uint param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  uVar1 = param_1;
  piVar2 = FUN_606197b0(this,param_1,&param_1);
  if (piVar2 == (int *)0x0) {
    if (*(int *)((int)this + 4) == 0) {
      FUN_60619680(this,*(uint *)((int)this + 8));
    }
    puVar3 = (undefined4 *)FUN_60619730((int)this);
    puVar3[1] = param_1;
    puVar3[2] = uVar1;
    puVar3[3] = param_2;
    *puVar3 = *(undefined4 *)(*(int *)((int)this + 4) + param_1 * 4);
    *(undefined4 **)(*(int *)((int)this + 4) + param_1 * 4) = puVar3;
    return;
  }
  piVar2[3] = param_2;
  return;
}


