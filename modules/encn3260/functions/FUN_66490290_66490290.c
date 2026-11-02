/* Module: encn3260.dll
   Function: FUN_66490290
   Address: 66490290
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_66490290(void *param_1)

{
  int iVar1;
  uint uVar2;
  int *local_8;
  
  uVar2 = 0;
  local_8 = (int *)0x0;
  iVar1 = FUN_6648f750(param_1,&local_8);
  if (iVar1 == 0) {
    if (*(int *)((int)param_1 + 0x30) == 0) {
      iVar1 = (**(code **)(**(int **)((int)param_1 + 0x90) + 0x1c))
                        (*(int **)((int)param_1 + 0x90),*(undefined4 *)((int)param_1 + 0x94),
                         *(undefined2 *)((int)param_1 + 0x98),local_8);
    }
    else {
      do {
        if (iVar1 != 0) break;
        iVar1 = (**(code **)(**(int **)((int)param_1 + 0x90) + 0x1c))
                          (*(int **)((int)param_1 + 0x90),*(undefined4 *)((int)param_1 + 0x94),
                           *(undefined2 *)((int)param_1 + 0x98),local_8);
        uVar2 = uVar2 + 1;
      } while (uVar2 < 5);
    }
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return iVar1;
}


