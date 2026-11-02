/* Module: rnco3260.dll
   Function: FUN_6370c470
   Address: 6370c470
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370c470(ushort *param_1,int param_2,int param_3,int param_4,byte *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  pbVar6 = param_5;
  param_5 = (byte *)param_4;
  iVar5 = param_6 >> 1;
  if (param_4 != 0) {
    iVar1 = param_3 - (int)param_1;
    iVar2 = param_2 - (int)param_1;
    do {
      uVar4 = (pbVar6[1] & 0xfc | (pbVar6[2] & 0xf8) << 5) << 3 | (uint)(*pbVar6 >> 3);
      uVar3 = (ushort)uVar4;
      *(ushort *)(iVar1 + (int)param_1) = uVar3;
      *(ushort *)(iVar2 + (int)param_1) =
           ((ushort)((*param_1 ^ uVar4) >> 1) & 0x7bef) + (*param_1 & uVar3);
      param_1 = param_1 + 1;
      do {
        pbVar6 = pbVar6 + 3;
        iVar5 = iVar5 - param_4;
      } while (-1 < iVar5);
      iVar5 = iVar5 + param_6;
      param_5 = param_5 + -1;
    } while (param_5 != (byte *)0x0);
  }
  return;
}


