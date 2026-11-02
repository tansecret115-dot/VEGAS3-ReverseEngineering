/* Module: mcplugrw.dll
   Function: FUN_00413450
   Address: 00413450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00413450(void *this,uchar *param_1)

{
  void *this_00;
  uint dwIndex;
  LSTATUS LVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  CHAR local_254 [260];
  HKEY__ local_150 [65];
  void *local_4c;
  DWORD local_48;
  HKEY__ local_44 [7];
  uint local_28;
  HKEY local_24;
  uint local_20;
  HKEY local_1c;
  uint local_18;
  DWORD local_14;
  int local_10;
  DWORD local_c;
  int local_8;
  
  local_10 = 0;
  local_14 = 0x104;
  local_c = 0x19;
  *(undefined4 *)((int)this + 0x24) = 0;
  local_4c = this;
  _mbscpy((uchar *)local_150,"");
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)((int)this + 0x70),0,0x20019,&local_24);
  if (LVar1 == 0) {
    LVar1 = RegOpenKeyExA(local_24,"License",0,0x20019,&local_1c);
    if (LVar1 == 0) {
      local_28 = 1;
      iVar2 = RegEnumValueA(local_1c,0,local_254,&local_14,(LPDWORD)0x0,&local_48,(LPBYTE)local_44,
                            &local_c);
      while (iVar2 != 0x103) {
        FUN_0048b360();
        FUN_0048b360();
        pcVar4 = lstrcpynA_exref;
        lstrcpynA(&stack0xfffffda0,local_254,4);
        lstrcpynA(&stack0xfffffda0,"key",4);
        iVar2 = lstrcmpA(&stack0xfffffda0,&stack0xfffffda0);
        if (iVar2 == 0) {
LAB_004135ad:
          FUN_0048b360();
          FUN_0048b360();
          (*pcVar4)(&stack0xfffffda0,local_44,2);
          FUN_00416b90(&stack0xfffffda0,"",2);
          iVar2 = lstrcmpA(&stack0xfffffda0,&stack0xfffffda0);
          this_00 = local_4c;
          if (iVar2 != 0) {
            iVar2 = FUN_00412e90(local_4c,&local_10,&local_20,local_44,(uint *)0x0,(undefined4 *)0x0
                                );
            if (*(int *)((int)this_00 + 0x678) == 0) {
              iVar3 = FUN_00412e90(this_00,&local_8,&local_18,local_150,(uint *)0x0,
                                   (undefined4 *)0x0);
              if (iVar2 < 0) goto joined_r0x00413723;
              if (iVar3 < 0) goto LAB_00413737;
              if (local_18 == local_20) {
                if ((iVar3 != 0x4e12e) && ((iVar2 == 0x4e12e || (local_8 < local_10))))
                goto LAB_00413737;
              }
              else if (local_18 < local_20) goto LAB_00413737;
            }
            else {
              iVar3 = FUN_00412e90(this_00,&local_8,&local_18,local_150,(uint *)0x0,
                                   (undefined4 *)0x0);
              if (iVar2 < 0) {
joined_r0x00413723:
                if ((iVar2 == -0x7ffb1ed3) || (iVar3 != -0x7ffb1ed3)) goto LAB_0041373f;
              }
              else if (-1 < iVar3) {
                if (local_18 == local_20) {
                  if ((iVar3 != 0x4e12e) && ((iVar2 == 0x4e12e || (local_8 < local_10))))
                  goto LAB_00413737;
                }
                else {
                  iVar2 = (**(code **)((int)this_00 + 0x678))(local_18,local_20);
                  if (iVar2 != 0) goto LAB_00413737;
                }
                goto LAB_0041373f;
              }
LAB_00413737:
              _mbscpy((uchar *)local_150,(uchar *)local_44);
            }
          }
        }
        else {
          FUN_0048b360();
          FUN_0048b360();
          lstrcpynA(&stack0xfffffda0,local_254,2);
          lstrcpynA(&stack0xfffffda0,"",2);
          iVar2 = lstrcmpA(&stack0xfffffda0,&stack0xfffffda0);
          pcVar4 = lstrcpynA_exref;
          if (iVar2 == 0) goto LAB_004135ad;
        }
LAB_0041373f:
        dwIndex = local_28;
        local_14 = 0x104;
        local_c = 0x19;
        if (0x15 < local_28) break;
        local_28 = local_28 + 1;
        iVar2 = RegEnumValueA(local_1c,dwIndex,local_254,&local_14,(LPDWORD)0x0,&local_48,
                              (LPBYTE)local_44,&local_c);
      }
      RegCloseKey(local_1c);
    }
    RegCloseKey(local_24);
  }
  iVar2 = lstrcmpA((LPCSTR)local_150,"");
  if (iVar2 != 0) {
    _mbscpy(param_1,(uchar *)local_150);
    return 0;
  }
  return 0x80004005;
}


