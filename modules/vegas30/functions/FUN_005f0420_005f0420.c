/* Module: vegas30.exe
   Function: FUN_005f0420
   Address: 005f0420
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005f0420(int *param_1,int param_2,LPSTR param_3)

{
  LPCSTR lpString;
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CHAR local_80 [64];
  CHAR local_40 [64];
  
  iVar4 = 0;
  param_2 = param_2 + -1;
  iVar3 = 0;
  piVar1 = &DAT_00646de8;
  while (*piVar1 != *param_1) {
    piVar1 = piVar1 + 2;
    iVar3 = iVar3 + 1;
    if (0x646df7 < (int)piVar1) {
      *param_3 = '\0';
      return -0x7ff8ffa9;
    }
  }
  lpString = (&PTR_s_Video_Generator_00646dec)[iVar3 * 2];
  iVar3 = (&DAT_00646de8)[iVar3 * 2];
  if (lpString != (LPCSTR)0x0) {
    iVar2 = lstrlenA("META:\\");
    if (param_2 < iVar2) {
      iVar4 = -0x7ff8ffa9;
      iVar2 = param_2;
    }
    lstrcpynA(param_3,"META:\\",iVar2 + 1);
    param_3[iVar2] = '\0';
    param_3 = param_3 + iVar2;
    param_2 = param_2 - iVar2;
    if (-1 < iVar4) {
      iVar2 = lstrlenA(lpString);
      if (param_2 < iVar2) {
        iVar4 = -0x7ff8ffa9;
        iVar2 = param_2;
      }
      lstrcpynA(param_3,lpString,iVar2 + 1);
      param_3[iVar2] = '\0';
      param_3 = param_3 + iVar2;
      if (-1 < iVar4) {
        if (param_2 - iVar2 == 0) {
          *param_3 = '\0';
          return -0x7ff8ffa9;
        }
        *param_3 = '\\';
        param_3 = param_3 + 1;
        iVar6 = (param_2 - iVar2) + -1;
        iVar2 = lstrlenA((LPCSTR)(param_1 + 1));
        if (iVar6 < iVar2) {
          iVar4 = 1;
          iVar2 = iVar6;
        }
        lstrcpynA(param_3,(LPCSTR)(param_1 + 1),iVar2 + 1);
        param_3[iVar2] = '\0';
        param_3 = param_3 + iVar2;
        if (-1 < iVar4) {
          if (iVar6 - iVar2 == 0) {
            *param_3 = '\0';
            return -0x7ff8ffa9;
          }
          *param_3 = ' ';
          param_3 = param_3 + 1;
          iVar6 = (iVar6 - iVar2) + -1;
          SfPrintF(local_80,"(%I64d)",param_1[0x42],param_1[0x43]);
          iVar2 = lstrlenA(local_80);
          if (iVar6 < iVar2) {
            iVar4 = 1;
            iVar2 = iVar6;
          }
          lstrcpynA(param_3,local_80,iVar2 + 1);
          param_3[iVar2] = '\0';
          param_3 = param_3 + iVar2;
          if (-1 < iVar4) {
            iVar5 = 0;
            if (iVar3 == 1) {
              if (-1 < param_1[0x44]) {
                iVar5 = SfPrintF(local_40,&DAT_0062c808,param_1[0x44]);
              }
            }
            else if (iVar3 == 2) {
              iVar5 = SfPrintF(local_40,"[%d][%d]",param_1[0x44],param_1[0x45]);
            }
            if (iVar6 - iVar2 < iVar5) {
              *param_3 = '\0';
              return 1;
            }
            if (iVar5 != 0) {
              lstrcpynA(param_3,local_40,iVar5 + 1);
              param_3[iVar5] = '\0';
              param_3 = param_3 + iVar5;
            }
          }
        }
      }
    }
    *param_3 = '\0';
    return iVar4;
  }
  *param_3 = '\0';
  return -0x7ff8ffa9;
}


