/* Module: vegas30.exe
   Function: FUN_0041a6d0
   Address: 0041a6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041a6d0(int param_1)

{
  LPCWSTR lpWideCharStr;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  CHAR *lpMultiByteStr;
  int *piVar5;
  int local_578;
  int local_564 [3];
  CHAR local_558 [1332];
  undefined4 *local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00610440;
  puStack_10 = &DAT_0060ac70;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffa7c;
  local_24 = (undefined4 *)0x0;
  local_8 = 0;
  ExceptionList = &local_14;
  local_20 = (**(code **)(**(int **)(param_1 + 0x1c0) + 0x30))
                       (*(int **)(param_1 + 0x1c0),&local_24,param_1 + 0x224);
  local_8 = 0xffffffff;
  if (((-1 < local_20) && (local_24 != (undefined4 *)0x0)) && (*(int *)(param_1 + 0x224) != 0)) {
    uVar3 = *(int *)(param_1 + 0x224) * 0x44;
    puVar1 = calloc(1,uVar3);
    *(undefined4 **)(param_1 + 0x220) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x224) = 0;
    }
    else {
      puVar4 = local_24;
      for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar1 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar1 = puVar1 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
    }
    piVar5 = local_564;
    for (iVar2 = 0x14d; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
    local_564[0] = 0x534;
    local_564[1] = *(int *)(param_1 + 0x224);
    uVar3 = 0;
    if (local_564[1] != 0) {
      local_578 = 0;
      lpMultiByteStr = local_558;
      do {
        lpWideCharStr = *(LPCWSTR *)(local_578 + 4 + *(int *)(param_1 + 0x220));
        if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
          WideCharToMultiByte(0,0,lpWideCharStr,-1,lpMultiByteStr,0x20,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else if (lpMultiByteStr != (LPSTR)0x0) {
          *lpMultiByteStr = '\0';
        }
        lpMultiByteStr[0x1f] = '\0';
        *(uint *)(lpMultiByteStr + 0x20) = uVar3;
        uVar3 = uVar3 + 1;
        local_578 = local_578 + 0x44;
        lpMultiByteStr = lpMultiByteStr + 0x28;
      } while (uVar3 < *(uint *)(param_1 + 0x224));
    }
    SendMessageA(*(HWND *)(param_1 + 0x250),0x608,0,(LPARAM)local_564);
    ExceptionList = local_14;
    return;
  }
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  ExceptionList = local_14;
  return;
}


