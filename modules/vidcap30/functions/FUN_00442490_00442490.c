/* Module: vidcap30.exe
   Function: FUN_00442490
   Address: 00442490
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00442490(int param_1,int *param_2,int param_3,LPSTR param_4,int param_5)

{
  LPCSTR lpString2;
  int iVar1;
  int iVar2;
  int local_518;
  CHAR local_514 [259];
  undefined1 local_411;
  CHAR local_410 [1040];
  
  iVar2 = 0;
  local_410[0] = '\0';
  if (0 < param_3) {
    local_518 = param_3;
    do {
      local_514[0] = '\0';
      if (*param_2 == 0) {
        lpString2 = (LPCSTR)_SfGetFileNamePtrA_4(param_1);
        lstrcpynA(local_514,lpString2,0x104);
        local_411 = 0;
      }
      else if (*param_2 == 4) {
        FUN_0045aec0(*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c),
                     *(undefined4 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x114),local_514,
                     0x104);
      }
      iVar1 = SfPrintF(local_410 + iVar2,&DAT_00587ac8,local_514);
      iVar2 = iVar2 + iVar1;
      param_2 = param_2 + 4;
      local_518 = local_518 + -1;
    } while (local_518 != 0);
  }
  lstrcpynA(param_4,local_410,param_5);
  param_4[param_5 + -1] = '\0';
  lstrlenA(param_4);
  return;
}


