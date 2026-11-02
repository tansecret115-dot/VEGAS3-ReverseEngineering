/* Module: rnco3260.dll
   Function: FUN_636fad20
   Address: 636fad20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fad20(int param_1,int param_2,byte *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  int iVar6;
  
  pbVar5 = param_3;
  param_3 = (byte *)param_2;
  iVar6 = param_4 >> 1;
  if (param_2 != 0) {
    puVar4 = (undefined1 *)(param_1 + 2);
    do {
      uVar3 = (uint)*pbVar5;
      uVar1 = *(undefined1 *)(&DAT_637956a0 + uVar3);
      uVar2 = *(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 2);
      puVar4[-1] = *(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 1);
      puVar4[-2] = uVar2;
      *puVar4 = uVar1;
      do {
        pbVar5 = pbVar5 + 1;
        iVar6 = iVar6 - param_2;
      } while (-1 < iVar6);
      iVar6 = iVar6 + param_4;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != (byte *)0x0);
  }
  return;
}


