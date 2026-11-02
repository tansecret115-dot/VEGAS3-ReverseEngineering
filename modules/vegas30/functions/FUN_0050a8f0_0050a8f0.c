/* Module: vegas30.exe
   Function: FUN_0050a8f0
   Address: 0050a8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0050a8f0(undefined4 param_1,LPCSTR param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_11c [16];
  CHAR local_10c [259];
  undefined1 local_9;
  byte local_8;
  
  FUN_00508ba0(param_1,local_11c);
  if ((local_8 & 2) != 0) {
    lstrcpynA(local_10c,param_2,0x104);
    local_9 = 0;
    iVar1 = FUN_00508bd0(param_1,local_11c);
    return iVar1;
  }
  if ((local_8 & 1) == 0) {
    if (((local_8 & 0x80) == 0) && (iVar1 = _SfPlugIn_Rename_8(local_11c,param_2), iVar1 < 0)) {
      return iVar1;
    }
  }
  else if ((local_8 & 0x80) == 0) {
    puVar3 = local_11c;
    iVar1 = lstrlenA(param_2);
    _SfVideoPlugin_SetDescription_12(param_2,iVar1,puVar3);
  }
  lstrcpynA(local_10c,param_2,0x104);
  local_9 = 0;
  iVar1 = FUN_00508bd0(param_1,local_11c);
  if ((local_8 & 1) == 0) {
    if ((local_8 & 0x80) == 0) {
      iVar2 = _SfPlugIn_FindNode_8(DAT_0064b468,local_11c);
      lstrcpynA((LPSTR)(iVar2 + 0x20),param_2,0x40);
      *(undefined1 *)(iVar2 + 0x5f) = 0;
      FUN_00422470(local_11c);
    }
  }
  else if ((local_8 & 0x80) == 0) {
    iVar1 = FUN_005089e0(param_2,local_11c);
    FUN_00444ff0(local_11c);
    return iVar1;
  }
  return iVar1;
}


