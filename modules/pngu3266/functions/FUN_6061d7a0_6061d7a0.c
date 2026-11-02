/* Module: pngu3266.dll
   Function: FUN_6061d7a0
   Address: 6061d7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6061d7a0(char *param_1)

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
  if (DAT_6064b43c == 0) {
    FUN_60618bb0(local_10);
    FUN_60618bb0(local_20);
    if (param_1 == (char *)0x0) {
      nSize = 0x104;
      lpFilename = (LPSTR)FUN_60619190(local_10,0x104);
      GetModuleFileNameA((HMODULE)0x0,lpFilename,nSize);
      FUN_60619210(local_10,-1);
      FUN_60623290(PTR_DAT_60649730,PTR_s_pnrscmgr_6064972c,local_130,&local_14);
      iVar3 = FUN_606194d0(local_10,'\\');
      piVar1 = FUN_60619450(local_10,local_2c,iVar3 + 1);
      FUN_60618e60(local_20,piVar1);
      FUN_60618cd0(local_2c);
      FUN_60619100(local_20,local_130);
      FUN_60618e60(local_10,local_20);
    }
    else {
      FUN_60618ed0(local_10,param_1);
    }
    puVar2 = operator_new(0x18);
    if (puVar2 == (undefined4 *)0x0) {
      DAT_6064b434 = (void *)0x0;
    }
    else {
      DAT_6064b434 = (void *)FUN_60622ea0(puVar2);
    }
    iVar3 = FUN_60622f20(DAT_6064b434,local_130,4);
    if (iVar3 != 0) {
      FUN_60622f20(DAT_6064b434,local_10[0],0);
    }
    pFVar4 = FUN_606230e0(DAT_6064b434,s_PNCreateInstance_60649748);
    if (pFVar4 != (FARPROC)0x0) {
      (*pFVar4)(&DAT_6064b43c);
    }
    FUN_60618cd0(local_20);
    FUN_60618cd0((int *)local_10);
  }
  return;
}


