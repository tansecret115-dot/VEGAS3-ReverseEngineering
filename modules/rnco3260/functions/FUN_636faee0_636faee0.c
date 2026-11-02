/* Module: rnco3260.dll
   Function: FUN_636faee0
   Address: 636faee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636faee0(undefined1 *param_1,int param_2,byte *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  
  puVar4 = param_1;
  iVar6 = param_2;
  param_1 = (undefined1 *)(param_2 >> 1);
  if (param_2 == 0) {
    return;
  }
  do {
    uVar5 = (uint)*param_3;
    param_3 = param_3 + 1;
    uVar1 = *(undefined1 *)((int)&DAT_637956a0 + uVar5 * 4 + 2);
    uVar2 = *(undefined1 *)((int)&DAT_637956a0 + uVar5 * 4 + 1);
    uVar3 = *(undefined1 *)(&DAT_637956a0 + uVar5);
    do {
      *puVar4 = uVar1;
      puVar4[1] = uVar2;
      puVar4[2] = uVar3;
      puVar4 = puVar4 + 3;
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) {
        return;
      }
      param_1 = param_1 + -param_4;
    } while (-1 < (int)param_1);
    param_1 = param_1 + param_2;
  } while( true );
}


