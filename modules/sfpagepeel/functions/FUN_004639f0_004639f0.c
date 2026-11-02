/* Module: sfpagepeel.dll
   Function: FUN_004639f0
   Address: 004639f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004639f0(void *this,uchar *param_1)

{
  int iVar1;
  LSTATUS LVar2;
  int iVar3;
  CHAR local_144 [260];
  BYTE local_40 [28];
  DWORD local_24;
  int local_20;
  HKEY local_1c;
  DWORD local_18;
  void *local_14;
  int local_10;
  HKEY local_c;
  int local_8;
  
  local_24 = 1;
  local_18 = 0x19;
  local_8 = -0x7ffb1ebe;
  local_10 = 0;
  if (*(int *)this != 0) {
    local_10 = *(int *)(*(int *)this + 4);
  }
  local_14 = this;
  iVar1 = FUN_00464080(this,(LPCSTR)param_1);
  if ((iVar1 == 0) &&
     (LVar2 = RegCreateKeyExA((HKEY)0x80000002,(LPCSTR)((int)this + 0x70),0,(LPSTR)0x0,0,4,
                              (LPSECURITY_ATTRIBUTES)0x0,&local_1c,(LPDWORD)0x0), LVar2 == 0)) {
    LVar2 = RegCreateKeyExA(local_1c,"License",0,(LPSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,
                            &local_c,(LPDWORD)0x0);
    if (LVar2 == 0) {
      local_8 = FUN_004621f0(this,param_1);
      if (-1 < local_8) {
        FUN_00466850(this,(LPCSTR)param_1);
        iVar1 = 0;
        if ((*(int *)(*(int *)this + 0xc) == 0x3ff) || (iVar3 = FUN_004634c0(this), iVar3 == 0)) {
          do {
            local_20 = iVar1 + 1;
            local_18 = 0x19;
            wsprintfA(local_144,"key%d",local_20);
            LVar2 = RegQueryValueExA(local_c,local_144,(LPDWORD)0x0,&local_24,local_40,&local_18);
            if (LVar2 != 0) break;
            FUN_0046d450();
            FUN_0046d450();
            lstrcpynA(&stack0xfffffeb0,(LPCSTR)local_40,2);
            lstrcpynA(&stack0xfffffeb0,"",2);
            iVar3 = lstrcmpA(&stack0xfffffeb0,&stack0xfffffeb0);
            this = local_14;
            iVar1 = local_20;
          } while (iVar3 != 0);
          iVar1 = RegSetValueExA(local_c,local_144,0,1,param_1,0x18);
        }
        else {
          wsprintfA(local_144,"keyTrial");
          iVar1 = RegSetValueExA(local_c,local_144,0,1,param_1,0x18);
        }
        if (iVar1 == 0) {
          if (local_10 != 0) {
            FUN_00465ff0(this);
          }
          local_8 = 0;
        }
      }
      RegCloseKey(local_c);
    }
    RegCloseKey(local_1c);
  }
  return local_8;
}


