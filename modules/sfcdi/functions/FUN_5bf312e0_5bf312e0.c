/* Module: sfcdi.dll
   Function: FUN_5bf312e0
   Address: 5bf312e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf312e0(undefined4 param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_4;
  piVar1 = param_3;
  *param_3 = 0;
  while( true ) {
    if (piVar2 <= (int *)*piVar1) {
      return;
    }
    iVar3 = FUN_5bf31280(param_1,&param_4);
    if (iVar3 < 0) {
      return;
    }
    if (param_4 == (int *)0x0) {
      return;
    }
    param_3 = (int *)((int)piVar2 - *piVar1);
    if (param_4 < param_3) {
      param_3 = param_4;
    }
    iVar3 = FUN_5bf312b0(param_1,param_2,param_3,&param_3);
    if (iVar3 < 0) break;
    param_2 = param_2 + (int)param_3;
    *piVar1 = *piVar1 + (int)param_3;
  }
  return;
}


