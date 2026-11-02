/* Module: vegas30.exe
   Function: FUN_005f2fb0
   Address: 005f2fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005f2fb0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *unaff_retaddr;
  int *piVar2;
  int local_4;
  
  piVar2 = *(int **)(param_1 + 0x14c);
  local_4 = param_1;
  iVar1 = (**(code **)(*piVar2 + 0xc))(piVar2,&local_4);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x14c) + 0x34))
                      (*(int **)(param_1 + 0x14c),unaff_retaddr,param_2);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*unaff_retaddr + 0x24))(unaff_retaddr,piVar2);
    }
    (**(code **)(*unaff_retaddr + 8))(unaff_retaddr);
  }
  return iVar1;
}


