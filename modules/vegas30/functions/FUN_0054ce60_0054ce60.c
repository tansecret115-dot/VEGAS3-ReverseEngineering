/* Module: vegas30.exe
   Function: FUN_0054ce60
   Address: 0054ce60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054ce60(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  HANDLE hObject;
  HCURSOR hCursor;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *local_110;
  uint local_10c;
  HCURSOR local_108;
  CHAR local_104 [260];
  
  if (DAT_00647c24 != '\0') {
    iVar6 = 0;
    local_110 = (int *)0x0;
    local_10c = 0;
    iVar3 = FUN_0054c960(param_1,&local_110);
    if (-1 < iVar3) {
      hObject = (HANDLE)FUN_0054cdb0(local_104,0x104);
      if (hObject != (HANDLE)0xffffffff) {
        hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
        local_108 = SetCursor(hCursor);
        iVar3 = *local_110;
        if (0 < iVar3) {
          do {
            iVar1 = *(int *)(local_110[2] + iVar6 * 4);
            iVar4 = FUN_005f03a0(iVar1 + 0x170);
            if (iVar4 == 0) {
              uVar5 = FUN_0054ccb0(hObject,iVar1);
              local_10c = local_10c | uVar5;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar3);
        }
        CloseHandle(hObject);
        if ((local_10c == 0) || (iVar3 = FUN_0054cbc0(DAT_00647624,local_104), iVar3 == 0)) {
          DeleteFileA(local_104);
        }
        SetCursor(local_108);
      }
      _SfList_Destroy_4(local_110);
    }
    return;
  }
  uVar2 = _SfGetString_8(DAT_00647204,0x6df3);
  SfMsgBox(DAT_00647624,0x40,uVar2);
  return;
}


