/* Module: rnco3260.dll
   Function: FUN_637039e0
   Address: 637039e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637039e0(uint *param_1,int *param_2,uint *param_3,int param_4,uint *param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  
  piVar3 = param_2;
  param_2 = (int *)param_4;
  puVar4 = param_1;
  param_1 = (uint *)(param_4 >> 1);
  if (param_4 == 0) {
    return;
  }
  do {
    uVar2 = *param_5;
    param_5 = param_5 + 1;
    uVar1 = *puVar4;
    uVar2 = uVar2 & 0xff00 | (uVar2 & 0xff) << 0x10 | uVar2 >> 0x10 & 0xff;
    do {
      *param_3 = uVar2;
      *piVar3 = ((uVar1 ^ uVar2) >> 1 & 0x7f7f7f) + (uVar1 & uVar2);
      puVar4 = puVar4 + 1;
      param_3 = param_3 + 1;
      piVar3 = piVar3 + 1;
      param_2 = (int *)((int)param_2 + -1);
      if (param_2 == (int *)0x0) {
        return;
      }
      param_1 = (uint *)((int)param_1 - param_6);
    } while (-1 < (int)param_1);
    param_1 = (uint *)((int)param_1 + param_4);
  } while( true );
}


