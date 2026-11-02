/* Module: sftrans1.dll
   Function: FUN_00531a50
   Address: 00531a50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00531a50(int param_1)

{
  LSTATUS LVar1;
  int iVar2;
  DWORD DVar3;
  CHAR local_68 [28];
  BYTE local_4c [28];
  int local_30;
  HKEY local_2c;
  int local_28;
  int local_24;
  DWORD local_20 [4];
  HKEY local_10;
  DWORD local_c;
  CHAR local_8 [4];
  
  local_20[2] = 0x19;
  local_20[0] = 0x19;
  local_20[1] = 1;
  local_c = 0;
  local_20[3] = -0x7ff8fffb;
  local_24 = 0;
  if (*(int *)(param_1 + 0x7e4) == 0) {
    return 0;
  }
  local_28 = param_1;
  FUN_00535c90(local_8,3);
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)(param_1 + 0x478),0,0x2001f,&local_2c);
  if (LVar1 != 0) {
    return -0x7ff8fffb;
  }
  LVar1 = RegOpenKeyExA(local_2c,local_8,0,0x2001f,&local_10);
  DVar3 = -0x7ff8fffb;
  if (LVar1 == 0) {
    LVar1 = RegEnumValueA(local_10,0,local_68,local_20,(LPDWORD)0x0,local_20 + 1,local_4c,
                          local_20 + 2);
    if (LVar1 != 0x103) {
      do {
        FUN_00551640();
        FUN_00551640();
        lstrcpynA(&stack0xffffff8c,local_68,2);
        lstrcpynA(&stack0xffffff8c,"",2);
        iVar2 = lstrcmpA(&stack0xffffff8c,&stack0xffffff8c);
        if (iVar2 == 0) {
LAB_00531c14:
          local_c = local_c + 1;
        }
        else {
          local_20[3] = FUN_0052fc80(local_4c,&local_30);
          if ((int)local_20[3] < 0) goto LAB_00531c14;
          iVar2 = FUN_005315b0(local_4c);
          local_20[3] = iVar2;
          RegDeleteValueA(local_10,local_68);
          if (-1 < iVar2) {
            local_24 = 1;
          }
          if (local_30 != 0) {
            FUN_004035f0(local_30);
          }
          local_c = local_c - 1;
        }
        LVar1 = RegEnumValueA(local_10,local_c,local_68,local_20,(LPDWORD)0x0,local_20 + 1,local_4c,
                              local_20 + 2);
      } while (LVar1 != 0x103);
      if (local_24 == 1) {
        FUN_005323f0(2,0);
      }
    }
    RegCloseKey(local_10);
    DVar3 = local_20[3];
  }
  RegCloseKey(local_2c);
  return DVar3;
}


