/* Module: erv13260.dll
   Function: FUN_635f20b0
   Address: 635f20b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635f20b0(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1[2];
  if (uVar1 <= param_2) {
    iVar4 = param_2 - uVar1;
    iVar2 = *param_1;
    *(byte *)(param_1[1] + iVar2) =
         ((&DAT_636052a0)[uVar1 * 4] & (byte)(param_3 >> ((byte)iVar4 & 0x1f))) +
         ((char)param_1[3] << ((byte)uVar1 & 0x1f));
    iVar3 = param_1[1] + 1;
    param_1[1] = iVar3;
    while (7 < iVar4) {
      iVar4 = iVar4 + -8;
      *(char *)(iVar2 + iVar3) = (char)(param_3 >> ((byte)iVar4 & 0x1f));
      iVar3 = param_1[1] + 1;
      param_1[1] = iVar3;
    }
    *(byte *)(param_1 + 3) = (&DAT_636052a0)[iVar4 * 4] & (byte)param_3;
    param_1[2] = 8 - iVar4;
    return;
  }
  *(byte *)(param_1 + 3) =
       ((&DAT_636052a0)[param_2 * 4] & (byte)param_3) + ((char)param_1[3] << ((byte)param_2 & 0x1f))
  ;
  param_1[2] = param_1[2] - param_2;
  return;
}


