/* Module: rmto3260.dll
   Function: FUN_662f57a0
   Address: 662f57a0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_662f57a0(char *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  int iVar3;
  undefined4 local_1c [5];
  int local_8;
  
  bVar1 = FUN_662f5740(param_1);
  iVar3 = 0;
  local_8 = 2;
  do {
    piVar2 = FUN_662f0880(0);
    if (piVar2 == (int *)0x0) {
      iVar3 = -0x7ff8fff2;
    }
    if (-1 < iVar3) {
      iVar3 = (**(code **)(*piVar2 + 0x10))
                        (param_1,(-(uint)(CONCAT31(extraout_var,bVar1) != 0) & 0xffffff08) + 0x102,1
                        );
      if (-1 < iVar3) {
        iVar3 = (**(code **)(*piVar2 + 0x18))();
      }
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)*piVar2)(1);
    }
    if ((-1 < iVar3) && (CONCAT31(extraout_var,bVar1) == 0)) {
      FUN_662f30d0(local_1c);
      FUN_662f38d0(local_1c,param_1);
      FUN_662f30f0(local_1c);
    }
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return -1 < iVar3;
}


