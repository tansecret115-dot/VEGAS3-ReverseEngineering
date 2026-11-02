/* Module: mp3rw.dll
   Function: FUN_00413b60
   Address: 00413b60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00413b60(void *this,LPSTR param_1,int param_2)

{
  uint dwIndex;
  LSTATUS LVar1;
  int iVar2;
  int iVar3;
  LPCVOID pvVar4;
  CHAR local_330 [260];
  uchar local_22c [260];
  BYTE local_128 [260];
  DWORD local_24;
  int local_20;
  uint local_1c;
  HKEY local_18;
  HKEY local_14;
  DWORD local_10;
  DWORD local_c;
  LPCVOID local_8;
  
  local_20 = -0x7fffbffb;
  local_8 = (LPCVOID)0x0;
  local_10 = 0x104;
  local_c = 0x19;
  *(undefined4 *)((int)this + 0x24) = 0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)((int)this + 0x70),0,0x20019,&local_18);
  if (LVar1 == 0) {
    LVar1 = RegOpenKeyExA(local_18,"License",0,0x20019,&local_14);
    pvVar4 = (LPCVOID)0x0;
    if (LVar1 == 0) {
      local_1c = 1;
      iVar2 = RegEnumValueA(local_14,0,local_330,&local_10,(LPDWORD)0x0,&local_24,local_128,&local_c
                           );
      while (iVar2 != 0x103) {
        FUN_0048b360();
        FUN_0048b360();
        lstrcpynA(&stack0xfffffcc4,local_330,4);
        lstrcpynA(&stack0xfffffcc4,"key",4);
        iVar2 = lstrcmpA(&stack0xfffffcc4,&stack0xfffffcc4);
        if (iVar2 == 0) {
LAB_00413cb5:
          FUN_0048b360();
          FUN_0048b360();
          lstrcpynA(&stack0xfffffcc4,(LPCSTR)local_128,2);
          FUN_00416b90(&stack0xfffffcc4,"",2);
          iVar2 = lstrcmpA(&stack0xfffffcc4,&stack0xfffffcc4);
          if (((iVar2 != 0) && (local_20 = FUN_004106b0(this,local_128), -1 < local_20)) &&
             ((*(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1,
              *(int *)(*(int *)this + 0xc) == 0x3ff || (iVar2 = FUN_00411980(this), iVar2 == 0)))) {
            pvVar4 = local_8;
            if (local_8 == (LPCVOID)0x0) {
              local_8 = *(LPCVOID *)this;
              *(undefined4 *)this = 0;
              _mbscpy(local_22c,local_128);
            }
            else if (*(int *)((int)this + 0x678) == 0) {
LAB_00413dbf:
              FUN_00401220(pvVar4);
              local_8 = *(LPCVOID *)this;
              *(undefined4 *)this = 0;
              _mbscpy(local_22c,local_128);
            }
            else {
              iVar2 = FUN_00419480(*(int *)this);
              iVar3 = FUN_00419480((int)pvVar4);
              iVar2 = (**(code **)((int)this + 0x678))(iVar3,iVar2);
              if (iVar2 == 0) {
                iVar2 = FUN_00419480(*(int *)this);
                iVar3 = FUN_00419480((int)pvVar4);
                if ((((short)iVar3 == (short)iVar2) && (*(int *)((int)pvVar4 + 4) == 0)) &&
                   (*(int *)(*(int *)this + 4) != 0)) goto LAB_00413dbf;
              }
              else {
                FUN_00401220(pvVar4);
                local_8 = *(LPCVOID *)this;
                *(undefined4 *)this = 0;
                _mbscpy(local_22c,local_128);
              }
            }
          }
        }
        else {
          FUN_0048b360();
          FUN_0048b360();
          lstrcpynA(&stack0xfffffcc4,local_330,2);
          lstrcpynA(&stack0xfffffcc4,"",2);
          iVar2 = lstrcmpA(&stack0xfffffcc4,&stack0xfffffcc4);
          if (iVar2 == 0) goto LAB_00413cb5;
        }
        dwIndex = local_1c;
        local_10 = 0x104;
        local_c = 0x19;
        if (0x15 < local_1c) break;
        local_1c = local_1c + 1;
        iVar2 = RegEnumValueA(local_14,dwIndex,local_330,&local_10,(LPDWORD)0x0,&local_24,local_128,
                              &local_c);
      }
      RegCloseKey(local_14);
      pvVar4 = local_8;
    }
    RegCloseKey(local_18);
    if (pvVar4 != (LPCVOID)0x0) {
      if (*(LPCVOID *)this != (LPCVOID)0x0) {
        FUN_00401220(*(LPCVOID *)this);
      }
      *(LPCVOID *)this = pvVar4;
      lstrcpynA(param_1,(LPCSTR)local_22c,param_2);
      param_1[param_2 + -1] = '\0';
      return 0;
    }
  }
  return local_20;
}


