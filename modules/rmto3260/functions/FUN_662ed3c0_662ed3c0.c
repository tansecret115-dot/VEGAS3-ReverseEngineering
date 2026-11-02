/* Module: rmto3260.dll
   Function: FUN_662ed3c0
   Address: 662ed3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662ed3c0(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = param_1;
  if (param_1 != (int *)0x0) {
    iVar3 = FUN_662f0530((void *)((int)this + 0x18e),(uint)param_1,(int *)&param_1);
    if (iVar3 != 0) {
      FUN_662f0600((void *)((int)this + 0x18e),piVar1);
      piVar2 = *(int **)(param_1[8] + 0xc);
      if ((piVar2 != piVar1) && ((piVar1 <= piVar2 || ((int *)param_1[6] <= piVar1)))) {
        (**(code **)(*param_1 + 0x28))(piVar1);
        return;
      }
      piVar1 = (int *)(param_1[8] + 0x14);
      *piVar1 = *piVar1 + -1;
    }
  }
  return;
}


