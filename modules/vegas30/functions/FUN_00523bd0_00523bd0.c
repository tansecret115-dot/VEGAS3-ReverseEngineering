/* Module: vegas30.exe
   Function: FUN_00523bd0
   Address: 00523bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00523bd0(undefined4 *param_1,undefined4 param_2)

{
  HIMAGELIST p_Var1;
  int iVar2;
  HICON pHVar3;
  HBITMAP hbmImage;
  int i;
  CHAR local_264 [260];
  SHFILEINFOA local_160;
  
  *param_1 = &PTR_FUN_0061a6b8;
  param_1[3] = param_2;
  GetWindowsDirectoryA(local_264,0x104);
  p_Var1 = ImageList_Create(0x10,0x10,0x19,0,4);
  param_1[1] = p_Var1;
  iVar2 = ImageList_GetImageCount(p_Var1);
  p_Var1 = (HIMAGELIST)SHGetFileInfoA(local_264,0,&local_160,0x160,0x4001);
  pHVar3 = ImageList_GetIcon(p_Var1,local_160.iIcon,0);
  ImageList_ReplaceIcon((HIMAGELIST)param_1[1],-1,pHVar3);
  DestroyIcon(pHVar3);
  *(int *)(param_1[3] + 0x194) = iVar2;
  SHGetFileInfoA(local_264,0,&local_160,0x160,0x4003);
  pHVar3 = ImageList_GetIcon(p_Var1,local_160.iIcon,0);
  ImageList_ReplaceIcon((HIMAGELIST)param_1[1],-1,pHVar3);
  DestroyIcon(pHVar3);
  *(int *)(param_1[3] + 0x198) = iVar2 + 1;
  iVar2 = ImageList_GetImageCount((HIMAGELIST)param_1[1]);
  p_Var1 = ImageList_Create(0x10,0x10,9,0x11,0);
  hbmImage = (HBITMAP)_SfLoadBitmap_8(DAT_00647204,0xef);
  ImageList_AddMasked(p_Var1,hbmImage,0xff00ff);
  DeleteObject(hbmImage);
  i = 0;
  do {
    pHVar3 = ImageList_GetIcon(p_Var1,i,0);
    ImageList_ReplaceIcon((HIMAGELIST)param_1[1],-1,pHVar3);
    DestroyIcon(pHVar3);
    i = i + 1;
  } while (i < 0x11);
  ImageList_Destroy(p_Var1);
  ImageList_SetBkColor((HIMAGELIST)param_1[1],0xffffffff);
  *(int *)(param_1[3] + 0x19c) = iVar2 + 0xc;
  *(int *)(param_1[3] + 0x1a0) = iVar2 + 0xd;
  *(int *)(param_1[3] + 0x1a4) = iVar2 + 4;
  *(int *)(param_1[3] + 0x1a8) = iVar2 + 5;
  *(int *)(param_1[3] + 0x1ac) = iVar2 + 0x10;
  *(int *)(param_1[3] + 0x1b0) = iVar2 + 0x11;
  *(int *)(param_1[3] + 0x1b4) = iVar2 + 0x10;
  *(int *)(param_1[3] + 0x1b8) = iVar2 + 0x11;
  *(undefined4 *)(param_1[3] + 0x108) = param_1[1];
  return param_1;
}


