/* Module: sfcdi.dll
   Function: SfCDUI_CD_ShowErrorBox
   Address: 5bf14eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfCDUI_CD_ShowErrorBox(struct HWND__ *,long,struct HSFCD__ *,unsigned int) */

int SfCDUI_CD_ShowErrorBox(HWND__ *param_1,long param_2,HSFCD__ *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  char *local_e94;
  char *local_e90;
  CHAR *local_e8c;
  int local_e88;
  undefined4 local_e84;
  undefined4 local_e80;
  CHAR local_e78 [128];
  tCDR_ERRORDATA local_df8 [70];
  int local_db2;
  char local_ca0 [672];
  char local_a00 [512];
  char local_800 [2048];
  
                    /* 0x14eb0  47  ?SfCDUI_CD_ShowErrorBox@@YGHPAUHWND__@@JPAUHSFCD__@@I@Z */
  local_e8c = (CHAR *)0x0;
  local_e84 = 0;
  local_e80 = 0;
  local_a00[0] = '\0';
  local_800[0] = '\0';
  local_ca0[0] = '\0';
  MessageBeep(0x40);
  cdr_GetErrorState(param_3,local_df8);
  if (param_2 == 0) {
    SfCDUI_CD_FillInErrorMessages(param_3,0,local_ca0,0x2a0,local_a00,0x200,param_4);
    local_e84 = 1;
    local_e80 = 1;
    FUN_5bf27f10(DAT_5bf65fc4,0xd5,local_e78,0x80);
    local_e8c = local_e78;
  }
  else {
    SfCDUI_CD_FillInErrorMessages(param_3,param_2,local_ca0,0x2a0,local_a00,0x200,param_4);
    if (param_2 == -0x7ffb1ff4) {
      local_e84 = 1;
      local_e80 = 1;
      FUN_5bf27f10(DAT_5bf65fc4,0xd6,local_e78,0x80);
      local_e8c = local_e78;
      local_e88 = -1;
    }
    else if (param_2 == -0x7ffb1f38) {
      local_e88 = local_db2 + -100;
    }
    else {
      local_e88 = 0;
      iVar2 = 0;
      piVar1 = &DAT_5bf647f0;
      do {
        if (*piVar1 == param_2) {
          local_e88 = *(int *)(iVar2 * 8 + 0x5bf647f4);
          break;
        }
        piVar1 = piVar1 + 2;
        iVar2 = iVar2 + 1;
      } while (piVar1 < &DAT_5bf647f8);
    }
    SfCDUI_CD_FillInDebugMessage(param_3,param_2,param_4,local_800,0x800);
  }
  local_e94 = local_ca0;
  local_e90 = local_800;
  iVar2 = FUN_5bf27640(DAT_5bf65fc4,(LPCSTR)0xda,param_1,(DLGPROC)&LAB_5bf14ce0,(LPARAM)&local_e94);
  return iVar2;
}


