/* Module: vidcap30.exe
   Function: SfShowFioInstallWizard
   Address: 004b9110
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfShowFioInstallWizard(struct HWND__ *,struct ISfFileIOManager *,char const *,enum
   _FioWizardContext_,int) */

long SfShowFioInstallWizard
               (HWND__ *param_1,ISfFileIOManager *param_2,char *param_3,_FioWizardContext_ param_4,
               int param_5)

{
  HANDLE hObject;
  int iVar1;
  long lVar2;
  ulong unaff_EBX;
  _FioWizardContext_ unaff_retaddr;
  undefined1 local_20c [4];
  WCHAR local_208 [254];
  HWND__ *pHStack_c;
  undefined2 local_2;
  
                    /* 0xb9110  130
                       ?SfShowFioInstallWizard@@YGJPAUHWND__@@PAUISfFileIOManager@@PBDW4_FioWizardContext_@@H@Z
                        */
  if (param_2 != (ISfFileIOManager *)0x0) {
    MultiByteToWideChar(0,1,param_3,-1,local_208,0x104);
    local_2 = 0;
    hObject = CreateFileA(param_3,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,(HANDLE)0x0);
    if (hObject != (HANDLE)0xffffffff) {
      iVar1 = (**(code **)(*(int *)param_2 + 0x28))(param_2,hObject,local_208,local_20c);
      if ((iVar1 < 0) && (iVar1 != -0x7ffb1fcd)) {
        iVar1 = (**(code **)(*(int *)param_2 + 0x2c))(param_2,&stack0xfffffde8,&stack0xfffffde4);
      }
      CloseHandle(hObject);
      if (-1 < iVar1) {
        lVar2 = SfShowFioInstallWizard(pHStack_c,param_2,unaff_EBX,1,unaff_retaddr,(int)param_1);
        return lVar2;
      }
    }
  }
  return 1;
}


