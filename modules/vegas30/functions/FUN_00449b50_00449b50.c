/* Module: vegas30.exe
   Function: FUN_00449b50
   Address: 00449b50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00449b50(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int *unaff_EBP;
  int *unaff_EDI;
  LPCSTR unaff_retaddr;
  int *local_210;
  int local_20c;
  undefined1 auStack_208 [520];
  
  local_210 = (int *)0x0;
  local_20c = 0;
  iVar1 = _SfVideoPlugin_GetInterface_12(&DAT_0060f778,&local_210,param_1);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*local_210 + 0xc))(local_210,&local_20c);
    (**(code **)(*unaff_EBP + 8))(unaff_EBP);
    if (-1 < iVar1) {
      iVar1 = local_20c;
      if ((local_20c != 0) && (param_3 < local_20c)) {
        local_210 = (int *)0x0;
        iVar1 = _SfVideoPlugin_GetInterface_12(&DAT_0060f778,&local_210,param_1);
        if (iVar1 < 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*local_210 + 0x10))(local_210,param_3,auStack_208,0x104);
        if (-1 < iVar1) {
          iVar2 = *param_1;
          if ((&stack0x00000000 == (undefined1 *)0x218) || ((WCHAR)unaff_EBP != L'\0')) {
            WideCharToMultiByte(0,0,(LPCWSTR)&stack0xfffffde8,-1,unaff_retaddr,iVar2,(LPCSTR)0x0,
                                (LPBOOL)0x0);
          }
          else if (unaff_retaddr != (LPCSTR)0x0) {
            *unaff_retaddr = '\0';
          }
          unaff_retaddr[iVar2 + -1] = '\0';
          iVar2 = lstrlenA(unaff_retaddr);
          *param_1 = iVar2;
        }
        (**(code **)(*unaff_EDI + 8))(unaff_EDI);
        return iVar1;
      }
      goto LAB_00449c20;
    }
  }
  iVar1 = 0;
LAB_00449c20:
  local_20c = 0;
  _SfDSFilter_GetPresetCount_12(param_2,&local_20c,1);
  if (local_20c + -1 < param_3 - iVar1) {
    return -0x7ffb1ff6;
  }
  iVar1 = _SfDSFilter_GetPresetName_20(param_2,param_3 - iVar1,param_4,param_5,1);
  return iVar1;
}


