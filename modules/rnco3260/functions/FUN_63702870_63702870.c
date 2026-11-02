/* Module: rnco3260.dll
   Function: FUN_63702870
   Address: 63702870
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63702870(uint *param_1,int param_2,int param_3,int param_4,ushort *param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  int local_8;
  
  local_8 = param_4;
  if (param_4 != 0) {
    iVar4 = param_3 - (int)param_1;
    iVar1 = param_2 - (int)param_1;
    puVar3 = param_5;
    param_5 = (ushort *)(param_6 >> 1);
    do {
      uVar2 = (uint)*puVar3;
      uVar2 = (((uVar2 & 0x7c00) << 3 | uVar2 & 0x3e0) << 3 | uVar2 & 0x1f) << 3;
      *(uint *)(iVar4 + (int)param_1) = uVar2;
      *(uint *)(iVar1 + (int)param_1) = ((*param_1 ^ uVar2) >> 1 & 0x7f7f7f) + (*param_1 & uVar2);
      param_1 = param_1 + 1;
      do {
        puVar3 = puVar3 + 1;
        param_5 = (ushort *)((int)param_5 - param_4);
      } while (-1 < (int)param_5);
      param_5 = (ushort *)((int)param_5 + param_6);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}


