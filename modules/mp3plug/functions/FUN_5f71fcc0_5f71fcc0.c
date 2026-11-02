/* Module: mp3plug.dll
   Function: FUN_5f71fcc0
   Address: 5f71fcc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f71fcc0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 2)) {
    return *(undefined4 *)(iVar1 + 0x20);
  }
  return 0;
}


