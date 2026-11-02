/* Module: sfnetmedia.dll
   Function: FUN_0041f800
   Address: 0041f800
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0041f88f) */
/* WARNING: Removing unreachable block (ram,0x0041f8ae) */
/* WARNING: Removing unreachable block (ram,0x0041f8c7) */
/* WARNING: Removing unreachable block (ram,0x0041f896) */
/* WARNING: Recovered jumptable eliminated as dead code */

void FUN_0041f800(undefined4 param_1,int *param_2,uint *param_3)

{
  LPCVOID pvVar1;
  HWND pHVar2;
  int iVar3;
  BYTE *pBVar4;
  HGLOBAL pvVar5;
  int unaff_ESI;
  int iVar6;
  undefined4 *puVar7;
  LPCVOID local_30 [3];
  LPCVOID pvStack_24;
  HWND pHStack_4;
  
  if ((param_2 != (int *)0x0) &&
     (iVar3 = (**(code **)(*param_2 + 0x3c))(param_2,local_30), -1 < iVar3)) {
    iVar6 = 0;
    puVar7 = (undefined4 *)&stack0xffffffcc;
    for (iVar3 = 0xb; pHVar2 = pHStack_4, iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    if (0 < unaff_ESI) {
      do {
        pHStack_4 = (HWND)0x0;
        iVar3 = (**(code **)(*param_2 + 0x48))(param_2,iVar6,&stack0x00000000,&pHStack_4);
        if ((-1 < iVar3) &&
           (iVar3 = FUN_0041f770(param_2,iVar6,0,(undefined4 *)&stack0xffffffcc), -1 < iVar3)) {
          pBVar4 = FUN_00419120(DAT_00441d60,0x1139);
          FUN_00417320(pHVar2,pBVar4);
          FUN_0041f6d0(pHVar2,param_2,iVar6);
          FUN_0041f620(pHVar2,param_2,iVar6);
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


