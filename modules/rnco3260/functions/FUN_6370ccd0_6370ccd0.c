/* Module: rnco3260.dll
   Function: FUN_6370ccd0
   Address: 6370ccd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370ccd0(ushort *param_1,int param_2,int param_3,int param_4,ushort *param_5,int param_6)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  
  puVar5 = param_5;
  param_5 = (ushort *)param_4;
  iVar4 = param_6 >> 1;
  if (param_4 != 0) {
    iVar2 = param_3 - (int)param_1;
    iVar3 = param_2 - (int)param_1;
    do {
      uVar1 = *puVar5;
      *(ushort *)(iVar2 + (int)param_1) = uVar1;
      *(ushort *)(iVar3 + (int)param_1) = ((*param_1 ^ uVar1) >> 1 & 0x7bef) + (*param_1 & uVar1);
      param_1 = param_1 + 1;
      do {
        puVar5 = puVar5 + 1;
        iVar4 = iVar4 - param_4;
      } while (-1 < iVar4);
      iVar4 = iVar4 + param_6;
      param_5 = (ushort *)((int)param_5 + -1);
    } while (param_5 != (ushort *)0x0);
  }
  return;
}


