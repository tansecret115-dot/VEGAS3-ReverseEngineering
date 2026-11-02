/* Module: vegas30.exe
   Function: FUN_005f88f0
   Address: 005f88f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005f88f0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int local_360;
  int local_35c [8];
  char local_33c [260];
  int local_238;
  int local_234;
  double local_22c;
  int local_224;
  undefined1 local_1fc [504];
  
  local_35c[0] = 0;
  local_35c[1] = 0;
  local_35c[2] = 0;
  local_35c[3] = 0;
  iVar1 = FUN_005f8b80();
  if (iVar1 < 1) {
    local_360 = 1;
  }
  else {
    do {
      iVar2 = FUN_005f8a90(iVar1,0,local_1fc,500);
      if (iVar2 < 0) {
        return 1;
      }
      piVar3 = local_35c + 4;
      for (iVar2 = 0x54; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar3 = 0;
        piVar3 = piVar3 + 1;
      }
      local_360 = FUN_005f8bc0(local_1fc,0,local_35c + 4);
      if (-1 < local_360) {
        iVar2 = 4;
        bVar5 = true;
        piVar3 = local_35c + 4;
        piVar4 = local_35c;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar5 = *piVar3 == *piVar4;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (bVar5);
        local_360 = 1;
        if (!bVar5) {
          iVar2 = 4;
          bVar5 = true;
          piVar3 = local_35c + 4;
          piVar4 = param_1;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar5 = *piVar3 == *piVar4;
            piVar3 = piVar3 + 1;
            piVar4 = piVar4 + 1;
          } while (bVar5);
          if (!bVar5) goto LAB_005f8a49;
        }
        if ((((local_33c[0] == '\0') ||
             (iVar2 = lstrcmpA(local_33c,(LPCSTR)(param_1 + 4)), iVar2 == 0)) &&
            (((local_238 == 0 && (local_234 == 0)) ||
             ((local_238 == param_1[0x45] && (local_234 == param_1[0x46])))))) &&
           (((local_22c == _DAT_00610fd8 ||
             ((*(double *)(param_1 + 0x48) - _DAT_00612af8 <= local_22c &&
              (local_22c <= *(double *)(param_1 + 0x48) + _DAT_00612af8)))) &&
            ((local_224 == 0 || (local_224 == param_1[0x4a])))))) {
          *param_2 = iVar1;
          return 0;
        }
      }
LAB_005f8a49:
      iVar1 = iVar1 + -1;
    } while (0 < iVar1);
    if (local_360 < 0) {
      return 1;
    }
  }
  return local_360;
}


