/* Module: vidcap30.exe
   Function: FUN_0049ede0
   Address: 0049ede0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0049ede0(int param_1)

{
  int iVar1;
  HICON hicon;
  int iVar2;
  
  iVar1 = ImageList_GetImageCount(DAT_005c1988);
  iVar1 = iVar1 + (0xd - *(int *)(param_1 + 0x14));
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        hicon = ImageList_GetIcon(DAT_005c1988,iVar2 + -0xd + *(int *)(param_1 + 0x14),0);
        ImageList_ReplaceIcon(*(HIMAGELIST *)(param_1 + 0x10),-1,hicon);
        DestroyIcon(hicon);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar1;
  }
  return;
}


