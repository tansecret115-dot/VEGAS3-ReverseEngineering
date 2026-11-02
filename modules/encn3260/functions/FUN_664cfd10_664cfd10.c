/* Module: encn3260.dll
   Function: FUN_664cfd10
   Address: 664cfd10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_664cfd10(undefined4 *param_1)

{
  int *piVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  void *this;
  int iVar4;
  FARPROC pFVar5;
  char local_80c [2048];
  int *local_c;
  int local_8;
  
  local_8 = 0;
  if (*(int *)((int)param_1 + 0xe) != 0) {
    return 0;
  }
  *(undefined4 *)((int)param_1 + 0x22) = 1;
  puVar3 = operator_new(0x18);
  if (puVar3 == (undefined4 *)0x0) {
    this = (void *)0x0;
  }
  else {
    this = (void *)FUN_664d5730(puVar3);
  }
  *(void **)((int)param_1 + 0xe) = this;
  iVar4 = FUN_664d57b0(this,(char *)*param_1,0);
  if (iVar4 == 0) {
    pFVar5 = FUN_664d5970(*(void **)((int)param_1 + 0xe),s_RMACreateInstance_664f0214);
    *(FARPROC *)((int)param_1 + 0x12) = pFVar5;
    if (pFVar5 == (FARPROC)0x0) {
      local_8 = 4;
      sprintf(local_80c,s___35s__s_664f0228,*param_1,s_NO_RMACreateInstance_664f01fc);
      piVar1 = *(int **)((int)param_1 + 0x1e);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))(piVar1,7,0,0,local_80c,0);
      }
    }
    else {
      pFVar5 = FUN_664d5970(*(void **)((int)param_1 + 0xe),s_RMAShutdown_664f01f0);
      *(FARPROC *)((int)param_1 + 0x16) = pFVar5;
      iVar4 = (**(code **)((int)param_1 + 0x12))(&local_c);
      if (iVar4 == 0) {
        iVar4 = (**(code **)*local_c)(local_c,&DAT_664dcd50,(undefined4 *)((int)param_1 + 10));
        if (iVar4 == 0) {
          piVar1 = *(int **)((int)param_1 + 10);
          *(undefined4 *)((int)param_1 + 0x1a) = 1;
          uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1);
          *(undefined2 *)(param_1 + 2) = uVar2;
        }
        else {
          *(undefined4 *)((int)param_1 + 0x1a) = 0;
          *(undefined2 *)(param_1 + 2) = 1;
          (**(code **)(*local_c + 8))(local_c);
        }
      }
      else {
        local_8 = 5;
        sprintf(local_80c,s___35s__s_664f0228,*param_1,s_RMACreateInstance_Failure_664f01d4);
        piVar1 = *(int **)((int)param_1 + 0x1e);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0xc))(piVar1,7,0,0,local_80c,0);
        }
      }
    }
  }
  else {
    local_8 = 3;
    sprintf(local_80c,s___35s__s_664f0228,*param_1,*(undefined4 *)(*(int *)((int)param_1 + 0xe) + 8)
           );
    piVar1 = *(int **)((int)param_1 + 0x1e);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,7,0,0,local_80c,0);
    }
  }
  iVar4 = local_8;
  if ((local_8 != 0) && (*(int *)((int)param_1 + 0xe) != 0)) {
    if (*(code **)((int)param_1 + 0x16) != (code *)0x0) {
      (**(code **)((int)param_1 + 0x16))();
      *(undefined4 *)((int)param_1 + 0x16) = 0;
    }
    FUN_664d5910(*(undefined4 **)((int)param_1 + 0xe));
    puVar3 = *(undefined4 **)((int)param_1 + 0xe);
    if (puVar3 != (undefined4 *)0x0) {
      FUN_664d5750(puVar3);
      operator_delete(puVar3);
    }
    *(undefined4 *)((int)param_1 + 0xe) = 0;
  }
  return iVar4;
}


