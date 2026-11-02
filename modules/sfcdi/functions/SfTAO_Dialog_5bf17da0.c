/* Module: sfcdi.dll
   Function: SfTAO_Dialog
   Address: 5bf17da0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfTAO_Dialog(struct HWND__ *,struct taoburntag *) */

int SfTAO_Dialog(HWND__ *param_1,taoburntag *param_2)

{
  HGLOBAL hMem;
  int iVar1;
  int iVar2;
  int unaff_EBP;
  HSFCD__ **ppHVar3;
  HWND__ *unaff_retaddr;
  uint uVar4;
  HSFCD__ *local_148 [3];
  int iStack_13c;
  uint local_130;
  int *piStack_12c;
  int *local_128 [38];
  long lStack_90;
  undefined1 local_80 [24];
  undefined4 auStack_68 [26];
  
                    /* 0x17da0  135  ?SfTAO_Dialog@@YGHPAUHWND__@@PAUtaoburntag@@@Z */
  AutoInsert_HotEnable(0);
  local_148[0] = (HSFCD__ *)SystemAgent_HotEnable(0);
  ppHVar3 = local_148;
  for (iVar1 = 0x38; ppHVar3 = ppHVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppHVar3 = (HSFCD__ *)0x0;
  }
  ppHVar3 = local_148;
  for (iVar1 = 8; ppHVar3 = ppHVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppHVar3 = *(HSFCD__ **)param_2;
    param_2 = param_2 + 4;
  }
  if (local_130 < 0x20) {
    local_130 = 0x20;
  }
  hMem = GlobalAlloc(0x40,0x160);
  local_128[0] = GlobalLock(hMem);
  if (local_128[0] == (int *)0x0) {
    local_128[0] = (int *)0x0;
  }
  else {
    *local_128[0] = (int)&PTR_LAB_5bf56234;
    local_128[0][1] = 0;
    local_128[0][0x4c] = 0;
    local_128[0][0x4d] = 0;
    local_128[0][0x4e] = 0;
    local_128[0][3] = (int)local_80;
    local_128[0][0x4f] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(local_128[0] + 0x52));
  }
  (**(code **)(*local_128[0] + 4))(local_128[0]);
  SfTAO_Create(local_128,(taoburntag *)local_148);
  iVar1 = (iStack_13c == 4) + 0x471;
  auStack_68[0] = 100;
  lStack_90 = cdr_GetDeviceCaps(local_148[0],(cdrcaps_tag *)auStack_68);
  if (-1 < lStack_90) {
    iVar1 = FUN_5bf27640(DAT_5bf65fc4,(LPCSTR)0xe4,unaff_retaddr,(DLGPROC)&LAB_5bf17440,
                         (LPARAM)local_148);
    ppHVar3 = local_148;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      param_1->unused = (int)*ppHVar3;
      ppHVar3 = ppHVar3 + 1;
      param_1 = param_1 + 1;
    }
  }
  if (iVar1 == 0x471) {
    uVar4 = 1;
  }
  else {
    if (iVar1 != 0x472) goto LAB_5bf17ef7;
    uVar4 = 4;
  }
  SfCDUI_CD_ShowErrorBox(unaff_retaddr,lStack_90,local_148[0],uVar4);
LAB_5bf17ef7:
  if (local_128[0] != (int *)0x0) {
    SfTAO_Destroy(local_128[0]);
  }
  (**(code **)(*piStack_12c + 8))(piStack_12c);
  local_130 = 0;
  SystemAgent_HotEnable(unaff_EBP);
  AutoInsert_HotEnable(1);
  return iVar1;
}


