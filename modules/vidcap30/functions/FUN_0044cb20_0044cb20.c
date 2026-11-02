/* Module: vidcap30.exe
   Function: FUN_0044cb20
   Address: 0044cb20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044cb20(undefined4 param_1,LPCSTR param_2,LPCSTR param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = DAT_005bb838;
  iVar2 = lstrlenA(param_2);
  iVar3 = lstrcmpA(param_2,param_3);
  if (iVar3 == 0) {
    return 1;
  }
  cVar1 = param_2[iVar2 + -1];
  for (; (cVar1 != '\\' && (0 < iVar2)); iVar2 = iVar2 + -1) {
    cVar1 = param_2[iVar2 + -2];
  }
  param_3 = param_3 + iVar2;
  iVar2 = FUN_0044cae0(param_1);
  if (iVar2 == 3) {
    uVar4 = FUN_0044d080(uVar4,param_1,param_3);
    return uVar4;
  }
  if (iVar2 == 4) {
    uVar4 = FUN_0044cbc0(uVar4,param_1,param_3);
    return uVar4;
  }
  if (iVar2 == 5) {
    uVar4 = FUN_0044ce00(uVar4,param_1,param_3);
    return uVar4;
  }
  return 1;
}


