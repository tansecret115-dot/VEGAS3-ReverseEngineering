/* Module: sfpublish.dll
   Function: FUN_00404200
   Address: 00404200
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00404200(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  LPCWSTR lpString;
  LPCWSTR lpString_00;
  LPCWSTR lpString_01;
  LPCWSTR lpString_02;
  int iVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uStack_48;
  undefined4 uStack_44;
  undefined *puStack_40;
  LPCWSTR pWStack_3c;
  LPCWSTR pWStack_38;
  LPCWSTR pWStack_34;
  LPCWSTR pWStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uStack_20 = param_2;
  uStack_24 = 0x404215;
  lpString = (LPCWSTR)Ordinal_2();
  uStack_24 = param_3;
  uStack_28 = 0x404220;
  lpString_00 = (LPCWSTR)Ordinal_2();
  uStack_28 = param_4;
  uStack_2c = 0x40422b;
  lpString_01 = (LPCWSTR)Ordinal_2();
  uStack_2c = param_5;
  pWStack_30 = 
  L"䶋謈觐ᑕ譒ၕ熋勼䆍诼ᑉ坓⡨䍗儀ｐⱖ삅䖉࿴㊍\x01謀ఝ䍂蔀诿젽䍁甀윉ࡅ"
  ;
  lpString_02 = (LPCWSTR)Ordinal_2();
  uStack_48 = param_1 - 4;
  uStack_44 = *(undefined4 *)(param_1 + 0x14);
  puStack_40 = &DAT_00435728;
  pWStack_3c = lpString;
  pWStack_38 = lpString_00;
  pWStack_34 = lpString_01;
  pWStack_30 = lpString_02;
  iVar1 = (**(code **)(*(int *)(param_1 + -4) + 0x2c))();
  if (iVar1 < 0) {
    if (lpString != (LPCWSTR)0x0) {
      iVar2 = lstrlenW(lpString);
      FUN_004328f0();
      uStack_48 = uStack_48 & 0xffffff00;
      WideCharToMultiByte(0,0,lpString,-1,(LPSTR)&uStack_48,iVar2 * 2 + 2,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    if (lpString_00 != (LPCWSTR)0x0) {
      iVar2 = lstrlenW(lpString_00);
      FUN_004328f0();
      uStack_48 = uStack_48 & 0xffffff00;
      WideCharToMultiByte(0,0,lpString_00,-1,(LPSTR)&uStack_48,iVar2 * 2 + 2,(LPCSTR)0x0,(LPBOOL)0x0
                         );
    }
    if (lpString_01 != (LPCWSTR)0x0) {
      iVar2 = lstrlenW(lpString_01);
      FUN_004328f0();
      uStack_48 = uStack_48 & 0xffffff00;
      WideCharToMultiByte(0,0,lpString_01,-1,(LPSTR)&uStack_48,iVar2 * 2 + 2,(LPCSTR)0x0,(LPBOOL)0x0
                         );
    }
    if (lpString_02 != (LPCWSTR)0x0) {
      iVar2 = lstrlenW(lpString_02);
      FUN_004328f0();
      uStack_48 = uStack_48 & 0xffffff00;
      WideCharToMultiByte(0,0,lpString_02,-1,(LPSTR)&uStack_48,iVar2 * 2 + 2,(LPCSTR)0x0,(LPBOOL)0x0
                         );
    }
    pcVar7 = 
    "EmailURL() - ShowEmailWizard() URL:\'%s\' To:\'%s\' Subject:\'%s\' Message:\'%s\' failed hr=%x"
    ;
    uVar6 = 0x496;
    pcVar5 = "sfpub.cpp";
    uVar4 = 1;
    puVar3 = FUN_004012b0();
    FUN_00415b60((int)puVar3,uVar4,pcVar5,uVar6,pcVar7);
  }
  Ordinal_6(lpString_02);
  Ordinal_6(lpString_01);
  Ordinal_6(lpString_00);
  Ordinal_6(lpString);
  return iVar1;
}


