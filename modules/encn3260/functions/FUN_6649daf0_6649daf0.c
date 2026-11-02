/* Module: encn3260.dll
   Function: FUN_6649daf0
   Address: 6649daf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6649daf0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_664bbf60(param_1);
  FUN_664bc020(param_1 + 1,(LPCSTR)0x0,1);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)*param_1 + 4))(FUN_6649dbd0,param_1,0);
  }
  return iVar1;
}


