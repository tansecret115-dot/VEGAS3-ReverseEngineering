/* Module: vidcap30.exe
   Function: FUN_0044d210
   Address: 0044d210
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d210(LPSTR param_1)

{
  char *pcVar1;
  uint uVar2;
  LPCSTR lpString2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  int local_394;
  int local_390;
  int *local_38c;
  int iStack_388;
  undefined4 uStack_384;
  int local_380;
  undefined4 local_37c [10];
  undefined1 auStack_354 [52];
  CHAR local_320 [199];
  undefined1 uStack_259;
  undefined1 local_258 [200];
  WCHAR local_190 [200];
  
  FUN_0046ed20();
  local_394 = 0;
  iVar4 = *(int *)(param_1 + 0x424);
  if (iVar4 == 3) {
    iVar4 = *(int *)(param_1 + 0x420);
    *param_1 = '\0';
    param_1[0x42c] = '\x13';
    param_1[0x42d] = '\0';
    param_1[0x42e] = '\0';
    param_1[0x42f] = '\0';
    param_1[0x430] = '\x14';
    param_1[0x431] = '\0';
    param_1[0x432] = '\0';
    param_1[0x433] = '\0';
    lpString2 = *(LPCSTR *)(iVar4 + 0xc);
  }
  else {
    if (iVar4 != 4) {
      if (iVar4 != 5) {
        return;
      }
      iVar4 = *(int *)(param_1 + 0x420);
      *param_1 = '\0';
      param_1[0x10a] = '\0';
      param_1[0x31c] = '\0';
      param_1[0x20e] = '\0';
      param_1[0x318] = '\0';
      param_1[0x319] = '\0';
      param_1[0x31a] = '\0';
      param_1[0x31b] = '\0';
      param_1[0x314] = '\0';
      param_1[0x315] = '\0';
      param_1[0x316] = '\0';
      param_1[0x317] = '\0';
      local_390 = iVar4;
      if (*(LPCSTR *)(iVar4 + 0x10) != (LPCSTR)0x0) {
        lstrcpynA(param_1,*(LPCSTR *)(iVar4 + 0x10),0x10a);
        param_1[0x109] = '\0';
      }
      pcVar1 = *(char **)(iVar4 + 0x14);
      if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
        iVar4 = _SfDoesFileExist_4(pcVar1);
        lstrcpynA(param_1 + 0x31c,*(LPCSTR *)(local_390 + 0x14),0x104);
        iVar5 = local_390;
        param_1[0x41f] = '\0';
        FUN_00443b20(local_390,-(iVar4 != 0) & 2,2);
        iVar3 = local_390;
        iVar4 = local_390;
        if ((*(byte *)(iVar5 + 0x38) & 2) != 0) {
          puVar6 = &DAT_005bb810;
          puVar7 = local_37c;
          for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          local_37c[2] = *(undefined4 *)(local_390 + 0x40);
          local_37c[3] = *(undefined4 *)(local_390 + 0x44);
          FUN_0045ada0(local_37c);
          iVar5 = FUN_0046fdd0(*(undefined4 *)(iVar3 + 0x14),&local_394,0,0);
          iVar4 = local_390;
          if (-1 < iVar5) {
            local_38c = (int *)0x0;
            if (((*(byte *)(local_394 + 0x124) & 0x20) == 0) ||
               ((*(byte *)(iVar3 + 0x38) & 0x10) == 0)) {
              local_380 = 0;
            }
            else {
              local_380 = 1;
              iVar5 = FUN_00470ec0(1);
            }
            if ((-1 < iVar5) && (iVar4 = FUN_004713e0(&local_38c), -1 < iVar4)) {
              iVar4 = FUN_004715a0(2);
              if (iVar4 != 0) {
                iVar5 = FUN_00474910(local_258,200);
                if (iVar5 < 0) {
                  local_258[0] = 0;
                }
                local_320[0] = '\0';
                iVar5 = (**(code **)(*local_38c + 0x14))
                                  (local_38c,local_190,200,*(undefined4 *)(iVar4 + 0x10),1);
                if (-1 < iVar5) {
                  if ((&stack0x00000000 == (undefined1 *)0x190) || (local_190[0] != L'\0')) {
                    WideCharToMultiByte(0,0,local_190,-1,local_320,200,(LPCSTR)0x0,(LPBOOL)0x0);
                  }
                  else if (&stack0x00000000 != (undefined1 *)0x320) {
                    local_320[0] = '\0';
                  }
                  uStack_259 = 0;
                }
                iStack_388 = *(int *)(iVar4 + 0x48);
                uStack_384 = *(undefined4 *)(iVar4 + 0x4c);
                if (_DAT_00589f10 == *(double *)(iVar4 + 0x48)) {
                  SfPrintF(param_1 + 0x10a,"%s$, %s",local_258,local_320);
                }
                else {
                  FUN_0045aec0(*(undefined4 *)(iVar4 + 0x80),*(undefined4 *)(iVar4 + 0x84),
                               iStack_388,uStack_384,auStack_354,0x32);
                  SfPrintF(param_1 + 0x10a,"%s$, $.3f fps$, %s$, %s",local_258,
                           *(undefined4 *)(iVar4 + 0x48),*(undefined4 *)(iVar4 + 0x4c),auStack_354,
                           local_320);
                }
              }
              iVar4 = FUN_004715a0(1);
              if (iVar4 != 0) {
                iVar5 = FUN_00474910(local_258,200);
                if (iVar5 < 0) {
                  local_258[0] = 0;
                }
                local_320[0] = '\0';
                iVar5 = (**(code **)(*local_38c + 0x14))
                                  (local_38c,local_190,200,*(undefined4 *)(iVar4 + 0x10),1);
                if (-1 < iVar5) {
                  if ((&stack0x00000000 == (undefined1 *)0x190) || (local_190[0] != L'\0')) {
                    WideCharToMultiByte(0,0,local_190,-1,local_320,200,(LPCSTR)0x0,(LPBOOL)0x0);
                  }
                  else if (&stack0x00000000 != (undefined1 *)0x320) {
                    local_320[0] = '\0';
                  }
                  uStack_259 = 0;
                }
                iVar4 = *(int *)(*(int *)(iVar4 + 0x2c) + 4);
                if (iVar4 == 0) {
                  uVar8 = 0;
                }
                else {
                  uStack_384 = 0;
                  iStack_388 = iVar4;
                  uVar8 = ftol();
                }
                _SfNanoTimeToTextEx_20(auStack_354,local_37c,uVar8,2);
                SfPrintF(param_1 + 0x20e,"%s$, %s$, %s",local_258,auStack_354,local_320);
              }
              *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(local_394 + 300);
              *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(local_394 + 0x130);
              if (local_38c != (int *)0x0) {
                (**(code **)(*local_38c + 8))(local_38c);
              }
              local_38c = (int *)0x0;
            }
            iVar4 = local_390;
            if (local_380 != 0) {
              FUN_004713b0();
              FUN_00471030(0);
              iVar4 = local_390;
            }
          }
        }
      }
      uVar2 = *(uint *)(iVar4 + 0x38);
      if ((uVar2 & 4) == 0) {
        if ((uVar2 & 2) == 0) {
          iVar4 = (-(uint)((uVar2 & 0x10) != 0) & 8) + 0xd;
        }
        else {
          iVar4 = (-(uint)((uVar2 & 0x10) != 0) & 8) + 0xf;
        }
      }
      else {
        iVar4 = (-(uint)((uVar2 & 0x10) != 0) & 8) + 0xe;
      }
      *(int *)(param_1 + 0x42c) = iVar4;
      *(int *)(param_1 + 0x430) = iVar4;
      return;
    }
    iVar4 = *(int *)(param_1 + 0x420);
    *param_1 = '\0';
    param_1[0x42c] = '\x10';
    param_1[0x42d] = '\0';
    param_1[0x42e] = '\0';
    param_1[0x42f] = '\0';
    param_1[0x430] = '\x10';
    param_1[0x431] = '\0';
    param_1[0x432] = '\0';
    param_1[0x433] = '\0';
    lpString2 = *(LPCSTR *)(iVar4 + 0xc);
  }
  if (lpString2 != (LPCSTR)0x0) {
    lstrcpynA(param_1,lpString2,0x10a);
    param_1[0x109] = '\0';
  }
  return;
}


