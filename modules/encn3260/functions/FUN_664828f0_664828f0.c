/* Module: encn3260.dll
   Function: FUN_664828f0
   Address: 664828f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664828f0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  tagMSG local_20;
  
  piVar2 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  piVar1 = (int *)((int)param_1 + 0xa2);
  param_1 = (int *)0x0;
  if (*piVar1 != 0) {
    iVar3 = PeekMessageA(&local_20,(HWND)0x0,0,0,1);
    while (iVar3 != 0) {
      DispatchMessageA(&local_20);
      iVar3 = PeekMessageA(&local_20,(HWND)0x0,0,0,1);
    }
  }
  if (*(int *)((int)piVar2 + 0x6e) != 0) {
    (**(code **)(*piVar2 + 0x28))(piVar2);
    *(undefined4 *)((int)piVar2 + 0x6e) = 0;
  }
  if (*(int *)((int)piVar2 + 0xae) == 1) {
    piVar1 = (int *)piVar2[9];
    if (piVar1 != (int *)0x0) {
      param_1 = (int *)(**(code **)(*piVar1 + 0x68))(piVar1);
      *(undefined4 *)((int)piVar2 + 0xae) = 2;
    }
  }
  else if (*(int *)((int)piVar2 + 0xae) == 2) {
    uVar4 = FUN_66482d80((int)piVar2);
    *(undefined4 *)((int)piVar2 + 0xae) = 0;
    (**(code **)(*piVar2 + 8))(piVar2);
    return uVar4;
  }
  (**(code **)(*piVar2 + 8))(piVar2);
  return param_1;
}


