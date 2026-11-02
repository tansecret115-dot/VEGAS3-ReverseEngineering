/* Module: sfcdi.dll
   Function: cdr_GetDriverErrorString
   Address: 5bf03dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_GetDriverErrorString(struct HSFCD__ *,struct tCDR_ERRORDATA *,char *,unsigned
   int) */

long cdr_GetDriverErrorString(HSFCD__ *param_1,tCDR_ERRORDATA *param_2,char *param_3,uint param_4)

{
  LPSTR lpString2;
  char *local_8;
  uint local_4;
  
                    /* 0x3dc0  176
                       ?cdr_GetDriverErrorString@@YGJPAUHSFCD__@@PAUtCDR_ERRORDATA@@PADI@Z */
  if (param_1 == (HSFCD__ *)0x0) {
    lpString2 = FUN_5bf283e0(DAT_5bf65fc4,0x4b4);
    lstrcpynA(param_3,lpString2,param_4);
    param_3[param_4 - 1] = '\0';
    return -0x7ff8ffa9;
  }
  local_8 = param_3;
  local_4 = param_4;
  *(undefined4 *)(param_2 + 0x46) = 100;
  (*(code *)(*(undefined4 **)(param_1 + 0x150))[0x1a])
            (**(undefined4 **)(param_1 + 0x150),0xf,param_2,&local_8);
  return 0;
}


