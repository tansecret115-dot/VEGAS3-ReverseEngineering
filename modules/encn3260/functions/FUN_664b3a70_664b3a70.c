/* Module: encn3260.dll
   Function: FUN_664b3a70
   Address: 664b3a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664b3a70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x160c) != 0) {
    iVar2 = FUN_664b60c0((uint *)(param_1 + 0x48),(uint *)(param_1 + 0x11ac));
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x160c) = 0;
      return 0;
    }
    uVar1 = 0x80004005;
  }
  return uVar1;
}


