/* Module: rnco3260.dll
   Function: FUN_637014e0
   Address: 637014e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637014e0(uint *param_1,int *param_2,uint *param_3,int param_4,uint *param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  
  piVar5 = param_2;
  param_2 = (int *)param_4;
  puVar3 = param_1;
  puVar4 = param_3;
  param_1 = (uint *)(param_4 >> 1);
  if (param_4 == 0) {
    return;
  }
  do {
    uVar2 = *param_5;
    param_3._2_1_ = (undefined1)(uVar2 >> 0x10);
    param_5 = param_5 + 1;
    uVar1 = *puVar3;
    uVar2 = (uint)CONCAT11((char)(uVar2 >> 8),param_3._2_1_) | (uVar2 & 0xff) << 0x10;
    do {
      *puVar4 = uVar2;
      *piVar5 = ((uVar1 ^ uVar2) >> 1 & 0x7f7f7f) + (uVar1 & uVar2);
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
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


