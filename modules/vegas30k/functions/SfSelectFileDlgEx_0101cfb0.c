/* Module: vegas30k.dll
   Function: SfSelectFileDlgEx
   Address: 0101cfb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfSelectFileDlgEx(struct HWND__ *,char const *,char *,unsigned int,char const
   *,int *,struct HSFMETRIC__ *,unsigned long,char *,unsigned long,int,unsigned long) */

long SfSelectFileDlgEx(HWND__ *param_1,char *param_2,char *param_3,uint param_4,char *param_5,
                      int *param_6,HSFMETRIC__ *param_7,ulong param_8,char *param_9,ulong param_10,
                      int param_11,ulong param_12)

{
  undefined4 uVar1;
  BOOL BVar2;
  int iVar3;
  void **ppvVar4;
  tagOFNA local_368 [3];
  char *local_210;
  int local_20c;
  uchar local_208 [260];
  CHAR local_104 [260];
  
  ppvVar4 = &local_368[0].pvReserved;
                    /* 0x1cfb0  498
                       ?SfSelectFileDlgEx@@YGJPAUHWND__@@PBDPADI1PAHPAUHSFMETRIC__@@K2KHK@Z */
  for (iVar3 = 0x45; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppvVar4 = (void *)0x0;
    ppvVar4 = ppvVar4 + 1;
  }
  local_368[0].pvReserved = (void *)param_8;
  local_210 = param_9;
  local_20c = param_11;
  _mbscpy(local_208,(uchar *)param_3);
  _SfGetPathNameFromFilePath_12(local_208,local_104,0x104);
  uVar1 = _SfGetFileNamePtrA_4(local_208);
  FUN_0101c850(local_368,uVar1,param_4);
  local_368[0].lpstrInitialDir = local_104;
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
  local_368[0].Flags = param_12;
  local_368[0].lpfnHook = FUN_0101c9f0;
  BVar2 = GetOpenFileNameA(local_368);
  if (BVar2 != 0) {
    if (param_6 != (int *)0x0) {
      *param_6 = local_368[0].nFilterIndex;
    }
    _mbscpy((uchar *)param_3,(uchar *)local_368[0].lpstrFile);
    return 0;
  }
  return -0x7fffbffb;
}


