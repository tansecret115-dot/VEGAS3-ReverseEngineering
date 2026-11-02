/* Module: rnco3260.dll
   Function: FUN_636f2640
   Address: 636f2640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_636f2640(void *this,undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = *(undefined4 *)((int)this + 0x14);
  uVar6 = *(undefined4 *)((int)this + 0x30);
  iVar3 = FUN_636f22a0((int)this);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_636f22c0((int)this);
  if (iVar3 == 0) {
    return 0;
  }
  switch(uVar7) {
  case 1:
    uVar7 = 1;
    bVar1 = false;
    break;
  default:
    goto switchD_636f267e_caseD_2;
  case 5:
    uVar7 = 0;
    bVar1 = false;
    break;
  case 9:
    uVar7 = 1;
    goto LAB_636f269d;
  case 0xd:
    uVar7 = 0;
LAB_636f269d:
    bVar1 = true;
  }
  switch(uVar6) {
  case 0:
    uVar6 = 1;
    bVar2 = false;
    break;
  default:
    goto switchD_636f267e_caseD_2;
  case 4:
    uVar6 = 0;
    bVar2 = false;
    break;
  case 8:
    uVar6 = 1;
    goto LAB_636f26d2;
  case 0xc:
    uVar6 = 0;
LAB_636f26d2:
    bVar2 = true;
  }
  if (bVar1) {
    if (!bVar2) {
      pvVar4 = operator_new(0x30);
      if (pvVar4 != (void *)0x0) {
        puVar5 = FUN_636f2c60(pvVar4,FUN_636f10d0,uVar7,uVar6);
        *param_1 = puVar5;
        return 1;
      }
      *param_1 = 0;
      return 1;
    }
  }
  else if (!bVar2) {
    pvVar4 = operator_new(0x30);
    if (pvVar4 != (void *)0x0) {
      puVar5 = FUN_636f2c60(pvVar4,FUN_636f1000,uVar7,uVar6);
      *param_1 = puVar5;
      return 1;
    }
    *param_1 = 0;
    return 1;
  }
switchD_636f267e_caseD_2:
  return 0;
}


