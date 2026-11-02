/* Module: mp3plug.dll
   Function: FUN_5f68a990
   Address: 5f68a990
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f68a990(undefined4 *param_1,undefined4 *param_2,uint *param_3,int *param_4)

{
  wchar_t *lpWideCharStr;
  wchar_t *lpWideCharStr_00;
  char cVar1;
  int iVar2;
  DWORD DVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined3 extraout_var;
  BOOL BVar11;
  undefined4 *puVar12;
  LPCSTR *ppCVar13;
  longlong lVar14;
  void *local_f5c;
  DWORD local_f58;
  uint local_f54;
  uint local_f50;
  int *local_f4c;
  uint local_f48;
  uint uStack_f44;
  int local_f40;
  byte local_f3c [4];
  uint local_f38 [3];
  LPCSTR local_f2c [4];
  CHAR *local_f1c;
  CHAR *local_f18;
  CHAR *local_f14;
  undefined4 local_f10;
  undefined4 local_f0c;
  undefined4 local_f08;
  undefined4 local_f04;
  undefined4 local_f00;
  undefined4 local_efc;
  undefined4 local_ef8;
  uint local_ef4;
  uint local_ef0;
  uint local_eec;
  uint local_ee8;
  WCHAR local_ee4 [30];
  undefined2 local_ea8;
  undefined1 local_ea4 [42];
  uint local_e7a;
  int local_e72;
  uint local_e5c [2];
  uint local_e54;
  int local_e50;
  int local_e48;
  CHAR local_de0 [32];
  CHAR local_dc0 [32];
  CHAR local_da0 [32];
  CHAR local_d80 [32];
  CHAR local_d60 [32];
  CHAR local_d40 [32];
  CHAR local_d20 [32];
  CHAR local_d00 [256];
  CHAR local_c00 [1024];
  WCHAR local_800 [1023];
  undefined2 local_2;
  
  local_f54 = 0;
  local_f50 = 0;
  iVar2 = FUN_5f688240(param_1,param_3,(int *)&local_f54,(uint *)local_f3c);
  if (iVar2 != 0) {
    if (((local_f3c[0] & 1) != 0) && (param_2 != (undefined4 *)0x0)) {
      ppCVar13 = local_f2c;
      for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
        *ppCVar13 = (LPCSTR)0x0;
        ppCVar13 = ppCVar13 + 1;
      }
      local_f2c[1] = local_de0;
      local_f2c[0] = local_d60;
      local_f2c[3] = local_dc0;
      lpWideCharStr = (wchar_t *)(param_2 + 0x13);
      lpWideCharStr_00 = (wchar_t *)((int)param_2 + 0x24a);
      *(undefined2 *)(param_2 + 0x112) = 0;
      *(undefined2 *)((int)param_2 + 0x646) = 0;
      local_f18 = local_da0;
      local_f2c[2] = local_d20;
      *(undefined1 *)((int)param_2 + 0xe4a) = 0;
      local_f14 = local_d80;
      local_f10 = 0x1f;
      local_f0c = 0x1f;
      local_f08 = 0x1f;
      local_f04 = 0x1f;
      local_ef8 = 0x1f;
      local_efc = 0x1f;
      local_f00 = 0x1f;
      local_f1c = local_d40;
      *lpWideCharStr = L'\0';
      *lpWideCharStr_00 = L'\0';
      DVar3 = FUN_5f69a080(param_1,local_f2c,(undefined1 *)((int)param_2 + 0xe4a));
      if (-1 < (int)DVar3) {
        if (*local_f2c[0] != '\0') {
          MultiByteToWideChar(0,1,local_f2c[0],-1,lpWideCharStr,0xff);
          *(undefined2 *)(param_2 + 0x92) = 0;
        }
        if (*local_f2c[1] != '\0') {
          MultiByteToWideChar(0,1,local_f2c[1],-1,lpWideCharStr_00,0xff);
          *(undefined2 *)((int)param_2 + 0x446) = 0;
        }
        if (*local_f18 != '\0') {
          MultiByteToWideChar(0,1,local_f18,-1,(LPWSTR)((int)param_2 + 0x646),0x400);
          *(undefined2 *)(param_2 + 0x391) = 0;
        }
        if (param_4 != (int *)0x0) {
          if (*lpWideCharStr != L'\0') {
            FUN_5f68b460(param_4,lpWideCharStr,0x4d414e49);
          }
          if (*lpWideCharStr_00 != L'\0') {
            FUN_5f68b460(param_4,lpWideCharStr_00,0x54524149);
          }
          if (*(short *)((int)param_2 + 0x646) != 0) {
            FUN_5f68b460(param_4,(wchar_t *)((int)param_2 + 0x646),0x544d4349);
          }
          if (*local_f2c[2] != '\0') {
            MultiByteToWideChar(0,1,local_f2c[2],-1,local_ee4,0x1f);
            local_ea8 = 0;
            FUN_5f68b460(param_4,local_ee4,0x43525349);
          }
          if (*local_f2c[3] != '\0') {
            MultiByteToWideChar(0,1,local_f2c[3],-1,local_ee4,0x1f);
            local_ea8 = 0;
            FUN_5f68b460(param_4,local_ee4,0x44524349);
          }
          if (*local_f14 != '\0') {
            MultiByteToWideChar(0,1,local_f14,-1,local_ee4,0x1f);
            local_ea8 = 0;
            FUN_5f68b460(param_4,local_ee4,0x4b435254);
          }
          if (*local_f1c != '\0') {
            MultiByteToWideChar(0,1,local_f1c,-1,local_ee4,0x1f);
            local_ea8 = 0;
            FUN_5f68b460(param_4,local_ee4,0x524e4749);
          }
        }
      }
    }
    if ((local_f3c[0] & 2) != 0) {
      pvVar4 = GlobalAlloc(0x40,0x1c);
      pvVar5 = GlobalLock(pvVar4);
      if (pvVar5 == (LPVOID)0x0) {
        pvVar6 = (void *)0x0;
      }
      else {
        pvVar6 = (void *)FUN_5f69b6c0((int)pvVar5);
      }
      local_f5c = pvVar6;
      iVar2 = FUN_5f69b7b0(pvVar6,param_1);
      if (-1 < iVar2) {
        local_f4c = (int *)FUN_5f69bfd0(pvVar6);
        iVar2 = 0;
        if (0 < (int)local_f4c) {
          do {
            iVar7 = FUN_5f69bfe0(pvVar6,iVar2,&local_f40,local_c00,0x400);
            if (-1 < iVar7) {
              FUN_5f69c030(pvVar6,iVar2,&local_f58);
              local_f58 = FUN_5f68bad0(local_f58);
              if (local_f58 < 0x524e474a) {
                if (local_f58 == 0x524e4749) {
                  FUN_5f6869f0(local_c00,(char *)((int)param_2 + 0xe4a));
                }
                else if (local_f58 == 0x4d414e49) {
                  MultiByteToWideChar(0,1,local_c00,-1,(LPWSTR)(param_2 + 0x13),0xff);
                  *(undefined2 *)(param_2 + 0x92) = 0;
                }
                else if (local_f58 == 0x504f4349) {
                  MultiByteToWideChar(0,1,local_c00,-1,(LPWSTR)(param_2 + 0x112),0xff);
                  *(undefined2 *)(param_2 + 0x191) = 0;
                }
              }
              else if (local_f58 == 0x544d4349) {
                MultiByteToWideChar(0,1,local_c00,-1,(LPWSTR)((int)param_2 + 0x646),0x400);
                *(undefined2 *)(param_2 + 0x391) = 0;
              }
              else if (local_f58 == 0x54524149) {
                MultiByteToWideChar(0,1,local_c00,-1,(LPWSTR)((int)param_2 + 0x24a),0xff);
                *(undefined2 *)((int)param_2 + 0x446) = 0;
              }
              if (param_4 != (int *)0x0) {
                MultiByteToWideChar(0,1,local_c00,-1,local_800,0x400);
                local_2 = 0;
                FUN_5f68b460(param_4,local_800,local_f58);
              }
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)local_f4c);
        }
        iVar2 = FUN_5f69c2c0(pvVar6,0,local_d00,0x100,local_c00,0x400);
        if (-1 < iVar2) {
          MultiByteToWideChar(0,1,local_c00,-1,(LPWSTR)((int)param_2 + 0x646),0x400);
          *(undefined2 *)(param_2 + 0x391) = 0;
          MultiByteToWideChar(0,1,local_c00,-1,local_800,0x400);
          local_2 = 0;
          if (param_4 == (int *)0x0) goto LAB_5f68af97;
          FUN_5f68b460(param_4,local_800,0x544d4349);
        }
        if (param_4 != (int *)0x0) {
          iVar2 = FUN_5f69c4b0(pvVar6);
          iVar7 = 0;
          if (0 < iVar2) {
            do {
              iVar8 = FUN_5f69c4c0(local_f5c,iVar7,local_d00,0x100,local_c00,0x400);
              if ((-1 < iVar8) && (iVar8 = lstrcmpA(local_d00,"Engineer"), iVar8 == 0)) {
                MultiByteToWideChar(0,1,local_c00,-1,local_800,0x400);
                local_2 = 0;
                FUN_5f68b460(param_4,local_800,0x474e4549);
              }
              iVar7 = iVar7 + 1;
              pvVar6 = local_f5c;
            } while (iVar7 < iVar2);
          }
        }
      }
LAB_5f68af97:
      FUN_5f69b700((int)pvVar6);
      pvVar4 = GlobalHandle(pvVar6);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(pvVar6);
      GlobalFree(pvVar4);
    }
  }
  uVar9 = FUN_5f68a500(param_1,&local_f54,local_e5c);
  uVar9 = uVar9 & local_e54 & 1;
  local_f48 = local_f54;
  uStack_f44 = local_f50;
  local_f58 = FUN_5f68a600(param_1,&local_f54,local_ea4);
  local_ef4 = local_f54;
  local_ef0 = local_f50;
  SetFilePointer(param_1,local_f54,(PLONG)&local_ef0,0);
  iVar2 = FUN_5f688530(param_1,(ushort *)local_f38,1,&local_f54);
  if (iVar2 < 0) goto LAB_5f68b22e;
  uVar10 = (local_f38[0] & 0xffff) >> 0xb & 3;
  if ((uVar10 == 0) || (uVar10 == 2)) {
    *param_2 = 2;
  }
  else if (uVar10 == 3) {
    *param_2 = 1;
  }
  uVar10 = (local_f38[0] & 0xffff) >> 0xd & 3;
  if (uVar10 == 1) {
    param_2[1] = 3;
  }
  else if (uVar10 == 2) {
    param_2[1] = 2;
  }
  else if (uVar10 == 3) {
    param_2[1] = 1;
  }
  iVar2 = FUN_5f6883f0((ushort *)local_f38);
  param_2[2] = iVar2;
  cVar1 = FUN_5f68b530((int)local_f38);
  param_2[7] = CONCAT31(extraout_var,cVar1);
  local_f40 = FUN_5f688910((ushort *)local_f38);
  uVar10 = *(uint *)((int)param_2 + 0xe52);
  param_2[6] = local_f40;
  param_2[8] = 0x10;
  local_f5c = (void *)0x0;
  if ((uVar10 & 1) == 0) {
    if ((uVar10 & 4) != 0) {
      if (uVar9 != 0) {
        iVar7 = local_e50 * 0x480 + -0x480;
        iVar2 = iVar7 >> 0x1f;
        lVar14 = (longlong)iVar7;
        if (local_e48 < 1) {
          if ((local_e54 & 8) != 0) goto LAB_5f68b3b3;
          if (local_e48 != -1) {
            pvVar6 = (void *)0x0;
            goto LAB_5f68b20f;
          }
        }
        goto LAB_5f68b3f6;
      }
      if (local_f58 != 0) goto LAB_5f68b3e3;
      lVar14 = FUN_5f68b6c0(param_1,local_f54,local_f50,*param_3,param_3[1],1,(int *)&local_f5c,
                            (uint *)0x0);
      goto LAB_5f68b110;
    }
    if ((uVar10 & 8) != 0) {
      if (uVar9 != 0) {
        iVar7 = local_e50 * 0x480 + -0x480;
        iVar2 = iVar7 >> 0x1f;
        lVar14 = (longlong)iVar7;
        if (local_e48 < 1) {
          if ((local_e54 & 8) != 0) goto LAB_5f68b3b3;
          if (local_e48 != -1) {
            pvVar6 = (void *)0x0;
            goto LAB_5f68b20f;
          }
        }
        goto LAB_5f68b3f6;
      }
      if (local_f58 != 0) goto LAB_5f68b3e3;
      lVar14 = FUN_5f68b8e0(param_1,local_f54,local_f50,*param_3,param_3[1],1,(int *)&local_f5c);
      goto LAB_5f68b110;
    }
    if (uVar9 != 0) {
      iVar7 = local_e50 * 0x480 + -0x480;
      iVar2 = iVar7 >> 0x1f;
      if ((local_e48 < 1) && (((local_e54 & 8) != 0 || (local_e48 != -1)))) {
LAB_5f68b3b3:
        lVar14 = CONCAT44(iVar2,iVar7);
        pvVar6 = (void *)0x0;
        goto LAB_5f68b20f;
      }
LAB_5f68b3f6:
      lVar14 = CONCAT44(iVar2,iVar7);
      local_f5c = (void *)0x1;
      goto LAB_5f68b120;
    }
    if (local_f58 != 0) {
LAB_5f68b3e3:
      uVar9 = (((local_f40 < 32000) - 1 & 0x240) + 0x240) * local_e72;
      iVar7 = uVar9 - (local_e7a & 0xffff);
      iVar2 = -(uint)(uVar9 < (local_e7a & 0xffff));
      goto LAB_5f68b3f6;
    }
    local_f48 = *param_3 - local_f54;
    uStack_f44 = (param_3[1] - local_f50) - (uint)(*param_3 < local_f54);
    local_f4c = (int *)((int)(param_2[2] + ((int)param_2[2] >> 0x1f & 7U)) >> 3);
    lVar14 = ftol();
    pvVar6 = (void *)0x0;
  }
  else {
    lVar14 = FUN_5f68b550(param_1,local_f54,local_f50,1,(int *)&local_f5c);
LAB_5f68b110:
    pvVar6 = local_f5c;
    if (local_f5c != (void *)0x0) {
LAB_5f68b120:
      iVar2 = FUN_5f710890(&local_f4c);
      pvVar6 = local_f5c;
      if (iVar2 == 0) {
        local_eec = local_f48;
        local_ee8 = uStack_f44;
        SetFilePointer(param_1,local_f48,(PLONG)&local_ee8,0);
        local_f58 = 0x4000;
        pvVar4 = GlobalAlloc(0x42,0x4000);
        pvVar5 = GlobalLock(pvVar4);
        if (pvVar5 != (LPVOID)0x0) {
          BVar11 = ReadFile(param_1,pvVar5,local_f58,&local_f58,(LPOVERLAPPED)0x0);
          if (BVar11 != 0) {
            local_f58 = local_f58 - 0x400;
            cVar1 = (**(code **)(*local_f4c + 4))(pvVar5,local_f58,*param_3);
            if ((cVar1 != '\0') &&
               (puVar12 = (undefined4 *)(**(code **)(*local_f4c + 8))(),
               puVar12 != (undefined4 *)0x0)) {
              param_2[2] = *puVar12;
              param_2[7] = puVar12[1];
              param_2[6] = puVar12[2];
            }
          }
          pvVar4 = GlobalHandle(pvVar5);
          GlobalUnlock(pvVar4);
          pvVar4 = GlobalHandle(pvVar5);
          GlobalFree(pvVar4);
        }
        (**(code **)*local_f4c)();
        pvVar6 = local_f5c;
      }
    }
  }
LAB_5f68b20f:
  param_2[9] = (int)lVar14;
  *(int *)((int)param_2 + 0xe46) = (int)((ulonglong)lVar14 >> 0x20);
  *(char *)((int)param_2 + 0xe4b) = (char)pvVar6;
  iVar2 = 0;
LAB_5f68b22e:
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  return iVar2;
}


