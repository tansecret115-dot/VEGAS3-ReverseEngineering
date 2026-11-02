/* Module: sftrkfx1.dll
   Function: FUN_5cbf7450
   Address: 5cbf7450
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5cbf7450(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  uint uVar3;
  uint uVar4;
  uint local_10;
  int local_c;
  uint local_8;
  HKEY__ local_4;
  
  if (*param_1 != 0) {
    FUN_5cbfe180((int *)&local_10);
    iVar2 = FUN_5cbf8060(param_1);
    if (iVar2 != 0) {
      bVar1 = FUN_5cbfbb20(param_1,(char *)(param_1 + 1));
      return -(uint)(CONCAT31(extraout_var,bVar1) != 0);
    }
    iVar2 = FUN_5cbf8070(param_1);
    if ((iVar2 == 0) && (iVar2 = FUN_5cbf7920(param_1), iVar2 == 0)) {
      return -1;
    }
    if (*(int *)(*param_1 + 4) == 0) {
      iVar2 = FUN_5cbfb310(param_1,(HKEY)(param_1 + 1),&local_8);
      if (iVar2 < 0) {
        return 0;
      }
      iVar2 = FUN_5cbf7550(param_1,&local_c,*param_1);
      uVar4 = local_8;
      if (iVar2 < 0) {
        return 0;
      }
    }
    else {
      local_c = FUN_5cbff550(*param_1);
      if (local_c < 0) {
        return -1;
      }
      uVar4 = *(uint *)(*param_1 + 0x10);
    }
    uVar3 = FUN_5cbf7a10(param_1,&local_4);
    if ((((-1 < (int)uVar3) && ((uint)local_4.unused <= local_10)) &&
        (FUN_5cbf79b0(param_1), uVar4 - 1 <= local_10)) &&
       ((iVar2 = (local_c - local_10) + uVar4, 0 < iVar2 && (iVar2 < 0x3ff)))) {
      return iVar2;
    }
  }
  return 0;
}


