/* Module: vegas30.exe
   Function: FUN_005a2f40
   Address: 005a2f40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005a2f40(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,IID *param_5,
                undefined4 param_6)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  uint uVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  ulong *puVar8;
  IID *pIVar9;
  int *piVar10;
  uint *puVar11;
  bool bVar12;
  HWND pHVar13;
  UINT Msg;
  int local_154;
  LPOLESTR local_150;
  HWND local_14c;
  uint local_148;
  CHAR local_144 [39];
  undefined1 local_11d;
  uint local_11c [67];
  ulong local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  bVar2 = true;
  if (DAT_0064b464 == (int *)0x0) {
LAB_005a2fb6:
    if (param_5 != (IID *)0x0) {
      StringFromCLSID(param_5,&local_150);
      if ((local_150 == (LPCWSTR)0x0) || (*local_150 != L'\0')) {
        WideCharToMultiByte(0,0,local_150,-1,local_144,0x28,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x144) {
        local_144[0] = '\0';
      }
      local_11d = 0;
      CoTaskMemFree(local_150);
      local_150 = (LPCWSTR)0x0;
      iVar7 = lstrcmpiA("{00000000-0000-0000-0000-000000000000}",local_144);
      if ((iVar7 != 0) &&
         (iVar7 = lstrcmpiA("{da6f7c17-cd66-11d1-9aa7-00a0c99b12c5}",local_144), iVar7 != 0)) {
        if (DAT_0064b4e4 == 0) {
          iVar7 = FUN_00601ab0(&local_14c,&local_148,1);
          if (iVar7 < 0) {
            DAT_0064b4f0 = 1;
          }
          else {
            uVar4 = (local_148 & 0xffff) >> 8;
            if ((int)DAT_0064b4e4 <= (int)uVar4) {
              DAT_0064b4f0 = 0;
              _DAT_0064b4f4 = local_14c;
              DAT_0064b4e4 = uVar4;
            }
          }
        }
        if ((DAT_0064b4e4 == 0x20) || (DAT_0064b4e4 == 0x40)) goto LAB_005a30a6;
      }
      param_5 = (IID *)0x0;
    }
  }
  else if (param_5 != (IID *)0x0) {
    iVar7 = 0;
    if (0 < *DAT_0064b464) {
      local_150 = (LPOLESTR)DAT_0064b464[1];
      puVar3 = (ulong *)DAT_0064b464[2];
      do {
        if (puVar3[4] == 5) {
          iVar6 = 4;
          bVar12 = true;
          puVar8 = puVar3;
          pIVar9 = param_5;
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            bVar12 = *puVar8 == pIVar9->Data1;
            puVar8 = puVar8 + 1;
            pIVar9 = (IID *)&pIVar9->Data2;
          } while (bVar12);
          if (bVar12) {
            bVar2 = false;
            break;
          }
        }
        iVar7 = iVar7 + 1;
        puVar3 = (ulong *)((int)puVar3 + (int)local_150);
      } while (iVar7 < *DAT_0064b464);
    }
    goto LAB_005a2fb6;
  }
  bVar2 = false;
LAB_005a30a6:
  bVar12 = true;
  if (*(int *)(param_3 + 4) == 3) {
    if (bVar2) {
      uVar1 = param_5->Data1;
      puVar11 = local_11c;
      for (iVar7 = 0x47; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      local_c._0_2_ = param_5->Data2;
      local_c._2_2_ = param_5->Data3;
      local_8 = *(undefined4 *)param_5->Data4;
      local_4 = *(undefined4 *)(param_5->Data4 + 4);
      local_11c[0] = local_11c[0] | 1;
      local_10 = uVar1;
      iVar7 = FUN_005a3990(param_1,param_3,(param_4 != 0) + '\x01',local_11c,1,param_6);
      return iVar7;
    }
  }
  else {
    bVar12 = false;
    param_5 = (IID *)0x0;
  }
  local_154 = FUN_004e9f70(param_2,0x227,0);
  if ((-1 < local_154) && (local_154 = FUN_004ea750(param_2,param_3,2,0), -1 < local_154)) {
    local_150 = (LPOLESTR)0x0;
    local_14c = GetFocus();
    if (bVar12) {
      if (*(int *)(DAT_0064762c + 0xa0) != 0) {
        local_150 = (LPOLESTR)
                    SendMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0xa0) + 8),0x66b,0,param_3);
      }
      piVar10 = (int *)(param_3 + 0x204);
      if (param_4 == 0) {
        piVar10 = (int *)(param_3 + 0x200);
      }
      if (*piVar10 != 0) {
        _SfVideoPlugin_DestroyCacheList_4(*piVar10);
        *piVar10 = 0;
      }
      if (param_5 != (IID *)0x0) {
        iVar7 = FUN_005a24e0(piVar10,param_5,DAT_0064b50c,0xffffff9c,0);
        if (iVar7 == 0) {
          local_154 = -0x7ff8fff2;
        }
        else {
          FUN_005a3510(param_2,param_3,(param_4 != 0) + '\x01');
          FUN_005a5060(iVar7,param_3,(param_4 != 0) + '\a',*(undefined4 *)(param_3 + 0x20),
                       *(undefined4 *)(param_3 + 0x24));
        }
        if ((local_150 != (LPOLESTR)0x0) && (iVar7 = *(int *)(DAT_0064762c + 0xa0), iVar7 != 0)) {
          if (param_4 == 0) {
            pHVar13 = *(HWND *)(iVar7 + 8);
            Msg = 0x672;
          }
          else {
            pHVar13 = *(HWND *)(iVar7 + 8);
            Msg = 0x673;
          }
          SendMessageA(pHVar13,Msg,0,param_3);
          pHVar13 = local_14c;
          BVar5 = IsWindow(local_14c);
          if (BVar5 != 0) {
            SetFocus(pHVar13);
          }
        }
      }
    }
    if ((-1 < local_154) && (local_154 = FUN_005a32f0(param_2,param_6), -1 < local_154)) {
      FUN_004eb2b0(param_2);
    }
    FUN_004ea040(param_2,0);
    *(uint *)*param_2 = *(uint *)*param_2 | 0x100;
    DAT_0064767c = DAT_0064767c | 0x400;
  }
  return local_154;
}


