/* Module: vidcap30.exe
   Function: FUN_004ba570
   Address: 004ba570
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004ba5ff) */
/* WARNING: Removing unreachable block (ram,0x004ba61e) */
/* WARNING: Removing unreachable block (ram,0x004ba637) */
/* WARNING: Removing unreachable block (ram,0x004ba606) */
/* WARNING: Recovered jumptable eliminated as dead code */

void FUN_004ba570(undefined4 param_1,int *param_2)

{
  LPCVOID pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  HGLOBAL pvVar5;
  int unaff_ESI;
  int iVar6;
  undefined4 *puVar7;
  LPCVOID local_30 [3];
  LPCVOID pvStack_24;
  undefined4 uStack_4;
  
  if ((param_2 != (int *)0x0) &&
     (iVar3 = (**(code **)(*param_2 + 0x3c))(param_2,local_30), -1 < iVar3)) {
    iVar6 = 0;
    puVar7 = (undefined4 *)&stack0xffffffcc;
    for (iVar3 = 0xb; uVar2 = uStack_4, iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    if (0 < unaff_ESI) {
      do {
        uStack_4 = 0;
        iVar3 = (**(code **)(*param_2 + 0x48))(param_2,iVar6,&stack0x00000000,&uStack_4);
        if ((-1 < iVar3) && (iVar3 = FUN_004ba4e0(param_2,iVar6,0,&stack0xffffffcc), -1 < iVar3)) {
          iVar3 = iVar6 + 1;
          uVar4 = _SfGetString2_8(DAT_005c16d8,0x1139);
          SfMEditPrintF(uVar2,uVar4,iVar3);
          FUN_004ba440(uVar2,param_2,iVar6,0);
          FUN_004ba390(uVar2,param_2,iVar6,0);
        }
        pvVar1 = local_30[0];
        if (local_30[0] != (LPCVOID)0x0) {
          pvVar5 = GlobalHandle(local_30[0]);
          GlobalUnlock(pvVar5);
          pvVar5 = GlobalHandle(pvVar1);
          GlobalFree(pvVar5);
          local_30[0] = (LPCVOID)0x0;
        }
        pvVar1 = pvStack_24;
        if (pvStack_24 != (LPCVOID)0x0) {
          pvVar5 = GlobalHandle(pvStack_24);
          GlobalUnlock(pvVar5);
          pvVar5 = GlobalHandle(pvVar1);
          GlobalFree(pvVar5);
          pvStack_24 = (LPCVOID)0x0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < unaff_ESI);
    }
  }
  return;
}


