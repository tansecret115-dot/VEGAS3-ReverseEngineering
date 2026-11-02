/* Module: encn3260.dll
   Function: FUN_664c6f60
   Address: 664c6f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664c6f60(uint param_1)

{
  int iVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int local_8;
  
  if ((DAT_664f29fc & 4) == 0) {
    DAT_664f29fc = DAT_664f29fc | 4;
    FUN_664c7e90((undefined4 *)&DAT_664f29b8);
    FUN_664d9080((_onexit_t)&LAB_664c7010);
  }
  uVar6 = 0;
  iVar1 = FUN_664c7fa0((int *)&DAT_664f29b8);
  if (iVar1 == 0) {
    FUN_664c7ed0((undefined4 *)&DAT_664f29b8);
  }
  iVar1 = FUN_664c7fa0((int *)&DAT_664f29b8);
  if (iVar1 != 0) {
    DAT_664f2a10 = DAT_664f2a10 + 1;
    DVar2 = GetCurrentProcessId();
    pDVar3 = (DWORD *)FUN_664c3ef0(&DAT_664f29e0,param_1);
    *pDVar3 = DVar2;
    iVar4 = FUN_664c3eb0(&DAT_664f29c0,DVar2,&local_8);
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = local_8;
    }
    uVar6 = 1;
    piVar5 = FUN_664c3ef0(&DAT_664f29c0,DVar2);
    *piVar5 = iVar1 + 1;
  }
  return uVar6;
}


