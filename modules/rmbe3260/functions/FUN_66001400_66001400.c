/* Module: rmbe3260.dll
   Function: FUN_66001400
   Address: 66001400
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_66001400(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x17c))();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x188))();
  }
  return iVar1;
}


