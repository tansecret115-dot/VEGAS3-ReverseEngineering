/* Module: sfcdi.dll
   Function: cdr_AutoFindDevices
   Address: 5bf07d80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_AutoFindDevices(struct tSFLIST * *,unsigned long) */

long cdr_AutoFindDevices(tSFLIST **param_1,ulong param_2)

{
  tPARAMETERS_DEVDES *ptVar1;
  tSFLIST **pptVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  tSFLIST *ptVar6;
  undefined4 *local_68;
  undefined4 local_64 [13];
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
                    /* 0x7d80  159  ?cdr_AutoFindDevices@@YGJPAPAUtSFLIST@@K@Z */
  pptVar2 = param_1;
  lVar3 = FUN_5bf2b110((int *)param_1,4,-1,-1,0x40000002);
  if (-1 < lVar3) {
    if (DAT_5bf65ff4 == (undefined4 *)0x0) {
      local_68 = DAT_5bf65ff4;
    }
    else {
      local_68 = (undefined4 *)*DAT_5bf65ff4;
    }
    puVar5 = (undefined4 *)0x0;
    if (local_68 != (undefined4 *)0x0) {
      do {
        ptVar1 = *(tPARAMETERS_DEVDES **)(DAT_5bf65ff4[2] + (int)puVar5 * 4);
        if (*(int *)ptVar1 == -1) {
          if (((param_2 & 1) != 0) || (*(int *)(ptVar1 + 0x1b0) != 0)) {
LAB_5bf07e74:
            if (*(int *)ptVar1 == -1) {
              if ((param_2 & 2) == 0) goto LAB_5bf07ea5;
              ptVar6 = *pptVar2;
            }
            else {
              ptVar6 = *pptVar2;
            }
            goto LAB_5bf07ea0;
          }
          iVar4 = FUN_5bf07c60((uint *)ptVar1);
          if (iVar4 < 0) {
            *(undefined4 *)(ptVar1 + 0x1b0) = 1;
            goto LAB_5bf07e74;
          }
          param_1 = (tSFLIST **)0x0;
          lVar3 = cdr_Open(ptVar1,(HSFCD__ **)&param_1);
          if (-1 < lVar3) {
            local_64[0] = 100;
            cdr_GetDeviceCaps((HSFCD__ *)param_1,(cdrcaps_tag *)local_64);
            cdr_Close((HSFCD__ *)param_1);
            *(undefined4 *)(ptVar1 + 0x1a4) = local_2c;
            *(undefined4 *)(ptVar1 + 0x1a8) = local_28;
            *(uint *)(ptVar1 + 0x1a0) = local_30 | 0x4000;
            goto LAB_5bf07e74;
          }
        }
        else {
          ptVar6 = *pptVar2;
LAB_5bf07ea0:
          FUN_5bf2ade0((int *)ptVar6,(int *)ptVar1,0x234,-1,(int *)0x0);
        }
LAB_5bf07ea5:
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      } while (puVar5 < local_68);
    }
    lVar3 = 0;
  }
  return lVar3;
}


