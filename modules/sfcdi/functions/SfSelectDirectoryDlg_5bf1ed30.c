/* Module: sfcdi.dll
   Function: SfSelectDirectoryDlg
   Address: 5bf1ed30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfSelectDirectoryDlg(struct HWND__ *,char const *,char *,unsigned int,char const
   *,int *,struct HSFMETRIC__ *,unsigned long,char *,unsigned long,int) */

long SfSelectDirectoryDlg
               (HWND__ *param_1,char *param_2,char *param_3,uint param_4,char *param_5,int *param_6,
               HSFMETRIC__ *param_7,ulong param_8,char *param_9,ulong param_10,int param_11)

{
  BOOL BVar1;
  int iVar2;
  void **ppvVar3;
  tagOFNA local_368 [3];
  char *local_210;
  int local_20c;
  uchar local_208 [260];
  uchar local_104 [260];
  
  ppvVar3 = &local_368[0].pvReserved;
                    /* 0x1ed30  127
                       ?SfSelectDirectoryDlg@@YGJPAUHWND__@@PBDPADI1PAHPAUHSFMETRIC__@@K2KH@Z */
  for (iVar2 = 0x45; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppvVar3 = (void *)0x0;
    ppvVar3 = ppvVar3 + 1;
  }
  local_368[0].pvReserved = (void *)param_8;
  local_210 = param_9;
  local_20c = param_11;
  _mbscpy(local_208,(uchar *)param_3);
  FUN_5bf23470(local_208,local_104,0x104);
  FUN_5bf1cfc0(&local_368[0].lStructSize,local_208,param_4);
  local_368[0].lpstrInitialDir = (LPCSTR)local_104;
  local_368[0].hwndOwner = param_1;
  local_368[0].lpstrTitle = param_2;
  local_368[0].lpstrFilter = param_5;
  if (param_6 == (int *)0x0) {
    local_368[0].nFilterIndex = 1;
  }
  else {
    local_368[0].nFilterIndex = *param_6;
  }
  local_368[0].lCustData = (LPARAM)&local_368[0].pvReserved;
  local_368[0].Flags = 0x80864;
  local_368[0].lpfnHook = FUN_5bf1eac0;
  local_368[0].lpTemplateName = (LPCSTR)0x163;
  BVar1 = GetSaveFileNameA(local_368);
  if (BVar1 != 0) {
    local_368[0].lpstrFile[local_368[0]._56_4_ & 0xffff] = '\0';
    if (param_6 != (int *)0x0) {
      *param_6 = local_368[0].nFilterIndex;
    }
    _mbscpy((uchar *)param_3,(uchar *)local_368[0].lpstrFile);
    return 0;
  }
  return -0x7fffbffb;
}


