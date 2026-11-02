/* Module: vegas30.exe
   Function: FUN_005287d0
   Address: 005287d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00528cd5) */
/* WARNING: Removing unreachable block (ram,0x00528ac6) */

int FUN_005287d0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  IID *rclsid;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  HCURSOR pHVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint *puVar12;
  int local_584;
  int local_580;
  tagPOINT local_57c;
  int local_574;
  int local_570;
  LPCWSTR local_56c;
  tagRECT local_568 [18];
  byte local_444;
  int local_440;
  CHAR local_43c [259];
  undefined1 local_339;
  undefined4 local_338 [70];
  undefined1 local_220 [276];
  int local_10c;
  uchar local_104 [260];
  
  local_580 = 0;
  iVar9 = **(int **)(param_2 + 0x14);
  piVar1 = (int *)(param_1 + 0x188);
  local_584 = 0;
  *piVar1 = 0;
  local_57c.x = iVar9;
  if (0 < iVar9) {
    do {
      uVar2 = *(uint *)(*(int *)(*(int *)(*(int *)(param_2 + 0x14) + 8) + local_584 * 4) + 0x20c);
      FUN_00508ba0();
      if ((local_444 & 2) == 0) {
        if ((local_444 & 0x80) == 0) {
          pvVar4 = calloc(1,0x114);
          if (pvVar4 != (void *)0x0) {
            FUN_00528600();
            *(uint *)((int)pvVar4 + 8) = uVar2;
            iVar5 = _SfGetString_8();
            uVar8 = 8;
            if ((((local_444 & 1) == 0) || (local_440 == 0)) || (*(int *)(local_440 + 0x10) != 0xb))
            {
              if (iVar9 < 0) goto LAB_00528bfe;
            }
            else {
              puVar11 = local_338;
              for (iVar9 = 0x46; iVar9 != 0; iVar9 = iVar9 + -1) {
                *puVar11 = 0;
                puVar11 = puVar11 + 1;
              }
              local_338[0] = 1;
              iVar9 = FUN_00528730(pvVar4,0x104);
              if (iVar9 == 0) goto LAB_00528bfe;
              iVar5 = (int)pvVar4 + 0x10;
              FUN_005f0420(local_338);
              uVar8 = 0;
            }
            iVar9 = FUN_004ec280(piVar1,iVar5,0,0,0,0xffffffff,0xffffffff,0,pvVar4,uVar8);
            goto joined_r0x00528bd5;
          }
        }
        else {
          pvVar4 = calloc(1,0x11c);
          if (pvVar4 != (void *)0x0) {
            FUN_00528640();
            *(uint *)((int)pvVar4 + 4) = uVar2;
            bVar3 = true;
            if (((local_444 & 1) != 0) &&
               (_FXPackage_GetPackageInfo_20
                          (*(undefined4 *)((int)pvVar4 + 0x10c),*(undefined4 *)((int)pvVar4 + 0x110)
                           ,*(undefined4 *)((int)pvVar4 + 0x114)), local_10c == 7)) {
              local_574 = 0;
              iVar9 = FUN_005a45f0(local_220,&local_574,0,5,0xffffffff,0x7fffffff);
              if (iVar9 < 0) goto LAB_00528bd9;
              rclsid = (IID *)**(undefined4 **)(local_574 + 8);
              StringFromCLSID(rclsid,&local_56c);
              if ((local_56c == (LPCWSTR)0x0) || (*local_56c != L'\0')) {
                WideCharToMultiByte(0,0,local_56c,-1,local_43c,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
              }
              else if (&stack0x00000000 != (undefined1 *)0x43c) {
                local_43c[0] = '\0';
              }
              local_339 = 0;
              CoTaskMemFree(local_56c);
              piVar10 = (int *)rclsid[6].Data1;
              iVar9 = 100000000;
              if (((piVar10 == (int *)0x0) || (*piVar10 < 2)) ||
                 (piVar10 = (int *)(piVar10[1] * (*piVar10 + -1) + piVar10[2]), iVar9 = *piVar10,
                 iVar9 != 0 || piVar10[1] != 0)) {
                FUN_005f5ad0(DAT_0064b138,local_43c,iVar9);
                _mbscpy(local_104,(uchar *)(local_570 + 0x170));
                FUN_005f5640();
              }
              iVar9 = FUN_004ec280(piVar1,local_104,0,0,0,0xffffffff,0xffffffff,0,0,0);
              if (iVar9 < 0) goto LAB_00528bd9;
              free(pvVar4);
              bVar3 = false;
            }
            if (iVar9 < 0) {
LAB_00528bd9:
              if (*piVar1 != 0) {
                FUN_00524190();
              }
              return 0;
            }
            if (bVar3) {
              uVar8 = _SfGetString_8();
              iVar9 = FUN_004ec280(piVar1,uVar8,0,0,0,0xffffffff,0xffffffff,0,pvVar4,9);
            }
            if (iVar9 < 0) goto LAB_00528bd9;
          }
        }
      }
      else {
        puVar6 = calloc(1,0x114);
        if (puVar6 != (uint *)0x0) {
          puVar12 = puVar6;
          for (iVar9 = 0x45; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar12 = 0;
            puVar12 = puVar12 + 1;
          }
          puVar6[2] = uVar2;
          *puVar6 = *puVar6 | 4;
          uVar8 = _SfGetString_8();
          iVar9 = FUN_004ec280(piVar1,uVar8,0,0,0,0xffffffff,0xffffffff,0,puVar6,8);
joined_r0x00528bd5:
          if (iVar9 < 0) {
LAB_00528bfe:
            if (*piVar1 != 0) {
              FUN_00524190();
            }
            return 0;
          }
        }
      }
      local_584 = local_584 + 1;
    } while (local_584 < local_57c.x);
    *(uint *)(param_1 + 0x18c) = *(uint *)(param_1 + 0x18c) | 1;
    SetCapture(*(HWND *)(param_1 + 8));
    GetCursorPos(&local_57c);
    GetWindowRect(*(HWND *)(param_1 + 8),local_568);
    local_57c.x = local_57c.x - local_568[0].left;
    local_57c.y = local_57c.y - local_568[0].top;
    pHVar7 = GetCursor();
    *(HCURSOR *)(param_1 + 400) = pHVar7;
    local_580 = FUN_0040c3e0(DAT_0064762c);
    if (local_580 != 0) {
      iVar9 = FUN_0040c4b0(DAT_0064762c,*piVar1);
      return iVar9;
    }
  }
  return local_580;
}


