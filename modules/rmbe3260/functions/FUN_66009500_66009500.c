/* Module: rmbe3260.dll
   Function: FUN_66009500
   Address: 66009500
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66009500(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0xd0) + 8))(iVar1 + 0xd0);
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0xd0) + 8))(iVar1 + 0xd0);
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}


