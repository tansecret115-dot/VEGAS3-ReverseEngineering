/* Module: vidcap30.exe
   Function: FUN_0044ce00
   Address: 0044ce00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044ce00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  LPCSTR lpString;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int local_30c;
  CHAR local_308 [127];
  undefined1 local_289;
  CHAR local_288 [259];
  undefined1 local_185;
  undefined1 local_184 [128];
  CHAR local_104 [260];
  
  iVar1 = FUN_0044c6e0(param_2);
  local_30c = 0;
  FUN_0042f360(param_1);
  uVar7 = 0x80;
  lstrcpynA(local_288,*(LPCSTR *)(iVar1 + 0x14),0x104);
  local_185 = 0;
  lstrcpynA(local_308,*(LPCSTR *)(iVar1 + 0x10),0x80);
  local_289 = 0;
  pcVar4 = *(char **)(iVar1 + 0x14);
  if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
    _SfGetPathNameFromFilePath_12(pcVar4,local_104,0x104);
    lpString = (LPCSTR)_SfGetFileNameExtensionPtrA_4(*(undefined4 *)(iVar1 + 0x14));
    iVar2 = lstrlenA(local_104);
    iVar3 = lstrlenA(lpString);
    uVar7 = (0x103 - iVar2) - iVar3;
    if ((int)uVar7 < 0) {
      uVar7 = 0;
    }
    else if (0x80 < uVar7) {
      uVar7 = 0x80;
    }
  }
  pcVar4 = (char *)_SfPrepareName_12(param_3,local_184,uVar7);
  if (iVar1 != 0) {
    local_30c = FUN_004444d0(param_1,*(undefined4 *)(iVar1 + 4),pcVar4,0);
  }
  if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
    uVar6 = _SfGetString_8(DAT_005ba2a0,0xc526);
    SfMsgBox(DAT_005ba4bc,0x10,uVar6);
    return 0x3e3;
  }
  if ((local_30c != 0) && (local_30c != iVar1)) {
    uVar6 = *(undefined4 *)(*(int *)(iVar1 + 4) + 0xc);
    uVar5 = _SfGetString_8(DAT_005ba2a0,0xc516);
    SfMsgBox(DAT_005ba4bc,0x10,uVar5,pcVar4,uVar6);
    return 0x3e3;
  }
  iVar2 = FUN_0045b320(pcVar4);
  if (iVar2 == 0) {
    pcVar4 = "\\ / : * ? < > | \"";
    uVar6 = _SfGetString_8(DAT_005ba2a0,0xc517);
    SfMsgBox(DAT_005ba4bc,0x10,uVar6,pcVar4);
    return 0x3e3;
  }
  iVar2 = FUN_00443b80(param_1,iVar1,pcVar4);
  if (iVar2 < 0) {
LAB_0044d025:
    FUN_00443b80(param_1,iVar1,local_308);
  }
  else {
    iVar2 = FUN_0044e080(param_1,iVar1);
    if (iVar2 == 1) {
      iVar2 = 0;
    }
    else if ((iVar2 < 0) || (iVar2 == 0x3e3)) goto LAB_0044d025;
    if ((*(byte *)(iVar1 + 0x38) & 2) != 0) {
      local_30c = 0;
      iVar2 = FUN_00417c60(local_288,&local_30c,&DAT_005bb848);
      if (-1 < iVar2) {
        FUN_00417e60(DAT_005ba4bc,local_288,*(undefined4 *)(iVar1 + 0x14),&DAT_005bb848);
      }
      iVar1 = FUN_00441880(local_288,*(undefined4 *)(iVar1 + 0x14));
      return iVar1;
    }
  }
  return iVar2;
}


