/* Module: encn3260.dll
   Function: FUN_664c0a50
   Address: 664c0a50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664c0a50(void *this,int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  
  param_2 = (undefined4 *)FUN_664c0b70(this,param_1,(int)param_2);
  iVar4 = 0;
  while (param_2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_2[1];
    if (param_2[4] == 0) {
      (**(code **)(*(int *)*param_2 + 0xc))((int *)*param_2);
      (**(code **)(*(int *)this + 0x14))(*param_2);
      iVar4 = iVar4 + 1;
    }
    puVar3 = *(uint **)((int)this + 0x820);
    if ((param_2[5] - 1 <= *puVar3) &&
       (piVar1 = (int *)(puVar3[4] + (param_2[5] - 1) * 4), *piVar1 != 0)) {
      *piVar1 = 0;
      puVar3[2] = puVar3[2] - 1;
    }
    (**(code **)(*(int *)this + 0x1c))(&param_2);
    param_2 = puVar2;
  }
  return iVar4;
}


