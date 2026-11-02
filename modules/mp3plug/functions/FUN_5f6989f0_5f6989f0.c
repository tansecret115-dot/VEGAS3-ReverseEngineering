/* Module: mp3plug.dll
   Function: FUN_5f6989f0
   Address: 5f6989f0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __fastcall FUN_5f6989f0(int *param_1)

{
  DWORD *pDVar1;
  short sVar2;
  int *piVar3;
  ushort uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  HGLOBAL hMem;
  undefined2 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  CHAR local_12c [31];
  undefined1 local_10d;
  undefined4 local_108;
  WCHAR local_104 [38];
  uint local_b8 [2];
  byte local_b0;
  ushort local_3c [6];
  int local_30;
  int local_2c;
  uint *local_28;
  uint local_24 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  char *local_8;
  
  local_8 = (char *)0xffffffff;
  puStack_c = &DAT_5f72d288;
  puStack_10 = &DAT_5f72a230;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffe94;
  if (param_1[3] != 0) {
    return (char *)0x0;
  }
  ExceptionList = &local_14;
  puVar5 = &stack0xfffffe94;
  if (param_1[2] == 0) {
LAB_5f698d19:
    local_1c = puVar5;
    pcVar6 = (char *)0x8004e007;
  }
  else {
    ExceptionList = &local_14;
    param_1[0x68] = 1;
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    pDVar1 = (DWORD *)(param_1 + 0x20);
    pcVar6 = (char *)FUN_5f697990((void *)param_1[9],param_1 + 0x1f,pDVar1);
    if ((pcVar6 == (char *)0x0) && (0x480 < (int)*pDVar1)) {
      pcVar7 = FUN_5f698520(param_1,(int *)&local_28,local_24);
      if ((int)pcVar7 < 0) {
        iVar9 = -1;
      }
      else {
        param_1[0x21] = (int)local_28;
        param_1[0x22] = local_24[0];
        uVar8 = local_24[0];
        if (0x400 < (int)local_24[0]) {
          uVar8 = 0x400;
        }
        local_8 = pcVar6;
        iVar9 = FUN_5f70fa60((int)local_28,uVar8,(undefined2 *)(param_1 + 0xd),0);
        local_8 = (char *)0xffffffff;
        local_2c = iVar9;
      }
      puVar5 = local_1c;
      if (iVar9 < 0) goto LAB_5f698d19;
      hMem = GlobalAlloc(0x42,0x12);
      puVar10 = GlobalLock(hMem);
      param_1[6] = (int)puVar10;
      if (puVar10 == (undefined2 *)0x0) {
        ExceptionList = local_14;
        return (char *)0x8007000e;
      }
      sVar2 = *(short *)((int)param_1 + 0x36);
      iVar9 = param_1[0xe];
      *puVar10 = 1;
      puVar10[1] = sVar2;
      *(int *)(puVar10 + 2) = iVar9;
      puVar10[7] = 0x10;
      uVar4 = sVar2 * 2;
      puVar10[6] = uVar4;
      *(uint *)(puVar10 + 4) = (uint)uVar4 * iVar9;
      puVar10[8] = 0;
      FUN_5f698240((int)param_1);
      pcVar6 = (char *)FUN_5f688ca0(local_28,local_24[0],local_3c,1,&local_30);
      if ((int)pcVar6 < 0) goto LAB_5f698d22;
      param_1[3] = 1;
      local_28 = (uint *)((int)local_28 + local_30);
      local_24[0] = local_24[0] - local_30;
      param_1[0x21] = (int)local_28;
      param_1[0x22] = local_24[0];
      if (0x7b < local_24[0] - local_30) {
        iVar9 = FUN_5f689060(local_b8,local_28,(int *)0x0,1);
        if ((iVar9 == 0) || ((local_b0 & 1) == 0)) {
          local_108 = 0x20;
          iVar9 = (**(code **)(*param_1 + 0x44))(param_1,0x4e454c54,local_104,&local_108);
          if (-1 < iVar9) {
            if ((&stack0x00000000 == (undefined1 *)0x104) || (local_104[0] != L'\0')) {
              WideCharToMultiByte(0,0,local_104,-1,local_12c,0x20,(LPCSTR)0x0,(LPBOOL)0x0);
            }
            else if (&stack0x00000000 != (undefined1 *)0x12c) {
              local_12c[0] = '\0';
            }
            local_10d = 0;
            uVar8 = FUN_5f6a0ca0(local_12c,0);
            lVar12 = __allmul(uVar8,0,10000,0);
            *(longlong *)(param_1 + 0x6a) = lVar12;
          }
          pcVar6 = (char *)0x0;
        }
        else if (param_1[0xe] == 0) {
          param_1[0x6a] = 0;
          param_1[0x6b] = 0;
        }
        else {
          uVar11 = ftol();
          *(undefined8 *)(param_1 + 0x6a) = uVar11;
        }
      }
    }
    else {
      if ((int)pcVar6 < 0) goto LAB_5f698d22;
      if (0 < (int)*pDVar1) {
        pcVar6 = FUN_5f698520(param_1,(int *)&local_28,local_24);
        if ((int)pcVar6 < 0) {
          ExceptionList = local_14;
          return pcVar6;
        }
        ExceptionList = local_14;
        return (char *)0x8004e007;
      }
    }
  }
  if (-1 < (int)pcVar6) {
    ExceptionList = local_14;
    return pcVar6;
  }
LAB_5f698d22:
  piVar3 = (int *)param_1[0x6d];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3,0x10,0,0);
  }
  ExceptionList = local_14;
  return pcVar6;
}


