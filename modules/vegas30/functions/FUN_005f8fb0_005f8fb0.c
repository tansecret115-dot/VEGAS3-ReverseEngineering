/* Module: vegas30.exe
   Function: FUN_005f8fb0
   Address: 005f8fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005f8fb0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  LPCSTR lpFileName;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  int local_570 [4];
  uchar local_560 [40];
  uchar local_538 [304];
  int local_408;
  double local_400;
  int local_3f8;
  double local_3f0;
  undefined1 local_3e8 [500];
  undefined1 local_1f4 [500];
  
  *param_2 = -1;
  iVar1 = FUN_005f88f0(param_1,param_2);
  if (iVar1 == 0) {
    iVar2 = FUN_005f9290(*param_2,local_538);
    if (-1 < iVar2) {
      if ((((local_3f8 == param_1[0x50]) && (local_408 == param_1[0x4c])) &&
          (*(double *)(param_1 + 0x4e) - _DAT_0062cf48 <= local_400)) &&
         (((local_400 <= _DAT_0062cf48 + *(double *)(param_1 + 0x4e) &&
           (*(double *)(param_1 + 0x52) - _DAT_0062cf50 <= local_3f0)) &&
          (local_3f0 <= _DAT_0062cf50 + *(double *)(param_1 + 0x52))))) {
        return 0;
      }
      iVar1 = 0;
      if (iVar2 == 0) goto LAB_005f909d;
    }
    *param_2 = -1;
  }
  else {
LAB_005f909d:
    if (iVar1 != 1) {
      return iVar1;
    }
  }
  iVar1 = FUN_005f8b80();
  local_570[0] = 0;
  iVar1 = iVar1 + 1;
  local_570[1] = 0;
  local_570[2] = 0;
  local_570[3] = 0;
  iVar2 = 4;
  bVar4 = true;
  piVar5 = param_1;
  piVar3 = local_570;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar4 = *piVar5 == *piVar3;
    piVar5 = piVar5 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    _mbscpy(local_560,"0");
  }
  else {
    FUN_005f8820(param_1,local_560,0x28,1);
  }
  piVar5 = param_1 + 4;
  if ((char)param_1[4] == '\0') {
    piVar5 = (int *)&DAT_0061b0f4;
  }
  _mbscpy(local_538,(uchar *)piVar5);
  SfPrintF(local_3e8,"%s, \"%s\", %d, %d, %f, %d",local_560,local_538,param_1[0x45],param_1[0x46],
           param_1[0x48],param_1[0x49],param_1[0x4a]);
  SfPrintF(local_1f4,"\"%s\", %f, \"%s\", %f",(&PTR_s_Progressive_00646e10)[param_1[0x4c]],
           param_1[0x4e],param_1[0x4f],(&PTR_DAT_00646e28)[param_1[0x50]],param_1[0x52],
           param_1[0x53]);
  iVar2 = FUN_005f9220(iVar1,0,local_3e8);
  if (iVar2 < 0) {
    return iVar2;
  }
  iVar2 = FUN_005f9220(iVar1,1,local_1f4);
  if (iVar2 < 0) {
    FUN_005f9220(iVar1,0,0);
  }
  else {
    *param_2 = iVar1;
  }
  lpFileName = (LPCSTR)FUN_005f8b10();
  WritePrivateProfileStringA((LPCSTR)0x0,(LPCSTR)0x0,(LPCSTR)0x0,lpFileName);
  return iVar2;
}


