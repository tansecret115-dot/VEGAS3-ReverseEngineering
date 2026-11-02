/* Module: qt4plug.dll
   Function: FUN_5f520840
   Address: 5f520840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f520840(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[0xc] == 0) {
    return 0x80004003;
  }
  (**(code **)(*param_1 + 0x50))();
  FUN_5f520650((int)param_1);
  uVar1 = (**(code **)(*(int *)param_1[10] + 100))((int *)param_1[10],param_1[0xc]);
  return uVar1;
}


