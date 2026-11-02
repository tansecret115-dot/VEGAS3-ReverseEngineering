/* Module: vegas30.exe
   Function: FUN_00428550
   Address: 00428550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00428550(void)

{
  ATOM AVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 *puVar4;
  tagWNDCLASSA local_28;
  
  puVar4 = (undefined4 *)&stack0xffffffd4;
  BVar2 = GetClassInfoA(DAT_006471fc,"Vegas.VideoPreviewStatus",&local_28);
  if (BVar2 == 0) {
    for (iVar3 = 10; puVar4 = puVar4 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
    }
    local_28.lpfnWndProc = (WNDPROC)&LAB_004285e0;
    local_28.hInstance = DAT_006471fc;
    local_28.hCursor = (HCURSOR)_SfGetUICursor_4(0x7f00);
    local_28.lpszClassName = "Vegas.VideoPreviewStatus";
    local_28.hbrBackground = (HBRUSH)0x10;
    AVar1 = RegisterClassA(&local_28);
    if (AVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


