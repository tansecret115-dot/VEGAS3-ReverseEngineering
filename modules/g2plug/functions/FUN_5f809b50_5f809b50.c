/* Module: g2plug.dll
   Function: FUN_5f809b50
   Address: 5f809b50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f809cc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5f809b50(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5,
                int *param_6,int *param_7,int param_8)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  int *unaff_retaddr;
  int *local_8;
  int *piStack_4;
  
  dVar1 = (double)CONCAT44((param_8 - (int)param_6) - (uint)(param_7 < param_5),
                           (int)param_7 - (int)param_5) * _DAT_5f86af60;
  iVar2 = (**(code **)(*param_4 + 0x10))(param_4);
  if (iVar2 != 0) {
    iVar2 = FUN_5f809710(iVar2);
    return iVar2;
  }
  iVar2 = (**(code **)(*DAT_5f87749c + 0x44))(DAT_5f87749c);
  if (iVar2 != 0) {
    iVar2 = FUN_5f809710(iVar2);
    return iVar2;
  }
  local_8 = SUB84(dVar1,0);
  iVar2 = FUN_5f8097e0((int)param_5,param_6,local_8,param_6);
  if ((iVar2 == 0) && (param_1 != 0)) {
    iVar2 = (int)param_6 + (uint)((int *)0xfffffffe < param_5);
    uVar3 = ftol();
    if ((iVar2 < (int)param_5) ||
       ((iVar2 <= (int)param_5 && ((int *)((int)param_5 + 1U) < param_4)))) {
      uVar5 = 0;
    }
    else {
      uVar5 = 2;
    }
    iVar2 = (**(code **)(*unaff_retaddr + 0xc))
                      (unaff_retaddr,param_1,*(undefined4 *)(unaff_EDI + 0x14),uVar3,uVar5);
    if (iVar2 == 0) {
      piStack_4 = (int *)((ulonglong)dVar1 >> 0x20);
      if (piStack_4 != (int *)0x0) {
        iVar2 = ftol();
        if (0x32 < iVar2) {
          iVar2 = 0x32;
        }
        iVar2 = (**(code **)(*piStack_4 + 4))(iVar2);
        if (iVar2 == 0) {
          iVar2 = -0x7ffb1ff4;
          goto LAB_5f809cdc;
        }
      }
      iVar2 = (**(code **)(*(int *)local_8[0x1b3] + 0x18))((int *)local_8[0x1b3],unaff_retaddr);
      if (iVar2 == 0) {
        iVar2 = 0;
        goto LAB_5f809cdc;
      }
    }
    iVar2 = FUN_5f809710(iVar2);
  }
  else {
    iVar2 = 0;
  }
LAB_5f809cdc:
  (**(code **)(*(int *)local_8[10] + 0x24))(0xffffffff,0xffffffff,0,0,0);
  iVar4 = (**(code **)(*DAT_5f87749c + 0x48))(DAT_5f87749c);
  if (iVar4 != 0) {
    iVar2 = FUN_5f809710(iVar4);
  }
  return iVar2;
}


