/* Module: encn3260.dll
   Function: FUN_6648e000
   Address: 6648e000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6648e000(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar1 = FUN_6648d1b0(*(int *)(param_1 + 0x2c));
    while (iVar1 != 0) {
      if (*(int *)(param_1 + 0x30) == 0) {
        FUN_66494b60(*(int *)(iVar1 + 0x16));
        *(undefined4 *)(iVar1 + 0x22) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0xc) = 0;
      }
      iVar1 = FUN_6648d220(*(int *)(param_1 + 0x2c));
    }
  }
  return 0;
}


