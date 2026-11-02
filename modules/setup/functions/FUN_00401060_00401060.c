/* Module: Setup.exe
   Function: FUN_00401060
   Address: 00401060
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00401060(HMODULE param_1)

{
  bool bVar1;
  ushort uVar2;
  long lVar3;
  undefined2 extraout_var_00;
  undefined3 extraout_var;
  LPCSTR lpPathName;
  BOOL BVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int local_104;
  CHAR local_100 [256];
  
  puVar6 = &DAT_00447c18;
  for (iVar5 = 0x28d; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = &DAT_00446d88;
  for (iVar5 = 0x3a4; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  FUN_00404210(param_1);
  iVar5 = _SfLang_Open_16(&DAT_00446d7c,param_1,2,0);
  if (iVar5 == 0) {
    FUN_00402160();
    lVar3 = FUN_004021b0();
    if (lVar3 < 0) {
      _SfMessageBox_16((HWND)0x0,"Fatal Error!\nCould not initialize installer settings.",
                       "Sonic Foundry MsiSetup",0x40010);
      local_104 = 1;
    }
    else {
      uVar2 = FUN_004030e0();
      if (CONCAT22(extraout_var_00,uVar2) == 1) {
        FUN_00401210();
        local_104 = 1;
      }
      else if ((uVar2 & 2) == 0) {
        bVar1 = FUN_00402c00(&DAT_00448438);
        if (CONCAT31(extraout_var,bVar1) == 0) {
          local_104 = 0;
        }
        else {
          lpPathName = (LPCSTR)FUN_00402860();
          if ((lpPathName == (LPCSTR)0x0) || (BVar4 = SetCurrentDirectoryA(lpPathName), BVar4 == 0))
          {
            uVar7 = 0xc;
          }
          else {
            iVar5 = FUN_004027b0();
            if (iVar5 == 0) {
              FUN_00402230();
              iVar5 = FUN_00401d70();
              if (iVar5 != 1) goto LAB_004011e9;
              iVar5 = FUN_00402500();
              if (iVar5 == 0) {
                DeleteFileA(&DAT_004476dc);
                iVar5 = FUN_00401230();
                if ((iVar5 == 0) &&
                   ((DAT_00447d20 == 0 || (local_104 = FUN_00401390(), local_104 == 0)))) {
                  local_104 = FUN_00401430();
                }
                goto LAB_004011e9;
              }
              uVar7 = 0xd;
            }
            else {
              uVar7 = 0xd;
            }
          }
          _SfLoadString_16(DAT_00446d7c,uVar7,local_100,0x100);
          _SfMessageBox_16((HWND)0x0,local_100,"Sonic Foundry MsiSetup",0x40010);
          local_104 = 1;
        }
      }
      else {
        FUN_00401210();
        local_104 = 0;
      }
    }
  }
  else {
    _SfMessageBox_16((HWND)0x0,"Fatal Error!\nCould not load language strings.",
                     "Sonic Foundry MsiSetup",0x40010);
    local_104 = 1;
  }
LAB_004011e9:
  if (DAT_00446d7c != (int *)0x0) {
    _SfLang_Close_4(DAT_00446d7c);
  }
  FUN_004042d0();
  return local_104;
}


