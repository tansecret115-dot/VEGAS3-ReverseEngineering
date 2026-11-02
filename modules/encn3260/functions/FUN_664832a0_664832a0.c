/* Module: encn3260.dll
   Function: FUN_664832a0
   Address: 664832a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664832a0(void *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)param_1 + 0x7e) = 0;
  if (*(int *)((int)param_1 + 0xa6) == 0) {
    FUN_66483190(param_1,0x8004004c,s_Server_is_no_longer_responding_664e22c4);
    return;
  }
  piVar1 = *(int **)((int)param_1 + 0x24);
  *(undefined4 *)((int)param_1 + 0xa6) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x50))(piVar1);
    uVar2 = (**(code **)(**(int **)((int)param_1 + 0x34) + 0xc))
                      (*(int **)((int)param_1 + 0x34),*(undefined4 *)((int)param_1 + 0x82),90000);
    *(undefined4 *)((int)param_1 + 0x7e) = uVar2;
  }
  return;
}


