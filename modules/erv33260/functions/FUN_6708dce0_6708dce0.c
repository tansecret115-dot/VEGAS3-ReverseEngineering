/* Module: erv33260.dll
   Function: FUN_6708dce0
   Address: 6708dce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall
FUN_6708dce0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (-(uint)(param_3 != 0) & 0x2a9bd) + 0x2ab98;
  uVar2 = 0;
  do {
    iVar1 = *(int *)(param_4 + uVar2 * 4);
    if (iVar1 < 0) {
      iVar1 = -(iVar3 - *(int *)(&DAT_670911f0 + param_1 * 4) * iVar1 >> 0x14);
    }
    else {
      iVar1 = *(int *)(&DAT_670911f0 + param_1 * 4) * iVar1 + iVar3 >> 0x14;
    }
    *(short *)(param_5 + uVar2 * 2) = (short)iVar1;
    *(int *)(param_6 + uVar2 * 4) = *(int *)(&DAT_67091170 + param_1 * 4) * iVar1 + 8 >> 4;
    if (uVar2 == 0) {
      param_1 = param_2;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  return 1;
}


