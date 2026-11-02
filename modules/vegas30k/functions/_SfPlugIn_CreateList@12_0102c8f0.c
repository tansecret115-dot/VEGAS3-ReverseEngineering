/* Module: vegas30k.dll
   Function: _SfPlugIn_CreateList@12
   Address: 0102c8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfPlugIn_CreateList_12(undefined4 *param_1,uint param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  LSTATUS LVar3;
  HKEY hObject;
  BOOL BVar4;
  DWORD DVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  _STARTUPINFOA *p_Var10;
  tSFPLUGIN_LIST_NODE *local_5ac;
  undefined4 local_5a8;
  HKEY local_5a4;
  uint local_5a0;
  int local_59c;
  HKEY local_598;
  HANDLE local_594;
  int local_590;
  undefined4 local_58c;
  _PROCESS_INFORMATION local_588;
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  _STARTUPINFOA local_558;
  CHAR local_514 [260];
  CHAR local_410 [260];
  CHAR local_30c [780];
  
                    /* 0x2c8f0  1155  _SfPlugIn_CreateList@12 */
  uVar2 = ~param_2;
  local_5a0 = uVar2 >> 4 & 1;
  uVar9 = uVar2 >> 2 & 1;
  uVar8 = param_2 >> 1 & 1;
  local_58c = CONCAT31(local_58c._1_3_,(char)(param_2 >> 0x18));
  local_5a4 = (HKEY)0x0;
  local_59c = 0;
  local_590 = 0;
  local_5a8 = 0;
  local_5ac = (tSFPLUGIN_LIST_NODE *)0x0;
  if (uVar9 != 0) {
    FUN_0102bff0(0x80000000,"filter\\",local_568);
    FUN_0102bff0(0x80000000,"CLSID\\{083863F1-70DE-11d0-BD40-00A0C911CE86}\\Instance\\",local_578);
    LVar3 = RegOpenKeyA((HKEY)&DAT_80000002,"Software\\Sonic Foundry\\Vegas\\3.0\\DXCache",
                        &local_598);
    if (LVar3 == 0) {
      local_5a4 = (HKEY)FUN_0102c530(local_598,local_568,local_578,&local_59c,&local_590);
      local_5ac = (tSFPLUGIN_LIST_NODE *)FUN_0102bbe0(local_598,0,&local_5a8);
      RegCloseKey(local_598);
      if ((local_5a4 != (HKEY)0x0) && (((local_5a0 == 0 || (local_59c != 0)) && (uVar8 == 0))))
      goto LAB_0102ccb1;
    }
  }
  if ((uVar2 >> 3 & 1) != 0) {
    hObject = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,"Sonic_Foundry_Grovel_Event");
    if (hObject == (HKEY)0xffffffff) {
      hObject = (HKEY)0x0;
    }
    p_Var10 = &local_558;
    for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
      p_Var10->cb = 0;
      p_Var10 = (_STARTUPINFOA *)&p_Var10->lpReserved;
    }
    local_558.cb = 0x44;
    GetModuleFileNameA(DAT_0120e5c0,local_410,0x104);
    GetShortPathNameA(local_410,local_514,0x104);
    SfPrintF(local_30c,"RunDLL32.exe %s,_SfPlugIn_Grovel@16 %d %s",local_514,param_3,
             "Sonic_Foundry_Grovel_Event");
    GetTickCount();
    BVar4 = CreateProcessA((LPCSTR)0x0,local_30c,(LPSECURITY_ATTRIBUTES)0x0,
                           (LPSECURITY_ATTRIBUTES)0x0,0,0x20,(LPVOID)0x0,(LPCSTR)0x0,&local_558,
                           &local_588);
    if (BVar4 != 0) {
      if (hObject == (HKEY)0x0) {
        WaitForSingleObject(local_588.hProcess,240000);
      }
      else {
        local_594 = local_588.hThread;
        local_598 = hObject;
        DVar5 = WaitForMultipleObjects(2,&local_598,0,10000);
        if (DVar5 == 0x102) {
          if (DAT_0120e83c != (HWND)0x0) {
            SendMessageA(DAT_0120e83c,0x10,0,0);
          }
          WaitForMultipleObjects(2,&local_598,0,240000);
        }
        CloseHandle(hObject);
      }
      GetTickCount();
      CloseHandle(local_588.hProcess);
      CloseHandle(local_588.hThread);
      if (local_5ac != (tSFPLUGIN_LIST_NODE *)0x0) {
        _SfPlugIn_FreeList_4(local_5ac);
      }
      local_5ac = (tSFPLUGIN_LIST_NODE *)0x0;
      LVar3 = RegOpenKeyA((HKEY)&DAT_80000002,"Software\\Sonic Foundry\\Vegas\\3.0\\DXCache",
                          &local_5a4);
      if (LVar3 == 0) {
        local_5ac = (tSFPLUGIN_LIST_NODE *)FUN_0102bbe0(local_5a4,0,&local_5a8);
        RegCloseKey(local_5a4);
      }
    }
    goto LAB_0102ccb1;
  }
  if (param_3 != 0) {
    SfPlugIn_MiniProg_Create(DAT_0120e5c8,param_3);
  }
  if ((local_5a4 == (HKEY)0x0) || (uVar8 != 0)) {
    SfPlugIn_InitRemovedFlags(local_5ac);
    uVar6 = FUN_0102b9b0(local_5ac,&local_5a8);
    local_5ac = (tSFPLUGIN_LIST_NODE *)FUN_0102bdc0(uVar6,&local_5a8);
    SfPlugIn_UpdateIgnoreFlags(local_5ac);
    if ((param_2 >> 5 & 1) == 0) {
      SfPlugIn_UpdateDXiFlags(local_5ac);
    }
    if (uVar9 != 0) {
      _SfRegDeleteKey_8(&DAT_80000002,"Software\\Sonic Foundry\\Vegas\\3.0\\DXCache");
      FUN_0102c760(local_5ac,local_568,local_578,0);
    }
    local_59c = 0;
  }
  bVar1 = false;
  if (uVar9 == 0) {
LAB_0102cc63:
    if (((local_5a0 != 0) && (local_59c == 0)) && (!bVar1)) {
      SfPlugIn_UpdateTrackFlags(local_5ac,local_590);
    }
  }
  else if (local_5a0 != 0) {
    if (local_590 != 0) {
      uVar6 = _SfGetString2_8(DAT_0120e5c8,0x1122);
      iVar7 = SfMsgBox(DAT_012099f0,0x34,uVar6);
      if (iVar7 != 6) {
        bVar1 = true;
      }
    }
    goto LAB_0102cc63;
  }
  if ((uVar9 != 0) && (local_5a0 != 0)) {
    FUN_0102c760(local_5ac,local_568,local_578,1);
  }
  if (param_3 != 0) {
    SfPlugIn_MiniProg_Destroy();
  }
LAB_0102ccb1:
  uVar6 = FUN_0102b3a0(local_5ac,&local_5a8,local_58c);
  uVar6 = FUN_0102c0f0(uVar6,&local_5a8,param_2);
  FUN_0102b410(uVar6,&local_5a8);
  *param_1 = local_5a8;
  return;
}


