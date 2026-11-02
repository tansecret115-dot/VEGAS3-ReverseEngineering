/* Module: rnco3260.dll
   Function: FUN_63710a60
   Address: 63710a60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63710a60(ushort *param_1,int param_2,int param_3,int param_4,byte *param_5,int param_6)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int local_8;
  
  local_8 = param_4;
  if (param_4 != 0) {
    iVar4 = param_3 - (int)param_1;
    iVar1 = param_2 - (int)param_1;
    pbVar5 = param_5;
    param_5 = (byte *)(param_6 >> 1);
    do {
      uVar3 = (uint)*pbVar5;
      uVar3 = (*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) & 0xf8 |
              (*(byte *)(&DAT_637956a0 + uVar3) & 0xf8) << 5) << 2 |
              (uint)(*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) >> 3);
      uVar2 = (ushort)uVar3;
      *(ushort *)(iVar4 + (int)param_1) = uVar2;
      *(ushort *)(iVar1 + (int)param_1) =
           ((ushort)((*param_1 ^ uVar3) >> 1) & 0x3def) + (*param_1 & uVar2);
      param_1 = param_1 + 1;
      do {
        pbVar5 = pbVar5 + 1;
        param_5 = param_5 + -param_4;
      } while (-1 < (int)param_5);
      param_5 = param_5 + param_6;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}


