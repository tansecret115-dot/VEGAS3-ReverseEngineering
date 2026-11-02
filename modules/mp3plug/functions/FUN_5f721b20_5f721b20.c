/* Module: mp3plug.dll
   Function: FUN_5f721b20
   Address: 5f721b20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f721b20(void *this,uchar *param_1,HKEY param_2,uint param_3)

{
  void *this_00;
  DWORD dwIndex;
  LSTATUS LVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  uchar *puVar6;
  HKEY__ *pHVar7;
  CHAR local_250 [260];
  HKEY__ local_14c [65];
  uint local_48;
  HKEY__ local_44 [7];
  uint local_28;
  DWORD local_24;
  void *local_20;
  HKEY local_1c;
  DWORD local_18;
  int local_14;
  int local_10;
  DWORD local_c;
  DWORD local_8;
  
  puVar6 = param_1;
  for (uVar3 = (uint)param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    puVar6 = puVar6 + 4;
  }
  for (uVar3 = (uint)param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = '\0';
    puVar6 = puVar6 + 1;
  }
  pHVar7 = local_14c;
  local_20 = this;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    pHVar7->unused = 0;
    pHVar7 = pHVar7 + 1;
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  local_10 = 0;
  local_8 = 0x104;
  local_c = 0x19;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)((int)this + 0x70),0,0x20019,&local_1c);
  if (LVar1 == 0) {
    LVar1 = RegOpenKeyExA(local_1c,"License",0,0x20019,&param_2);
    if (LVar1 == 0) {
      local_18 = 1;
      iVar4 = RegEnumValueA(param_2,0,local_250,&local_8,(LPDWORD)0x0,&local_24,(LPBYTE)local_44,
                            &local_c);
      while (iVar4 != 0x103) {
        FUN_5f72a200();
        FUN_5f72a200();
        pcVar5 = lstrcpynA_exref;
        lstrcpynA(&stack0xfffffda4,local_250,4);
        lstrcpynA(&stack0xfffffda4,"key",4);
        iVar4 = lstrcmpA(&stack0xfffffda4,&stack0xfffffda4);
        if (iVar4 == 0) {
LAB_5f721c8e:
          FUN_5f72a200();
          FUN_5f72a200();
          (*pcVar5)(&stack0xfffffda4,local_44,2);
          FUN_5f6b9350(&stack0xfffffda4,"",2);
          iVar4 = lstrcmpA(&stack0xfffffda4,&stack0xfffffda4);
          this_00 = local_20;
          if (((iVar4 != 0) &&
              (iVar4 = FUN_5f7211c0(local_20,&local_10,&local_28,local_44,(uint *)0x0,
                                    (undefined4 *)0x0), iVar4 != -0x7ffb1ed3)) &&
             (local_28 == param_3)) {
            *(int *)((int)this_00 + 0x24) = *(int *)((int)this_00 + 0x24) + 1;
            if (((iVar4 == 0x4e12e) || (iVar4 == 0x4e131)) || (iVar4 == 0x4e12d)) {
              _mbscpy((uchar *)local_14c,(uchar *)local_44);
              goto LAB_5f721e25;
            }
            iVar2 = FUN_5f7211c0(this_00,&local_14,&local_48,local_14c,(uint *)0x0,(undefined4 *)0x0
                                );
            if (iVar2 < 0) {
              if (-1 < iVar4) goto LAB_5f721dc3;
LAB_5f721db1:
              if (iVar2 != -0x7ffb1ed3) goto LAB_5f721dcb;
            }
            else {
              if (iVar4 < 0) goto LAB_5f721db1;
              if ((iVar4 != 0x4e130) || (iVar2 != 0x4e130)) {
                if (((iVar2 == 0x4e12f) && (iVar4 == 0x4e130)) || (local_14 < local_10))
                goto LAB_5f721dc3;
                goto LAB_5f721dcb;
              }
              if (local_10 <= local_14) goto LAB_5f721dcb;
            }
LAB_5f721dc3:
            _mbscpy((uchar *)local_14c,(uchar *)local_44);
          }
        }
        else {
          FUN_5f72a200();
          FUN_5f72a200();
          lstrcpynA(&stack0xfffffda4,local_250,2);
          lstrcpynA(&stack0xfffffda4,"",2);
          iVar4 = lstrcmpA(&stack0xfffffda4,&stack0xfffffda4);
          pcVar5 = lstrcpynA_exref;
          if (iVar4 == 0) goto LAB_5f721c8e;
        }
LAB_5f721dcb:
        dwIndex = local_18;
        local_18 = local_18 + 1;
        local_8 = 0x104;
        local_c = 0x19;
        iVar4 = RegEnumValueA(param_2,dwIndex,local_250,&local_8,(LPDWORD)0x0,&local_24,
                              (LPBYTE)local_44,&local_c);
      }
      RegCloseKey(param_2);
    }
    RegCloseKey(local_1c);
  }
LAB_5f721e25:
  iVar4 = lstrcmpA((LPCSTR)local_14c,&DAT_5f75d150);
  if (iVar4 == 0) {
    return 0x80004005;
  }
  _mbscpy(param_1,(uchar *)local_14c);
  return 0;
}


