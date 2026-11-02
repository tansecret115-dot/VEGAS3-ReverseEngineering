/* Module: vidcap30.exe
   Function: FUN_0044e080
   Address: 0044e080
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044e080(undefined4 param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  uchar *puVar3;
  undefined4 uVar4;
  int iVar5;
  CHAR *pCVar6;
  uchar local_208 [260];
  CHAR local_104 [259];
  undefined1 local_1;
  
  iVar2 = 1;
  pcVar1 = *(char **)(param_2 + 0x14);
  local_208[0] = '\0';
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    _SfGetPathNameFromFilePath_12(pcVar1,local_208,0x104);
    _mbscat(local_208,*(uchar **)(param_2 + 0x10));
    puVar3 = (uchar *)_SfGetFileNameExtensionPtrA_4(*(undefined4 *)(param_2 + 0x14));
    _mbscat(local_208,puVar3);
    if (((*(byte *)(param_2 + 0x38) & 2) != 0) &&
       (iVar2 = lstrcmpiA(*(LPCSTR *)(param_2 + 0x14),(LPCSTR)local_208), iVar2 != 0)) {
      iVar2 = _SfDoesFileExist_4(local_208);
      if (iVar2 != 0) {
        puVar3 = local_208;
        uVar4 = _SfGetString_8(DAT_005ba2a0,0xc4ff);
        iVar2 = SfMsgBox(DAT_005ba4bc,0x134,uVar4,puVar3);
        if (iVar2 == 7) {
          return 0x3e3;
        }
      }
      lstrcpynA(local_104,*(LPCSTR *)(param_2 + 0x14),0x104);
      local_1 = 0;
      FUN_0044fb80(local_208);
      iVar2 = FUN_0045b950(local_104,local_208);
      if (iVar2 == 0) {
        pCVar6 = local_104;
        uVar4 = _SfGetString_8(DAT_005ba2a0,0xc500);
        SfErrorHandler_DetailsAddString(0,uVar4,pCVar6);
        return -0x7ffb1fe0;
      }
      iVar2 = FUN_00443c20(param_1,param_2,local_208);
      FUN_0044fb80(local_104);
      return iVar2;
    }
    iVar2 = FUN_00443c20(param_1,param_2,local_208);
    if (-1 < iVar2) {
      uVar4 = 2;
      iVar5 = _SfDoesFileExist_4(*(undefined4 *)(param_2 + 0x14));
      FUN_00443b20(param_2,-(iVar5 != 0) & 2,uVar4);
    }
  }
  return iVar2;
}


