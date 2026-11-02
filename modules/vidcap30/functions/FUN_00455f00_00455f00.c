/* Module: vidcap30.exe
   Function: FUN_00455f00
   Address: 00455f00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00455f00(int *param_1,int *param_2,LPSTR param_3,int param_4,LPCSTR param_5,int *param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  LPCSTR lpString2;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int *local_c;
  int local_8;
  uint local_4;
  
  bVar7 = false;
  local_c = (int *)0x0;
  FUN_004560b0(param_2,param_1,&local_c);
  piVar1 = param_6;
  if (param_6 == (int *)0x0) {
    FUN_004561d0(local_c);
  }
  local_4 = 0xffffffff;
  local_8 = *local_c;
  if (local_8 < 1) {
LAB_00455fde:
    param_6 = (int *)0x0;
    FUN_004560b0(param_1,param_2,&param_6);
    iVar6 = 0;
    iVar2 = *param_6;
    if (0 < iVar2) {
      do {
        iVar4 = lstrcmpA((LPCSTR)(param_6[1] * iVar6 + param_6[2]),param_3);
        if (iVar4 == 0) {
          bVar7 = true;
          break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar2);
    }
    _SfList_Destroy_4(param_6);
    if (!bVar7) goto LAB_0045608d;
  }
  else {
    bVar7 = DAT_005bb440 != 0;
    if ((param_1 == (int *)0x0) || (*param_1 < 2)) {
      bVar7 = true;
    }
    if ((piVar1 != (int *)0x0) && (uVar5 = 0, 0 < local_8)) {
      do {
        iVar2 = lstrcmpA((LPCSTR)(local_c[1] * uVar5 + local_c[2]),param_5);
        if (iVar2 == 0) {
          bVar7 = true;
          local_4 = uVar5;
          goto LAB_00455fac;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < local_8);
    }
    if (!bVar7) goto LAB_00455fde;
LAB_00455fac:
    uVar3 = FUN_0043df30();
    iVar2 = FUN_00428e00(uVar3);
    if ((iVar2 != 0) || (iVar2 = FUN_004264b0(uVar3), iVar2 != 0)) {
      bVar7 = false;
      goto LAB_00455fde;
    }
    if (!bVar7) goto LAB_00455fde;
  }
  if (local_8 < 1) {
    lpString2 = (LPCSTR)((uint)(1 < *param_2) * param_2[1] + param_2[2]);
  }
  else {
    lpString2 = (LPCSTR)(local_c[1] * (((int)local_4 < 0) - 1 & local_4) + local_c[2]);
  }
  if (lpString2 != (LPCSTR)0x0) {
    lstrcpynA(param_3,lpString2,param_4);
    param_3[param_4 + -1] = '\0';
  }
LAB_0045608d:
  _SfList_Destroy_4(local_c);
  return;
}


