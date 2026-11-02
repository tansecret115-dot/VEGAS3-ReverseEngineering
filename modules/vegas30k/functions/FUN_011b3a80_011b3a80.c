/* Module: vegas30k.dll
   Function: FUN_011b3a80
   Address: 011b3a80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011b3a80(int param_1,int *param_2)

{
  int *piVar1;
  HGLOBAL pvVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_18 [2];
  undefined4 *local_10;
  LPCVOID local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pvVar2 = GlobalAlloc(2,*(int *)(param_1 + 0x1a4) +
                         (*(int *)(*(int *)(param_1 + 0x19c) + 0x2c) +
                         *(int *)(*(int *)(param_1 + 0x19c) + 4)) * 4);
  local_c = GlobalLock(pvVar2);
  if (local_c == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  local_10 = (undefined4 *)(*(int *)(param_1 + 0x1a4) + (int)local_c);
  local_18[1] = 0;
  local_18[0] = *(int *)(*(int *)(param_1 + 0x19c) + 4) + *(int *)(*(int *)(param_1 + 0x19c) + 0x2c)
  ;
  puVar5 = local_10;
  for (iVar4 = local_18[0]; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_4 = 0;
  piVar1 = *(int **)(param_1 + 0x1a0);
  local_8 = 0xffffffff;
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  iVar3 = _SfList_InsertList_16(piVar1,0xffffffff,local_18,1);
  if (iVar3 < 0) {
    pvVar2 = GlobalHandle(local_c);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(local_c);
    GlobalFree(pvVar2);
    return iVar3;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
    *param_2 = *(int *)(*(int *)(param_1 + 0x1a0) + 4) * iVar4 +
               *(int *)(*(int *)(param_1 + 0x1a0) + 8);
  }
  return iVar3;
}


