/* Module: sfppack1.dll
   Function: FUN_5ce02e85
   Address: 5ce02e85
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5ce02e85(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    iVar3 = 0;
    piVar2 = param_1;
    do {
      piVar2 = (int *)piVar2[1];
      iVar3 = iVar3 + 1;
    } while (piVar2 != (int *)0x0);
    if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
      *(undefined4 *)*param_2 = *(undefined4 *)((int)this + 4);
    }
    if (*(int *)((int)this + 4) != 0) {
      *(int *)(*(int *)((int)this + 4) + 4) = *param_2;
    }
    if (param_2[1] == 0) {
      param_2[1] = *(int *)((int)this + 4);
    }
    iVar1 = *param_1;
    *(int *)((int)this + 4) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)this = 0;
    }
    *param_2 = (int)param_1;
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)(*(int *)((int)this + 4) + 4) = 0;
    }
    *param_1 = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) - iVar3;
    param_2[2] = param_2[2] + iVar3;
  }
  return 1;
}


