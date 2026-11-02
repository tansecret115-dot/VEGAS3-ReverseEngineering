/* Module: vidcap30.exe
   Function: FUN_004677b0
   Address: 004677b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_004677b0(int param_1,int param_2,undefined4 param_3,int *param_4,undefined4 *param_5,
            int *param_6,int param_7)

{
  bool bVar1;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  int *unaff_ESI;
  int *piVar5;
  undefined4 *puVar6;
  int local_81c;
  uint uStack_818;
  undefined1 local_814 [4];
  int iStack_810;
  int local_80c;
  uint uStack_808;
  undefined4 uStack_804;
  uint uStack_800;
  undefined4 uStack_7fc;
  int local_7f8 [4];
  undefined4 local_7e8;
  undefined4 local_7e4;
  int iStack_7e0;
  int iStack_7dc;
  double dStack_7d8;
  double dStack_7d0;
  CHAR aCStack_6c4 [259];
  undefined1 uStack_5c1;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  CHAR aCStack_520 [259];
  undefined1 uStack_41d;
  uint local_418;
  WCHAR local_410 [260];
  CHAR aCStack_208 [519];
  undefined1 uStack_1;
  
  piVar5 = local_7f8;
  for (iVar4 = 0xfa; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  local_418 = local_418 | 0x1f;
  local_7e8 = 0;
  local_7e4 = 0;
  iVar4 = FUN_004676f0(param_3,local_410,0x104);
  do {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    DVar2 = GetTickCount();
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(DWORD *)(param_1 + 0xe0) = DVar2;
    *(DWORD *)(param_1 + 0xe4) = DVar2;
    *(undefined4 *)(param_1 + 0xec) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
    if ((iVar4 < 0) || (iVar4 = FUN_00467690(param_2,param_4,param_5,param_7), iVar4 < 0)) {
      return iVar4;
    }
    if (0 < param_7) {
      local_81c = param_7;
      puVar6 = param_5;
      do {
        piVar5 = *(int **)((int)puVar6 + ((int)param_6 - (int)param_5));
        (**(code **)(*piVar5 + 0x18))(piVar5,&local_80c,0,0);
        if (local_80c == 1) {
          FUN_00469870(*(undefined4 *)(*(int *)(param_2 + 0x428) + 0x18),
                       *(undefined4 *)(*(int *)(param_2 + 0x428) + 0x1c));
        }
        puVar6 = puVar6 + 1;
        local_81c = local_81c + -1;
      } while (local_81c != 0);
      local_81c = 0;
    }
    piVar5 = param_6;
    iVar4 = (**(code **)(*param_4 + 0x34))(param_4,local_814,local_410,param_7);
    if (iVar4 < 0) {
      return iVar4;
    }
    if (param_1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_1 + 0x54;
    }
    iVar4 = (**(code **)(*unaff_ESI + 0x44))(unaff_ESI,iVar4);
    (**(code **)(*piVar5 + 8))(piVar5);
    if (iVar4 < 0) {
      return iVar4;
    }
    if ((&stack0x00000000 == (undefined1 *)0x410) || (local_410[0] != L'\0')) {
      WideCharToMultiByte(0,0,local_410,-1,aCStack_208,0x208,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x208) {
      aCStack_208[0] = '\0';
    }
    uStack_1 = 0;
    uStack_818 = 0;
    iVar4 = param_7;
    puVar6 = param_5;
    if (0 < param_7) {
      do {
        uVar3 = (**(code **)(*(int *)*puVar6 + 0x18))((int *)*puVar6);
        uStack_818 = uStack_818 | uVar3;
        iVar4 = iVar4 + -1;
        puVar6 = puVar6 + 1;
      } while (iVar4 != 0);
    }
    bVar1 = false;
    if ((uStack_818 != 0) && (local_81c = FUN_00467750(param_3,local_410,0x104), 0 < param_7)) {
      iStack_810 = param_7;
      puVar6 = param_5;
      do {
        iVar4 = (**(code **)(*(int *)*puVar6 + 0x1c))((int *)*puVar6);
        puVar6 = puVar6 + 1;
        bVar1 = (bool)(bVar1 | iVar4 == 0);
        iStack_810 = iStack_810 + -1;
      } while (iStack_810 != 0);
    }
    iVar4 = _SfDoesFileExist_4(aCStack_208);
    if (iVar4 != 0) {
      lstrcpynA(aCStack_6c4,aCStack_208,0x104);
      uStack_5c1 = 0;
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
      local_7f8[3] = *(int *)(param_1 + 0xc0);
      local_7f8[2] = *(int *)(param_1 + 0xbc);
      local_7e8 = *(undefined4 *)(param_1 + 200);
      iStack_7e0 = local_7f8[3] + local_7f8[2];
      local_7e4 = *(undefined4 *)(param_1 + 0xcc);
      uStack_538 = *(undefined4 *)(param_1 + 0xd0);
      iStack_7dc = 0;
      uStack_53c = 1;
      uStack_534 = *(undefined4 *)(param_1 + 0xd4);
      uStack_530 = *(undefined4 *)(param_1 + 0xd8);
      uStack_528 = *(undefined4 *)(param_1 + 0xf0);
      uStack_52c = *(undefined4 *)(param_1 + 0xdc);
      uStack_524 = *(undefined4 *)(param_1 + 0xf4);
      *(undefined4 *)(param_1 + 0xf0) = 0;
      if (bVar1) {
        if ((&stack0x00000000 == (undefined1 *)0x410) || (local_410[0] != L'\0')) {
          WideCharToMultiByte(0,0,local_410,-1,aCStack_520,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0x520) {
          aCStack_520[0] = '\0';
          uStack_41d = 0;
          goto LAB_00467b5c;
        }
        uStack_41d = 0;
      }
      else {
        aCStack_520[0] = '\0';
      }
LAB_00467b5c:
      if ((iStack_7e0 == 0) && (iStack_7dc == 0)) {
        iStack_7e0 = *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc0);
        iStack_7dc = 0;
      }
      uVar3 = *(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0);
      if (uVar3 == 0) {
        dStack_7d0 = 0.0;
        dStack_7d8 = 0.0;
      }
      else {
        uStack_7fc = 0;
        uStack_808 = *(uint *)(param_1 + 0xbc);
        uStack_804 = 0;
        dStack_7d0 = (((double)*(longlong *)(param_1 + 0xe8) * _DAT_00589f18) / (double)uVar3) *
                     _DAT_0058aa90;
        dStack_7d8 = ((double)uStack_808 * _DAT_00589f18) / (double)uVar3;
        uStack_800 = uVar3;
      }
      (**(code **)(*(int *)(param_1 + 0x50) + 0x1c))(param_1 + 0x50,local_7f8);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
    }
    iVar4 = local_81c;
    if (uStack_818 == 0) {
      return local_81c;
    }
  } while( true );
}


