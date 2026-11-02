/* Module: sfcdi.dll
   Function: FUN_5bf04130
   Address: 5bf04130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf04130(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 *lpParameter;
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  HANDLE pvVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  
  lpParameter = param_1;
  puVar8 = param_1;
  for (iVar6 = 0x736; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  param_1[0x735] = param_4;
  FUN_5bf2c090(param_1 + 0x1d);
  FUN_5bf2c090(param_1 + 0x27);
  if (param_3 == 0) {
    param_1[0xe] = 1;
  }
  else {
    param_1[0xe] = 0;
  }
  param_1[0xd] = 0;
  if (param_1[0xe] != 0) {
    bVar1 = FUN_5bf2bca0(param_2);
    param_1[0xd] = CONCAT31(extraout_var,bVar1);
  }
  param_1[5] = param_2;
  param_1[6] = param_3;
  param_1[7] = *(undefined4 *)(param_4 + 0x78);
  param_1[8] = *(undefined4 *)(param_4 + 0x7c);
  if (param_1[0xe] == 0) {
    param_1[9] = *(undefined4 *)(param_3 + 0x18);
    param_1 = *(undefined4 **)(param_3 + 0x48);
  }
  else {
    iVar6 = FUN_5bf2bbb0(param_2,0);
    param_1[9] = *(int *)(param_2 + 0x1d8c) - *(int *)(iVar6 + 0x10);
    param_1 = *(undefined4 **)(iVar6 + 0x48);
  }
  lpParameter[0x31] = *(undefined4 *)(param_4 + 0xf4);
  uVar2 = *(uint *)(param_4 + 0xf0);
  if (0xff < uVar2) {
    uVar2 = 0x100;
  }
  lpParameter[0x32] = uVar2;
  if (uVar2 < 0x20) {
    uVar2 = 0x20;
  }
  lpParameter[0x32] = uVar2;
  *(uint *)(lpParameter[0x735] + 0x3c) = uVar2;
  lpParameter[0x33] = param_5;
  pvVar3 = GlobalAlloc(0x42,param_5 * lpParameter[0x32] + 0x800);
  pvVar4 = GlobalLock(pvVar3);
  lpParameter[0x34] = pvVar4;
  if (pvVar4 != (LPVOID)0x0) {
    uVar2 = 0;
    uVar7 = ((uint)lpParameter[0x33] / 0x9b0) * (int)param_1;
    if (lpParameter[0x32] != 0) {
      puVar9 = lpParameter + 0x3a;
      do {
        puVar9[-3] = lpParameter[0x33] * uVar2 + (0x800 - ((uint)pvVar4 & 0x800)) +
                     lpParameter[0x34];
        *puVar9 = (uint)param_1;
        puVar9[-2] = uVar7;
        puVar9[-1] = uVar7 / *puVar9;
        FUN_5bf2c120(lpParameter + 0x1d,(int *)(puVar9 + -5));
        uVar2 = uVar2 + 1;
        puVar9 = puVar9 + 7;
      } while (uVar2 < (uint)lpParameter[0x32]);
    }
    pvVar5 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    lpParameter[1] = pvVar5;
    if (pvVar5 != (HANDLE)0x0) {
      pvVar5 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_5bf03fb0,lpParameter,0,lpParameter + 2)
      ;
      *lpParameter = pvVar5;
      if (pvVar5 != (HANDLE)0x0) {
        if (lpParameter[0x31] != 0) {
          FUN_5bf04110((int)lpParameter);
        }
        return 0;
      }
    }
    pvVar3 = GlobalHandle((LPCVOID)lpParameter[0x34]);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle((LPCVOID)lpParameter[0x34]);
    GlobalFree(pvVar3);
  }
  return 0x8007000e;
}


