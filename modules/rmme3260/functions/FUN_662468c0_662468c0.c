/* Module: rmme3260.dll
   Function: FUN_662468c0
   Address: 662468c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662468c0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x49a) != 0) || (*(int *)(param_1 + 0x49e) != 0)) {
    iVar1 = FUN_662406e0(*(int *)(param_1 + 0x3a));
    FUN_6624b560((uint *)(iVar1 + 0x48),(uint *)(param_1 + 0x56));
    *(undefined4 *)(param_1 + 0x49a) = 0;
    *(undefined4 *)(param_1 + 0x49e) = 0;
  }
  return;
}


