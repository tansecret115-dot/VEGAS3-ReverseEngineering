/* Module: encn3260.dll
   Function: FUN_66490450
   Address: 66490450
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_66490450(void *param_1)

{
  int iVar1;
  int *local_8;
  
  local_8 = (int *)0x0;
  iVar1 = FUN_6648fdd0(param_1,&local_8);
  if (iVar1 == 0) {
    iVar1 = FUN_664904f0(param_1,local_8);
    if (iVar1 != 0) {
      (**(code **)(**(int **)((int)param_1 + 0x14) + 0x2c))
                (*(int **)((int)param_1 + 0x14),0x80040043);
    }
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return iVar1;
}


