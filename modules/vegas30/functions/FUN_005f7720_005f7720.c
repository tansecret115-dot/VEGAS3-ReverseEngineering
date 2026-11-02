/* Module: vegas30.exe
   Function: FUN_005f7720
   Address: 005f7720
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005f7720(int param_1,LPCSTR param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  HGLOBAL pvVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 *unaff_EBP;
  undefined4 *puVar5;
  undefined4 unaff_ESI;
  LPCVOID *ppvVar6;
  undefined4 uVar7;
  undefined4 uStack_248;
  undefined4 *local_244;
  LPCVOID local_240 [2];
  SIZE_T SStack_238;
  SIZE_T SStack_234;
  LPVOID pvStack_230;
  SIZE_T SStack_22c;
  SIZE_T SStack_228;
  WCHAR local_208 [256];
  undefined4 uStack_8;
  undefined2 local_2;
  
  local_240[0] = *(LPCVOID *)(param_1 + 0x10);
  local_240[1] = *(LPCVOID *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = param_3;
  puVar5 = (undefined4 *)(param_1 + 0xc);
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) | 4;
  local_244 = puVar5;
  MultiByteToWideChar(0,1,param_2,-1,local_208,0x104);
  puVar1 = (undefined4 *)(param_1 + 0x90);
  local_2 = 0;
  iVar2 = (**(code **)(*DAT_0064b510 + 0x58))(DAT_0064b510,local_208,puVar1);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*(int *)*puVar1 + 0x48))
                      ((int *)*puVar1,*(undefined4 *)(param_1 + 0x10),&local_244,puVar5);
    if (iVar2 < 0) {
LAB_005f7942:
      (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
      *puVar1 = 0;
    }
    else {
      if (local_244 != (undefined4 *)0x1) {
        iVar2 = -0x7fffbffb;
        goto LAB_005f7942;
      }
      ppvVar6 = local_240;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *ppvVar6 = (LPCVOID)0x0;
        ppvVar6 = ppvVar6 + 1;
      }
      iVar2 = (**(code **)(*(int *)*puVar1 + 0x44))
                        ((int *)*puVar1,local_240,*(undefined4 *)(param_1 + 0x10),1);
      if (iVar2 < 0) goto LAB_005f7942;
      pvVar3 = GlobalAlloc(0x42,SStack_234);
      local_240[1] = GlobalLock(pvVar3);
      SStack_238 = SStack_234;
      pvVar3 = GlobalAlloc(0x42,SStack_228);
      pvStack_230 = GlobalLock(pvVar3);
      SStack_22c = SStack_228;
      if ((local_240[1] == (LPVOID)0x0) || (pvStack_230 == (LPVOID)0x0)) {
        iVar2 = -0x7ff8fff2;
      }
      else {
        iVar2 = (**(code **)(*(int *)*puVar1 + 0x44))
                          ((int *)*puVar1,local_240,*(undefined4 *)(param_1 + 0x10),1);
        if (-1 < iVar2) {
          iVar2 = FUN_005f7450(*(undefined4 *)(param_1 + 8),*puVar1,local_240,&stack0xfffffdac);
          if (iVar2 < 0) {
            if (iVar2 == -0x7ffb1fef) {
              uVar7 = *(undefined4 *)(param_1 + 0x10);
              uVar4 = _SfGetString_8(DAT_00647204,unaff_ESI);
            }
            else {
              uVar7 = *(undefined4 *)(param_1 + 0x10);
              uVar4 = _SfGetString_8(DAT_00647204,unaff_ESI);
            }
            SfErrorHandler_DetailsAddString(iVar2,uVar4,uVar7,uStack_8);
            (**(code **)(**(int **)(param_1 + 0x88) + 8))(*(int **)(param_1 + 0x88));
            *(undefined4 *)(param_1 + 0x88) = 0;
          }
        }
      }
      if (local_240[1] != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(local_240[1]);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(local_240[1]);
        GlobalFree(pvVar3);
        local_240[1] = (LPCVOID)0x0;
      }
      if (pvStack_230 != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(pvStack_230);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(pvStack_230);
        GlobalFree(pvVar3);
      }
      puVar5 = unaff_EBP;
      if (iVar2 < 0) goto LAB_005f7942;
    }
    *(uint *)(*(int *)(param_1 + 8) + 0x134) = *(uint *)(*(int *)(param_1 + 8) + 0x134) | 0x10;
    *(uint *)(*(int *)(param_1 + 8) + 0x134) = *(uint *)(*(int *)(param_1 + 8) + 0x134) | 0x80;
    if (-1 < iVar2) goto LAB_005f7986;
  }
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) | 2;
LAB_005f7986:
  *puVar5 = uStack_248;
  *(undefined4 *)(param_1 + 0x10) = unaff_EBX;
  return iVar2;
}


