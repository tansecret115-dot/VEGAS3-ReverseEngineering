/* Module: sfcdi.dll
   Function: SfFileOpenDlgMRU
   Address: 5bf1e070
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfFileOpenDlgMRU(struct HWND__ *,char const *,char *,unsigned int,char const *,int
   *,struct HSFMETRIC__ *,unsigned int,unsigned long,int,int *,char *,unsigned long) */

long SfFileOpenDlgMRU(HWND__ *param_1,char *param_2,char *param_3,uint param_4,char *param_5,
                     int *param_6,HSFMETRIC__ *param_7,uint param_8,ulong param_9,int param_10,
                     int *param_11,char *param_12,ulong param_13)

{
  BOOL BVar1;
  int iVar2;
  void **ppvVar3;
  tagOFNA local_264 [3];
  char *local_10c;
  BYTE local_104 [260];
  
  ppvVar3 = &local_264[0].pvReserved;
                    /* 0x1e070  83
                       ?SfFileOpenDlgMRU@@YGJPAUHWND__@@PBDPADI1PAHPAUHSFMETRIC__@@IKH32K@Z */
  for (iVar2 = 0x45; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppvVar3 = (void *)0x0;
    ppvVar3 = ppvVar3 + 1;
  }
  local_264[0].pvReserved = (void *)param_9;
  local_10c = param_12;
  if (param_13 != 0) {
    _DAT_5bf64f1c = param_13;
  }
  FUN_5bf1cfc0(&local_264[0].lStructSize,param_3,param_4);
  local_264[0].Flags = 0x81064;
  local_264[0].hwndOwner = param_1;
  local_264[0].lCustData = (LPARAM)&local_264[0].pvReserved;
  local_264[0].lpstrTitle = param_2;
  local_264[0].lpstrFilter = param_5;
  if (param_10 != 0) {
    local_264[0].Flags = 0x81264;
  }
  local_264[0].lpTemplateName = (LPCSTR)0x162;
  local_264[0].lpfnHook = (LPOFNHOOKPROC)&LAB_5bf1d7b0;
  if (param_6 == (int *)0x0) {
    local_264[0].nFilterIndex = 1;
  }
  else {
    local_264[0].nFilterIndex = *param_6;
  }
  if (param_7 != (HSFMETRIC__ *)0x0) {
    local_264[0].lpstrInitialDir = (LPCSTR)FUN_5bf1cf40((int)param_7,param_8,local_104,0x104);
  }
  BVar1 = GetOpenFileNameA(local_264);
  if (BVar1 != 0) {
    if (param_6 != (int *)0x0) {
      *param_6 = local_264[0].nFilterIndex;
    }
    if (param_7 != (HSFMETRIC__ *)0x0) {
      FUN_5bf1cf70((int)param_7,param_8,local_264[0].lpstrFile,local_264[0]._56_4_ & 0xffff);
    }
    if (param_11 != (int *)0x0) {
      *param_11 = local_264[0]._56_4_ & 0xffff;
    }
    return 0;
  }
  return -0x7fffbffb;
}


