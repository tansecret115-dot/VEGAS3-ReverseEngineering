/* Module: encn3260.dll
   Function: FUN_664b3ab0
   Address: 664b3ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664b3ab0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_664b6320((uint *)(param_1 + 0x48),(uint *)(param_1 + 0x11ac),0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x15f0) = 0;
  }
  return 0x80004005;
}


