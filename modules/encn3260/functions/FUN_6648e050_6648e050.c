/* Module: encn3260.dll
   Function: FUN_6648e050
   Address: 6648e050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6648e050(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar1 = FUN_6648d1b0(*(int *)(param_1 + 0x2c));
    while (iVar1 != 0) {
      FUN_66496000(*(undefined4 **)(iVar1 + 0x16));
      iVar1 = FUN_6648d220(*(int *)(param_1 + 0x2c));
    }
  }
  return 0;
}


