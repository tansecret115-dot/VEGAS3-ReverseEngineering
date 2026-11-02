/* Module: sfcdi.dll
   Function: cdr_EstimateOperationTime
   Address: 5bf04e70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_EstimateOperationTime(struct HSFCD__ *,enum eGETTIMEESTIMATE_OP,void
   *,unsigned long *) */

long cdr_EstimateOperationTime
               (HSFCD__ *param_1,eGETTIMEESTIMATE_OP param_2,void *param_3,ulong *param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong unaff_ESI;
  eGETTIMEESTIMATE_OP local_c;
  void *local_8;
  undefined4 local_4;
  
                    /* 0x4e70  168
                       ?cdr_EstimateOperationTime@@YGJPAUHSFCD__@@W4eGETTIMEESTIMATE_OP@@PAXPAK@Z */
  if (param_1 == (HSFCD__ *)0x0) {
    return -0x7ff8ffa9;
  }
  if (param_4 == (ulong *)0x0) {
    return -0x7fffbffd;
  }
  *param_4 = 0;
  local_c = param_2;
  local_8 = param_3;
  local_4 = 0;
  uVar1 = FUN_5bf01e80(param_1);
  if (uVar1 != 0) {
    return 0;
  }
  iVar2 = (*(code *)(*(undefined4 **)(param_1 + 0x150))[0x1a])
                    (**(undefined4 **)(param_1 + 0x150),0x17,param_1,&local_c);
  if (iVar2 == 0) {
    *param_4 = unaff_ESI;
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_5bf01bf0((int)param_1,iVar2);
  }
  if (*(HSFSCSIPORT__ **)param_1 != (HSFSCSIPORT__ *)0x0) {
    SfScsi_Close(*(HSFSCSIPORT__ **)param_1);
  }
  return lVar3;
}


