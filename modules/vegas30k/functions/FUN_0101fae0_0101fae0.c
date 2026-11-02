/* Module: vegas30k.dll
   Function: FUN_0101fae0
   Address: 0101fae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0101fae0(int param_1)

{
  int iVar1;
  HICON hicon;
  int iVar2;
  
  iVar1 = ImageList_GetImageCount(DAT_012091a4);
  iVar1 = iVar1 + (0xd - *(int *)(param_1 + 0x14));
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        hicon = ImageList_GetIcon(DAT_012091a4,iVar2 + -0xd + *(int *)(param_1 + 0x14),0);
        ImageList_ReplaceIcon(*(HIMAGELIST *)(param_1 + 0x10),-1,hicon);
        DestroyIcon(hicon);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar1;
  }
  return;
}


