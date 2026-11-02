/* Module: rnco3260.dll
   Function: FUN_636f7600
   Address: 636f7600
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f7600(uint *param_1,int param_2,byte *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  puVar4 = param_1;
  param_1 = (uint *)param_3;
  iVar6 = param_2 >> 1;
  iVar7 = param_2;
  if (param_2 == 0) {
    return;
  }
  do {
    uVar5 = (uint)(byte)*param_1;
    uVar1 = *(undefined1 *)(&DAT_637956a0 + uVar5);
    uVar2 = *(undefined1 *)((int)&DAT_637956a0 + uVar5 * 4 + 2);
    uVar3 = *(undefined1 *)((int)&DAT_637956a0 + uVar5 * 4 + 1);
    param_1 = (uint *)((int)param_1 + 1);
    do {
      *puVar4 = (uint)CONCAT21(CONCAT11(uVar1,uVar3),uVar2);
      puVar4 = puVar4 + 1;
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) {
        return;
      }
      iVar6 = iVar6 - param_4;
    } while (-1 < iVar6);
    iVar6 = iVar6 + param_2;
  } while( true );
}


