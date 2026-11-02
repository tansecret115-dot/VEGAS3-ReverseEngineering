/* Module: encn3260.dll
   Function: FUN_6648aaf0
   Address: 6648aaf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6648aaf0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  *param_1 = &PTR_FUN_664de138;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x30) + 8))(iVar1 + 0x30);
    param_1[2] = 0;
  }
  return;
}


