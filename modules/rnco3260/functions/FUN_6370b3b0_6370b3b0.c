/* Module: rnco3260.dll
   Function: FUN_6370b3b0
   Address: 6370b3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370b3b0(ushort *param_1,int param_2,int param_3,int param_4,uint *param_5,int param_6)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int local_8;
  
  local_8 = param_4;
  if (param_4 != 0) {
    iVar4 = param_3 - (int)param_1;
    iVar2 = param_2 - (int)param_1;
    puVar5 = param_5;
    param_5 = (uint *)(param_6 >> 1);
    do {
      uVar3 = *puVar5;
      uVar3 = ((uVar3 & 0xfc00 | uVar3 >> 3 & 0x1f0000) >> 2 | uVar3 & 0xf8) >> 3;
      uVar1 = (ushort)uVar3;
      *(ushort *)(iVar4 + (int)param_1) = uVar1;
      *(ushort *)(iVar2 + (int)param_1) =
           ((ushort)((*param_1 ^ uVar3) >> 1) & 0x7bef) + (*param_1 & uVar1);
      param_1 = param_1 + 1;
      do {
        puVar5 = puVar5 + 1;
        param_5 = (uint *)((int)param_5 - param_4);
      } while (-1 < (int)param_5);
      param_5 = (uint *)((int)param_5 + param_6);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}


