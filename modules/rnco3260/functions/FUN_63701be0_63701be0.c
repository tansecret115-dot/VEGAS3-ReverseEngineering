/* Module: rnco3260.dll
   Function: FUN_63701be0
   Address: 63701be0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63701be0(uint *param_1,int *param_2,uint *param_3,int param_4,uint3 *param_5,int param_6)

{
  uint uVar1;
  uint3 uVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  
  piVar5 = param_2;
  param_2 = (int *)param_4;
  puVar4 = param_1;
  param_1 = (uint *)(param_4 >> 1);
  if (param_4 == 0) {
    return;
  }
  do {
    uVar2 = *param_5;
    param_5 = (uint3 *)((int)param_5 + 3);
    uVar3 = (uint)uVar2;
    uVar1 = *puVar4;
    do {
      *param_3 = uVar3;
      *piVar5 = ((uVar1 ^ uVar3) >> 1 & 0x7f7f7f) + (uVar1 & uVar3);
      puVar4 = puVar4 + 1;
      param_3 = param_3 + 1;
      piVar5 = piVar5 + 1;
      param_2 = (int *)((int)param_2 + -1);
      if (param_2 == (int *)0x0) {
        return;
      }
      param_1 = (uint *)((int)param_1 - param_6);
    } while (-1 < (int)param_1);
    param_1 = (uint *)((int)param_1 + param_4);
  } while( true );
}


