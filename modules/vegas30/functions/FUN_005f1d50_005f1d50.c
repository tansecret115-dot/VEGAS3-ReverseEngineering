/* Module: vegas30.exe
   Function: FUN_005f1d50
   Address: 005f1d50
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __fastcall FUN_005f1d50(int param_1)

{
  int *piVar1;
  int iVar2;
  size_t sVar3;
  longlong lVar4;
  int *piStack_4fc;
  undefined4 uStack_4f8;
  WCHAR *pWStack_4f4;
  undefined4 uStack_4f0;
  int *piStack_4ec;
  int **ppiStack_4e8;
  CHAR local_4d8 [1024];
  undefined1 local_d8;
  WCHAR local_d4 [100];
  int *local_c;
  int *local_8;
  
  if (*(int *)(param_1 + 0x14c) == 0) {
    ppiStack_4e8 = &local_c;
    piStack_4ec = (int *)0x5f1d71;
    piVar1 = (int *)FUN_005f1150();
    if ((int)piVar1 < 0) {
      return piVar1;
    }
    ppiStack_4e8 = (int **)local_c;
    piStack_4ec = (int *)0x5f1d82;
    (**(code **)(*local_c + 8))();
  }
  piStack_4ec = *(int **)(param_1 + 0x14c);
  ppiStack_4e8 = &local_8;
  local_8 = (int *)0x0;
  uStack_4f0 = 0x5f1d95;
  piVar1 = (int *)(**(code **)(*piStack_4ec + 0x58))();
  if ((int)piVar1 < 0) {
    return piVar1;
  }
  pWStack_4f4 = local_d4;
  uStack_4f0 = 100;
  local_d4[0] = L'\0';
  uStack_4f8 = 0x45504154;
  piStack_4fc = local_8;
  iVar2 = (**(code **)(*local_8 + 0x18))();
  if (-1 < iVar2) {
    if ((&stack0x00000000 == &DAT_000000d4) || (local_d4[0] != L'\0')) {
      WideCharToMultiByte(0,0,local_d4,-1,local_4d8,0x401,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x4d8) {
      local_4d8[0] = '\0';
    }
    local_d8 = 0;
    local_c = (int *)FUN_005f1510();
    if ((int)local_c < 0) goto LAB_005f20f4;
  }
  local_d4[0] = L'\0';
  iVar2 = (**(code **)(*local_8 + 0x18))();
  if (-1 < iVar2) {
    sVar3 = wcslen(local_d4);
    FUN_0060ac30();
    if ((&stack0x00000000 == &DAT_000000d4) || (local_d4[0] != L'\0')) {
      WideCharToMultiByte(0,0,local_d4,-1,&stack0xfffffaf4,sVar3 + 1,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    (&stack0xfffffaf4)[sVar3] = 0;
    lVar4 = _SfTextToLongLongToken_8();
    *(longlong *)(param_1 + 0x118) = lVar4;
    if (((int)((ulonglong)lVar4 >> 0x20) < 1) && (lVar4 < 0)) {
      *(undefined4 *)(param_1 + 0x118) = 0;
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
    if ((*(uint *)(param_1 + 0x134) & 0x200) == 0) {
      *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x118);
      *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x11c);
    }
  }
  local_d4[0] = L'\0';
  iVar2 = (**(code **)(*local_8 + 0x18))();
  if (-1 < iVar2) {
    sVar3 = wcslen(local_d4);
    FUN_0060ac30();
    if ((&stack0x00000000 == &DAT_000000d4) || (local_d4[0] != L'\0')) {
      WideCharToMultiByte(0,0,local_d4,-1,&stack0xfffffae4,sVar3 + 1,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    (&stack0xfffffae4)[sVar3] = 0;
    lVar4 = _SfTextToLongLongToken_8();
    *(longlong *)(param_1 + 0x120) = lVar4;
    if (((int)((ulonglong)lVar4 >> 0x20) < 1) && (lVar4 < 0)) {
      *(undefined4 *)(param_1 + 0x120) = 0;
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
  }
  local_d4[0] = L'\0';
  iVar2 = (**(code **)(*local_8 + 0x18))();
  if (-1 < iVar2) {
    sVar3 = wcslen(local_d4);
    FUN_0060ac30();
    if ((&stack0x00000000 == &DAT_000000d4) || (local_d4[0] != L'\0')) {
      WideCharToMultiByte(0,0,local_d4,-1,&stack0xfffffad4,sVar3 + 1,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    (&stack0xfffffad4)[sVar3] = 0;
    iVar2 = _SfTextToLongLongToken_8(&stack0xfffffad4,0);
    *(int *)(param_1 + 0x128) = iVar2;
    if (iVar2 < 1) {
      *(undefined4 *)(param_1 + 0x128) = 1;
    }
  }
  local_d4[0] = L'\0';
  local_c = (int *)(**(code **)(*local_8 + 0x18))(local_8,0x4e494d56,local_d4,100);
  if ((int)local_c < 0) {
    local_c = (int *)0x0;
  }
  else {
    sVar3 = wcslen(local_d4);
    FUN_0060ac30();
    if ((&stack0x00000000 == &DAT_000000d4) || (local_d4[0] != L'\0')) {
      WideCharToMultiByte(0,0,local_d4,-1,(LPSTR)&piStack_4fc,sVar3 + 1,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x4fc) {
      piStack_4fc = (int *)((uint)piStack_4fc & 0xffffff00);
    }
    *(undefined1 *)((int)&piStack_4fc + sVar3) = 0;
    iVar2 = _SfTextToLongLongToken_8();
    *(int *)(param_1 + 300) = iVar2;
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 300) = 0;
    }
  }
LAB_005f20f4:
  (**(code **)(*local_8 + 8))();
  return local_c;
}


