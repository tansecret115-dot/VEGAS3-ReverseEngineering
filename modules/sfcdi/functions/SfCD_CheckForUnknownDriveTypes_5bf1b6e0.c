/* Module: sfcdi.dll
   Function: SfCD_CheckForUnknownDriveTypes
   Address: 5bf1b6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCD_CheckForUnknownDriveTypes(struct HWND__ *,struct tSFLIST *,struct
   _unknowndriveinetinfo *,int *) */

long SfCD_CheckForUnknownDriveTypes
               (HWND__ *param_1,tSFLIST *param_2,_unknowndriveinetinfo *param_3,int *param_4)

{
  uchar *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  tSFLIST **pptVar5;
  long local_324;
  tSFLIST *local_320 [2];
  int local_318;
  uchar local_310 [260];
  uchar local_20c [260];
  uchar local_108 [260];
  _unknowndriveinetinfo *local_4;
  
                    /* 0x1b6e0  58
                       ?SfCD_CheckForUnknownDriveTypes@@YGJPAUHWND__@@PAUtSFLIST@@PAU_unknowndriveinetinfo@@PAH@Z
                        */
  local_324 = 0;
  AutoInsert_HotEnable(0);
  pptVar5 = local_320;
  for (iVar3 = 200; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pptVar5 = (tSFLIST *)0x0;
    pptVar5 = pptVar5 + 1;
  }
  local_318 = *param_4;
  local_320[0] = param_2;
  local_320[1] = (tSFLIST *)0xffffffff;
  _mbscpy(local_310,(uchar *)"sonicfoundry.com/cdarchitect/recordinfo.asp");
  if (param_3 == (_unknowndriveinetinfo *)0x0) {
    puVar1 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x4a9);
    _mbscpy(local_20c,puVar1);
    puVar1 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x4a9);
    _mbscpy(local_20c,puVar1);
    local_4 = param_3;
  }
  else {
    _mbscpy(local_20c,(uchar *)(param_3 + 0x104));
    iVar3 = lstrlenA((LPCSTR)local_20c);
    if (iVar3 == 0) {
      puVar1 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x4a9);
      _mbscpy(local_20c,puVar1);
    }
    _mbscpy(local_108,(uchar *)(param_3 + 0x208));
    local_4 = *(_unknowndriveinetinfo **)(param_3 + 0x30c);
  }
  if (param_2 == (tSFLIST *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)param_2;
  }
  iVar4 = 0;
  if (0 < iVar3) {
    piVar2 = *(int **)(param_2 + 8);
    do {
      if ((*(uint *)(*piVar2 + 0x1a0) & 0x6000) != 0) {
        if (*param_4 != 0) {
          FUN_5bf27640(DAT_5bf65fc4,(LPCSTR)0x147,param_1,(DLGPROC)&LAB_5bf1b460,(LPARAM)local_320);
        }
        local_324 = -0x7ffb1f30;
        *param_4 = local_318;
        break;
      }
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar4 < iVar3);
  }
  AutoInsert_HotEnable(1);
  return local_324;
}


