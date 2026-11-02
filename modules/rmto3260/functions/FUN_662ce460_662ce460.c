/* Module: rmto3260.dll
   Function: FUN_662ce460
   Address: 662ce460
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662ce460(void *param_1)

{
  int iVar1;
  uint local_18 [4];
  int local_8;
  
  iVar1 = (**(code **)(**(int **)((int)param_1 + 0x24) + 0x20))
                    (*(undefined4 *)((int)param_1 + 0x3c),0);
  if ((-1 < iVar1) && (iVar1 = FUN_662d05c0(param_1,local_18), -1 < iVar1)) {
    iVar1 = FUN_662ce800(param_1,(int)local_18);
    while ((((-1 < iVar1 && (local_8 != 0)) &&
            (iVar1 = (**(code **)(**(int **)((int)param_1 + 0x24) + 0x20))(local_8,0), -1 < iVar1))
           && (iVar1 = FUN_662d05c0(param_1,local_18), -1 < iVar1))) {
      iVar1 = FUN_662ce800(param_1,(int)local_18);
    }
  }
  return;
}


