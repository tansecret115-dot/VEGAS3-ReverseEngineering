/* Module: sfcdi.dll
   Function: cdr_SetWriteState
   Address: 5bf02070
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_SetWriteState(struct HSFCD__ *,unsigned int) */

long cdr_SetWriteState(HSFCD__ *param_1,uint param_2)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  HANDLE hEvent;
  
                    /* 0x2070  205  ?cdr_SetWriteState@@YGJPAUHSFCD__@@I@Z */
  if (param_1 == (HSFCD__ *)0x0) {
    return -0x7ff8ffa9;
  }
  iVar1 = *(int *)(param_1 + 0x15c);
  if (iVar1 != 0) {
    switch(param_2) {
    case 1:
    case 2:
      if (*(int *)(param_1 + 0x164) != 0) goto switchD_5bf020a6_default;
      DVar2 = timeGetTime();
      *(DWORD *)(iVar1 + 0x38) = DVar2;
      *(undefined4 *)(iVar1 + 0x34) = 0;
      *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x100);
      iVar3 = cdr_GetTestMode(param_1);
      hEvent = *(HANDLE *)(iVar1 + 0x18);
      *(uint *)(iVar1 + 0x1c) = 4 - (uint)(iVar3 != 0);
      break;
    case 3:
      DVar2 = timeGetTime();
      *(DWORD *)(iVar1 + 0x38) = DVar2;
      *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0xec);
      *(undefined4 *)(iVar1 + 0x34) = 0;
      *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0xe8);
      *(undefined4 *)(iVar1 + 0x24) = 0;
      iVar3 = cdr_GetTestMode(param_1);
      hEvent = *(HANDLE *)(iVar1 + 0x18);
      *(uint *)(iVar1 + 0x1c) = 7 - (uint)(iVar3 != 0);
      break;
    case 4:
      DVar2 = timeGetTime();
      *(DWORD *)(iVar1 + 0x38) = DVar2;
      *(undefined4 *)(iVar1 + 0x34) = 0;
      *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x104);
      iVar3 = cdr_GetTestMode(param_1);
      *(uint *)(iVar1 + 0x1c) = 9 - (uint)(iVar3 != 0);
      hEvent = *(HANDLE *)(iVar1 + 0x18);
      break;
    default:
      goto switchD_5bf020a6_default;
    }
    SetEvent(hEvent);
  }
switchD_5bf020a6_default:
  *(uint *)(param_1 + 0x164) = param_2;
  return 0;
}


