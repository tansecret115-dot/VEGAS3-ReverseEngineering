/* Module: vidcap30.exe
   Function: FUN_004560b0
   Address: 004560b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004560b0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LPCSTR lpString1;
  int local_c;
  int local_8;
  int local_4;
  
  piVar1 = param_2;
  if (*param_3 == 0) {
    local_c = _SfList_CreateExZ_32(param_3,0x118,0xffffffff,0xffffffff,0x40000004,0,0,0);
  }
  else {
    local_c = _SfList_DeleteList_16(*param_3,0,0xffffffff,0);
  }
  if (-1 < local_c) {
    if (param_1 == (int *)0x0) {
      local_4 = 0;
    }
    else {
      local_4 = *param_1;
    }
    if (param_2 == (int *)0x0) {
      param_2 = (int *)0x0;
    }
    else {
      param_2 = (int *)*param_2;
    }
    local_8 = 0;
    if (0 < local_4) {
      do {
        iVar4 = 0;
        lpString1 = (LPCSTR)(param_1[1] * local_8 + param_1[2]);
        if (0 < (int)param_2) {
          do {
            iVar3 = (local_8 + iVar4) % (int)param_2;
            iVar2 = lstrcmpA(lpString1,(LPCSTR)(piVar1[1] * iVar3 + piVar1[2]));
            if (iVar2 == 0) {
              if (-1 < iVar3) goto LAB_0045619f;
              break;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)param_2);
        }
        iVar4 = lstrcmpA(lpString1,"No Capture Device");
        if (iVar4 != 0) {
          local_c = _SfList_InsertList_16(*param_3,0xffffffff,lpString1,1);
        }
LAB_0045619f:
        local_8 = local_8 + 1;
      } while (local_8 < local_4);
    }
  }
  return local_c;
}


