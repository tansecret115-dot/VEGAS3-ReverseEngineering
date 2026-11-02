/* Module: rnco3260.dll
   Function: FUN_63705980
   Address: 63705980
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63705980(uint *param_1,int param_2,int param_3,int param_4,byte *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  
  pbVar5 = param_5;
  iVar4 = param_6 >> 1;
  param_5 = (byte *)param_4;
  if (param_4 != 0) {
    iVar1 = param_3 - (int)param_1;
    iVar2 = param_2 - (int)param_1;
    do {
      uVar3 = (uint)*pbVar5;
      uVar3 = (uint)CONCAT21(CONCAT11(*(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 2),
                                      *(undefined1 *)((int)&DAT_637956a0 + uVar3 * 4 + 1)),
                             *(undefined1 *)(&DAT_637956a0 + uVar3));
      *(uint *)(iVar1 + (int)param_1) = uVar3;
      *(uint *)(iVar2 + (int)param_1) = ((*param_1 ^ uVar3) >> 1 & 0x7f7f7f) + (*param_1 & uVar3);
      param_1 = param_1 + 1;
      do {
        pbVar5 = pbVar5 + 1;
        iVar4 = iVar4 - param_4;
      } while (-1 < iVar4);
      iVar4 = iVar4 + param_6;
      param_5 = param_5 + -1;
    } while (param_5 != (byte *)0x0);
  }
  return;
}


