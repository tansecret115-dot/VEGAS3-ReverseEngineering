/* Module: rmto3260.dll
   Function: FUN_662f53b0
   Address: 662f53b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_662f53b0(char *param_1)

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
  if (DAT_66311d58 == 0) {
    FUN_662eefd0(local_10);
    FUN_662eefd0(local_20);
    if (param_1 == (char *)0x0) {
      nSize = 0x104;
      lpFilename = (LPSTR)FUN_662ef590(local_10,0x104);
      GetModuleFileNameA((HMODULE)0x0,lpFilename,nSize);
      FUN_662ef610(local_10,-1);
      FUN_662f3050(PTR_DAT_6630b614,PTR_s_pnrscmgr_6630b610,local_130,&local_14);
      iVar3 = FUN_662ef7f0(local_10,'\\');
      piVar1 = FUN_662ef7a0(local_10,local_2c,iVar3 + 1);
      FUN_662ef280(local_20,piVar1);
      FUN_662ef0f0(local_2c);
      FUN_662ef520(local_20,local_130);
      FUN_662ef280(local_10,local_20);
    }
    else {
      FUN_662ef2f0(local_10,param_1);
    }
    puVar2 = operator_new(0x18);
    if (puVar2 == (undefined4 *)0x0) {
      DAT_66311d50 = (void *)0x0;
    }
    else {
      DAT_66311d50 = (void *)FUN_662f2c60(puVar2);
    }
    iVar3 = FUN_662f2ce0(DAT_66311d50,local_130,4);
    if (iVar3 != 0) {
      FUN_662f2ce0(DAT_66311d50,local_10[0],0);
    }
    pFVar4 = FUN_662f2ea0(DAT_66311d50,s_PNCreateInstance_6630b62c);
    if (pFVar4 != (FARPROC)0x0) {
      (*pFVar4)(&DAT_66311d58);
    }
    FUN_662ef0f0(local_20);
    FUN_662ef0f0((int *)local_10);
  }
  return;
}


