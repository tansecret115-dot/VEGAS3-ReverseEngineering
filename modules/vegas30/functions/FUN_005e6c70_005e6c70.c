/* Module: vegas30.exe
   Function: FUN_005e6c70
   Address: 005e6c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005e6c70(undefined4 *param_1,LPSTR param_2)

{
  SIZE_T SVar1;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  LPCWSTR lpWideCharStr;
  undefined4 *puVar8;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (LPSTR)0x0)) {
    *(undefined4 *)(param_2 + 0x104) = *param_1;
    SVar1 = param_1[1];
    *(SIZE_T *)(param_2 + 0x10c) = SVar1;
    pvVar2 = GlobalAlloc(0x42,SVar1);
    puVar3 = GlobalLock(pvVar2);
    uVar6 = *(uint *)(param_2 + 0x10c);
    *(undefined4 **)(param_2 + 0x108) = puVar3;
    puVar8 = param_1 + 2;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar3 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    puVar7 = (uint *)((int)(param_1 + 2) + *(int *)(param_2 + 0x10c));
    uVar6 = *puVar7;
    lpWideCharStr = (LPCWSTR)(puVar7 + 1);
    if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
      WideCharToMultiByte(0,0,lpWideCharStr,-1,param_2,uVar6 >> 1,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else {
      *param_2 = '\0';
    }
    param_2[(uVar6 >> 1) - 1] = '\0';
    SVar1 = *(SIZE_T *)lpWideCharStr;
    *(SIZE_T *)(param_2 + 0x114) = SVar1;
    if (SVar1 != 0) {
      pvVar2 = GlobalAlloc(0x42,SVar1);
      puVar4 = GlobalLock(pvVar2);
      uVar6 = *(uint *)(param_2 + 0x114);
      *(uint **)(param_2 + 0x110) = puVar4;
      puVar7 = puVar7 + 2;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar4 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)puVar4 = (char)*puVar7;
        puVar7 = (uint *)((int)puVar7 + 1);
        puVar4 = (uint *)((int)puVar4 + 1);
      }
    }
  }
  return;
}


