/* Module: sfcdi.dll
   Function: TestDrive_AddResultEx
   Address: 5bf0d0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall TestDrive_AddResultEx(struct HSFCD__ *,struct tTESTRESULTHEADER *,void *,unsigned
   long) */

long TestDrive_AddResultEx(HSFCD__ *param_1,tTESTRESULTHEADER *param_2,void *param_3,ulong param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  tTESTRESULTHEADER *ptVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
                    /* 0xd0f0  141
                       ?TestDrive_AddResultEx@@YGJPAUHSFCD__@@PAUtTESTRESULTHEADER@@PAXK@Z */
  piVar1 = (int *)FUN_5bf0d070((int)param_1);
  iVar2 = FUN_5bf2ade0(piVar1,(int *)0x0,param_4 + 0x164,-1,(int *)0x0);
  if ((-1 < iVar2) && (-1 < *piVar1 + -1)) {
    puVar7 = *(undefined4 **)(piVar1[2] + (*piVar1 + -1) * 4);
    if ((param_3 == (void *)0x0) || (param_4 == 0)) {
      *(undefined4 *)(param_2 + 0x160) = 0;
    }
    else {
      *(ulong *)(param_2 + 0x160) = param_4;
    }
    ptVar5 = param_2;
    puVar6 = puVar7;
    for (iVar3 = 0x59; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *(undefined4 *)ptVar5;
      ptVar5 = ptVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    if (*(int *)(param_2 + 0x160) != 0) {
      puVar7 = puVar7 + 0x59;
      for (uVar4 = param_4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *(undefined4 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 4);
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = param_4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
    }
  }
  return iVar2;
}


