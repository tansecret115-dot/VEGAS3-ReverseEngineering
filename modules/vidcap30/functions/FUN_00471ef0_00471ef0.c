/* Module: vidcap30.exe
   Function: FUN_00471ef0
   Address: 00471ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __fastcall FUN_00471ef0(int param_1)

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
  
  if (*(int *)(param_1 + 0x134) == 0) {
    ppiStack_4e8 = &local_8;
    piStack_4ec = (int *)0x471f11;
    piVar1 = (int *)FUN_004713e0();
    if ((int)piVar1 < 0) {
      return piVar1;
    }
    ppiStack_4e8 = (int **)local_8;
    piStack_4ec = (int *)0x471f22;
    (**(code **)(*local_8 + 8))();
  }
  piStack_4ec = *(int **)(param_1 + 0x134);
  ppiStack_4e8 = &local_c;
  local_c = (int *)0x0;
  uStack_4f0 = 0x471f35;
  piVar1 = (int *)(**(code **)(*piStack_4ec + 0x58))();
  if ((int)piVar1 < 0) {
    return piVar1;
  }
  pWStack_4f4 = local_d4;
  uStack_4f0 = 100;
  local_d4[0] = L'\0';
  uStack_4f8 = 0x45504154;
  piStack_4fc = local_c;
  iVar2 = (**(code **)(*local_c + 0x18))();
  if (-1 < iVar2) {
    if ((&stack0x00000000 == (undefined1 *)0xd4) || (local_d4[0] != L'\0')) {
      WideCharToMultiByte(0,0,local_d4,-1,local_4d8,0x401,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x4d8) {
      local_4d8[0] = '\0';
    }
    local_d8 = 0;
    local_8 = (int *)FUN_004716c0(local_4d8);
    if ((int)local_8 < 0) goto LAB_004720a3;
  }
  local_d4[0] = L'\0';
  local_8 = (int *)(**(code **)(*local_c + 0x18))(local_c,0x444f4354,local_d4,100);
  if ((int)local_8 < 0) {
    local_8 = (int *)0x0;
  }
  else {
    sVar3 = wcslen(local_d4);
    FUN_00579db0();
    if ((&stack0x00000000 == (undefined1 *)0xd4) || (local_d4[0] != L'\0')) {
      WideCharToMultiByte(0,0,local_d4,-1,(LPSTR)&piStack_4fc,sVar3 + 1,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x4fc) {
      piStack_4fc = (int *)((uint)piStack_4fc & 0xffffff00);
    }
    *(undefined1 *)((int)&piStack_4fc + sVar3) = 0;
    lVar4 = _SfTextToLongLongToken_8(&piStack_4fc,0);
    *(longlong *)(param_1 + 0x118) = lVar4;
    if (((int)((ulonglong)lVar4 >> 0x20) < 1) && (lVar4 < 0)) {
      *(undefined4 *)(param_1 + 0x118) = 0;
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
    if ((*(uint *)(param_1 + 0x124) & 0x200) == 0) {
      *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x118);
      *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x11c);
    }
  }
LAB_004720a3:
  (**(code **)(*local_c + 8))(local_c);
  return local_8;
}


