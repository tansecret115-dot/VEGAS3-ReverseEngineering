/* Module: rmme3260.dll
   Function: FUN_6625a630
   Address: 6625a630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6625a630(uint param_1)

{
  int iVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int local_8;
  
  if ((DAT_6627f204 & 4) == 0) {
    DAT_6627f204 = DAT_6627f204 | 4;
    FUN_6625b560((undefined4 *)&DAT_6627f1c0);
    FUN_66269170((_onexit_t)&LAB_6625a6e0);
  }
  uVar6 = 0;
  iVar1 = FUN_6625b670((int *)&DAT_6627f1c0);
  if (iVar1 == 0) {
    FUN_6625b5a0((undefined4 *)&DAT_6627f1c0);
  }
  iVar1 = FUN_6625b670((int *)&DAT_6627f1c0);
  if (iVar1 != 0) {
    DAT_6627f218 = DAT_6627f218 + 1;
    DVar2 = GetCurrentProcessId();
    pDVar3 = (DWORD *)FUN_66251070(&DAT_6627f1e8,param_1);
    *pDVar3 = DVar2;
    iVar4 = FUN_66251030(&DAT_6627f1c8,DVar2,&local_8);
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = local_8;
    }
    uVar6 = 1;
    piVar5 = FUN_66251070(&DAT_6627f1c8,DVar2);
    *piVar5 = iVar1 + 1;
  }
  return uVar6;
}


