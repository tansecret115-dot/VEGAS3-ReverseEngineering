/* Module: pngu3266.dll
   Function: FUN_606126e1
   Address: 606126e1
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_606126e1(HDC param_1,RECT *param_2,undefined *param_3,undefined4 param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  int iVar3;
  BOOL BVar4;
  tagRECT local_2c;
  tagRECT local_1c;
  tagPOINT local_c;
  
  bVar1 = FUN_60612503();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    uVar2 = (*DAT_6064b184)(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  if (param_3 == (undefined *)0x0) {
    return 0;
  }
  local_1c.left = 0;
  local_1c.top = 0;
  local_1c.right = GetSystemMetrics(0);
  local_1c.bottom = GetSystemMetrics(1);
  if (param_1 == (HDC)0x0) {
    if (param_2 == (RECT *)0x0) goto LAB_606127bb;
    iVar3 = IntersectRect(&local_1c,&local_1c,param_2);
  }
  else {
    iVar3 = GetClipBox(param_1,&local_2c);
    if (iVar3 == 0) {
      return 0;
    }
    if (iVar3 == 1) {
      return 1;
    }
    BVar4 = GetDCOrgEx(param_1,&local_c);
    if (BVar4 == 0) {
      return 0;
    }
    OffsetRect(&local_1c,-local_c.x,-local_c.y);
    BVar4 = IntersectRect(&local_1c,&local_1c,&local_2c);
    if (BVar4 == 0) {
      return 1;
    }
    if (param_2 == (RECT *)0x0) goto LAB_606127bb;
    iVar3 = IntersectRect(&local_1c,&local_1c,param_2);
  }
  if (iVar3 == 0) {
    return 1;
  }
LAB_606127bb:
  uVar2 = (*(code *)param_3)(0x12340042,param_1,&local_1c,param_4);
  return uVar2;
}


