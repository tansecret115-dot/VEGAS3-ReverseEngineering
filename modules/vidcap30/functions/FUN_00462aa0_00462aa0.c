/* Module: vidcap30.exe
   Function: FUN_00462aa0
   Address: 00462aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00462aa0(LPCSTR param_1,undefined4 *param_2)

{
  int *piVar1;
  LPCSTR lpString2;
  HGLOBAL pvVar2;
  int iVar3;
  LPCVOID pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined **ppuVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  int local_24;
  CHAR local_1c [24];
  undefined1 local_4;
  
  pvVar4 = DAT_005bba40;
  local_34 = 0;
  if (DAT_005bba40 != (LPCVOID)0x0) {
    FUN_0056dee0();
    pvVar2 = GlobalHandle(pvVar4);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar4);
    GlobalFree(pvVar2);
    DAT_005bba40 = (LPCVOID)0x0;
  }
  lpString2 = param_1;
  if ((param_1 == (LPCSTR)0x0) || (*param_1 == '\0')) {
    DAT_005bba40 = (LPCVOID)FUN_00462030();
    bVar10 = DAT_005bba40 != (LPCVOID)0x0;
    if (bVar10) {
      uVar6 = FUN_0056f6d0();
      *param_2 = uVar6;
    }
    return bVar10;
  }
  lstrcpynA((LPSTR)&param_1,param_1,3);
  param_1._0_3_ = (uint3)(ushort)param_1;
  iVar3 = FUN_00575110(&param_1,3);
  iVar9 = 0;
  ppuVar7 = &PTR_DAT_005b6458;
  while (iVar3 != *(int *)*ppuVar7) {
    ppuVar7 = ppuVar7 + 3;
    iVar9 = iVar9 + 1;
    if (0x5b6463 < (int)ppuVar7) {
      return false;
    }
  }
  iVar3 = FUN_00574dc0(lpString2);
  if (iVar3 != 0) {
    return false;
  }
  pvVar4 = (LPCVOID)FUN_004621b0((&PTR_DAT_005b6458)[iVar9 * 3]);
  if (pvVar4 == (LPCVOID)0x0) {
    return false;
  }
  lstrcpynA(local_1c,lpString2,0x19);
  local_4 = 0;
  local_30 = 0;
  iVar3 = FUN_00570bd0(local_28,&local_38,local_1c,local_2c,&local_34);
  if (iVar3 == -0x7ffb1eb2) {
    iVar3 = 0x4e136;
    local_30 = 1;
  }
  else if (iVar3 < 0) goto LAB_00462c51;
  iVar5 = 0;
  if (0 < (int)(&DAT_005b6460)[iVar9 * 3]) {
    piVar1 = (int *)(&PTR_DAT_005b645c)[iVar9 * 3];
    piVar8 = piVar1;
    do {
      if (local_38 == *piVar8) {
        local_24 = piVar1[iVar5 * 2];
        FUN_00570ec0(local_38,piVar1[iVar5 * 2 + 1]);
        if (local_30 != 0) {
          iVar3 = FUN_00570bd0(local_28,&local_38,local_1c,local_2c,&local_34);
        }
        if (-1 < iVar3) {
          DAT_005bba40 = pvVar4;
          *param_2 = local_34;
          return true;
        }
        break;
      }
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 2;
    } while (iVar5 < (int)(&DAT_005b6460)[iVar9 * 3]);
  }
LAB_00462c51:
  FUN_00570ec0(local_38,1);
  FUN_0056dee0();
  pvVar2 = GlobalHandle(pvVar4);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pvVar4);
  GlobalFree(pvVar2);
  return false;
}


