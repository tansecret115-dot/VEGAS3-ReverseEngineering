/* Module: rmbe3260.dll
   Function: FUN_6602e060
   Address: 6602e060
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6602e060(char *param_1)

{
  LPSTR lpFilename;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  FARPROC pFVar4;
  DWORD nSize;
  char local_130 [260];
  int local_2c [3];
  int local_20 [3];
  uint local_14;
  char *local_10 [3];
  
  local_14 = 0x104;
  if (DAT_66075234 == 0) {
    FUN_6605b650(local_10);
    FUN_6605b650(local_20);
    if (param_1 == (char *)0x0) {
      nSize = 0x104;
      lpFilename = (LPSTR)FUN_6605bc10(local_10,0x104);
      GetModuleFileNameA((HMODULE)0x0,lpFilename,nSize);
      FUN_6605bc90(local_10,-1);
      FUN_66051ae0(PTR_DAT_6606df7c,PTR_s_pnrscmgr_6606df78,local_130,&local_14);
      iVar3 = FUN_6605bf70(local_10,'\\');
      piVar1 = FUN_6605bf20(local_10,local_2c,iVar3 + 1);
      FUN_6605b900(local_20,piVar1);
      FUN_6605b770(local_2c);
      FUN_6605bba0(local_20,local_130);
      FUN_6605b900(local_10,local_20);
    }
    else {
      FUN_6605b970(local_10,param_1);
    }
    puVar2 = operator_new(0x18);
    if (puVar2 == (undefined4 *)0x0) {
      DAT_6607522c = (void *)0x0;
    }
    else {
      DAT_6607522c = (void *)FUN_660516d0(puVar2);
    }
    iVar3 = FUN_66051780(DAT_6607522c,local_130,4);
    if (iVar3 != 0) {
      FUN_66051780(DAT_6607522c,local_10[0],0);
    }
    pFVar4 = FUN_66051940(DAT_6607522c,s_PNCreateInstance_6606df94);
    if (pFVar4 != (FARPROC)0x0) {
      (*pFVar4)(&DAT_66075234);
    }
    FUN_6605b770(local_20);
    FUN_6605b770((int *)local_10);
  }
  return;
}


