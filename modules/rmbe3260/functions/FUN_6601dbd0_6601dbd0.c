/* Module: rmbe3260.dll
   Function: FUN_6601dbd0
   Address: 6601dbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6601dbd0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18 [5];
  
  uVar3 = 0;
  FUN_660522e0(local_18);
  if (*(int *)(param_1 + 0x1e2) == 0) {
    bVar1 = FUN_6604e620(*(undefined4 *)(param_1 + 0x1e6));
    if (CONCAT31(extraout_var,bVar1) != 0) {
      iVar2 = FUN_66052ae0(local_18,*(char **)(param_1 + 0x1e6));
      if (iVar2 == 0) {
        uVar3 = 0x80004005;
      }
    }
  }
  FUN_66052300(local_18);
  return uVar3;
}


