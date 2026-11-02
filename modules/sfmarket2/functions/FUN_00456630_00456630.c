/* Module: sfmarket2.dll
   Function: FUN_00456630
   Address: 00456630
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00456630(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x16ad);
  if (iVar1 < 0xe) {
    *(ushort *)(param_1 + 0x16ab) =
         *(ushort *)(param_1 + 0x16ab) | (ushort)(param_4 << ((byte)iVar1 & 0x1f));
    *(int *)(param_1 + 0x16ad) = iVar1 + 3;
  }
  else {
    *(ushort *)(param_1 + 0x16ab) =
         *(ushort *)(param_1 + 0x16ab) | (ushort)(param_4 << ((byte)iVar1 & 0x1f));
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16ab);
    iVar1 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16ac);
    iVar1 = *(int *)(param_1 + 0x16ad);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16ad) = iVar1 + -0xd;
    *(ushort *)(param_1 + 0x16ab) = (ushort)param_4 >> (0x10U - (char)iVar1 & 0x1f);
  }
  FUN_004580e0(param_1,param_2,param_3,1);
  return;
}


