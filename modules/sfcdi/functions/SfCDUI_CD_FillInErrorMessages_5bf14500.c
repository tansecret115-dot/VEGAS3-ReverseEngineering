/* Module: sfcdi.dll
   Function: SfCDUI_CD_FillInErrorMessages
   Address: 5bf14500
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfCDUI_CD_FillInErrorMessages(struct HSFCD__ *,long,char *,unsigned int,char
   *,unsigned int,unsigned int) */

void SfCDUI_CD_FillInErrorMessages
               (HSFCD__ *param_1,long param_2,char *param_3,uint param_4,char *param_5,uint param_6,
               uint param_7)

{
  BYTE *pBVar1;
  int iVar2;
  LPSTR pCVar3;
  uint uVar4;
  tCDR_ERRORDATA local_158 [70];
  long local_112;
  
                    /* 0x14500  46  ?SfCDUI_CD_FillInErrorMessages@@YGXPAUHSFCD__@@JPADI1II@Z */
  if (param_3 != (char *)0x0) {
    *param_3 = '\0';
  }
  if (param_5 != (char *)0x0) {
    *param_5 = '\0';
  }
  if (param_2 < -0x7ffb1f38) {
    if (param_2 != -0x7ffb1f39) {
      if (-0x7ffb1fa7 < param_2) {
        switch(param_2) {
        case -0x7ffb1f40:
        case -0x7ffb1f3f:
switchD_5bf145b8_caseD_8004e0c0:
          if (param_3 != (char *)0x0) {
            pCVar3 = FUN_5bf283e0(DAT_5bf65fc4,0xdb);
            lstrcpynA(param_3,pCVar3,param_4);
            param_3[param_4 - 1] = '\0';
          }
          if (param_5 == (char *)0x0) {
            return;
          }
          cdr_LoadErrorString(param_2,param_5,param_6 - 2);
          _mbscat((uchar *)param_5,"\r\n");
          return;
        case -0x7ffb1f3e:
        case -0x7ffb1f3d:
        case -0x7ffb1f3c:
        case -0x7ffb1f3b:
          goto switchD_5bf145b8_caseD_8004e0c2;
        case -0x7ffb1f3a:
          if (param_3 != (char *)0x0) {
            cdr_LoadErrorString(param_2,param_3,param_4);
          }
          if (param_5 == (char *)0x0) {
            return;
          }
          cdr_GetErrorState(param_1,local_158);
          cdr_GetDriverErrorString(param_1,local_158,param_5,param_6);
          return;
        default:
          goto switchD_5bf145b8_default;
        }
      }
      if (param_2 == -0x7ffb1fa7) {
        if (param_3 == (char *)0x0) {
          return;
        }
        uVar4 = 0x4b6;
LAB_5bf14750:
        pCVar3 = FUN_5bf283e0(DAT_5bf65fc4,uVar4);
        lstrcpynA(param_3,pCVar3,param_4);
        param_3[param_4 - 1] = '\0';
        return;
      }
      if (param_2 < -0x7ffb1ff3) {
        if (param_2 != -0x7ffb1ff4) {
          if (param_2 == -0x7fffbffd) goto switchD_5bf145b8_caseD_8004e0c0;
          if ((param_2 < -0x7ffb1ffa) || (-0x7ffb1ff7 < param_2)) goto switchD_5bf145b8_default;
        }
      }
      else if (param_2 != -0x7ffb1fa8) goto switchD_5bf145b8_default;
    }
  }
  else {
    if (param_2 < -0x7ffb1f30) {
      if (param_2 == -0x7ffb1f31) {
        cdr_GetErrorState(param_1,local_158);
        cdr_LoadErrorString(-0x7ffb1f31,param_3,param_4);
        if (param_5 == (char *)0x0) {
          return;
        }
        cdr_GetDriverErrorString(param_1,local_158,param_5,param_6);
        return;
      }
      switch(param_2) {
      case -0x7ffb1f38:
        cdr_GetErrorState(param_1,local_158);
        cdr_LoadErrorString(local_112,param_3,param_4);
        if (param_5 == (char *)0x0) {
          return;
        }
        cdr_GetDriverErrorString(param_1,local_158,param_5,param_6);
        return;
      case -0x7ffb1f37:
      case -0x7ffb1f36:
      case -0x7ffb1f32:
        goto switchD_5bf145b8_caseD_8004e0c2;
      default:
        goto switchD_5bf145b8_default;
      }
    }
    if (param_2 != -0x7ff8fff2) {
      if (param_2 == -0x7ff8ffa9) goto switchD_5bf145b8_caseD_8004e0c0;
      if (param_2 == 0) {
        switch(param_7) {
        case 0:
          uVar4 = 0xdf;
          break;
        case 1:
          iVar2 = cdr_GetTestMode(param_1);
          if (iVar2 == 0) {
            uVar4 = 0xdd;
          }
          else {
            uVar4 = 0xdc;
          }
          break;
        case 2:
          uVar4 = 0xe0;
          break;
        case 3:
          uVar4 = 0xde;
          break;
        case 4:
          uVar4 = 0x4b7;
          break;
        default:
          uVar4 = 0xe1;
        }
        goto LAB_5bf14750;
      }
switchD_5bf145b8_default:
      pBVar1 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x4b5);
      FUN_5bf25750((uchar *)param_3,pBVar1);
      return;
    }
  }
switchD_5bf145b8_caseD_8004e0c2:
  cdr_LoadErrorString(param_2,param_3,param_4);
  return;
}


