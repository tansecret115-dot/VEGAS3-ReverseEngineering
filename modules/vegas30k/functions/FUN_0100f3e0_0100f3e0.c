/* Module: vegas30k.dll
   Function: FUN_0100f3e0
   Address: 0100f3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0100f3e0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_20 [8];
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
  piVar1 = (int *)param_1[0x12];
  iVar2 = *piVar1;
  puVar4 = param_1;
  if (0 < iVar2) {
LAB_0100f40f:
    iVar2 = iVar2 + -1;
    puVar4 = (undefined4 *)(piVar1[1] * iVar2 + piVar1[2]);
    if (puVar4[1] != param_2[1]) goto code_r0x0100f41c;
    puVar5 = local_20;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    _SfList_DeleteList_16(piVar1,iVar2,1,0);
    puVar4 = local_20;
  }
LAB_0100f44c:
  if ((int)param_1[0x14] < (int)param_1[0x15]) {
    param_1[0x15] = param_1[0x15] + -1;
  }
  else {
    *puVar4 = *param_2;
    puVar4[3] = param_2[3];
    puVar4[4] = param_2[4];
    puVar4[6] = param_2[6];
    puVar4[7] = param_2[7];
    puVar4[5] = param_2[5];
    iVar2 = _SfList_InsertList_16(param_1[0x11],0xffffffff,puVar4,1);
    if (-1 < iVar2) goto LAB_0100f49b;
  }
  VirtualFree((LPVOID)puVar4[1],0,0x8000);
LAB_0100f49b:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
  return;
code_r0x0100f41c:
  puVar4 = (undefined4 *)0x0;
  if (iVar2 < 1) goto LAB_0100f44c;
  goto LAB_0100f40f;
}


