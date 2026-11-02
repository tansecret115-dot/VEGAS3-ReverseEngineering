/* Module: vegas30.exe
   Function: FUN_00560700
   Address: 00560700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00560700(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(*(int *)(param_1 + 0x4b4) + 0x18) != 0) {
    iVar1 = FUN_005f13f0(2);
    if (iVar1 != 0) {
      uVar2 = FUN_00405170(*(int *)(param_1 + 0x4b0) + 0x170,0,0,0xffffffff,0xffffffff,0);
      return uVar2;
    }
  }
  return 0x80004005;
}


