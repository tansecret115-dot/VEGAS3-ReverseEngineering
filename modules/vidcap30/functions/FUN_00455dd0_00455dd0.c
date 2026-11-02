/* Module: vidcap30.exe
   Function: FUN_00455dd0
   Address: 00455dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00455dd0(int *param_1,int param_2,code *param_3,uchar *param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int *local_108;
  uchar local_104 [260];
  
  piVar1 = (int *)*param_1;
  local_108 = (int *)0x0;
  iVar2 = FUN_004550d0(&local_108,param_2);
  if (-1 < iVar2) {
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if (((local_108 == (int *)0x0) || (-1 < *local_108)) && (-1 < iVar2)) {
      _mbscpy(local_104,param_4);
      iVar2 = DAT_005b5ea8;
      if (param_2 != 1) {
        iVar2 = DAT_005b5eac;
      }
      FUN_00455f00(piVar1,local_108,local_104,0x104,param_5,iVar2);
      if (param_2 == 1) {
        if (DAT_005b5ea8 != 0) {
          DAT_005b5ea8 = 0;
        }
      }
      else if (DAT_005b5eac != 0) {
        DAT_005b5eac = 0;
      }
      if (*param_1 != 0) {
        _SfList_Destroy_4(*param_1);
      }
      *param_1 = (int)local_108;
      iVar2 = lstrcmpA((LPCSTR)local_104,(LPCSTR)param_4);
      if (iVar2 != 0) {
        (*param_3)(*(undefined4 *)(DAT_005ba4c0 + 0x6c),local_104);
        return 1;
      }
      return 0;
    }
  }
  return 0;
}


