/* Module: vegas30.exe
   Function: FUN_00581590
   Address: 00581590
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00581590(undefined4 *param_1,undefined4 *param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  IMAGEINFO local_20;
  
  puVar3 = param_1;
  for (iVar2 = 0xd; puVar3 = puVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
  }
  param_1[0x10] = param_1[3];
  param_1[0x11] = param_1[4];
  if (((HIMAGELIST)param_1[5] != (HIMAGELIST)0x0) &&
     (((int)param_1[0x10] < 1 || ((int)param_1[0x11] < 1)))) {
    BVar1 = ImageList_GetImageInfo((HIMAGELIST)param_1[5],0,&local_20);
    if (BVar1 != 0) {
      param_1[0x10] = local_20.rcImage.right - local_20.rcImage.left;
      param_1[0x11] = local_20.rcImage.bottom - local_20.rcImage.top;
    }
  }
  return;
}


