/* Module: sfcdi.dll
   Function: SfCDUI_CD_FillInDebugMessage
   Address: 5bf14880
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfCDUI_CD_FillInDebugMessage(struct HSFCD__ *,long,unsigned int,char *,unsigned
   int) */

void SfCDUI_CD_FillInDebugMessage
               (HSFCD__ *param_1,long param_2,uint param_3,char *param_4,uint param_5)

{
  BYTE *pBVar1;
  uchar *_Source;
  HSFCD__ *pHVar2;
  uint uVar3;
  byte in_stack_0000001b;
  HSFCD__ *in_stack_00001148;
  long in_stack_0000114c;
  uint in_stack_00001150;
  LPSTR in_stack_00001154;
  int in_stack_00001158;
  
                    /* 0x14880  45  ?SfCDUI_CD_FillInDebugMessage@@YGXPAUHSFCD__@@JIPADI@Z */
  FUN_5bf52dd0();
  cdr_GetErrorState(in_stack_00001148,(tCDR_ERRORDATA *)&stack0x00000000);
  SfCDUI_CD_FillInErrorMessages
            (in_stack_00001148,in_stack_0000114c,&stack0x00000ea4,0x2a0,&stack0x00000ca4,0x200,
             in_stack_00001150);
  cdr_GetDeviceDescription(in_stack_00001148,(tPARAMETERS_DEVDES *)&stack0x00000358,0x14c);
  FUN_5bf25750(&stack0x00000158,(BYTE *)"\'%s\'-(%d)\r\n\'%s\'-(%d)\r\n-\'%s\'-(%d)\r\n");
  _mbscat(&stack0x000004a4,&stack0x00000158);
  FUN_5bf25750(&stack0x00000158,(BYTE *)"Module %s Line %d\r\n");
  _mbscat(&stack0x000004a4,&stack0x00000158);
  _mbscat(&stack0x000004a4,&stack0x00000ca4);
  pBVar1 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0xd7);
  FUN_5bf25750(&stack0x00000158,pBVar1);
  _mbscat(&stack0x000004a4,&stack0x00000158);
  pHVar2 = (HSFCD__ *)0x0;
  if (param_1 != (HSFCD__ *)0x0) {
    do {
      FUN_5bf25750(&stack0x00000158,(BYTE *)"%02x ");
      _mbscat(&stack0x000004a4,&stack0x00000158);
      pHVar2 = pHVar2 + 1;
    } while (pHVar2 < param_1);
  }
  _mbscat(&stack0x000004a4,"\r\n");
  pBVar1 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0xd8);
  FUN_5bf25750(&stack0x00000158,pBVar1);
  _mbscat(&stack0x000004a4,&stack0x00000158);
  _Source = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0xd9);
  _mbscat(&stack0x000004a4,_Source);
  uVar3 = 0;
  if (in_stack_0000001b != 0) {
    do {
      if (0xf < uVar3) break;
      FUN_5bf25750(&stack0x00000158,(BYTE *)"%02x ");
      _mbscat(&stack0x000004a4,&stack0x00000158);
      uVar3 = uVar3 + 1;
    } while (uVar3 < in_stack_0000001b);
  }
  lstrcpynA(in_stack_00001154,&stack0x000004a4,in_stack_00001158);
  in_stack_00001154[in_stack_00001158 + -1] = '\0';
  return;
}


