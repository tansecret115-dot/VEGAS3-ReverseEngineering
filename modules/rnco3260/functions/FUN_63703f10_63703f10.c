/* Module: rnco3260.dll
   Function: FUN_63703f10
   Address: 63703f10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63703f10(uint *param_1,int *param_2,uint *param_3,int param_4,uint *param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  
  piVar4 = param_2;
  param_2 = (int *)param_4;
  puVar3 = param_1;
  param_1 = (uint *)(param_4 >> 1);
  if (param_4 == 0) {
    return;
  }
  do {
    uVar1 = *param_5;
    uVar2 = *puVar3;
    param_5 = param_5 + 1;
    do {
      *param_3 = uVar1;
      *piVar4 = ((uVar2 ^ uVar1) >> 1 & 0x7f7f7f) + (uVar2 & uVar1);
      puVar3 = puVar3 + 1;
      param_3 = param_3 + 1;
      piVar4 = piVar4 + 1;
      param_2 = (int *)((int)param_2 + -1);
      if (param_2 == (int *)0x0) {
        return;
      }
      param_1 = (uint *)((int)param_1 - param_6);
    } while (-1 < (int)param_1);
    param_1 = (uint *)((int)param_1 + param_4);
  } while( true );
}


