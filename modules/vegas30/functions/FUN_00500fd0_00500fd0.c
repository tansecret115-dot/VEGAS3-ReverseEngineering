/* Module: vegas30.exe
   Function: FUN_00500fd0
   Address: 00500fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00500fd0(uint param_1,undefined4 param_2,int param_3)

{
  double dVar1;
  HWND pHVar2;
  int iVar3;
  float10 fVar4;
  CHAR *lpString;
  int iVar5;
  undefined1 *puVar6;
  undefined8 local_218;
  undefined1 local_208 [256];
  CHAR local_108 [260];
  
  local_218 = *(double *)(param_3 + 0x20);
  if (((param_1 & 0xffff) == 9) || ((param_1 & 0xffff) == 8)) {
    lpString = local_108;
    iVar5 = 0x100;
    pHVar2 = GetDlgItem(*(HWND *)(param_3 + 0x18),0x46a);
    iVar5 = GetWindowTextA(pHVar2,lpString,iVar5);
    if (iVar5 != 0) {
      fVar4 = (float10)_SfTextToDoubleToken_8(local_108,0);
      local_218 = (double)fVar4;
      if ((float10)_DAT_006106d0 <= fVar4) {
        if (_DAT_00619d38 < local_218) {
          local_218 = 65536.0;
        }
      }
      else {
        local_218 = 1.0;
      }
      SfPrintF(local_208,&DAT_00619d20,(undefined4)local_218,local_218._4_4_);
      puVar6 = local_208;
      pHVar2 = GetDlgItem(*(HWND *)(param_3 + 0x18),0x46a);
      SfSetWindowText(pHVar2,puVar6);
    }
  }
  iVar5 = ftol();
  iVar3 = _Spinner_DefScrollProc_24(0x115,param_1,param_2,1,2,iVar5);
  local_218 = local_218 - (double)(iVar5 - iVar3);
  if (local_218 == *(double *)(param_3 + 0x20)) {
    return 1;
  }
  *(double *)(param_3 + 0x20) = local_218;
  dVar1 = _DAT_006106d0;
  if ((_DAT_006106d0 <= local_218) && (dVar1 = local_218, _DAT_00619d38 < local_218)) {
    dVar1 = _DAT_00619d38;
  }
  local_218._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
  local_218._0_4_ = SUB84(dVar1,0);
  *(double *)(param_3 + 0x20) = dVar1;
  SfPrintF(local_208,&DAT_00619d20,(undefined4)local_218,local_218._4_4_);
  puVar6 = local_208;
  pHVar2 = GetDlgItem(*(HWND *)(param_3 + 0x18),0x46a);
  SfSetWindowText(pHVar2,puVar6);
  return 1;
}


