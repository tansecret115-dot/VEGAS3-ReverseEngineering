/* Module: vidcap30.exe
   Function: FUN_004ba440
   Address: 004ba440
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ba440(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  short unaff_DI;
  CHAR local_84 [127];
  undefined1 local_5;
  
  iVar1 = 1;
  local_84[0] = '\0';
  if (param_2 != (int *)0x0) {
    FUN_00579db0();
    local_84[0] = '\0';
    iVar1 = (**(code **)(*param_2 + 0x14))(param_2,&stack0xffffff74,0x80,param_3,2);
    if ((-1 < iVar1) && (unaff_DI != 0)) {
      WideCharToMultiByte(0,0,(LPCWSTR)&stack0xffffff74,-1,local_84,0x80,(LPCSTR)0x0,(LPBOOL)0x0);
      local_5 = 0;
      if (local_84[0] != '\0') {
        SfMEditPrintF(param_1,&DAT_00599fb0,local_84);
      }
    }
  }
  return iVar1;
}


