/* Module: rnco3260.dll
   Function: FUN_63704530
   Address: 63704530
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63704530(uint *param_1,int *param_2,uint *param_3,int param_4,undefined1 *param_5,int param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  
  piVar7 = param_2;
  param_2 = (int *)param_4;
  puVar6 = param_1;
  param_1 = (uint *)(param_4 >> 1);
  if (param_4 == 0) {
    return;
  }
  do {
    puVar1 = param_5 + 1;
    puVar2 = param_5 + 2;
    uVar3 = *param_5;
    param_5 = param_5 + 3;
    uVar5 = (uint)CONCAT21(CONCAT11(uVar3,*puVar1),*puVar2);
    uVar4 = *puVar6;
    do {
      *param_3 = uVar5;
      *piVar7 = ((uVar4 ^ uVar5) >> 1 & 0x7f7f7f) + (uVar4 & uVar5);
      puVar6 = puVar6 + 1;
      param_3 = param_3 + 1;
      piVar7 = piVar7 + 1;
      param_2 = (int *)((int)param_2 + -1);
      if (param_2 == (int *)0x0) {
        return;
      }
      param_1 = (uint *)((int)param_1 - param_6);
    } while (-1 < (int)param_1);
    param_1 = (uint *)((int)param_1 + param_4);
  } while( true );
}


