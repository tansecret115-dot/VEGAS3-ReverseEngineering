/* Module: sfmarket2.dll
   Function: FUN_00416480
   Address: 00416480
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00416480(void *this,LPCSTR param_1)

{
  int *piVar1;
  DWORD dwIndex;
  LSTATUS LVar2;
  int iVar3;
  uint uVar4;
  BYTE local_22c [260];
  BYTE local_128 [260];
  DWORD local_24;
  int local_20;
  HKEY local_1c;
  DWORD local_18;
  DWORD local_14;
  int *local_10;
  DWORD local_c;
  HKEY local_8;
  
  local_18 = 0x104;
  local_14 = 0x19;
  local_10 = this;
  LVar2 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)((int)this + 0x70),0,0x20019,&local_1c);
  if (LVar2 == 0) {
    LVar2 = RegOpenKeyExA(local_1c,"License",0,0x2001f,&local_8);
    if (LVar2 == 0) {
      local_c = 1;
      iVar3 = RegEnumValueA(local_8,0,(LPSTR)local_22c,&local_18,(LPDWORD)0x0,&local_24,local_128,
                            &local_14);
      while (iVar3 != 0x103) {
        FUN_00492f90();
        FUN_00492f90();
        lstrcpynA(&stack0xfffffdc8,(LPCSTR)local_22c,4);
        lstrcpynA(&stack0xfffffdc8,"key",4);
        iVar3 = lstrcmpA(&stack0xfffffdc8,&stack0xfffffdc8);
        if (iVar3 == 0) {
          FUN_00492f90();
          FUN_00492f90();
          lstrcpynA(&stack0xfffffdc8,(LPCSTR)local_128,2);
          lstrcpynA(&stack0xfffffdc8,"",2);
          iVar3 = lstrcmpA(&stack0xfffffdc8,&stack0xfffffdc8);
          piVar1 = local_10;
          if (iVar3 == 0) goto LAB_00416631;
          iVar3 = FUN_004145f0(local_10,local_128);
          if (((iVar3 < 0) || (iVar3 = lstrcmpA((LPCSTR)local_128,param_1), iVar3 == 0)) ||
             ((uVar4 = FUN_00414ed0(piVar1,&local_20), (int)uVar4 < 0 &&
              (iVar3 = FUN_004158c0(piVar1), iVar3 != 0)))) {
            iVar3 = RegDeleteValueA(local_8,(LPCSTR)local_22c);
            local_c = local_c - 1;
joined_r0x00416736:
            if (iVar3 < 0) {
              return iVar3;
            }
          }
        }
        else {
LAB_00416631:
          FUN_00492f90();
          FUN_00492f90();
          lstrcpynA(&stack0xfffffdc8,(LPCSTR)local_22c,2);
          lstrcpynA(&stack0xfffffdc8,"",2);
          iVar3 = lstrcmpA(&stack0xfffffdc8,&stack0xfffffdc8);
          if (iVar3 == 0) {
            FUN_00492f90();
            FUN_00492f90();
            lstrcpynA(&stack0xfffffdc8,(LPCSTR)local_128,2);
            lstrcpynA(&stack0xfffffdc8,"",2);
            iVar3 = lstrcmpA(&stack0xfffffdc8,&stack0xfffffdc8);
            piVar1 = local_10;
            if ((iVar3 != 0) &&
               (((iVar3 = FUN_004145f0(local_10,local_128), iVar3 < 0 ||
                 (iVar3 = lstrcmpA((LPCSTR)local_128,param_1), iVar3 == 0)) ||
                (uVar4 = FUN_00414ed0(piVar1,&local_20), -1 < (int)uVar4)))) {
              iVar3 = RegSetValueExA(local_8,(LPCSTR)local_22c,0,1,local_22c,0x18);
              goto joined_r0x00416736;
            }
          }
        }
        local_18 = 0x104;
        local_14 = 0x19;
        _mbscpy(local_22c,"");
        dwIndex = local_c;
        local_c = local_c + 1;
        iVar3 = RegEnumValueA(local_8,dwIndex,(LPSTR)local_22c,&local_18,(LPDWORD)0x0,&local_24,
                              local_128,&local_14);
        this = local_10;
      }
      RegCloseKey(local_8);
    }
    RegCloseKey(local_1c);
  }
  _mbscpy((uchar *)((int)this + 4),"");
  return 0;
}


