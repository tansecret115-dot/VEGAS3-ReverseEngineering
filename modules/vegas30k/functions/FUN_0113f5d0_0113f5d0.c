/* Module: vegas30k.dll
   Function: FUN_0113f5d0
   Address: 0113f5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0113f5d0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined4 *puVar1;
  SIZE_T dwBytes;
  undefined4 uVar2;
  LPCVOID pMem;
  HGLOBAL pvVar3;
  undefined4 *pMem_00;
  int iVar4;
  LPVOID pvVar5;
  undefined4 *puVar6;
  int *piVar7;
  int unaff_ESI;
  undefined4 unaff_retaddr;
  int *in_stack_00000034;
  WCHAR aWStack_224 [274];
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if (param_1 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  pvVar3 = GlobalAlloc(0x40,0xec);
  pMem_00 = GlobalLock(pvVar3);
  if (pMem_00 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  pMem_00[2] = param_2;
  puVar1 = pMem_00 + 1;
  *pMem_00 = param_1;
  pMem_00[3] = in_stack_00000034;
  iVar4 = (**(code **)*param_1)();
  if (iVar4 < 0) {
    pvVar3 = GlobalHandle(pMem_00);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem_00);
    GlobalFree(pvVar3);
    return 0x80004002;
  }
  if (in_stack_00000034 != (int *)0x0) {
    (**(code **)*in_stack_00000034)(in_stack_00000034);
    (**(code **)(*in_stack_00000034 + 0x20))(in_stack_00000034,0,pMem_00 + 6);
    dwBytes = pMem_00[6];
    if (dwBytes != 0) {
      pvVar3 = GlobalAlloc(0x40,dwBytes);
      pvVar5 = GlobalLock(pvVar3);
      pMem_00[5] = pvVar5;
    }
    if (pMem_00[5] == 0) {
      pvVar3 = GlobalHandle(pMem_00);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pMem_00);
      GlobalFree(pvVar3);
      return 0x8007000e;
    }
    (**(code **)(*(int *)*puVar1 + 0x38))((int *)*puVar1,&stack0xfffffccc);
    iVar4 = 0;
    if (0 < unaff_ESI) {
      do {
        (**(code **)(*(int *)*puVar1 + 0x3c))((int *)*puVar1,iVar4);
        if ((&stack0x00000000 == (undefined1 *)0x224) || (aWStack_224[0] != L'\0')) {
          WideCharToMultiByte(0,0,aWStack_224,-1,&stack0xfffffcd8,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        (**(code **)(*(int *)pMem_00[3] + 0x14))((int *)pMem_00[3],*puVar1,&stack0xfffffcd8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < unaff_ESI);
    }
  }
  pMem_00[7] = unaff_retaddr;
  pMem_00[8] = param_1;
  uVar2 = *param_2;
  pMem_00[9] = uVar2;
  pMem_00[10] = uVar2;
  pMem_00[0xb] = param_3;
  pMem_00[0xc] = param_4;
  pMem_00[0xd] = param_5;
  pMem_00[0xe] = param_6;
  pMem_00[0x11] = param_7;
  pMem_00[0xf] = param_8;
  pMem_00[0x10] = param_9;
  pvVar3 = GlobalAlloc(0x40,0xc);
  puVar6 = GlobalLock(pvVar3);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[1] = 0;
    puVar6[2] = pMem_00;
    *puVar6 = &PTR_LAB_011e6d54;
  }
  pMem_00[0x20] = puVar6;
  iVar4 = FUN_01141710();
  if (iVar4 == 0) {
    *param_2 = pMem_00[10];
    piVar7 = (int *)pMem_00[2];
    iVar4 = *piVar7;
  }
  else {
    *param_2 = pMem_00[9];
    piVar7 = (int *)pMem_00[2];
    iVar4 = *piVar7;
  }
  (**(code **)(iVar4 + 0x7c))(piVar7);
  (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
  piVar7 = (int *)pMem_00[4];
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))(piVar7);
  }
  pMem = (LPCVOID)pMem_00[0x20];
  pvVar3 = GlobalHandle(pMem);
  GlobalUnlock(pvVar3);
  pvVar3 = GlobalHandle(pMem);
  GlobalFree(pvVar3);
  if ((LPCVOID)pMem_00[5] != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle((LPCVOID)pMem_00[5]);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle((LPCVOID)pMem_00[5]);
    GlobalFree(pvVar3);
  }
  pvVar3 = GlobalHandle(pMem_00);
  GlobalUnlock(pvVar3);
  pvVar3 = GlobalHandle(pMem_00);
  GlobalFree(pvVar3);
  return (uint)(param_1 != (undefined4 *)0x1);
}


