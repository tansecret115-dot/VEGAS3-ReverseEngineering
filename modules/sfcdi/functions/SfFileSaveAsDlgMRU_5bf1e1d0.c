/* Module: sfcdi.dll
   Function: SfFileSaveAsDlgMRU
   Address: 5bf1e1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfFileSaveAsDlgMRU(struct HWND__ *,char const *,char *,unsigned int,char const
   *,int *,struct HSFMETRIC__ *,unsigned int,unsigned long,char *,unsigned long) */

long SfFileSaveAsDlgMRU(HWND__ *param_1,char *param_2,char *param_3,uint param_4,char *param_5,
                       int *param_6,HSFMETRIC__ *param_7,uint param_8,ulong param_9,char *param_10,
                       ulong param_11)

{
  BOOL BVar1;
  int iVar2;
  ulong *puVar3;
  tagOFNA local_278;
  ulong local_218 [67];
  char *local_10c;
  BYTE local_104 [260];
  
  puVar3 = local_218;
                    /* 0x1e1d0  85
                       ?SfFileSaveAsDlgMRU@@YGJPAUHWND__@@PBDPADI1PAHPAUHSFMETRIC__@@IK2K@Z */
  for (iVar2 = 0x45; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_218[0] = param_9;
  local_10c = param_10;
  if (param_11 != 0) {
    _DAT_5bf64f1c = param_11;
  }
  FUN_5bf1cfc0(&local_278.lStructSize,param_3,param_4);
  local_278.lCustData = (LPARAM)local_218;
  local_278.Flags = 0x80866;
  local_278.hwndOwner = param_1;
  local_278.lpstrTitle = param_2;
  local_278.lpstrFilter = param_5;
  if (param_6 == (int *)0x0) {
    local_278.nFilterIndex = 1;
  }
  else {
    local_278.nFilterIndex = *param_6;
  }
  if (param_7 != (HSFMETRIC__ *)0x0) {
    local_278.lpstrInitialDir = (LPCSTR)FUN_5bf1cf40((int)param_7,param_8,local_104,0x104);
  }
  local_278.lpTemplateName = (LPCSTR)0x162;
  local_278.lpfnHook = (LPOFNHOOKPROC)&LAB_5bf1dc10;
  FUN_5bf1ce70((uchar *)&local_278.pvReserved,(uchar *)param_5,local_278.nFilterIndex);
  local_278.lpstrDefExt = (LPCSTR)&local_278.pvReserved;
  BVar1 = GetSaveFileNameA(&local_278);
  if (BVar1 != 0) {
    if (param_6 != (int *)0x0) {
      *param_6 = local_278.nFilterIndex;
    }
    if (param_7 != (HSFMETRIC__ *)0x0) {
      FUN_5bf1cf70((int)param_7,param_8,local_278.lpstrFile,local_278._56_4_ & 0xffff);
    }
    return 0;
  }
  return -0x7fffbffb;
}


