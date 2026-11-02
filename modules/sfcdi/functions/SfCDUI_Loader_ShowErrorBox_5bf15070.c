/* Module: sfcdi.dll
   Function: SfCDUI_Loader_ShowErrorBox
   Address: 5bf15070
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfCDUI_Loader_ShowErrorBox(struct HWND__ *,int,struct tPARAMETERS_LDRCFG *) */

int SfCDUI_Loader_ShowErrorBox(HWND__ *param_1,int param_2,tPARAMETERS_LDRCFG *param_3)

{
  int *piVar1;
  BYTE *pBVar2;
  uchar *_Source;
  int iVar3;
  uint uVar4;
  uint uVar5;
  CHAR *local_9bc;
  uchar *local_9b8;
  CHAR *local_9b4;
  undefined4 local_9b0;
  undefined4 local_9ac;
  undefined4 local_9a8;
  uchar local_9a0 [128];
  CHAR local_920 [128];
  uchar local_8a0 [1024];
  uchar local_4a0 [512];
  CHAR local_2a0 [672];
  
                    /* 0x15070  49
                       ?SfCDUI_Loader_ShowErrorBox@@YGHPAUHWND__@@HPAUtPARAMETERS_LDRCFG@@@Z */
  uVar4 = 0;
  local_9b4 = (CHAR *)0x0;
  local_9ac = 0;
  local_9a8 = 0;
  local_4a0[0] = '\0';
  local_8a0[0] = '\0';
  local_2a0[0] = '\0';
  MessageBeep(0x40);
  FUN_5bf14b50(param_3,param_2,local_2a0,0x2a0,local_4a0,0x200);
  if (param_2 == -1) {
    local_9ac = 1;
    local_9a8 = 1;
    FUN_5bf27f10(DAT_5bf65fc4,0xd6,local_920,0x80);
    local_9b4 = local_920;
    local_9b0 = 0xffffffff;
  }
  else {
    local_9b0 = 0;
    iVar3 = 0;
    piVar1 = &DAT_5bf647f8;
    do {
      if (*piVar1 == param_2) {
        local_9b0 = (&DAT_5bf647fc)[iVar3 * 2];
        break;
      }
      piVar1 = piVar1 + 2;
      iVar3 = iVar3 + 1;
    } while (piVar1 < &DAT_5bf64800);
  }
  local_8a0[0] = '\0';
  _mbscat(local_8a0,local_4a0);
  pBVar2 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0xd7);
  FUN_5bf25750(local_9a0,pBVar2);
  _mbscat(local_8a0,local_9a0);
  uVar5 = 0;
  if (*(int *)(param_3 + 0x154) != 0) {
    do {
      FUN_5bf25750(local_9a0,(BYTE *)"%02x ");
      _mbscat(local_8a0,local_9a0);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_3 + 0x154));
  }
  _mbscat(local_8a0,"\r\n");
  pBVar2 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0xd8);
  FUN_5bf25750(local_9a0,pBVar2);
  _mbscat(local_8a0,local_9a0);
  _Source = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0xd9);
  _mbscat(local_8a0,_Source);
  if (param_3[0x16b] != (tPARAMETERS_LDRCFG)0x0) {
    do {
      if (0xf < uVar4) break;
      FUN_5bf25750(local_9a0,(BYTE *)"%02x ");
      _mbscat(local_8a0,local_9a0);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (byte)param_3[0x16b]);
  }
  local_9bc = local_2a0;
  local_9b8 = local_8a0;
  iVar3 = FUN_5bf27640(DAT_5bf65fc4,(LPCSTR)0xda,param_1,(DLGPROC)&LAB_5bf14ce0,(LPARAM)&local_9bc);
  return iVar3;
}


