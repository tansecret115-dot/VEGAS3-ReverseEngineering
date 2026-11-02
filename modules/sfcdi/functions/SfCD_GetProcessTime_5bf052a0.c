/* Module: sfcdi.dll
   Function: SfCD_GetProcessTime
   Address: 5bf052a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCD_GetProcessTime(struct HSFCD__ *,unsigned int,unsigned long *) */

long SfCD_GetProcessTime(HSFCD__ *param_1,uint param_2,ulong *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_84;
  ulong uStack_80;
  undefined4 local_70;
  undefined4 local_64 [20];
  ulong local_14;
  ulong local_10;
  ulong local_c;
  ulong local_8;
  
  puVar4 = local_64;
                    /* 0x52a0  59  ?SfCD_GetProcessTime@@YGJPAUHSFCD__@@IPAK@Z */
  for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *param_3 = 0;
  local_64[0] = 100;
  cdr_GetDeviceCaps(param_1,(cdrcaps_tag *)local_64);
  switch(param_2) {
  case 0:
    *param_3 = local_10;
    return 0;
  case 1:
    *param_3 = local_14;
    return 0;
  case 2:
    *param_3 = local_c;
    return 0;
  case 3:
    *param_3 = local_8;
    return 0;
  case 4:
    local_84 = 0;
    cdr_CloseSession(param_1,(tCDRPARAMS_CLOSESESSION *)&local_84);
    local_70 = 0;
    if (param_1 != (HSFCD__ *)0x0) {
      uVar1 = FUN_5bf01e80(param_1);
      if (uVar1 == 0) {
        iVar2 = (*(code *)(*(undefined4 **)(param_1 + 0x150))[0x1a])
                          (**(undefined4 **)(param_1 + 0x150),0x16,param_1,&local_84);
        iVar3 = 0;
        if (iVar2 != 0) {
          iVar3 = FUN_5bf01bf0((int)param_1,iVar2);
        }
        if (*(HSFSCSIPORT__ **)param_1 != (HSFSCSIPORT__ *)0x0) {
          SfScsi_Close(*(HSFSCSIPORT__ **)param_1);
        }
        if (iVar3 == 0) {
          *param_3 = uStack_80;
        }
      }
      return 0;
    }
  }
  return -0x7ff8ffa9;
}


